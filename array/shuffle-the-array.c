/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* shuffle(int* nums, int numsSize, int n, int* returnSize)
{
    *returnSize = numsSize;
    int *ans = (int*)malloc((numsSize)*(sizeof(int)));
    int j=0;
    for(int i = 0; i < n; i++)
    {
        ans[j] = nums[i];
        j++;
        ans[j] = nums[n+i];
        j++;
    }
    return ans;
}