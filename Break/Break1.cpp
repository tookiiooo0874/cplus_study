#include <iostream>
using namespace std;

int main() {
    for( ; ; ) {
        int a, b;
        
        cout << "enter 1st number > " << flush;
        cin >> a;

        cout << "enter 2nd number > " << flush;
        cin >> b;

        if(b == 0) {
            cout << "zero divide error" << endl;
            break;
        }

        cout << a << " / " << b << " = "
             << a / b << " ... " << a % b << endl;
    }

    cout << "program end" << endl;
}