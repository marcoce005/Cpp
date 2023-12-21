#include <iostream>

using namespace std;

void swap(int x, int y) {           // inverte solo in questa funzione
    int a;
    a = x;
    x = y;
    y = a;
}

void swap_address(int *x_address, int *y_address){      // inverte gli indirizzi nella memoria
    int a;
    a = *x_address;
    *x_address = *y_address;
    *y_address = a;
}

int main() {
    int x = 5, y = 7;
    
    swap(x, y);
    cout << x << "\t" << y << endl;

    swap_address(&x, &y);           // passa gli indirizzi del due numeri
    cout << x << "\t" << y << endl;

    return 0;
}