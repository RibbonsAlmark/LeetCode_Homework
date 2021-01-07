#include <malloc.h>
/*
Knowledge points:
1.Time complexity
2.Space complexity
3.hashtable
4.c build in method: malloc
*/

/*
Solution 1 - (best practice)simply traverse
Time complexity: O(N^2)
Space complexity: O(1)
*/
int * twoSum(int* nums, int numSize, int target, int* returnSize) {
  for (int i = 0; i <= numSize; ++i) {
    for (int j = i + 1; j <= numSize; ++j) {
      if (num[i] + num[j] == target) {
        int* ret = malloc(sizeof(int) * 2);
        ret[0] = i, ret[1] = j;
        *returnSize = 2; // why i need it ?
        return ret;
      }
    }
  }
}


/*
Solution 2 - (best practice)with hashtable
Time complexity: O(N)
Space complexity: O(N)
*/
