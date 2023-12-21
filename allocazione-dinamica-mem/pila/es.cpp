#include <iostream>
#include <stack>

using namespace std;

void print(stack<int> x) {
    while (!x.empty()) {
        cout << x.top() << endl;
        x.pop();
    }
    cout << endl;
}

int main() {
    stack<int> pila;

    int x = 0, cont = 1;
    while (cont != 10) {
        x += 2;
        if (x % 5 != 0) {
            pila.push(x);
            cont++;
        }
    }
    
    print(pila);
    

    return 0;
}