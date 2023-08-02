#include <iostream>
using namespace std;

//the swap function is used to swap 2 variables by refrence ensureing their positions change in the main array 
void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

int* selection_sort(int* arr, int length){ // selection sort function  
    
    for(int i = 0; i < length; i++){

        int minindex = i; 
        for(int j = i+1; j < length; j++){ //find the index of the minimum element in the unsorted part of the array

            if (arr[j] < arr[minindex]){
                minindex = j;
            }
        }

        if (minindex != i){ 
            //Swap the found minimum element with the first element of the unsorted part
             swap(arr[i],arr[minindex]); 
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

    p = selection_sort(arr,length); //function call
       
    cout<<"sorted array \n";
    for(int i = 0; i < length; i++){ //print each element in array 
        cout<<p[i] << " "; 
    }


    return 0;
}


