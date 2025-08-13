#include <stdio.h>
int majorityElement(int *nums, int numsSize)
{
    int x = 0, count = 0;
    for (int i = 0; i < numsSize; i++)
    {
        if (count == 0)
        {
            x = nums[i];
        }
        if (nums[i] == x)
        {
            count++;
        }
        else
        {
            count--;
        }
    }
    return x;
}

int main()
{
    int nums[] = {2, 2, 1, 1, 1, 2, 2};
    int n = sizeof(nums) / sizeof(nums[0]);

    int result = majorityElement(nums, n);
    printf("Majority Element: %d\n", result);

    return 0;
}
