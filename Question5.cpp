#include <iostream>
using namespace std;
int main(){
    int arr[3][3];
    int tarr[3][3];
    bool flag = true;
    cout << "Enter 9 Elements: " << endl;
    for(int i = 0; i < 3; i ++){
        for(int j = 0; j < 3; j ++){
            cin >> arr[i][j];
        }
    }
    for(int i = 0; i < 3; i ++){
        for(int j = 0; j < 3; j ++){
            tarr[i][j] = arr[j][i];
        }
    }
    cout << "Transposed Array: " << endl;
    for(int i = 0; i < 3; i ++){
        for(int j = 0; j < 3; j ++){
            cout << tarr[i][j] << " ";
        }
        cout << endl;
    }
    for(int i = 0; i < 3; i ++){
        for(int j = 0; j < 3; j ++){
            if(arr[i][j] != tarr[i][i]){
                flag = false;
                break;
            }
        }
    }
    if(flag == false){
        cout << "Asymmetric" << endl;
    }
    else{
        cout << "Symmetric" << endl;
    }
}