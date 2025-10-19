#include <iostream>
using namespace std;

int main() {
    const int n = 5;
    double std1_marks[n] = {60, 75, 85, 95, 49};
    double std2_marks[n] = {59, 70, 65, 45, 39};

    double mean1 = 0, mean2 = 0;

    for (int i = 0; i < n; i++) {
        mean1 += std1_marks[i];
        mean2 += std2_marks[i];
    }
    mean1 /= n;
    mean2 /= n;

    double covariance = 0;
    for (int i = 0; i < n; i++) {
        covariance += (std1_marks[i] - mean1) * (std2_marks[i] - mean2);
    }
    covariance /= (n - 1);

    cout << "Covariance between students: " << covariance << endl;
    return 0;
}
