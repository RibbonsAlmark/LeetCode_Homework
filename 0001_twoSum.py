"""
Knowledge points:
1.Time complexity
2.Space complexity
3.hashtable
4.python build in method: enumerate
"""

"""
Solution 1 - (best practice)simply traverse
Time complexity: O(N^2)
Space complexity: O(1)
"""
def twoSum_1(nums, target):
  list_len = len(target)
  for i in range(list_len):
    for j in range(list_len -i -1):
      j_index = j + i + 1
      if nums[i] + nums[j_index] == target:
        return [i, j_index]
  return
      

"""
Solution 2 - (best practice)with hashtable
Time complexity: O(N)
Space complexity: O(N)
"""
def twoSum_2(nums, target):
  hashtable = {}
  for i, num in nums:
    if target - num in hashtable:
      return[i, hashtable[target - num]]
    hashtable[num] = i
  return
