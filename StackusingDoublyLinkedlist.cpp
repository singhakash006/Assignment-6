#include<bits/stdc++.h>
#include<stack>
using namespace std;
class Node
{
public:
int data;
Node* next;
Node* prev;


Node(int data){
this->data=data;
this->next=NULL;
this->prev=NULL;
}};
class Stack {
     public:
     Node* head;
    Node* top;
   
    Stack(int size){
        head=NULL;
        top=NULL;
    }
    bool isEmpty(){
    if(head==NULL){
        return true;
    }
    else{
        return false;
    }
}
void push(int data){
    Node* temp=new Node(data);
if(isEmpty())
    {temp->prev=NULL;
    temp->next=NULL;
    head=temp;
    top=temp;}

 else{
    temp->data=data;
    top->next=temp;
    temp->next=NULL;
    temp->prev=top;

    top=temp;
 }

}

void pop(){
    Node* temp;
    if(isEmpty()){
        cout<<"UNDERFLOW"<<endl;}
       else if(top==head){
        top=NULL;
        head=NULL;
        free(temp);
       }
    
    else{
        top->prev->next=NULL;
        top=temp->prev;
        free(temp);
    }

}
int peek(){
    if(isEmpty()){
    return 0;
}
else{
   
    return top->data;
}}


void display(){
    Node*temp;
    if(isEmpty()){
    cout<<"underflow"<<endl;
}
else{
    temp=top;
    while(temp!=NULL){
        cout<<temp->data;
       temp= temp->next;
      
       if(temp!=NULL){
        cout<<"->";
       }
    }
}

}};

int main(){
Stack st(5);
int element;
for(int i=0;i<5;i++){
    cout<<"enter"<<endl;
    cin>>element;
    st.push(element);
}
cout<<st.isEmpty()<<endl;
cout<<st.peek()<<endl;
st.pop();
st.display();
    return 0;
}
