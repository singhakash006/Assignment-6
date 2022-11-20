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
class Stack {
     public:
    Node* top;
   
    Stack(int size){
        top=NULL;
    }
void push(int data){
    Node* temp=new Node(data);
if(temp==NULL){
      cout<<"OVERFLOW"<<endl;}
 else{
    temp->data=data;
    temp->next=top;
    top=temp;
 }

}

void pop(){
    Node* temp;
    if(top ==NULL){
        cout<<"UNDERFLOW"<<endl;
       
    }
    else{
        temp=top;
        top->next=top;
        free(temp);
    }

}
int peek(){
    if(top!=NULL){
    return top->data;
}
else{
    cout<<"\n";
    return -1;
}}

bool isEmpty(){
    if(top==NULL){
        return NULL;
    }
    else{
        return false;
    }
}
void display(){
    Node*temp;
    if(top==NULL){
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
st.display();
    return 0;
}
