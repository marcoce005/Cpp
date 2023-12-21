#include <iostream>
#include <math.h>
#include <string.h>
#include <queue>

using namespace std;

double entropia(int n_lettere, float Pi[]) {
    double H = 0; // calcolo l'entropia della parola inserita
    for (int i = 1; i <= n_lettere; i++) {
        H += (-1) * (Pi[i - 1] * log2(Pi[i - 1]));
    }
    return H;
}

void print(queue<int> x, int lunghezza) {
    while (!x.empty()) {
        cout << (float)x.front() / lunghezza << "\t";
        x.pop();
    }
    cout << endl;    
}

int main() {
    char parola[20];

    cout << "\n\nInserire la parola (non si accettano caratteri speciali):\t"; // il programma funziona sono con lettere dell'alfabeto (maiuscolo o minuscolo è indeferrente)
    cin >> parola;

    int i, y, k = 0, l = strlen(parola);
    int lettere[26] = {0}, cont_let = 0;

    for (i = 0; i < l; i++) {           // converto tutto in minuscolo 
        parola[i] = tolower(parola[i]);
    }

    for (i = 0; i < 26; i++) {
        for (y = 0; parola[y] != 0; y++) {
            if (parola[y] == i + 97) {
                lettere[i]++;
            }
        }
    }

    for (i = 0; i < 26; i++) {
        if (lettere[i] != 0) {
            cont_let++;
        }
    }

    float Pi[cont_let];
    queue<int> fre, copy;

    for (i = 0; i < 26; i++) {
        if (lettere[i] != 0) {
            fre.push(lettere[i]);
            copy.push(lettere[i]);
            Pi[k] = (float)fre.front() / (float)l;
            fre.pop();
            k++;
        }
    }

    double H = entropia(cont_let, Pi);

    cout << "\n\nH " << parola << " = " << H << " bit/sym" << endl;

    cout << "\nLa frequenza delle lettere e':\n";
    print(copy, l);

    return 0;
}