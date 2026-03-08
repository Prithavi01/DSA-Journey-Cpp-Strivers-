#include<bits/stdc++.h>
using namespace std;

vector<int> unionsort(vector<int>& a,vector<int>&b) {
        int n = a.size();
        int m = b.size();
        
        int i = 0, j = 0;
        vector<int> unionarr;

        while(i < n && j < m){
            if(a[i] <= b[j]){
                if(unionarr.size() == 0 || unionarr.back() != a[i]){
                    unionarr.push_back(a[i]);
                }
                i++;
            }
            else{
                if(unionarr.size() == 0 || unionarr.back() != b[j]){
                    unionarr.push_back(b[j]);
                }
                j++;
            }
        }

        while(j < m){
            if(unionarr.size() == 0 || unionarr.back() != b[j]){
                unionarr.push_back(b[j]);
            }
            j++;
        }

        while(i < n){
            if(unionarr.size() == 0 || unionarr.back() != a[i]){
                unionarr.push_back(a[i]);
            }
            i++;
        }

        return unionarr;

}

int main(){
    vector<int> nums1 = {1,2,3,3,4,5,6,6};
    vector<int> nums2 = {1,3,3,4,6};
    vector<int> k= unionsort(nums1,nums2);

    for(auto it:k){
        cout << it << " ";
    }
}