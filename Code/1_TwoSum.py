class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
            #bruteforce
        for i in range(len(nums)-1):
            for j in range(i+1,len(nums)):
                if nums[i]+nums[j]==target:
                    return [i,j]
        
          # map
        hmap = {}
        for i in range(len(nums)):
            complement = target-nums[i]
            if complement in hmap:
                return [i, hmap[complement]]
            hmap[nums[i]] = i
