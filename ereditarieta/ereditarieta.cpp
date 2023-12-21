#include<iostream>

using namespace std;

class elettrodomestico {
    protected:            // SUPER CLASSE
    string modello;
    string marca;
    bool ONOFF;

    public:                                                     // se volessimo usare 'private' --> figli non vedono
        elettrodomestico(string mod, string mar, bool onoff) {             // per mettere roba privata tra super classe e figlio si usa 'protected'
            modello = mod;
            marca = mar;
            ONOFF = onoff;
        }
        elettrodomestico(){

        }
};

class lavatrice:elettrodomestico {          // figli della classe elettrodomestico
    string lavaggio;                    // hanno anche gli attributi della classe elettrodomestico
    int rpm;

    public:
        lavatrice(string mod, string mar, bool onoff, string l, int giri) {
         modello = mod;
            marca = mar;
            ONOFF = onoff;
            lavaggio = l;
            rpm = giri;
        }
};

int main() {
    elettrodomestico e = elettrodomestico("","",true);
    

    return 0;
}