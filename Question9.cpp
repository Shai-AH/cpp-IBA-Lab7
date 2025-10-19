#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    int numbers[10];

    for (int i = 0; i < 10; i++) {
        numbers[i] = rand() % 10;
    }

    cout << "(" << numbers[0] << numbers[1] << numbers[2] << ") "
         << numbers[3] << numbers[4] << numbers[5] << "-"
         << numbers[6] << numbers[7] << numbers[8] << numbers[9]
         << endl;

    return 0;
}
