#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
#include <string.h>
bool isPalindrome(char *s)
{
    int l = 0;
    int r = strlen(s) - 1;
    while (l < r)
    {
        while (l < r && !isalnum((unsigned char)s[l]))
            l++;
        while (l < r && !isalnum((unsigned char)s[r]))
            r--;
        if (tolower((unsigned char)s[l]) != tolower((unsigned char)s[r]))
        {
            return 0;
        }
        l++;
        r--;
    }
    return 1;
}
int main()
{
    char s1[] = "A man, a plan, a canal: Panama";
    char s2[] = "race a car";
    char s3[] = " ";

    printf("\"%s\" -> %s\n", s1, isPalindrome(s1) ? "true" : "false");
    printf("\"%s\" -> %s\n", s2, isPalindrome(s2) ? "true" : "false");
    printf("\"%s\" -> %s\n", s3, isPalindrome(s3) ? "true" : "false");

    return 0;
}