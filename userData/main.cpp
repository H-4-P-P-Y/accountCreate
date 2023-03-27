#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

void pobierzDane(Informacje& informacje) {
    cout << "Podaj imie: ";
    cin >> informacje.imie;
    cout << "Podaj nazwisko: ";
    cin >> informacje.nazwisko;
    do {
        cout << "Podaj stanowisko (1-Kierownik, 2-Starszy programista, 3-Młodszy programista, 4-Tester): ";
        cin >> informacje.stanowisko;
    } while (informacje.stanowisko != "1" && informacje.stanowisko != "2" && informacje.stanowisko != "3" && informacje.stanowisko != "4");
}

void wypiszStanowisko(string stanowisko) {
    if (stanowisko == "1") {
        cout << "Kierownik" << endl;
    }
    else if (stanowisko == "2") {
        cout << "Starszy programista" << endl;
    }
    else if (stanowisko == "3") {
        cout << "Młodszy programista" << endl;
    }
    else if (stanowisko == "4") {
        cout << "Tester" << endl;
    }
    else {
        cout << "Nieznane stanowisko" << endl;
    }
}

string generujHaslo(int dlugoscHasla, bool duzeLitery, bool cyfry, bool znakiSpecjalne) {
    srand(time(NULL));
    char haslo[dlugoscHasla] = {};
    char maleLiteryAlfabet[25] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    char duzeLiteryAlfabet[25] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    char cyfryAlfabet[10] = {'0','1','2','3','4','5','6','7','8','9'};
    char znakiSpecjalneAlfabet[14] = {'!','@','#','$','%','^','&','*','(',')','_','+','-','='};
    string hasloStr = "";

    for(int i=0;i<dlugoscHasla;i++){
        haslo[i] = maleLiteryAlfabet[(rand()%(25-0+1))+0];
    }

    if (duzeLitery) {
        int losId = (rand()%(dlugoscHasla-0+1))+0
        haslo[losId] = duzeLiteryAlfabet[(rand()%(25-0+1))+0];
    }
    if (cyfry) {
        int losId = (rand()%(dlugoscHasla-0+1))+0
        haslo[losId] = cyfryLiteryAlfabet[(rand()%(10-0+1))+0];
    }
    if (znakiSpecjalne) {
        int losId = (rand()%(dlugoscHasla-0+1))+0
        haslo[losId] = znakiSpecjalneAlfabet[(rand()%(14-0+1))+0];
    }

    for(int i = 0; i<dlugoscHasla ;++){
        hasloStr += haslo[i];
    }

    return hasloStr;

}

int main() {
    string imie;
    string nazwisko;
    string stanowisko;

    pobierzDane(informacje);
    cout << "Stanowisko: ";
    wypiszStanowisko(informacje.stanowisko);

    cout << "Imie: " << informacje.imie << endl;
    cout << "Nazwisko: " << informacje.nazwisko << endl;

    int dlugoscHasla ;
    bool maleLitery, duzeLitery, cyfry, znakiSpecjalne;

    cout << "Podaj dlugosc hasla: ";
    cin >> dlugoscHasla;

    cout << "Czy haslo ma zawierac male litery? (1-Tak, 0-Nie): ";
    cin >> maleLitery;
    cout << "Czy haslo ma zawierac duze litery? (1-Tak, 0-Nie): ";
    cin >> duzeLitery;
    cout << "Czy haslo ma zawierac cyfry? (1-Tak, 0-Nie): ";
    cin >> cyfry;
    cout << "Czy haslo ma zawierac znaki specjalne? (1-Tak, 0-Nie): ";
    cin >> znakiSpecjalne;



    return 0;
    }
