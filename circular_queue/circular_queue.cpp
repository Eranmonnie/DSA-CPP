#include <iostream>
using namespace std;

class circular_queue{
    int front;
    int rear;
    int length;
    int *items;
    
    

    public : circular_queue(int arrsize){ //costructor
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
        if ( (front == 0 && rear == length - 1) || (front == rear+1) ){
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
        
        rear = (rear +1)% length;
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
                rear = -1;
                return -1;
            }
            else{
                front = (front + 1) % length;
                return front;
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
            int i= front;
            while(i != rear){
                cout<<items[i] +"\n"<<;
                i = (i+1)%length;
            }
            cout<<items[rear];
        }
    }

};

int main(){

circular_queue numbers(5);
numbers.insert(4);
numbers.insert(7);
numbers.insert(8);
numbers.insert(11);
numbers.display();

return 0;
}
