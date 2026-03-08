#include<bits/stdc++.h>
using namespace std;

vector<int> movezeros(vector<int>& nums) {
        int j=-1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                j=i;
                break;
            }
        }
        if(j!=-1){
            for(int i=j+1;i<nums.size();i++){
            if(nums[i]!=0){
                int temp=nums[i];
                nums[i]=nums[j];
                nums[j]=temp;
                j++;
            }
        }
        }
        return nums;

}

int main(){
    vector<int> nums = {1,2,0,4,3,0,5,0};

    vector<int> k= movezeros(nums);

    for(auto it:k){
        cout << it << " ";
    }
}