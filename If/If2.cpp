#include <iostream>
using namespace std;

void Divide() {
    int a, b;

    cout << "Enter 1st Number > " << flush;
    cin >> a;

    cout << "Enter 2nd Number > " << flush;
    cin >> b;

    if(b == 0) {
        cout << "zero divide error" << endl;
    } else {
        cout << a << " / " << b << " = "
             << a / b << " ... " << a % b << endl;
    }
}

int main() {
    Divide();
    Divide();
}