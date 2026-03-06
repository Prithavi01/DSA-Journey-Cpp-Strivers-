#include<bits/stdc++.h>
using namespace std;


int secondlarge(vector<int> &arr) {
        int flarge=arr[0];
        int slarge=-1;
        for(int i=1;i<arr.size();i++){
            if(arr[i]>flarge){
                slarge=flarge;
                flarge=arr[i];
            }
            else if(arr[i]!=flarge&& arr[i]>slarge) slarge=arr[i];
        }
        cout<<slarge<<endl;
    }
void secondsmall(vector<int>&arr){
    int firstsmall=arr[0],secondsmall=INT_MAX;
    for(int i=1;i<=arr.size();i++){
        if(arr[i]<firstsmall){
            secondsmall=firstsmall;
            firstsmall=arr[i];
        }
        else if(arr[i]!=firstsmall && arr[i]<secondsmall){
            secondsmall=arr[i];
        }
    }
    cout<<secondsmall<<endl;
}


int main(){
    vector<int> arr={2,4,2,1,7,6};
    secondsmall(arr);
    secondlarge(arr);
}