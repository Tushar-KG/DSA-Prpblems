#include <stdio.h>
#include <stdlib.h>

int *productExceptSelf(int *nums, int numsSize, int *returnSize)
{
    *returnSize = numsSize;
    int *answer = (int *)malloc(numsSize * sizeof(int));

    answer[0] = 1;
    for (int i = 1; i < numsSize; i++)
    {
        answer[i] = answer[i - 1] * nums[i - 1];
    }
    int temp = 1;
    for (int i = numsSize - 1; i >= 0; i--)
    {
        answer[i] *= temp;
        temp *= nums[i];
    }
    return answer;
}

int main()
{
    int nums[] = {1, 2, 3, 4};
    int numsSize = sizeof(nums) / sizeof(nums[0]);
    int returnSize;

    int *result = productExceptSelf(nums, numsSize, &returnSize);

    printf("Output: [");
    for (int i = 0; i < returnSize; i++)
    {
        printf("%d", result[i]);
        if (i < returnSize - 1)
            printf(", ");
    }
    printf("]\n");

    free(result);

    return 0;
}
