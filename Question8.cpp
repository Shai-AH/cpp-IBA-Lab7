#include <iostream>
using namespace std;

int main() {
    const int rows = 5;
    const int cols = 9;
    double data[rows][cols] = {0};

    for (int i = 0; i < rows; i++) {
        cout << "Enter Student ID: ";
        cin >> data[i][0];
        for (int j = 1; j <= 5; j++) {
            cout << "Enter Course " << j << " marks: ";
            cin >> data[i][j];
        }
    }

    for (int i = 0; i < rows; i++) {
        data[i][6] = 5 * 100;
        double obtained = 0;
        for (int j = 1; j <= 5; j++) {
            obtained += data[i][j];
        }
        data[i][7] = obtained;
        data[i][8] = (obtained / data[i][6]) * 100;
    }

    cout << "\nStdID  C1  C2  C3  C4  C5  Total  Obtained  %\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << data[i][j] << "  ";
        }
        cout << endl;
    }

    return 0;
}
