#include<bits/stdc++.h>
using namespace std;

void Printdivisors(int n){
    vector<int>arr;
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            arr.push_back(i);
            if(n/i!=i) arr.push_back(n/i);
        } 
    }
    sort(arr.begin(),arr.end());
    for(auto it:arr) {
        cout<<(it)<<" ";
    }
}

int main(){
    int n;
    cout<<"Enter N:";
    cin>>n;
    Printdivisors(n);
}