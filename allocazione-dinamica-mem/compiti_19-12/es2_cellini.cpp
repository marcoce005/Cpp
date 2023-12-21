#include <iostream>

using namespace std;

void confront(int *p1, int *p2) {p1 != p2 ? cout << "\nokok\n" : cout << "\nError";}

int main() {
    int a, b, *pa, *pb;

    pa = &a;
    pb = &b;

    confront(pa, pb);

    return 0;
}