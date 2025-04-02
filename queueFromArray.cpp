#include<iostream>
#include<queue>
using namespace std;
class Queue{
    public:
     int f;
     int r;
     vector<int>arr;
     Queue(int val){
        f=r=0;
        vector<int>v(val);
        arr = v;
    }
    void push(int val){
        if(r==5){
         cout<<"Queue is Full"<<endl;
         return;
        }
        arr[r] = val;
        r++;
    }
    void pop(){
        if(r-f==0){
            cout<<"Queue is empty";
            return;
        }
        f++; 
    }
    int front(){
        if(r-f==0){
            cout<<"Queue is empty";
            return -1;
        }
        return arr[f];
    }
    int rear(){
        if(r-f==0){
            cout<<"Queue is empty";
            return -1;
        }
        return arr[r-1];
    }
    int size(){
        return r-f;
    }
    bool empty(){
        if(f-r==0) return true;
        else return false;
    }
    void display(){
        for(int i=f;i<r;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};
int main(){
    Queue q(5);
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.display();
    q.push(60);
    q.push(70);
    q.display();
    q.pop();
    q.display();
}