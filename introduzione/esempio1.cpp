#include <iostream>

using namespace std;

const float PI = 3.14159;

class Cerchio {
    float raggio;

    public: 
        void set_r(float r) {
            raggio = r;
        }
        
        float calcola_A() {
            return(raggio * raggio * PI);
        }

        float calcola_P() {
            return(2 * PI * raggio);
        }
};

int main() {
    Cerchio c1;

    //c1.set_r(3);
    int r;

    cout << "Inserisci il raggio: ";        // fase ci acquisizione valore raggio
    cin >> r;
    c1.set_r(r);

    cout << "Area: " << c1.calcola_A() << endl << "Perimetro: " << c1.calcola_P() << endl;      // output

    system("PAUSE");

    return 0;
}