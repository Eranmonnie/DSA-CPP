#include <iostream>
using namespace std;

class stack{
    int front;
    int rear;
    int length;
    int *items;
    
    

    public : stack(int arrsize){ //costructor
        front = -1;
        rear = -1;
        length =  arrsize ;
        items = new int[length];
    }

   

    bool isEmpty(){ //is empty method
        if (front == -1){
            return true;
        }
        else{
            return false;
        }
    }

   bool isFull(){ //is full method
        if (front == 0 && rear == length - 1){
            return true;
        }
        else{
            return false;
        }
    }

    int insert(int data){ //insert method
        if (isFull()){
            cout<<"queue is full";
            return -1;
        }

    else{
        if (front == -1){
            front = 0;
        }
        
        rear = rear + 1;
        items[rear] = data;
        return rear;
        }
    }
    
    int pop (){ // delete method 
        if (isEmpty()){
            cout<<"queue is empty";
            return -1;
        }
        else{

            if (front == rear){
                front = -1;
                items[rear] = NULL;
                rear = -1;
                return -1;
            }
            else{
                items[rear] = NULL;
                rear = rear - 1;
                return rear;
            }  
        }
    }

    void display(){ //display method 
        if (isEmpty()){
            cout<<"queue is empty";
        }
        else{
            cout<<"front = "<<front;
            cout<<"items : \n";
            int i= rear;
            while(i >= front){
                cout<<items[i];
                i = i-1;
            }
        }
    }

};

int main(){

stack numbers(5);
numbers.insert(4);
numbers.insert(7);
numbers.insert(8);
numbers.insert(11);
numbers.display();

return 0;
}
