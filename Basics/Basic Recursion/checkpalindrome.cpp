#include<bits/stdc++.h>
using namespace std;

bool Palindrome(int start,string &str){
    if(start>=((int)str.length()/2)) return true;
    if(str[start]!=str[str.length()-start-1]) return false;
    return Palindrome(start+1,str);
}

int main(){
    string str;
    cout<<"Enter the string:"<<endl;
    cin>>str;
    for(int i=0;i<str.length();i++) str[i]=tolower(str[i]);
    cout<<boolalpha<<Palindrome(0,str);
}

//Time complexity :O(n/2)
