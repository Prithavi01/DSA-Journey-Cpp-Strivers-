#include<bits/stdc++.h>
using namespace std;

void printstar(int n){
    int count=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<count;
            count++;
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