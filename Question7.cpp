#include <iostream>
using namespace std;

int main() {
    const int PRODUCTS = 6;
    const int EMPLOYEES = 4;
    double sales[PRODUCTS][EMPLOYEES];
    double productTotal[PRODUCTS] = {0};
    double employeeTotal[EMPLOYEES] = {0};
    double grandTotal = 0;

    for (int i = 0; i < PRODUCTS; i++) {
        for (int j = 0; j < EMPLOYEES; j++) {
            cout << "Enter sales for Product " << i + 1
                 << " by Employee " << j + 1 << ": ";
            cin >> sales[i][j];
        }
    }

    for (int i = 0; i < PRODUCTS; i++) {
        for (int j = 0; j < EMPLOYEES; j++) {
            productTotal[i] += sales[i][j];   
            employeeTotal[j] += sales[i][j];  
            grandTotal += sales[i][j];        
        }
    }

    cout << "\nSales Summary:\n";
    for (int i = 0; i < PRODUCTS; i++) {
        cout << "Product " << i + 1 << ": ";
        for (int j = 0; j < EMPLOYEES; j++) {
            cout << sales[i][j] << " ";
        }
        cout << " | Product Total: " << productTotal[i] << endl;
    }

    cout << "\nEmployee Totals:\n";
    for (int j = 0; j < EMPLOYEES; j++) {
        cout << "Employee " << j + 1 << ": " << employeeTotal[j] << endl;
    }

    cout << "\nGrand Total Sales: " << grandTotal << endl;

    return 0;
}
