#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int row;
    cout<<"Input the number of rows: ";
    cin>>row;
    int column;
    cout<<"Input the number of columns: ";
    cin>>column;

    for(int i=1;i<=row;i++){
        for(int j=1;j<=column;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}