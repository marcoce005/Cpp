#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class veicolo {
    private:
        string targa = "";
        int immatricolazione = 0;
        string proprietario = "";

    public:
        veicolo(string t, int i, string p) {
            targa = t;
            immatricolazione = i;
            proprietario = p;
        }

        string get_T() {return(targa);}
        int get_I() {return(immatricolazione);}
        string get_P() {return(proprietario);}
};

bool ordina(veicolo x, veicolo y) {
    return(x.get_I() < y.get_I());
}

int main() {
    veicolo v1 = veicolo("fg987er", 2020, "Pippo");
    veicolo v2 = veicolo("ft939fe", 1990, "Pluto");
    veicolo v3 = veicolo("er342ge", 2021, "Naruto");

    vector <veicolo> v = vector <veicolo>();

    v.push_back(v1);
    v.push_back(v2);
    v.push_back(v3);

    sort(v.begin(), v.end(), ordina);

    for (auto veico : v) {
        cout << "\n\nTarga:\t\t" << veico.get_T() << "\nAnno di immatricolazione:\t\t" << veico.get_I() << "\nNome del proprietario:\t\t" << veico.get_P();
    }
    
    return 0;
}