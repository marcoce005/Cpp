#include <iostream>
#include <stack>

using namespace std;

void print(stack<string> x) {
    while (!x.empty()) {
        cout << x.top() << endl;
        x.pop();
    }
    cout << endl;
}

int main() {
    stack<string> linguaggi;         // creare la pila di stringhe

                    // ATTENZIONE
    // la PILA e' LIFO ultimo messo == primo che esce

    linguaggi.push("C");        // aggiunge stringhe alla pila
    linguaggi.push("C++");
    linguaggi.push("C#");
    
    cout << linguaggi.top() << endl << endl;        // stampa quello in cima alla pila

    /* while (!linguaggi.empty()) {            // stampare tutta la pila (non c'e' modo di non cancellare i valori)
        cout << linguaggi.top() << endl;
        linguaggi.pop();
    } */
    
    print(linguaggi);

    linguaggi.pop();

    print(linguaggi);

    return 0;
}