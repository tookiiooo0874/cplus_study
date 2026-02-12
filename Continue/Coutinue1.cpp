#include <iostream>
using namespace std;

int main() {
    for(int i = 0; i < 5 ; ++i) {
        int a, b;
        
        cout << "enter 1st number > " << flush;
        cin >> a;

        cout << "enter 2nd number > " << flush;
        cin >> b;

        if(b == 0) {
            cout << "zero divide error" << endl;
            continue;
        }

        cout << a << " / " << b << " = "
             << a / b << " ... " << a % b << endl;
    }

    cout << "program end" << endl;
}