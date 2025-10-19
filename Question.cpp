#include <iostream>
using namespace std;
int main(){
    int row, col;
    int sum  = 0;
    float avg;
    cout << "Enter number of rows: " << endl;
    cin >> row;
    cout << "Enter number of columns: " << endl;
    cin >> col;
    int arr[row][col];
    for(int i = 0; i < row; i ++){
        for(int j = 0; j < col; j++){
            cout << "Enter Row = " << i+1 << " Column = " << j+1 << ": " << endl;
            cin >> arr[i][j];
        }
        cout << endl;
    }
    for(int i = 0; i < row; i ++){
        for(int j = 0; j < col; j++){
            if(arr[i][j] > 0){
                sum = sum + arr[i][j];
            }
        }
    }
    avg = (float) sum / (row * col);
    cout << "Sum = " << sum << endl;
    cout << "Avg = " << avg << endl;
}
    