#include <iostream>

using namespace std;

int main() {
    char frase[] = "C'era una volta tanto tempo fa in una galassia lontana lontana...", frase2[sizeof(frase)], *p[sizeof(frase)];

    for (int i = 0; i < sizeof(frase); i++) {
        p[i] = &frase[i];
        frase2[i] = *p[i];
        cout << frase2[i];
    }
    
    cout << endl;

    return 0;
}