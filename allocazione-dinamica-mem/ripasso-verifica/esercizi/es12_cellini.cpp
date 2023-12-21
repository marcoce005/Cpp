#include <iostream>

using namespace std;

struct Nodo {
    char carattere;
    struct Nodo *next;
};

struct Pila {
    struct Nodo *top;
    int size;
};

void newPila(struct Pila *s) {
    s->size = 0;
    s->top = NULL;
}

void push(struct Pila *Pila, char newcarattere) {
    struct Nodo *newNodo;
    newNodo = new Nodo();
    newNodo->carattere = newcarattere;
    newNodo->next = Pila->top;
    Pila->top = newNodo;
    Pila->size++;
}

char pop(struct Pila *Pila) {
    struct Nodo *tempNodo;
    tempNodo = Pila->top;
    char temp = Pila->top->carattere;
    Pila->top = tempNodo->next;
    Pila->size--;
    delete(tempNodo);

    return temp;
}

void string_to_Pila(string str, struct Pila *Pila) {
    for(char c : str){
        push(Pila, c);
    }
}

bool is_palindroma(string frase, Pila *Pila){
    int size = Pila->size;
    for(int i = 0; i < size; i++) {
        if(pop(Pila) != frase[i])
            return false;
    }
    return true;
}

int main() {
    struct Pila pila;
    newPila(&pila);

    string parola;

    cout << "Inserire una parola..." << endl;

    cin >> parola;

    string_to_Pila(parola, &pila);

    if (is_palindroma(parola, &pila)) {
		cout << "\nE' palindroma" << endl;
	} else {
		cout << "\nNON e' palindroma" << endl;
	}

    return 0;
}
