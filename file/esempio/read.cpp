#include <iostream>
#include<fstream>
#include <string>

using namespace std;

int main() {
    fstream myfile;

    myfile.open("testi/testo.txt", ios::in);                // per leggere dal file

    // ios::app per scrivere in più o creare la prima volta

    // ios::out per scrivere nel file
    
    string s;

    myfile >> s;            // acquisisce la prima parola prima dello spazio
    cout << endl << s << endl;

    char frase[100];

    myfile.getline(frase, 100);         // acquisisco la riga
    cout << frase;      // stampo array di caratteri

    char linea[100];
    while (!myfile.eof()) {         // per stampare tutto il file (stampo ogni linea)
        myfile.getline(linea, 100);         
        cout << linea <<endl;
    }
    
    myfile.close();
    return 0;
}