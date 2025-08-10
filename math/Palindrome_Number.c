#include <stdio.h>
#include <stdbool.h>

bool isPalindrome(int x)
{
    if (x < 0 || (x % 10 == 0 && x != 0))
        return false;

    int reversedHalf = 0;

    while (x > reversedHalf)
    {
        reversedHalf = reversedHalf * 10 + x % 10;
        x /= 10;
    }

    return (x == reversedHalf || x == reversedHalf / 10);
}

int main()
{
    int nums[] = {121, -121, 10, 12321, 0};
    int size = sizeof(nums) / sizeof(nums[0]);

    for (int i = 0; i < size; i++)
    {
        printf("Is %d a palindrome? %s\n", nums[i],
               isPalindrome(nums[i]) ? "true" : "false");
    }

    return 0;
}
