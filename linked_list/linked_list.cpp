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

    }
  

    bool isEmpty(){
        if (head->next == NULL){
            return true;
        }
    }

    void insert(int x){
        if (isEmpty()){
            cout<<"linked list is empty ";
        }

        else{
            node* temp = head;
            node* data;
            while(temp->next != NULL){
                temp = temp->next;
            }
            temp->next = data;
        }
        
    }

    void pop (int x){
        node* temp = head;
        while(temp->data != x){
            temp = temp->next;
        }

        if (temp->next->next != NULL){
             temp->next = temp->next->next;
        }

        else{
            temp->next = NULL;
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
}