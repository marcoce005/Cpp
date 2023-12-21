#include <iostream>

using namespace std;

class Operandi {
    private:
        float n;

    public:
        Operandi(float num) {
            n = num;
        }

        float getN() {return(n);}

        void somma(float n2) {n = n2 + n;}

        void differenza(float n2) {n = n - n2;}

        void prodotto(float n2) {n = n2 * n;}

        void divisione(float n2) {n = n / n2;}

        void opposto() {n = n * -1;}
};

int main() {
    
    float num;
    
    cout << "\nInserire il numero di partenza:\t";
    cin >> num;

    Operandi operandi(num);
    
    operandi.somma(3);
    operandi.prodotto(2);
    operandi.differenza(8);
    operandi.divisione(2);
    operandi.opposto();

    cout << "\nIl numero finale e':\t" << operandi.getN(); 
    
    return 0;
}