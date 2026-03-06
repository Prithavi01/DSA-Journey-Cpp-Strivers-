#include<bits/stdc++.h>
using namespace std;

bool checksorted(vector<int>& nums) {
        int count = 0;
        int n = nums.size();

        for(int i = 0; i < n; i++) {
            if(nums[i] > nums[(i + 1) % n]) {
                count++;
            }
        }

        return count <= 1;
    }



int main(){
    vector<int> arr={2,4,2,1,7,6};
    cout<<checksorted(arr);
}