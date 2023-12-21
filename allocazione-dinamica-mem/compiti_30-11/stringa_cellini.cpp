#include <iostream>

using namespace std;

int main() {
    char charst[] = "Nel mezzo del cammin di nostra vita";

    int l = sizeof(charst) / sizeof(char);

    char *p_to_char[l];

    for (int i = 0; i < l; i++) {
        p_to_char[i] = &charst[i];
        cout << *p_to_char[i] << "\t" << &p_to_char[i] << endl;
    }
    
    return 0;
}