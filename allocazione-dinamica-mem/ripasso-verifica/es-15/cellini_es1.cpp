#include <iostream>

using namespace std;

struct Numero {
    string valore;
    Numero *next;
};

struct Lista {
    Numero *head;
};

void print(struct Lista *l) {
    struct Numero *temp = l->head;          // mi metto con uno temporaneo al livello della testa

    while (temp->next != NULL) {            // scorro fino a quando trovo NULL scendendo di uno alla volta
        cout << temp->valore << endl;
        temp = temp->next;
    }
}

Lista fill(struct Lista *l, string op) {
    struct Numero *tempN;
    l->head = new Numero();
    tempN = l->head;

    string word = "";
    for (auto i : op) {
        if (i != ' ') {
            word += i;
        } else {
            tempN->valore = word;
            tempN->next = new Numero();
            tempN = tempN->next;
            word = "";
        }
    }
    tempN->valore = word;
    tempN->next = new Numero();
    tempN = tempN->next;

    return *l;
}

string pop_front(struct Lista *l) {
    struct Numero *tempNumero;
    tempNumero = l->head;
    string value = l->head->valore;
    l->head = tempNumero->next;
    delete(tempNumero);
    return value;
}

int convert(struct Lista *l) {
    struct Numero *n = l->head;

    int v[2], cont = 0;
    while (n->next != NULL) {
        if (n->valore == "+") {
            v[0] = v[0] + v[1];
            cont = 1;
        } else if (n->valore == "-") {
            v[0] = v[0] - v[1];
            cont = 1;
        } else if (n->valore == "*") {
            v[0] = v[0] * v[1];
            cont = 1;
        } else if (n->valore == "/") {
            v[0] = v[0] / v[1];
            cont = 1;
        } else {
            v[cont++] = stoi(n->valore);
        }
        n = n->next;
    }
    return v[0];
}

int main() {
    struct Lista lista;

    string operazione;
    cout << "\nInserire l'operazione in notazione polacca inversa:\t";
    getline(cin, operazione);

    lista = fill(&lista, operazione);

    cout << "\nIl risultato della seguente operazine e':\n" << operazione << " =\t" << convert(&lista);

    return 0;
}