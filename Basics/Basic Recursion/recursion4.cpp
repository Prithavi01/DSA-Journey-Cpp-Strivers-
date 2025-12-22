#include<bits/stdc++.h>
using namespace std;

void PrintNtimes(int i,int n){
    if(i<1) 
      return;
    PrintNtimes(i-1,n);
    cout<<i<<endl;
}

int main(){
    int n;
    cout<<"Enter N:";
    cin>>n;
    PrintNtimes(n,n);
}
//Used Backtracking concepts
//Time complexity :O(n)
//SPace complexity :O(n)