#include <iostream>
#include <fstream>
#include <stdlib.h>

#define giri 3

using namespace std;


fstream scritto, media;

void write() {
    scritto.open("scritto.txt", ios::app);

    int valori[30], x;
    
    cout << "\nQuanti numeri si vogliono mettere:\t";
    cin >> x;
    if (x > 30 && x <= 0) {
        cout << "Numero invalido!!!" << endl;
        exit(1);
    }

    for (int i = 0; i < x; i++) {
        cout << "Inserire numero:\t";
        cin >> valori[i];
        i == x-1 ? scritto << valori[i] : scritto << valori[i] << endl;
    }
    
    scritto.close();
}

void read() {
    scritto.open("scritto.txt", ios::in);
    media.open("media.txt", ios::app);

    float tot = 0, x, cont = 0;
    while (!scritto.eof()) {
        scritto >> x;
        tot += x;
        cont++;
    }

    media << "La media e':\t" << tot / cont << endl;
    
    remove("scritto.txt");

    scritto.close();
    media.close();
}

int main() {
    remove("scritto.txt");
    remove("media.txt");
    
    for (int i = 0; i < giri; i++) {
        write();
        read();
    }
    
    return 0;
}