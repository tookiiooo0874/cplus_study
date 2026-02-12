#include <iostream>
using namespace std;

// change seireki to syowa
// if not in syowa years, return 0

int WesternToShouwa (int western) {
    if (1926 <= western && western <= 1989) {
        return western - 1925;
    } else {
        return 0;
    }
}

void Shouwa() {
    int western;

    cout << "enter seireki > " << flush;
    cin >> western;

    int shouwa = WesternToShouwa(western);
    if(shouwa == 0) {
        cout << "not shouwa years" << endl;
    } else {
        cout << "shouwa" << shouwa << "nen" << endl;
    }
}

int main() {
    Shouwa();
    Shouwa();
}