Problem link: [🖇️](https://leetcode.com/problems/two-sum/)

### Naive Solution ###
We will use a brute force approach to solve this problem. We will initialise two loops and run them in a nested manner. The outer loop will run from i=0 to i=nums.size()-1 and the inner loop will run from j=i+1 to j=nums.size(). We will check if the sum of the elements at index i and j is equal to the target. If it is, we will return the indices i and j. If not, we will continue the loop. The time complexity of this solution is O(n^2) and the space complexity is O(1).<br>
Steps:
<ol>
    <li>Initialise a loop to run from i=0 to i=nums.size()-1</li>
    <li>Initialise another loop to run from j=i+1 to j=nums.size()</li>
    <li>For every i, j pair in the array, check if nums[i]+nums[j]==target. If it is, return {i,j}. If not, continue the loop.</li>
    <li>If after all the iterations, we do not find the indices, we should ideally return an empty vector, but in the problem statement, it is mentioned that there will always be a solution, so we will not be returning an empty vector.</li>
</ol>

```cpp
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
            // bruteforce
        for(int i=0;i<nums.size()-1;i++){
            for(int j=i+1;j<nums.size();j++){
                if (nums[i]+nums[j]==target){
                    return {i,j};
                }
            }
        }
    }
};
```

### Optimised Solution ###
We will use a hashmap to solve this problem. We will initialise a hashmap and run a loop from i=0 to i=nums.size()-1. For every iteration, we will check if the difference between the target and the element at index i is present in the hashmap. If it is, we will return the indices of the element at index i and the element in the hashmap. If not, we will insert the element at index i in the hashmap. The time complexity of this solution is O(n) and the space complexity is O(n).<br>
Steps:
<ol>
    <li>Initialise a hashmap</li>
    <li>Initialise a loop to run from i=0 to i=nums.size()-1</li>
    <li>For every i, check if the difference between the target and the element at index i is present in the hashmap. If it is, return {i,hashmap[target-nums[i]]}. If not, insert the element at index i in the hashmap.</li>
    <li>If after all the iterations, we do not find the indices, we should ideally return an empty vector, but in the problem statement, it is mentioned that there will always be a solution, so we will not be returning an empty vector.</li>
</ol>

```cpp
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> m;
        for(int i=0;i<nums.size();i++){
            if(m.find(target-nums[i])!=m.end()){
                return {i,m[target-nums[i]]};
            }
            m[nums[i]]=i;
        }
    }
};
```
    
