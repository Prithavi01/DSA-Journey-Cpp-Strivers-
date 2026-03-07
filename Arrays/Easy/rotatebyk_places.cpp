#include<bits/stdc++.h>
using namespace std;

vector<int> leftrotatebykplace(vector<int>& nums,int k) {
        int n = nums.size();
        k = k % n;

        reverse(nums.begin(), nums.end());
        reverse(nums.begin(), nums.begin() + k);
        reverse(nums.begin() + k, nums.end());
        return nums;

}

int main(){
    vector<int> nums = {1,6,8,5,4,2};

    vector<int> k= leftrotatebykplace(nums,4);

    for(auto it:k){
        cout << it << " ";
    }
}