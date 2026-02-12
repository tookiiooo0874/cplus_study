#include <iostream>
using namespace std;

void BirthMonth() {
    int month;

    cout << "Your Birth Month > " << flush;
    cin >> month;

    if(1 <= month && month <= 12) {
        cout << month << " gatu " << endl;
    } else {
        cout << month << " gatu ?!?! " << endl
             << "not exists" << endl;
    }
}

int main() {
    BirthMonth();
    BirthMonth();
}