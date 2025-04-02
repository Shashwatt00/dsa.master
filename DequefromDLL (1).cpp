git #include<iostream>
#include<queue>
using namespace std;
class Node{// User defined data type
    public:
        int val;
        Node* next;
        Node* prev;
        Node(int val){
            this->val=val;
            this->next=NULL;
            this->prev=NULL;
        }
    };
class Deque{// User defined data structure
public:
        Node* head;
        Node* tail;
        int size;
        Deque(){
            head = tail = NULL;
            size = 0;
        }
    
        void display(){
            Node *temp=head;
            while(temp!=NULL){
                cout<<temp->val<<" ";
                temp = temp->next;
            }
            cout<<endl;
        }
        void pushfront(int val){
            Node* temp = new Node(val);
            if(size ==0) head = tail = temp;
            else{
                temp->next=head;
                head->prev=temp;
                head=temp;
            }
            size++;
        }
        void pushback(int val){
            Node* temp = new Node(val);
            if(size ==0) head = tail = temp;
            else{
                tail->next=temp;
                temp->prev=tail;
                tail=temp;
            }
            size++;
        }
        void popfront(){
            if(size ==0){
                cout<<"Deque is empty";
                return;
            }
            head = head->next;
            if(head) head->prev=NULL;
            if(head==NULL) tail=NULL;
            size--;
        }
        void popback(){
            if(size ==0){
                cout<<"Deque is empty";
                return;
            }
            if(size==1){
                popfront();
                return;
            }
            Node* temp=tail->prev;
            temp->next=NULL;
            tail=temp;
            size--;
        }
        int front(){
            if(size==0){
                cout<<"Deque is empty";
                return -1;
            }
            return head->val;
        }
        int rear(){
            if(size==0){
                cout<<"Queue is empty";
                return -1;
            }
            return tail->val;
        }
        bool empty(){
            if(size==0) return true;
            else return false; 
        }
};
int main(){
    Deque dq;
    dq.pushback(10);
    dq.pushback(20);
    dq.pushback(30);
    dq.pushback(40);
    dq.display();
    dq.popback();
    dq.display();
    dq.popfront();
    dq.display();
    dq.pushfront(50);
    dq.display();
    cout<<dq.front()<<endl;
    cout<<dq.rear();
}