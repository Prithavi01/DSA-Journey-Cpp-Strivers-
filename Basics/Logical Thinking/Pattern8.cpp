#include<bits/stdc++.h>
using namespace std;

void printstar(int n){
    for(int i=0;i<=n-1;i++){
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        for(int k=1;k<=(n*2)-(i*2+1);k++){
            cout<<"*";
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cout<<"Enter n:";
    cin>>n;
    printstar(n);
    return 0;
}