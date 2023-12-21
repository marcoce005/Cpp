#include <iostream>

using namespace std;

int main() {
    int i, *p_int;
    float f, *p_float;
    char c, *p_char;

    p_int = &i;
    p_float = &f;
    p_char = &c;

    *p_int = 10;
    *p_float = 77.3;
    *p_char = '@';

    int vet[] = {1, 4, 5, 3, 5, 7, 34, 43, 6, 2}, *p_vet;

    p_vet = &vet[3];        // punto alla cella 4 dell'array
    *p_vet = 12;        // assegno il valore '12' alla cella di mem. corrispondente alla 4

    p_vet = vet;            // punto il puntatore all'inizio dell'array
    int length = sizeof(vet) / sizeof(int);
    for (int x = 0; x < length; x++) {
        cout << *p_vet++ << endl;
    }

    int min = vet[0];
    for (int y = 0; y < length; y++) {
        if (vet[y] <= min) {
            min = vet[y];
            p_vet = &vet[y];
        }
    }

    cout << "\nMinore:\t" << *p_vet << endl;

    int cerca;
    cout << "\nNumero da cercare:\t";
    cin >> cerca;

    for (int i = 0; i < length; i++) {
        if (vet[i] == cerca) {
            p_vet = &vet[i];
            cout << "\nIndirizzo di " << *p_vet << ":\t" << &p_vet << endl;
            break;
        }
        else if (i == length-1) {
            cout << "\nNon trovato" << endl;
        }
    }

    char stringa[] = "ciao", *p_stringa;

    int l = (sizeof(stringa) / sizeof(char)) - 1;
    for (int i = 0; i < l; i++) {
        if (stringa[i] == 65 || stringa[i] == 69 || stringa[i] == 73 || stringa[i] == 79 || stringa[i] == 97 || stringa[i] == 101 || stringa[i] == 105 || stringa[i] == 111) {
            p_stringa = &stringa[i];
            cout << "\nPrima vocale:\t" << *p_stringa << "\tindirizzo:\t" << &p_stringa << endl;
            break;
        }
    }

    char *punt[l];

    for (int i = 0; i < l; i++) {
        punt[i] = &stringa[i];
        cout << *punt[i] << "\t" << &punt[i] << endl;
    }

    return 0;
}