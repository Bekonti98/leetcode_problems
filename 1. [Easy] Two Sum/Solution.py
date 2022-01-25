class Solution(object):
  def twoSum(self, nums, target):

    complementMap = dict()

    for i in range(len(nums)):
      num = nums[i]
      complement = target - num
      
      if num in complementMap:
        return [complementMap[num], i]
      else:
          complementMap[complement] = i