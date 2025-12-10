#include<bits/stdc++.h>
using namespace std;

void printstar(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        char alpha='A'-1;
        int breakpoint=i;
        for(int k=1;k<=((2*i)-1);k++){
            if(k<=breakpoint) alpha++;
            else alpha--;
            cout<<alpha;
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