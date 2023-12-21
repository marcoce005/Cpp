#include <iostream>

using namespace std;

class N {
    public:
        double n1;
        double n2;

        N() {
          n1 = 0;
          n2 = 1;  
        }

        void print() {
            double tot = n1 + n2;
            
            cout << tot << endl;

            n1 > n2 ? n2 = tot : n1 = tot;
        }
};

int main() {
    N n;

    cout << n.n2 << endl;
    while (true)
    {
        n.print();
    }
    
    return 0;
}