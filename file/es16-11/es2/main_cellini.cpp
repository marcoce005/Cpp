#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

fstream n, s;

void work() {
    n.open("numeri.txt", ios::in);
    s.open("scarti.txt", ios::out);

    float line, tot = 0, cont = 0, media;
    while (!n.eof()) {
        n >> line;
        tot += line;
        cont++;
        media = tot / cont;
        s << abs(line - media) << endl;
    }
    
    cout << "\nMedia:\t" << media << endl;

    n.close();
    s.close();
}

int main() {
    work();
    return 0;
}