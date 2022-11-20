#include<bits/stdc++.h>
#include<stack>
using namespace std;
class Queue
{
public:
int *arr;
int qfront;
int rear;
int size;

Queue(int n){
size=n;
arr=new int[size];
qfront = -1;
rear=-1;
}

void push(int element){
if(qfront==(rear+1)/size){
  
      cout<<"OVERFLOW"<<endl;

}
if(qfront==rear==-1){
    qfront=rear=0;
}
else{
    rear=(rear+1)/size;
    arr[rear]=element;
}
}

void pop(){
    if(qfront==rear==-1){
        cout<<"UNDERFLOW"<<endl;
       
    }
        int item=arr[rear];
    if(qfront==rear){
       
        qfront=rear=-1;
    }
    else{
     
        qfront=(qfront+1)/size;
    }

}
int peek(){
    if(qfront==rear){
    return 0;
}
else{
    
    return arr[qfront];
}}

bool isEmpty(){
    if(qfront==rear==-1){
        return true;
    }
    else{
        return false;
    }
}
void display(){
    int i;
    if(qfront==rear){
        cout<<"Queue is Empty"<<endl;
    }
    else{
        for(i=qfront;i<rear;i++){
            cout<<arr[i]<<endl;
        }
    }
}

};

int main(){

Queue st(5);
int element;
for(int i=0;i<5;i++){
    cout<<"enter"<<endl;
    cin>>element;
    st.push(element);
}
cout<<st.isEmpty()<<endl;

cout<<st.peek()<<endl;


    return 0;
}

