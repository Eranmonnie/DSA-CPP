#include<iostream>
using namespace std;

int linear_search(int* arr ,int val);

int main(){

    int arr [] = {1,3,5,7,2,9};
    cout<<linear_search(arr, 2);

return 0;
}

int linear_search(int* arr, int val){

    int length = sizeof(arr) / sizeof(arr[0]);

    for (int i=0; i < length; i++){
        if (arr[i] == val){
            return i;
        }    
    }
    return -1;
}