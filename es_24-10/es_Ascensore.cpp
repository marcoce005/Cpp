#include <iostream>

using namespace std;

class montacarichi {
    protected:
        int pesoTrasportabile, cont, prenotazioni[10], partenza, i;

    public:
        montacarichi() {
            pesoTrasportabile = 1000;
            cont = 0;
            partenza = 0;
            i = 0;
        }
        ~montacarichi() {}

        int getPeso() {return pesoTrasportabile;}

        void prenota(int valore) {
            prenotazioni[cont++] = valore;
        }

        void spostamento() {
            partenza = prenotazioni[i++];
        }
};
class ascensore : public montacarichi {
    private:
        int nPersone;

    public:
        ascensore() {nPersone = 12;}
        ~ascensore() {}

        int getPersone() {return nPersone;}
};

int main() {
    return 0;
}