#include<bits/stdc++.h>
using namespace std;

bool CheckArmstrong(int x){
        int sum=0;
        int count=to_string(x).length();
        int temp=x;
        while(temp!=0){
            int lastdigit=temp%10;
            sum+=round(pow(lastdigit,count));
            temp=temp/10;
        }
        return(x==sum)?true:false;
}

int main(){
    int x;
    bool result;
    cout<<"Enter N:";
    cin>>x;
    result=CheckArmstrong(x);
    cout<<boolalpha<<result;
}

//Time complexity=O(log10(N)+1)
//Whenever we have a division then the time complexity will be 
//log10(N) or division by 2 log2(N) etc..
