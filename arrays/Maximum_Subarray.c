int maxSubArray(int* nums, int numsSize) {
    int cur_sum = nums[0];
    int max = nums[0];

    for (int i = 1; i < numsSize; i++)
    {
        if (cur_sum < 0)
            cur_sum = nums[i];
        else
            cur_sum += nums[i];
        if (cur_sum > max)
            max = cur_sum;
    }

    return max;
}

int main() {
    // Test case: example input
    int nums[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int numsSize = sizeof(nums) / sizeof(nums[0]);

    int maxSum = maxSubArray(nums, numsSize);
    printf("Maximum Subarray Sum: %d\n", maxSum);

    return 0;
}