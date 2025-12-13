#include<bits/stdc++.h>
using namespace std;

bool Palindrome(int x){
        int check=0;
        int temp=x;
        if (x<0)return false;
        while(temp!=0){
            int lastdigit=temp%10;
            if(check>INT_MAX/10||(check==INT_MAX/10 &&lastdigit>7)) return false;
            check=(check*10)+lastdigit;
            temp=temp/10;
        }
        return(x==check)?true:false;
}

int main(){
    int x;
    bool result;
    cout<<"Enter N:";
    cin>>x;
    result=Palindrome(x);
    cout<<boolalpha<<result;
    return 0;
}

//Time complexity=O(log10(N)+1)
//Whenever we have a division then the time complexity will be 
//log10(N) or division by 2 log2(N) etc..
