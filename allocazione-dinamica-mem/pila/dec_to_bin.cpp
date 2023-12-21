#include <iostream>
#include <stack>

using namespace std;

void print(stack<int> x) {
    while (!x.empty()) {
        cout << x.top() << "\t";
        x.pop();
    }
    cout << endl;
}

void dec_to_bin(int x) {
    stack<int> n;
    while (x != 0) {
        n.push(x % 2);
        x /= 2;
    }
    print(n);
}

int main() {
    int dec;

    cout << "\nInserire il nome da convertire:\t";
    cin >> dec;

    dec_to_bin(dec);

    return 0;
}