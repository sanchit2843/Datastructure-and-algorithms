# https://leetcode.com/problems/pascals-triangle/
class Solution:
    def generate(self, numRows: int) -> List[List[int]]:
        pascal_triangle = []
        for i in range(1, numRows+1):
            sub_list = []
            sub_list_len = i
            if i > 2:
                prev_sub_list = pascal_triangle[-1]
            for j in range(sub_list_len):
                if j == 0 or j == sub_list_len -1:
                    sub_list.append(1)
                    continue
                else:
                    sub_list.append(prev_sub_list[j-1] + prev_sub_list[j])
            pascal_triangle.append(sub_list)
        return pascal_triangle
