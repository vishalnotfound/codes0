#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    void solve(vector<int>& nums, vector<vector<int>>& ans, int index){
        
        // basee case 
        // when index become greater than nums.size then add that in ans every time 
        if(index >= nums.size() ){
            ans.push_back(nums);
          
                    }

                    //condt.
                    for(int j = index; j < nums.size(); j++){
                        swap(nums[index], nums[j]); // to give every index a chance 
                        solve(nums, ans, index+1); //index is turned next 

                        swap(nums[index], nums[j]); //backtrack   to turn back the array same as defalut for next permutation
                    }
    }
    vector<vector<int>> permute(vector<int>& nums) {
       vector<vector<int>> ans; //will return this 
       int index = 0;
        solve(nums, ans, index);
        return ans; 
    }
};

int main()
{
    
    return 0;
}