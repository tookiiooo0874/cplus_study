#include <iostream>
using namespace std;

int score[] = {
    1, 2, 3, 4, 5, 6, 7, 8, 9, 10
};

int main() {
    int sum = 0;
    
    for(int i = 0; i < 10; ++i) {
        sum += score[i];
    }

    cout << "Average: " << sum / 10.0 << endl;
}