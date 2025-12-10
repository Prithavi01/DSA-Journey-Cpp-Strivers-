#include<bits/stdc++.h>
using namespace std;

void printstar(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++) cout<<"* ";
        for(int k=1;k<=(n*2)-(i*2);k++) cout<<"  ";
        for(int v=1;v<=i;v++) cout<<"* ";
        cout<<endl;
    }
    for(int l=1;l<=n-1;l++){
        for(int j=1;j<=n-l;j++) cout<<"* ";
        for(int k=1;k<=l*2;k++) cout<<"  ";
        for(int v=1;v<=n-l;v++) cout<<"* ";
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