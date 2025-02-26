void rotate(int* nums, int numsSize, int k) {
    k = k % numsSize;
    int arr[numsSize], ind = 0;
    for(int i = numsSize-k; i < numsSize; i++)
    {
        arr[ind++] = nums[i];
    }
    for(int i = 0; i < numsSize-k; i++)
    {
        arr[ind++] = nums[i];
    }
    for(int i = 0; i < numsSize; i++) 
        nums[i]=arr[i];
}
