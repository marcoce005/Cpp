#include <iostream>

using namespace std;

struct Nodo {
    int value;
    struct Nodo *next;
};

struct Pila {
    struct Nodo *top;
    int size;
};

void newPila(struct Pila *s) {      // crea il front della pila che punta a NULL e tiene anche in mem la grandezza della pila
    s->size = 0;
    s->top = NULL;
}

void push(struct Pila *Pila, int newValue) {
    struct Nodo *newNodo;           // da il nome e poi crea il nodo della pila
    newNodo = new Nodo();           
    newNodo->value = newValue;      // assegna il valore
    newNodo->next = Pila->top;              // il seccessivo punta alla cima della pila
    Pila->top = newNodo;            // la cima diventa il valore inserito
    Pila->size++;           // incrementa la dimensione della pila
}

int pop(struct Pila *Pila) {
    struct Nodo *tempNodo;
    tempNodo = Pila->top;           // crea un nodo temporaneo e lo affianca alla cima  
    int temp = Pila->top->value;        // mette in 'temp' il valore della testa
    Pila->top = tempNodo->next;     // quindi assegna la testa al successi
    Pila->size--;           // decrementa la grande della pila
    delete(tempNodo);                   // elimina dalla mem il nodo temporaneo

    return temp;
}

/* void print(Pila *pila) {                     // stampa con il POP rimuovendo la lista
    int size = pila->size;
    for (int i = 0; i < size; i++) {
        cout << pop(pila) << endl;
    }
    cout << endl;
} */

void print(Pila *pila) {                    // stampa senza eliminare la lista
    int size = pila->size, testa;
    struct Nodo *tempNodo = pila->top;      // nodo in parallelo alla pila
    
    for (int i = 0; i < size; i++) {
        testa = tempNodo->value;
        cout << testa << endl;          
        tempNodo = tempNodo->next;          // si sposta scendendo di un passo sotto la testa
    }
}

int main() {
    struct Pila pila;           // diamo il nome alla pila che stiamo per creare
    newPila(&pila);         // creamo la pila

    for (int i = 0; i < 10; i++) {          
        push(&pila, i);                     // mettiamo dei valori
    }

    print(&pila);

    struct Nodo *x = pila.top;
    cout << "\nLA testa:\t" << x->value << endl;

    return 0;
}