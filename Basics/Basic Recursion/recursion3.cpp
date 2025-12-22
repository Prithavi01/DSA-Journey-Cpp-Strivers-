#include<bits/stdc++.h>
using namespace std;

void PrintNtimes(int i,int n){
    if(i<1) return;
    else{
        cout<<i<<endl;
        PrintNtimes(i-1,n);
    }
}

int main(){
    int n;
    cout<<"Enter N:";
    cin>>n;
    PrintNtimes(n,n);
}

//Time complexity :O(n)
//SPace complexity :O(n)