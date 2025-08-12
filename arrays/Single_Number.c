#include <stdio.h>

int singleNumber(int *nums, int numsSize)
{
    int result = 0;
    for (int i = 0; i < numsSize; i++)
    {
        result ^= nums[i];
    }
    return result;
}

int main()
{
    int nums[] = {4, 1, 2, 1, 2};
    int size = sizeof(nums) / sizeof(nums[0]);

    printf("%d\n", singleNumber(nums, size));
    return 0;
}
