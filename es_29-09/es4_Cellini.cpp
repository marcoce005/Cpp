#include <iostream>

using namespace std;

class Frazione {
    public:
        int Numeratore;
        int Denominatore;

        Frazione() {}
};

int main() {
    Frazione frazione;

    frazione.Numeratore = 1;        // set initial fraction
    frazione.Denominatore = 3;
    
    cout << "\nCambiare il NUMERATORE da " << frazione.Numeratore << " in:\t";          // change value in fraction
    cin >> frazione.Numeratore;
    cout << "\nCambiare il DENOMINATORE da " << frazione.Denominatore << " in:\t";
    cin >> frazione.Denominatore;

    cout << "\nLa frazione finale e':\t\t" << frazione.Numeratore << "/" << frazione.Denominatore;       // print

    return 0;
}