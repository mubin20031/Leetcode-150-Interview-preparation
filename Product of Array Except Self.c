/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* productExceptSelf(int* nums, int numsSize, int* returnSize) {
    int *ans = (int*)malloc(numsSize*sizeof(int));
    ans[0] = 1;
    for(int i = 1;i < numsSize;i++)
        ans[i] = ans[i-1] * nums[i-1];
    int suf= 1;
    for(int j = numsSize-1; j >= 0; j--){
        ans[j] *= suf;
        suf *= nums[j];
    }
    *returnSize = numsSize;
    return ans;
}
