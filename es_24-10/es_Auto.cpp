#include <iostream>

using namespace std;

class mTrasporto {
    protected:
        int anno, posti;

    public:
        mTrasporto() {}
        ~mTrasporto() {}

        int get(int x) {
            switch (x) {
                case 0:
                    return anno;
                break;

                case 1:
                    return posti;
                break;
            }
            return 0;
        }

        void set(int x, int valore) {
            switch (x) {
                case 0:
                    anno = valore;
                break;
                    
                case 1:
                    posti = valore;
                break;
            }
        }
};
class automobile : public mTrasporto {
    private:
        int etaGuida, porte;

    public:
        automobile() {
            etaGuida = 18;
            porte = 5;
        }
        ~automobile() {}

        int get_auto(int x) {
            switch (x) {
                case 0:
                    return etaGuida;
                break;

                case 1:
                    return porte;
                break;
            }
            return 0;
        }
};
class cityCar : public mTrasporto {
    private:
        int etaGuida, porte;

    public:
        cityCar() {
            etaGuida = 18;
            porte = 3;
        }
        ~cityCar() {}

        int get_city(int x) {
            switch (x) {
                case 0:
                    return etaGuida;
                break;

                case 1:
                    return porte;
                break;
            }
            return 0;
        }        
};
class bici : public mTrasporto {
    private:
        int nForcelle;
        bool tandem;

    public:
        bici() {}
        ~bici() {}

        void set_bici(int x, int valore) {
            switch (x) {
                case 0:
                    nForcelle = valore;
                break;

                case 1:
                    valore >= 1 ? tandem = 1 : tandem = 0;
                break;
            }
        }

        int get_bici(int x) {
            switch (x) {
                case 0:
                    return nForcelle;
                break;

                case 1:
                    return tandem;
                break;
            }
            return 0;
        }
};

int main() {
    return 0;
}