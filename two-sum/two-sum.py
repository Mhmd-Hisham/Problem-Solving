class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        lookup_table = dict()
        for i, n in enumerate(nums):
            lookup_table[n] = lookup_table.get(n, [])
            lookup_table[n].append(i)
        
        for i, n in enumerate(nums):
            value = target-n
            
            lookup_table[n].remove(i)
            
            if lookup_table.get(value, []):
                return i, lookup_table[value][-1]

            lookup_table[n].append(i)
