#include <stdio.h>
#include <time.h>

int maxArea(int* height, int heightSize) {
    int maxArea = 0;
    for (int i = 0; i < heightSize; i++) {
        for (int j = i + 1; j < heightSize; j++) {
            int minHeight = (height[i] < height[j]) ? height[i] : height[j];
            int width = j - i;
            int currentArea = minHeight * width;
            if (currentArea > maxArea) {
                maxArea = currentArea;
            }
        }
    }
    return maxArea;
}
int maxArea(int* height, int heightSize) {
    int l = 0, r = heightSize - 1;
    int maxArea = 0;

    while (l < r) {
        int minimum = (height[l] < height[r]) ? height[l] : height[r];
        int currentArea = (r - l) * minimum;
        if (currentArea > maxArea) {
            maxArea = currentArea;
        }
        if (height[l] < height[r]) {
            l++;
        } else {
            r--;
        }
    }

    return maxArea;
}



int main() {
    int height[] = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    int heightSize = sizeof(height) / sizeof(height[0]);

    clock_t start, end;
    double cpu_time_used;

    start = clock();
    int result = maxArea(height, heightSize);
    end = clock();

    cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;

    printf("The maximum water area is: %d\n", result);
    printf("Execution time: %f seconds\n", cpu_time_used);

    return 0;
}
