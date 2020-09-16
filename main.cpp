// Uebung eingabe 16.09.2020 wit-a
//c++ bei Hr. Frank Stunden 2

#include <iostream>

using namespace std;

int main() {
    int userEingabe;
    cout << "Bitte geben Sie eine Zahle ein:" << endl;
    cin >> userEingabe;

    int dasDoppelte = userEingabe *2;

    cout << "Das doppelte dieser Zahl ist:" << dasDoppelte << "." <<endl;

    for(int zeile = 0; zeile < dasDoppelte/2; zeile++){
        for(int spalte = 0;spalte < dasDoppelte; spalte++){
            if(zeile == spalte - dasDoppelte/2 ||
               zeile == -spalte + (dasDoppelte/2)){
                cout << "x";
            }
            else{
                cout << " ";
            }
        }
    cout << "\n";
    }
    for(int zeile = 0; zeile < dasDoppelte; zeile++){
        for(int spalte = 0;spalte < dasDoppelte; spalte++){
            if(     spalte == 0 ||
                    zeile == dasDoppelte -1 ||
                    spalte == dasDoppelte -1){
                cout << "x";
            }
            else {
                cout << " ";
            }
        }
    cout << "\n";
    }

    return 0;
}
