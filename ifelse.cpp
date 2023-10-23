#include <bits/stdc++.h>
using namespace std;


int main(){
    int savings;
    cin>>savings;

    if(savings>5000) {
        if(savings>10000) {
            cout<<"Roadtrip with Neha\n";
        } else {
            cout<<"Shopping with Neha\n";
        }
    } else if (savings>2000) {
        cout<<"Shopping with Rashmi\n";
    } else {
        cout<<"Party with friends\n";
    }
}