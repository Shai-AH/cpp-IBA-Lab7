#include <iostream>
using namespace std;

int main() {
    const int lands = 8;
    double length[lands], width[lands], area[lands];

    for (int i = 0; i < lands; i++) {
        cout << "Enter length of land " << i + 1 << ": ";
        cin >> length[i];
        cout << "Enter width of land " << i + 1 << ": ";
        cin >> width[i];
        area[i] = length[i] * width[i];
    }

    double maxArea = area[0];
    int largestIndex = 0;
    for (int i = 1; i < lands; i++) {
        if (area[i] > maxArea) {
            maxArea = area[i];
            largestIndex = i;
        }
    }

    cout << "\nAreas of each land piece:\n";
    for (int i = 0; i < lands; i++) {
        cout << "Land " << i + 1 << ": " << area[i] << endl;
    }

    cout << "\nLargest land is Land " << largestIndex + 1
         << " with area " << maxArea << endl;

    return 0;
}
