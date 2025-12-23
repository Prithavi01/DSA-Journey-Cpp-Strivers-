#include<bits/stdc++.h>
using namespace std;

int SumofN(int n){
    if(n==0){
      return 0;
    }
    return n+SumofN(n-1);
}

int main(){
    int n;
    cout<<"Enter N:";
    cin>>n;
    int result=SumofN(n);
    cout<<result;
}
//functional
//Time complexity :O(n)
