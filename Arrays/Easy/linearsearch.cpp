#include<bits/stdc++.h>
using namespace std;

int linearsearch(vector<int>& nums,int x) {
       for(int i=0;i<nums.size();i++){
            if(nums[i]==x){
                return i;
                break;
            }
        }
        return -1;
}

int main(){
    vector<int> nums = {1,6,8,5,4,2};
    cout<<linearsearch(nums,4);
}