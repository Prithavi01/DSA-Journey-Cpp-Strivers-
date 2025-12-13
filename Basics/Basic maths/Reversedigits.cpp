#include<bits/stdc++.h>
using namespace std;

void reversedigits(int N){
    int revNum=0;
    while(N>0){
        int lastdigit=N%10;
        N=N/10;
        revNum=(revNum*10)+lastdigit;
    }
    cout<<"The reverse of digits:"<<revNum;
}

int main(){
    int N;
    cout<<"Enter N:";
    cin>>N;
    reversedigits(N);
}

//Time complexity=O(log10(N)+1)
//Whenever we have a division then the time complexity will be 
//log10(N) or division by 2 log2(N) etc..
