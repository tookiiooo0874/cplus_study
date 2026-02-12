#include <iostream>
using namespace std;

int main() {
    for(int i = 0; i < 5; ++i) {
        int a, b, op, result;

        cout << "1st number > " << flush;
        cin >> a;
        cout << "2nd number > " << flush;
        cin >> b;
        cout << "1: +, 2: -, 3: *, 4: / > " << flush;
        cin >> op;

        switch(op) {
        case 1:
            result = a + b; break;
        case 2:
            result = a - b; break;
        case 3:
            result = a * b; break;
        case 4:
            result = a / b; break;
        default:
            cout << "majimeni" << endl;
            continue;
        }

        cout << "result is ... " << result << endl;
    }
}