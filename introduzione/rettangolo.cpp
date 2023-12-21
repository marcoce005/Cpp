#include <iostream>

using namespace std;

class Rettangolo {
    private:
        float base;
        float altezza;
        float area;
        float perimetro;

    public:
        Rettangolo() {
            base = 0;
            altezza = 0;
        }
        Rettangolo(float b, float h) {
            altezza = h;
            base = b;
        }

        void setVariabili(float b, float h) {
            base = b;
            altezza = h;
        }

        float getBase() {return(base);}
        float getAltezza() {return(altezza);}

        float Perimetro() {return((base + altezza) * 2);}
        float Area() {return(base * altezza);}
};

int main() {
    
    int b, h;

    cout << "\nInserire la base:\t";
    cin >> b;
    cout << "\nInserire l'altezza:\t";
    cin >> h;

    Rettangolo rettangolo;

    rettangolo.setVariabili(b, h);

    cout << "\nLa base del rettangolo e':\t\t" << rettangolo.getBase() << "\nL'altezza del rettangolo e':\t\t" << rettangolo.getAltezza() << endl;
    cout << "\nIl perimetro del rettangolo e':\t\t" << rettangolo.Perimetro() << "\nL'area del rettangolo e':\t\t" << rettangolo.Area() << endl;

    return 0;
}