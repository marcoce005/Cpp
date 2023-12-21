#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int>vet1 = {1, 2, 3, 4};         // tra '<' '>' si mette il tipo di variabile

    vector<int>vet2(3, 5);           // == {5, 5, 5} crea un vettore lungo tot pieno di n numeri

    // Aggiungere un valore al vettore .push_back

    vet1.push_back(0);      // aggiunge alla fine del vettore il valore 0
    vet1.push_back(100);

    vet2.clear();        // elimina tutti i valori nel vettore

    // Rimuovere il valore alla fine del vettore

    vet1.pop_back();     // rimuove l'ultimo valore nel vettore
    
    vet1.insert(vet1.begin() + 1, 15);         // inserisci il valore 15 alla locazione 1

    cout << "\nIl vettore 2 e' vuoto?:\t" << vet2.empty() << "\nvet1\n";    // restituisce 1 o 0

    for (int i = 0; i < vet1.size(); i++) {
        cout << vet1[i] << "\t";
        if (i == vet1.size() - 1) {cout << endl;}
    }

    cout << vet1.at(2) << endl;         // stamapa la cella 2 del vettore
    // oppute vet1[2]    

    vector <string> arr1;

    arr1.push_back("ciao");
    arr1.push_back("sei");
    arr1.push_back("...");

    vector <string> arr2(arr1);     // crea il vettore uguale all'altro

    for (int i = 0; i < arr2.size(); i++) {
        cout << arr2.at(i) << endl;
    }

    vector <string> vcopy(arr2.begin(), arr2.begin() + 2);          // copia i primi due valori del vettore

    for (int i = 0; i < vcopy.size(); i++) {
        cout << vcopy.at(i) << endl;
    }

    vector <int>::iterator x = find(vet1.begin(), vet1.end(), 0);       // iteratore alla cella del valore da trovare    (#include <algorithm>)
    cout << "\nIl valore 0 e' alla locazione:\t" << distance(vet1.begin(), x) << endl;      // distance calcola la distanza dell'iteratore all'inizio
   
    // MATRICE

    vector <vector <int> > mat(3, vector <int> (2, 0));

    

    return 0;
}