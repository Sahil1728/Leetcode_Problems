class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
            // bruteforce
        // for(int i=0;i<nums.size()-1;i++){
        //     for(int j=i+1;j<nums.size();j++){
        //         if (nums[i]+nums[j]==target){
        //             return {i,j};
        //         }
        //     }
        // }
        

            // map
        unordered_map<int, int> mp;
        for(int i = 0; i < nums.size(); i++){
            if(mp.find(target - nums[i]) == mp.end())
                mp[nums[i]] = i;
            else
                return {mp[target - nums[i]], i};
        }
    }
};
