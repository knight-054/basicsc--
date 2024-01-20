#include<bits/stdc++.h>
using namespace std;


int main(){
    float n1,n2;
    cout<<"Input two numbers: "<<endl;
    cin>>n1>>n2;

    char op;
    cout<<"Input an operator: ";
    cin>>op;

    switch (op)
    {
    case '+':
      cout<<"The result is: "<<n1 + n2<<endl;
      break;

    case '-':
      cout<<"The result is: "<<n1-n2<<endl;
      break;

    case '*':
      cout<<"The result is: "<<n1*n2<<endl;
      break;

    case '/':
      cout<<"The result is: "<<n1/n2<<endl;
      break;

    default:
      cout<<"Enter another operator: "<<endl;
      break;

}      

}