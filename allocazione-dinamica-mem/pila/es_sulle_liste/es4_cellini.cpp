#include <iostream>
#include <list>

using namespace std;

void print(list <int>::iterator iter, list <int> lista) {
    for (iter = lista.begin(); iter != lista.end(); ++iter) {
        cout << *iter << "\t";
    }
    cout << endl;
}

int cal_media(list <int>::iterator iter, list <int> lista) {
    int tot = 0;
    for (iter = lista.begin(); iter != lista.end(); ++iter) {
        tot += *iter;
    }
    return tot / lista.size();
}

int main() {
    list<int> L1 = {4, 34, 6, 1, 65, 76, 3, 3, 6, 34, 20, 32, 101}, L2;
    list<int>::iterator it;

    print(it, L1);

    int media = cal_media(it, L1);

    for (it = L1.begin(); it != L1.end(); ++it) {
        if (*it > media && *it % 2 == 1) {
            L2.push_back(*it);
        }   
    }

    print(it, L2);

    return 0;
}