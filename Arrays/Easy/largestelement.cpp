#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter n:";
    cin>>n;
    int nums[n];
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    int large=nums[0];
    for(int i=1;i<=n-1;i++){
        if(nums[i]>large) large=nums[i];
    }
    cout<<large;
}