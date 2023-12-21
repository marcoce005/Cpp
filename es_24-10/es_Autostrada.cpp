#include <iostream>

using namespace std;

class casello {
    protected:
        bool festivo;
        int bonus;

    public:
        casello() {bonus = 7;}
        ~casello() {}

        void set_casello(bool valore) {festivo = valore;}
        bool get_casello() {return festivo;}
};
class tir : public casello {
    private:
        int prezzo_tir;
        
    public:
        tir() {festivo == 1 ? prezzo_tir = 25 + bonus : prezzo_tir = 25;}
        ~tir() {}

        int get_tir() {return prezzo_tir;}
};
class car : public casello {
    private:
        int prezzo_car;
        
    public:
        car() {festivo == 1 ? prezzo_car = 15 + bonus : prezzo_car = 15;}
        ~car() {}

        int get_car() {return prezzo_car;}
};
class moto : public casello {
    private:
        int prezzo_moto;
        
    public:
        moto() {festivo == 1 ? prezzo_moto = 25 + bonus : prezzo_moto = 25;}
        ~moto() {}

        int get_moto() {return prezzo_moto;}
};

int main() {
    return 0;
}