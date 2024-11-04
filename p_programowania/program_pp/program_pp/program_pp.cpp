#include <iostream>
#include <cstdlib>
using namespace std;

float FtoC(float stopnie) {

    float Celsjusze;
    Celsjusze = (stopnie - 32.0) * 5.0 / 9.0;
    return Celsjusze;
}

float FtoK(float stopnie) {

    float Kelviny;
    Kelviny = (stopnie + 459.67) * 5.0 / 9.0;
    return Kelviny;
}

float CtoF(float stopnie) {

    float Fahrenheity;
    Fahrenheity = stopnie * 9.0 / 5.0 + 32.0;
    return Fahrenheity;
}

float CtoK(float stopnie) {

    float kelviny;
    kelviny = stopnie + 273.15;
    return kelviny;
}

float KtoC(float stopnie) {

    float celsjusze;
    celsjusze = stopnie - 273.15;
    return celsjusze;
}

float KtoF(float stopnie) {

    float fahrenheity;
    fahrenheity = stopnie * 9.0 / 5.0 - 459.67;
    return fahrenheity;
}

void Menu() {
    cout << "1 - Konwersja wartosci Fahrenheita na wartosci Celsjusza" << endl;
    cout << "2 - Kowersja wartosci Fahrenheita na wartosci Kelvina" << endl;
    cout << "3 - Kowersja wartosci Celsjusza na wartosci Fahrenheita" << endl;
    cout << "4 - Konwersja wartosci Celsjusza na wartosci Kelvina" << endl;
    cout << "5 - Konwersja wartosci Kelvina na wartosci Celsjusza" << endl;
    cout << "6 - Konwersja wartosci Kelvina na wartosci Fahrenheita" << endl;
    cout << "7 - Zakoncz dzialanie progamu" << endl;
}

int check(float temp, char stopnie) {
    if (temp < 0 && stopnie == 'K') {
        cout << "Podana temperatura nie istnieje w skali Kelvina." << endl;
        return 1;
    }
    else if (temp < -273.15 && stopnie == 'C') {
        cout << "Podana temperatura nie istnieje w skali Celsjusza." << endl;
        return 1;
    }
    else if (temp < -459.67 && stopnie == 'F') {
        cout << "Podana temperatura nie istnieje w skali Fahrenheita." << endl;
        return 1;
    }
    return 0;
}
void clearConsole() {
    system("CLS");
}

void pauseAndClear() {
    cout << "\nNacisnij Enter, aby kontynuowac...";
    cin.ignore();
    cin.get();
    clearConsole();
}

int main() {

    int wybor;
    float stopnie;
    float wynik;
    bool program = true;

    while (program) {
        clearConsole();
        Menu();

        cin >> wybor;

        if (cin.fail()) {
            cout << "Podano niepoprawny typ danych. Wprowadz cyfre od 1 do 7" << endl;
            cin.clear();
            cin.ignore(100,'\n');
            continue;
        }

        switch (wybor) {
            case 1:
                cout << "Podaj stopnie Fahrenheita: ";
                cin >> stopnie;

                if (check(stopnie, 'F') == 0) {
                    wynik = FtoC(stopnie);
                    cout << stopnie << "*F to: " << wynik << "*C" << endl;
                }
                pauseAndClear();
                break;

            case 2:
                cout << "Podaj stopnie Fahrenheita: ";
                cin >> stopnie;

                if (check(stopnie, 'F') == 0) {
                    wynik = FtoK(stopnie);
                    cout << stopnie << "*F to: " << wynik << "*K" << endl;
                }
                pauseAndClear();
                break;

            case 3:
                cout << "Podaj stopnie Celsjusza: ";
                cin >> stopnie;

                if (check(stopnie, 'C') == 0) {
                    wynik = CtoF(stopnie);
                    cout << stopnie << "*C to: " << wynik << "*F" << endl;
                }
                pauseAndClear();
                break;

            case 4:
                cout << "Podaj stopnie Celsjusza: ";
                cin >> stopnie;
                if (check(stopnie, 'C') == 0) {
                    wynik = CtoK(stopnie);
                    cout << stopnie << "*C to: " << wynik << "*K" << endl;
                }
                pauseAndClear();
                break;

            case 5:
                cout << "Podaj stopnie Kelvina: ";
                cin >> stopnie;
                if (check(stopnie, 'K') == 0) {
                    wynik = FtoC(stopnie);
                    cout << stopnie << "*K to: " << wynik << "*C" << endl;
                }
                pauseAndClear();
                break;

            case 6:
                cout << "Podaj stopnie Kelvina: ";
                cin >> stopnie;
                if (check(stopnie, 'K') == 0) {
                    wynik = KtoF(stopnie);
                    cout << stopnie << "*K to: " << wynik << "*F" << endl;
                }
                pauseAndClear();
                break;

            case 7:
                return 0;
        }
    }
}


