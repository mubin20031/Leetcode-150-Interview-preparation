int trap(int* height, int heightSize) {
    if (heightSize == 0) return 0;
    
    int left = 0, right = heightSize - 1;
    int leftMax = 0, rightMax = 0;
    int waterTrapped = 0;
    
    while (left <= right) {
        if (height[left] <= height[right]) {
            if (height[left] >= leftMax) {
                leftMax = height[left];
            } else {
                waterTrapped += leftMax - height[left];
            }
            left++;
        } else {
            if (height[right] >= rightMax) {
                rightMax = height[right];
            } else {
                waterTrapped += rightMax - height[right];
            }
            right--;
        }
    }
    
    return waterTrapped;
}
