#include<bits/stdc++.h>
using namespace std;

void printstar(int n){
    for(int i=1;i<=n;i++){
        int start=i;
        for(int j=1;j<=n*2;j++){
            if(j>i){
                if(j<(n*2)-(i-1)) cout<<" ";
                else{
                    cout<<start;
                    start=start-1;
                }
            }
            else cout<<j;
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