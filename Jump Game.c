bool canJump(int* nums, int numsSize) {
    int n = numsSize;
    int maxReach = 0;
    for (int i = 0; i < n; i++) {
        if (i > maxReach) 
            return false;
        maxReach = fmax(maxReach, i + nums[i]);
    }
    return true;
}
