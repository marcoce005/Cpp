#include <iostream>

using namespace std;

class C {           // contatore
    private:
        int valore;

    public:
        C(){valore=0;}      // construttore

        void plus() {valore++;}
        void out() {cout << valore << endl;}
};

int main() {

    C c;        // istanzio l'oggetto c di tipo C

    for (int i = 0; i < 5; i++) {
        c.plus();
        c.out();
    }

    return 0;
}