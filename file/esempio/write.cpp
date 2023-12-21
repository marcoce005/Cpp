#include <iostream>
#include<fstream>

using namespace std;

int main() {
    fstream myfile;

    myfile.open("testi/vuoto.txt", ios::out);                // per scrivere nel file

    // ios::in per leggere dal file

    // ios::app per scrivere o creare nel file
    
    myfile << "Scrivo tutto io scrivo tutto\n\ntutto\nproprio TUTTO";

    myfile.close();
    return 0;
}