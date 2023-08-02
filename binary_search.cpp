#include <iostream>
using namespace std;
int binary_search(int* arr, int val);

int main(){
    int arr []= {
        1,2,3,4,5
    };

    cout<<binary_search(arr, 4);

return 0;
}

int binary_search(int* arr, int val){

    int left= 0;
    int right= sizeof(arr);
    int middle= 0;


    while(left < right){

        middle = (int)((left + right)/ 2);

        if (val > arr[middle]){
            left = middle + 1;
        }
        else{
            right = middle;
        }
    }

    if (arr[left] == val){
        return left;
    }

    else{
        return -1;
    }
}