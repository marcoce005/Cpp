#include <iostream>
#include <fstream>

using namespace std;

fstream report;
    
int myAtoi(char n, char n2) {
    return (((int(n) - 48) * 10) + (int(n2) - 48));
}

void work() {
    report.open("report.txt", ios::in);

    string mesi[12] = {"Gennaio", "Febbraio", "Marzo", "Aprile", "Maggio", "Giugno", "Luglio", "Agosto", "Settembre", "Ottobre", "Novembre", "Dicembre"};

    float tot = 0, cont = 0;
    int max = 0, valoreMese = 0;
    char riga[20], rigaMax[20];
    while (!report.eof()) {
        report.getline(riga, 20);

        if (riga[2] == '0' && riga[3] == '1') {
            cout << "\nGennaio ";
            valoreMese = /* ((int(riga[2]) - 48) * 10) + (int(riga[3]) - 48); */ myAtoi(riga[2], riga[3]);
        }
        else if (riga[2] == '0' && riga[3] == '2') {
            cout << "\nFebbraio ";
            valoreMese = /* ((int(riga[2]) - 48) * 10) + (int(riga[3]) - 48); */ myAtoi(riga[2], riga[3]);
        }
        else if (riga[2] == '0' && riga[3] == '3') {
            cout << "\nMarzo ";
            valoreMese = /* ((int(riga[2]) - 48) * 10) + (int(riga[3]) - 48); */ myAtoi(riga[2], riga[3]);
        }
        else if (riga[2] == '0' && riga[3] == '4') {
            cout << "\nAprile ";
            valoreMese = /* ((int(riga[2]) - 48) * 10) + (int(riga[3]) - 48); */ myAtoi(riga[2], riga[3]);
        }
        else if (riga[2] == '0' && riga[3] == '5') {
            cout << "\nMaggio ";
            valoreMese = /* ((int(riga[2]) - 48) * 10) + (int(riga[3]) - 48); */ myAtoi(riga[2], riga[3]);
        }
        else if (riga[2] == '0' && riga[3] == '6') {
            cout << "\nGiugno ";
            valoreMese = /* ((int(riga[2]) - 48) * 10) + (int(riga[3]) - 48); */ myAtoi(riga[2], riga[3]);
        }
        else if (riga[2] == '0' && riga[3] == '7') {
            cout << "\nLuglio ";
            valoreMese = /* ((int(riga[2]) - 48) * 10) + (int(riga[3]) - 48); */ myAtoi(riga[2], riga[3]);
        }
        else if (riga[2] == '0' && riga[3] == '8') {
            cout << "\nAgosto ";
            valoreMese = /* ((int(riga[2]) - 48) * 10) + (int(riga[3]) - 48); */ myAtoi(riga[2], riga[3]);
        }
        else if (riga[2] == '0' && riga[3] == '9') {
            cout << "\nSettembre ";
            valoreMese = /* ((int(riga[2]) - 48) * 10) + (int(riga[3]) - 48); */ myAtoi(riga[2], riga[3]);
        }
        else if (riga[2] == '1' && riga[3] == '0') {
            cout << "\nOttobre ";
            valoreMese = /* ((int(riga[2]) - 48) * 10) + (int(riga[3]) - 48); */ myAtoi(riga[2], riga[3]);
        }
        else if (riga[2] == '1' && riga[3] == '1') {
            cout << "\nNovembre ";
            valoreMese = /* ((int(riga[2]) - 48) * 10) + (int(riga[3]) - 48); */ myAtoi(riga[2], riga[3]);
        }
        else if (riga[2] == '1' && riga[3] == '2') {
            cout << "\nDicembre ";
            valoreMese = /* ((int(riga[2]) - 48) * 10) + (int(riga[3]) - 48); */ myAtoi(riga[2], riga[3]);
        }

        cout << riga[0] << riga[1] << " " << riga[4] << riga[5] << riga[6] << riga[7] << " \nPezzi prodotti:\t" << riga[9] << riga[10] << endl;

        tot += ((int(riga[9]) - 48) * 10) + (int(riga[10]) - 48);
        cont++;

        if (((int(riga[9]) - 48) * 10) + (int(riga[10]) - 48) > max) {
            max = ((int(riga[9]) - 48) * 10) + (int(riga[10]) - 48);
            report.getline(rigaMax, 20);
        }
    }
    cout << "\nMedia:\t" << tot / cont << "\nMassimo prodotto in un giorno:\t" << max << " pezzi" << "\tIl giorno:\t" << mesi[valoreMese-1] << " " << riga[0] << riga[1] << " " << riga[4] << riga[5] << riga[6] << riga[7] << endl;
}

int main() {

    work();

    return 0;
}