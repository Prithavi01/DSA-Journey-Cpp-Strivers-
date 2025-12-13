#include<bits/stdc++.h>
using namespace std;

void countDigits(int N){
    int count=0;
    while(N>0){
        N=N/10;
        count++;
    }
    cout<<"The number of digits:"<<count;
}

int main(){
    int N;
    cout<<"Enter N:";
    cin>>N;
    countDigits(N);
}

//Time complexity=O(log10(N))
//Whenever we have a division then the time complexity will be 
//log10(N) or division by 2 log2(N) etc..
