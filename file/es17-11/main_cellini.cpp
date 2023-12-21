#include <iostream>
#include <fstream>
#include <stdlib.h>

using namespace std;

fstream in, out;

int cmpfunc (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}

void work() {
    in.open("input.txt", ios::in);
    out.open("output.txt", ios::out);

    int valori[100], i = 0;
    while (!in.eof()) {
        in >> valori[i++];
    } 

    qsort(valori, i, sizeof(int), cmpfunc);

    for (int x = 0; x < i; x++) {
        out << valori[x] << " ";
    }

    in.close();
    out.close();
}

int main() {
    work();
    return 0;
}