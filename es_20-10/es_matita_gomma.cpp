#include<iostream>
#include<stdlib.h>
#include<string>

using namespace std;

#define c_init 10

class matita {
    protected:
        int l;
        string colore;

    public:
        matita() {}
        ~matita() {}

        string get(int x) {
            string v;
            switch (x)
            {
                case 0: 
                    v = to_string(l);
                    return(v);
                break;

                case 1: 
                    return colore;
                break;
            }
            return 0;
        }

        void set_l(int x) {l = x;}
        void set_c(string x) {colore = x;}
};
class mat_gomma : public matita {
    private:
        int n_cancellature;

    public:
        mat_gomma() {n_cancellature = c_init;}
        ~mat_gomma() {}

        int get_g() {return n_cancellature;}
        void set_g(int x) {n_cancellature = x;}
};

mat_gomma mg;

void riempi() {
    int lung;
    string c;
    cout << "\nInserire la lunghezza della matita:\t";
    cin >> lung;
    mg.set_l(lung);
    cout << "\nInserire il colore della matita:\t";
    cin >> c;
    mg.set_c(c);
}

void end() {
    cout << "\nNon puoi piu' cancellare!!!!!\nLa matita di colore " << mg.get(1) << " lunga " << mg.get(0) << "cm ha finito la gomma.";
    exit(1);
}

void print() {
    cout << "\nHai ancora " << mg.get_g() << " cancellature";
}

void control(int n) {
    if (n < 0) {
        cout << "\nValore invalido!!!";
        exit(1);
    }
}

void choose() {
    int y;
    cout << "\nQuante volte cancelli:\t";
    cin >> y;

    control(y);

    mg.set_g(mg.get_g() - y);
    
    mg.get_g() <= 0 ? end() : print();
}

int main() {
    riempi();
    
    for (int i = 0; i < 3; i++) {
        choose();
    }
    
    return 0;
}