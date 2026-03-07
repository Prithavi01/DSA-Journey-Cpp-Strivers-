#include<bits/stdc++.h>
using namespace std;

vector<int> leftrotatebyone(vector<int>& nums) {
    int temp=nums[0];
    int n=nums.size();
    for(int i=1;i<n;i++)
        nums[i-1]=nums[i];
    nums[n-1]=temp;

    return nums;
}

int main(){
    vector<int> nums = {1,6,8,5};

    vector<int> k= leftrotatebyone(nums);

    for(auto it:k){
        cout << it << " ";
    }
}