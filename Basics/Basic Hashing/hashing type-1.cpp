#include<bits/stdc++.h>
using namespace std;
int main(){
    int sizearr,time;
    cout<<"Enter the size of the array:";
    cin>>sizearr;
    int arr1[sizearr];
    cout<<"Enter array elements:\n";
    for(int i=0;i<sizearr;i++){
        cin>>arr1[i];
    }
    int hash_a[100001]={0};
    for(int i=0;i<sizearr;i++){
        hash_a[arr1[i]]+=1;
    }

    cout<<"How many times you want to query?:";
    cin>>time;

    for(int i=0;i<time;i++){
        int num;
        cout<<"Enter the number you want to search:";
        cin>>num;
        cout<<"The number of times "<<num<<" occurs:"; 
        cout<<hash_a[num]<<endl;
    }
    return 0;
}