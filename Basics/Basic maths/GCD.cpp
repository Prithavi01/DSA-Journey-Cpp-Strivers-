#include<bits/stdc++.h>
using namespace std;

void Findgcd(int n,int m){
    int gcd=1;
    for(int i=min(n,m);i>=1;i--){
        if(n%i==0 && m%i==0){
            gcd=i;
        } 
    }
    cout<<"The gcd of m and n is:"<<gcd;
}

int main(){
    int n,m;
    cout<<"Enter the values of n and m:";
    cin>>n;
    cin>>m;
    Findgcd(n,m);
}