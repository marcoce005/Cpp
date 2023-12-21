#include <iostream>
#include <queue>

using namespace std;

void print(queue<int> x) {
    while (!x.empty()) {
        cout << x.front() << "\t";
        x.pop();
    }
    cout << endl;    
}

int main() {
    queue<int> coda;        // dichiaro la coda FIFO

    coda.push(7);       // aggiungo il valore 7

    srand(time(NULL));
    for (int i = 0; i < 5; i++) {       // riempo la coda con numeri randomici
        coda.push(rand() % 30);
    }

    cout << "\nLa coda ha " << coda.size() << " elementi\n";

    print(coda);

    return 0;
}