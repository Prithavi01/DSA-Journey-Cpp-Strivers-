#include<bits/stdc++.h>
using namespace std;

int Factorial(int n){
    if(n==1){
      return 1;
    }
    return n*Factorial(n-1);
}

int main(){
    int n;
    cout<<"Enter N:";
    cin>>n;
    cout<<Factorial(n);
}
//Functional
//Time complexity :O(n)
//SPace complexity :O(n)