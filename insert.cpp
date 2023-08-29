# include<iostream>
using namespace std;

void swap (int& a, int& b);

void insert(int value, int location , int* array);

int main (){

int array [] ={1,2,3,4,5,5};
int len = sizeof(array)/sizeof(array[0]);

// ultimately the array shouldnt be ideal full for it to work or dynamic :/


insert(6, 4, array);
for(int i = 0; i < len; i++){ //print each element in array 
        cout<<array[i] << " "; 
    }

    return 0;
}

void swap (int& a, int& b){
    int c = a;
    a = b;
    b = c;
}


void insert(int value, int location , int* array){

    int len = sizeof(array)/sizeof(array[0]);

    for (int i = len; i >= location; i--){
        swap(array[i+1] , array[i]);
    } 

    array[location] = value;

}