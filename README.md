Project made by Jakub Freier kl.2AP
Nazwa projektu
createAccount
Cel projektu
wygenerowanie hasła na podstawie danych od użytkownika
Założenia projektu
• Aplikacja konsolowa uruchamiana w systemie Windows 10/11
•Generowanie jest hasło o liczbie znaków określonej w polu edycyjnym
• Poszczególne znaki hasła są wybierane losowo z zestawu małych liter
• Jeżeli zaznaczono „Małe i wielkie litery”, jeden ze znaków hasła jest losowany z zestawu wielkich
liter
• Jeżeli zaznaczono „Cyfry”, jeden ze znaków jest losowany z zestawu cyfr
• Jeżeli zaznaczono „Znaki specjalne”, jeden ze znaków hasła jest losowany z zestawu znaków
specjalnych
• Dla uproszczenia zadania można przyjąć zawsze określony znak (np. pierwszy), który jest
losowany z cyfr. Podobnie należy postąpić ze znakami specjalnymi (np. drugi znak)
• Hasło jest wypisywane zgodnie z obrazem po wybraniu opcji „Generuj hasło”
• Za zestaw liter przyjmuje się wszystkie litery z klawiatury małe i wielkie alfabetu łacińskiego
• Za zestaw cyfr przyjmuje się kolejne cyfry od 0 do 9
• Za zestaw znaków specjalnych przyjmuje się znaki: !@#$%^&*()_+-=
• Hasło oraz zestawy znaków są przechowywane w zmiennych typu napisowego
Diagram projektu
Opis projektu Np. Aplikacja składa się z trzech części: okna logowania, weryfikacji danych
użytkownika oraz zapisania do bazy danych wybranych przez użytkownika produktów. Za cześć
pierwszą odpowiada:
• Nazwa funkcji pobierzDane
• Opis funkcji (krótki opis, co funkcja robi) pobiera informacje o stanowisku
• Parametry funkcji (nazwa parametru, znaczenie parametru)
• Zwracany typ i opis (nazwa typu i opis co jest zwracane) string stanowisko , zwracana jest
informacja jakie stanowisko zostało wybrane (musi zostać wybrane poprawnie)
Za cześć drugą:
• Nazwa funkcji wypiszStanowisko
• Opis funkcji (krótki opis, co funkcja robi) sprawdza jakie uzytkownik wybral stanowisko i je
wypisuje
• Parametry funkcji (nazwa parametru, znaczenie parametru) string stanowisko
• Zwracany typ i opis (nazwa typu i opis co jest zwracane) funkcja nie zwraca nic
Za trzecią:
• Nazwa funkcji generujHaslo
• Opis funkcji (krótki opis, co funkcja robi) funkcja generuje haslo w zakresie podanym przez
uzytkownika
• Parametry funkcji (nazwa parametru, znaczenie parametru) int dlugoscHasla, bool duzeLitery,
bool cyfry, bool znakiSpecjalne
• Zwracany typ i opis (nazwa typu i opis co jest zwracane) hasloStr zmienna w której są informacje
o hasle
