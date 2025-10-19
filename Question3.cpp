#include <iostream>
using namespace std;
int main(){
    int row, col;
    int sum  = 0;
    float avg;
    int max = 0;
    cout << "Enter number of rows: " << endl;
    cin >> row;
    cout << "Enter number of columns: " << endl;
    cin >> col;
    int arr[row][col];
    for(int i = 0; i < row; i ++){
        for(int j = 0; j < col; j++){
            cin >> arr[i][j];
        }
    }
    cout << "Your Matrix is: " << endl;
    for(int i = 0; i < row; i ++){
        for(int j = 0; j < col; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    for(int i = 0; i < row; i ++){
        for(int j = 0; j < col; j++){
            if(max <= arr[i][j]){
                max = arr[i][j];
            }   
        }
    }
    cout << "Max is = " << max;

}