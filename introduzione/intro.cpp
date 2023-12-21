#include <iostream>                 // per gestire input e output 
#include <string>
using namespace std;                // usare nomi per oggetti e variabili dalla libreria standard.
                                    // per evitare di mettere std:: 

class myClass {
    public:                 // tipo di accesso
        int myNum;              // Attributo (int variabile)
        string myString;     // Attributo (variabile string)
};

int main() {
    myClass myObj;      // creazione di un oggetto della classe "myClass"

    // Accedere agli attributi e settare i valori
    myObj.myNum = 69;
    myObj.myString = "Pippo";

    // Stampare i valori
    cout << myObj.myNum << "\n" << myObj.myString << "\n";      // (\n) o (<< endl)

    return 0;
}