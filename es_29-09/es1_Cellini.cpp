#include <iostream>
#include <cmath>

using namespace std;

class Rombo {
    public:
        float Area;
        float Perimetro;

        Rombo() {
            Area = 0;
            Perimetro = 0;
        }

        void perimetro(float D, float d) {
            Perimetro = (sqrt(pow((d / 2), 2) + pow((D / 2), 2))) * 4;
        }

        void area(float D, float d) {Area = (d * D) / 2;}
};

int main() {

    Rombo rombo;
    float D, d;

    cout << "\nInserisci la diagonale MAGGIORE:\t";
    cin >> D;
    cout << "\nInserisci la diagonale MINORE:\t";
    cin >> d;
    
    rombo.area(D, d);
    rombo.perimetro(D, d);

    cout << "\nIl perimetro del rombo e':\t\t" << rombo.Perimetro << "\nL'area del rombo e':\t\t" << rombo.Area << endl;

    return 0;
}