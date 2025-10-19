#include <iostream>
using namespace std;
int main(){
    int tzero;
    int arr[3][3] = {{1, 6, 0}, {0, 0 , 0}, {4, 0, 5}};
    for(int i = 0; i < 3 ; i++){
        for(int j = 0; j < 3; j++){
            if(arr[i][j] == 0){
                tzero = tzero + 1;
            }
        }
    }
    float res = (3 * 3) / 2;
    if(tzero >= res){
        cout << "Sparse";
    }
    else{
        cout << "Not Sparse";
    }

}