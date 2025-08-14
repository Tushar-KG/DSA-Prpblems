#include <stdio.h>
#include <stdbool.h>
int numOfUnplacedFruits(int *fruits, int fruitsSize, int *baskets, int basketsSize)
{
    bool used[101] = {false};
    int unplaced = 0;

    for (int i = 0; i < fruitsSize; i++)
    {
        bool placed = false;
        for (int j = 0; j < basketsSize; j++)
        {
            if (!used[j] && baskets[j] >= fruits[i])
            {
                used[j] = true;
                placed = true;
                break;
            }
        }
        if (!placed)
        {
            unplaced++;
        }
    }
    return unplaced;
}

int main()
{
    int fruits[] = {4, 2, 5};
    int baskets[] = {3, 5, 4};
    printf("%d\n", numOfUnplacedFruits(fruits, 3, baskets, 3));

    int fruits2[] = {3, 6, 1};
    int baskets2[] = {6, 4, 7};
    printf("%d\n", numOfUnplacedFruits(fruits2, 3, baskets2, 3));

    return 0;
}
