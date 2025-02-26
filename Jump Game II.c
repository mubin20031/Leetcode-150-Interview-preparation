int jump(int* nums, int numsSize) {
    int n = numsSize;
        if(n == 1)
            return 0;
        if(nums[0] >= n-1)
            return 1;
        int res = 0, maxi = 0, curr = 0;
        for(int i = 0; i < n; i++){
            maxi = fmax(maxi, (i + nums[i]));
            if(i == curr){
                res++;
                curr=maxi;
            }
            if(curr>=n-1)
                break;
        }
        return res;
}
