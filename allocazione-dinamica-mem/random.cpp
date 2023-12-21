#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    cout << rand()%100 << endl;         // genera randomicamento solo la prima volta le altre sono uguali

    srand(time(NULL));          // con questo il numero randomico cambia

    cout << rand()%100 << endl;     // '%' serve per dire il limire

    return 0;
}