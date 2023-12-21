#include <iostream>
#include <queue>

using namespace std;

void print(priority_queue<int> x) {
    while (!x.empty()) {
        cout << x.top() << "\t";
        x.pop();
    }
    cout << endl;    
}

int main() {
    priority_queue<int> coda_prioritaria;

    srand(time(NULL));
    for (int i = 0; i < 5; i++) {       // riempo la coda con numeri randomici
        coda_prioritaria.push(rand() % 30);
    }

    print(coda_prioritaria);    // li mette in ordine al contrario

    return 0;
}