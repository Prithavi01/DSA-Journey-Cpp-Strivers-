#include<bits/stdc++.h>
using namespace std;

void SumofN(int i,int sum){
    if(i<1){
      cout<<sum;
      return;
    }
    SumofN(i-1,sum+i);
}

int main(){
    int n;
    cout<<"Enter N:";
    cin>>n;
    SumofN(n,0);
}
//Parametrized
//Time complexity :O(n)
//SPace complexity :O(n)