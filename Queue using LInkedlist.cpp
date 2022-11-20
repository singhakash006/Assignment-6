#include<bits/stdc++.h>
#include<stack>
using namespace std;
class Node
{
public:
int data;
Node* next;


Node(int data){
this->data=data;
this->next=NULL;
}};
class Queue {
     public:
    Node* front;
    Node* rear;
   
    Queue(int size){
        front=rear=NULL;
    }
void push(int data){
    Node* temp=new Node(data);
if(rear==NULL){
    front=rear=temp;
      }
 else{
    rear->next=temp;
    rear=temp;
 }

}

void pop(){
    Node* temp;
    if(front==NULL){
        cout<<"UNDERFLOW"<<endl;
       
    }
    else{
        temp=front;
        front=front->next;
        free(temp);
    }

}
int peek(){
    if(front!=NULL){
    return front->data;
}
else{
    cout<<"\n";
    return -1;
}}

bool isEmpty(){
    if(front==rear==-1){
        return NULL;
    }
    else{
        return false;
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
