#include <iostream>
using namespace std;
 class node{
   public : int data;
    public : node* next;

    public : node(){
        data = 0;
        next = NULL;
    }
    
    public : node(int value){
        data = value;
        next = NULL;
    }
};



class linked_list{
   public :  node* head;

    linked_list(){
        head = new node();
    }
  

    bool isEmpty(){
        if (head->next == NULL){
            return true;
        }

        else{
            return false;
        }
    }

    void insert(int x){

            node* temp = head;
            node* data = new node(x);
            while(temp->next != NULL){
                temp = temp->next;
            }
            temp->next = data;

        
    }

    void pop (int x){
        node* prev;
        node* temp = head;
        while(temp->data != x){
            prev = temp;
            temp = temp->next;
        }

        if (temp->next != NULL){
             prev->next = temp->next;
        }

        else{
            prev->next = NULL;
        }
    }
       
       void display(){
            if (isEmpty()){
            cout<<"linked list is empty ";
            }
            else{
                node* temp = head->next;
                do{
                    cout<<temp->data<<" \n";
                    temp = temp->next;
                } while (temp->next != NULL);
                cout<<temp->data;
                

            }
           
       }
        

};

int main(){
    linked_list number;
    number.insert(1);
    number.insert(3);
    number.insert(4);
    number.insert(5);
    number.display();
    number.pop(3);
    number.display();
}