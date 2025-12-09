#include<bits/stdc++.h>
using namespace std;

void printstar(int n){
    for(int i=1;i<=n;i++){
        char alpha='A';
        for(int j=1;j<=n-i+1;j++){
            cout<<alpha<<" ";
            alpha++;
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