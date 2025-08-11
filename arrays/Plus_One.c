#include <stdio.h>
#include <stdlib.h>

int *plusOne(int *digits, int digitsSize, int *returnSize)
{
    for (int i = digitsSize - 1; i >= 0; i--)
    {
        if (digits[i] < 9)
        {
            digits[i]++;
            *returnSize = digitsSize;
            int *res = malloc(digitsSize * sizeof(int));
            for (int j = 0; j < digitsSize; j++)
            {
                res[j] = digits[j];
            }
            return res;
        }
        digits[i] = 0;
    }

    *returnSize = digitsSize + 1;
    int *res = malloc((digitsSize + 1) * sizeof(int));
    res[0] = 1;
    for (int i = 1; i <= digitsSize; i++)
    {
        res[i] = 0;
    }
    return res;
}

int main()
{
    int digits[] = {9, 9, 9};
    int size = sizeof(digits) / sizeof(digits[0]);
    int returnSize;

    int *result = plusOne(digits, size, &returnSize);

    printf("Result: ");
    for (int i = 0; i < returnSize; i++)
    {
        printf("%d", result[i]);
        if (i < returnSize - 1)
            printf(",");
    }
    printf("\n");

    free(result);
    return 0;
}
