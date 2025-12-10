#include<bits/stdc++.h>
using namespace std;

void printstar(int n){
    char startalpha='A'+(n);
    for(int i=1;i<=n;i++){
        startalpha=startalpha-1;
        char printalpha=startalpha;
        for(int k=1;k<=i;k++){
            cout<<printalpha<<" ";
            printalpha++;
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