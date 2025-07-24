class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();

        for(int i = 0; i < n; i++) {
            int count = 1;

            for(int j = i + 1; j < n; j++) {
                if(nums[i] == nums[j]) {
                    count++;
                }
            }

            if(count > n / 2) {
                return nums[i];  // return as soon as majority is found
            }
        }

        return -1;  // shouldn't reach here as per problem constraints
    }
};
