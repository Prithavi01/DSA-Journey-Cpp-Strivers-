#include<bits/stdc++.h>
using namespace std;

void printstar(int n){
    for(int i=0;i<=n-1;i++){
        for(int j=0;j<=n-1;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cout<<"Enter n:"<<endl;
    cin>>n;
    printstar(n);
    return 0;
}