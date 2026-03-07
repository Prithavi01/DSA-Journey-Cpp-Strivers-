#include<bits/stdc++.h>
using namespace std;

int remdup(vector<int>& nums) {
    int j = 0;

    for(int i = 1; i < nums.size(); i++){
        if(nums[i] != nums[j]){
            nums[j+1] = nums[i];
            j++;
        }
    }

    return j + 1;
}

int main(){
    vector<int> nums = {0,1,1,2,2,2,3,3,4,5};

    int k = remdup(nums);

    for(int i = 0; i < k; i++){
        cout << nums[i] << " ";
    }
}