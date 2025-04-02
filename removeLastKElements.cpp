#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<int>q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    int k = 3;
    queue<int>temp;
    int m = q.size()-k;
    while(m>0){
        temp.push(q.front());
        q.pop();
    }

    while(q.size()>0){
        q.pop();
    }
    while(temp.size()>0){
        cout<<temp.front()<<" ";
        temp.pop();
    }
}