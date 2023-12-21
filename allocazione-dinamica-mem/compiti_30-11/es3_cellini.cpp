#include <iostream>
#include <cstdlib>

#define l 10

using namespace std;

int main() {
    int arr[l], *p_min, *p_max, max = 0, min, tot = 0;
    float media, *p_med;
    
    srand(time(NULL));
    for (int i = 0; i < l; i++) {
        arr[i] = rand()%100;
        if (i == 0) {min = arr[i];}
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] <= min) {
            min = arr[i];
        }
        tot += arr[i];
    }

    media = float(tot) / float(l);
    p_med = &media;
    p_min = &min;
    p_max = &max;

    cout << "\nValore minore:\t" << *p_min << "\t" << &p_min << "\nValore massimo:\t" << *p_max << "\t" << &p_max << "\nValore medio:\t" << *p_med << "\t" << &p_med << endl << "\nNumeri:\n";

    for (int i = 0; i < l; i++) {
        cout << arr[i] << "\t";
    }
    cout << endl;

    return 0;
}