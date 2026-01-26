#include<bits/stdc++.h>
using namespace std;
 
void Bubblesort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int didswap=0;
        for(int j=0;j<n-i;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                didswap=1;
            }
        }
        if(didswap==0) break;
    }
}

int main(){
    int n;
    cout<<"Enter n:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    Bubblesort(arr,n);
    cout<<"Sorted array:";
    for(int i=0;i<=n-1;i++) cout<<arr[i]<<" ";
}

/*Time complexity=O(n^2)*/