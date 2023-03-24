#include <iostream>
#include <string>

using namespace std;

struct Informacje {
    string imie;
    string nazwisko;
    string stanowisko;
};

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

int main() {
    Informacje informacje;
    pobierzDane(informacje);
    cout << "Imie: " << informacje.imie << endl;
    cout << "Nazwisko: " << informacje.nazwisko << endl;
    cout << "Stanowisko: ";
    wypiszStanowisko(informacje.stanowisko);
    return 0;
}
