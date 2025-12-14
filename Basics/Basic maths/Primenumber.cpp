#include<bits/stdc++.h>
using namespace std;

void PrimeNumbers(int n){
    int factors=0;
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            factors++;
            if(n/i!=i) factors++;
        } 
    }
    if (n<=1||factors!=0) cout<<"Not Prime";
    else cout<<"Prime";
}

int main(){
    int n;
    cout<<"Enter N:";
    cin>>n;
    PrimeNumbers(n);
}