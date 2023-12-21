#include <iostream>
#include <fstream>
#include <cctype>

char parola[] = "BOMBA";

using namespace std;

fstream input, output;

void trova() {
    input.open("input.txt", ios::in);
    output.open("output.txt", ios::app);

    char riga[100];
    bool ok[sizeof(parola)];
    int posizioni[sizeof(parola)];

    for (int i = 0; i < sizeof(parola); i++) {
        ok[i] = 0;
    }

    while (!input.eof()) {
        input.getline(riga, 100);
        
        for (int i = 0; i < 100; i++) {
            if (riga[i] == '\0') {break;}
            else if (riga[i] == parola[0] /* || riga[i] == toupper(parola[0]) */ && ok[0] == 0) {
                posizioni[0] = i+1;
                ok[0] = 1;
            }
            else if(riga[i] == parola[1] /* || riga[i] == toupper(parola[1]) */ && ok[1] == 0) {
                if (ok[0] == 1) {
                    posizioni[1] = i+1;
                    ok[1] = 1;
                }
            }
            else if(riga[i] == parola[2] /* || riga[i] == toupper(parola[2]) */ && ok[2] == 0) {
                if (ok[1] == 1) {
                    posizioni[2] = i+1;
                    ok[2] = 1;
                }
            }
            else if(riga[i] == parola[3] /* || riga[i] == toupper(parola[3]) */ && ok[3] == 0) {
                if (ok[2] == 1) {
                    posizioni[3] = i+1;
                    ok[3] = 1;
                }
            }
            else if(riga[i] == parola[4] /* || riga[i] == toupper(parola[4]) */ && ok[4] == 0) {
                if (ok[3] == 1) {
                    posizioni[4] = i+1;
                    ok[4] = 1;
                }   
            }
            else if(riga[i] == parola[0] || riga[i] == parola[1] || riga[i] == parola[2] || riga[i] == parola[3] || riga[i] == parola[4]) {
                if (ok[4] != 0) {
                    riga[i] = 'X';
                }
            }
        }

        output << riga << "\t\t";
        if (ok[4] != 0) {
            output << "Questa e' una bomba\t\tPosizioni:\t";
            for (int i = 0; i < 5; i++) {output << posizioni[i] << "\t";}
            output << endl;
        }
        else {
            output << "Questa NON e' una bomba" << endl;
        }
        
        for (int i = 0; i < sizeof(parola); i++) {
            ok[i] = 0;
            posizioni[i] = -1;
        }
    }
    

    input.close();
    output.close();
}

int main() {
    remove("output.txt");
    trova();
    return 0;
}