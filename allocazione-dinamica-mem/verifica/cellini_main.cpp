#include <iostream>
#include <list>
#include <fstream>
#include <stdlib.h>

using namespace std;

void print (list<int> x) {
    for (auto i : x) {
        cout << i << "\t";
    }
    cout << endl;
}

void into_file(list<int> x, list<int> y) {
    fstream output;
    output.open("cellini_numeri.txt", ios::out);

    output << "L1:\t";
    for (auto i : x) {
        output << i << "\t";
    }
    output << endl;

    if (!y.empty()) {
        output << "L2:\t";
        for (auto i : y) {
            output << i << "\t";
        }
        output << endl;
    }
}

list<int> fill_random() {
    list<int> x;

    srand(time(NULL));
    for (int i = 0; i < 5; i++) {
        x.push_back(rand() % 20);
    }
    return x;
}

list<int> add_testa(list<int> x) {
    int n;
    cout << "\nElemento da inserire:\t";
    cin >> n;
    x.push_front(n);
    return x;
}

list<int> add_coda(list<int> x) {
    int n;
    cout << "\nElemento da inserire:\t";
    cin >> n;
    x.push_back(n);
    return x;
}

list<int> second_list() {
    list<int> x;

    int n;
    srand(time(NULL));
    for (int i = 0; i < 5; i++) {
        n = rand() % (40 - 21) + 21;
        x.push_back(n);
    }
    return x;
}

int main() {
    list<int> L1, L2;
    
    L1 = fill_random();

    char value;
    while (1) {
        cout << "\nSelezionare la modalita'\n[t] per inserire in testa\n[c] per inserire in coda\n[s] per ordinare la lista\n[r] per invertire l'ordine della lista\n[p] per stampare la lista\n[w] per creare una seconda lista e scambiare i valori della prima lista con la seconda\n[e] per stampare entrambe le liste\n[f] per stampare la lista in un file\n[x] per terminare il programma\n................";
        cin >> value;
        switch (value) {
            case 't':
                L1 = add_testa(L1);
            break;

            case 'c':
                L1 = add_coda(L1);
            break;

            case 's':
                L1.sort();
            break;

            case 'r':
                L1.reverse();
            break;

            case 'p':
                print(L1);
            break;

            case 'w':
                L2 = second_list();
                L1.swap(L2);
            break;

            case 'e':
                cout << "\nL1:\t";
                print(L1);
                cout << "\nL2:\t";
                print(L2);
            break;

            case 'f':
                into_file(L1, L2);
            break;

            case 'x':
                exit(1);
            break;
        }
    }

    return 0;
}