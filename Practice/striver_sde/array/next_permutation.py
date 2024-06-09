from itertools import permutations
class Solution:
    def nextPermutation(self, nums: List[int]) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """

        ## handle the case in which the permutation is largest and thus the output should be the smallest permutation

        index = -1
        print("original nums", nums)
        for i in range(len(nums) - 2, -1, -1):
            if nums[i] < nums[i+1]:
                index = i
                break
        print("index", index)
        if index == -1:
            for i in range(len(nums) - 1):
                if i > len(nums) -i -1:
                    break
                current_num = nums[i]
                nums[i] = nums[len(nums) - i - 1]
                nums[len(nums) -1 - i] = current_num
            return
        
        
        ## now we have the index, find the next biggest element from the current index and swap the two values

        current_diff = 100000000
        current_max_index = -1
        for i in range(index + 1, len(nums)):
            if nums[i] > nums[index] and abs(nums[i] - nums[index]) <= current_diff:
                current_diff = abs(nums[i] - nums[index])
                current_max_index = i
        ## swap
        index_number = nums[index]
        nums[index] = nums[current_max_index]
        nums[current_max_index] = index_number
        
        print("nums after swap", nums)
        ## now reverse the list after the index in sorted order so that the number is smallest
        ## one thing to observe is the sub list is already in descending order, thats what the first check was for, thus we can simple reverse the list.
        for idx, i in enumerate(range(index + 1, len(nums) - 1)):
            if(i > len(nums) - idx - 1):
                break
            current_num = nums[i]
            nums[i] = nums[len(nums) - idx - 1]
            nums[len(nums) -1 - idx] = current_num


        ## solution with extra memory:
        # permutations_ = list(permutations(nums))    
        # for idx, i in enumerate(permutations_):
        #     permutations_[idx] = "".join([str(x) for x in i])
        # permutations_ = sorted(list(set(permutations_)))
        # permutations_ = [[int(y) for y in str(x)] for x in permutations_]
        
        # for idx, i in enumerate(permutations_):
        #     if list(i) == nums:
        #         index = idx
        #         break
        
        # if index == len(permutations_) - 1:
        #     nums1 = list(permutations_[0])
        #     for i in range(len(nums)):
        #         nums[i] = nums1[i]
        # else:
        #     nums1 = list(permutations_[index + 1])
        #     for i in range(len(nums)):
        #         nums[i] = nums1[i]
