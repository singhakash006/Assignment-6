#include<bits/stdc++.h>
#include<stack>
using namespace std;
class Stack
{

int *arr;
int top;
int size;
public:
Stack(int size){
this->size=size;
arr=new int[size];
top = -1;
}

void push(int element){
if(top > size-1){
  
      cout<<"OVERFLOW"<<endl;
 

}
else{
    top++;
    arr[top]=element;
}
}

void pop(){
    if(top ==-1){
        cout<<"UNDERFLOW"<<endl;
       
    }
    else{
        top--;
    }

}
int peek(){
    if(top!=-1){
    return arr[top];
}
else{
    cout<<"\n";
    return -1;
}}

bool isEmpty(){
    if(top==-1){
        return true;
    }
    else{
        return false;
    }
}

};

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
while(!st.isEmpty()){
    cout<<st.peek()<<endl;
    st.pop();
   
}

/*stack<int>s;
//Pushing element in stack
s.push(4);
s.push(5);
// Removing element in stack
s.pop();


//Top element of the stack
cout<<"Top element"<<s.top()<<endl;

if(s.empty()){
    cout<<"empty"<<endl;
}
else{
    cout<<"not empty"<<endl;
}

*/


    return 0;
}
