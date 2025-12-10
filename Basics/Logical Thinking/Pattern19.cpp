#include<bits/stdc++.h>
using namespace std;

void printstar(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i+1;j++) cout<<"*";
        for(int k=0;k<i*2-2;k++) cout<<" ";
        for(int v=1;v<=n-i+1;v++) cout<<"*";
        cout<<endl;
    }
    for(int l=1;l<=n;l++){
        for(int j=1;j<=l;j++) cout<<"*";
        for(int k=1;k<=(n*2)-(l*2);k++) cout<<" ";
        for(int v=1;v<=l;v++) cout<<"*";
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