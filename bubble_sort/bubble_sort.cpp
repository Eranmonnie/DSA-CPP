#include <iostream>
using namespace std;

void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

int* bubble_sort(int* arr, int length){ // selection sort function  
    
    for(int i = 0; i < length; i++){

       for(int j = 0; j < length; j++){

        if (arr[j] > arr[j+1]){
            swap(arr[j], arr[j+1]);
        }

       }

    }

   return arr;
}

int main(){

    int* p; //pointer that stores the result of selection_sort

    int arr [] = {1,6,3,2,7, 100,9,21,55,71}; //test case
    int length = sizeof(arr)/sizeof(arr[0]); 

    cout<<"unsorted array \n";
        for(int i = 0; i < length; i++){ //print each element in array 
            cout<<arr[i] << " "; 
        }

    cout<<"\n";

    p = bubble_sort(arr,length); //function call
       
    cout<<"sorted array \n";
    for(int i = 0; i < length; i++){ //print each element in array 
        cout<<p[i] << " "; 
    }


    return 0;
}