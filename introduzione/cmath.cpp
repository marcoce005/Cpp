#include <iostream>
#include <cmath>

using namespace std;

class quadrato {
    private: 
        float l;

    public:
        quadrato(float num) {l = num;}

        float Area() {return(pow(l, 2));}

        float Perimetro() {return(l * 4);}

        float Diagonale() {return(l * sqrt(2));}
};

int main() {

    float num;

    cout << "\nInserire il lato:\t";
    cin >> num;
    
    quadrato Q(num);

    cout << "\nArea =\t" << Q.Area() << "\nPerimetro =\t" << Q.Perimetro() << "\nDiagonale =\t" << Q.Diagonale() << endl;

    return 0;
}