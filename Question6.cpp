#include <iostream>
#include <string>
using namespace std;

int main() {
    int n = 5;
    string students[5] = {"Ali", "Zuhair", "Faisal", "Maaz", "Anis"};

    for (int i = 0; i < 5 ; i++) {
        int minIndex = i; 
        for (int j = i + 1; j < n; j++) {
            if (students[j] < students[minIndex]) {
                minIndex = j;
            }
        }
        if (minIndex != i) {
            string temp = students[i];
            students[i] = students[minIndex];
            students[minIndex] = temp;
        }
    }

    cout << "Sorted names (alphabetical order):" << endl;
    for (int i = 0; i < n; i++) {
        cout << students[i] << endl;
    }


}
