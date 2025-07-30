#include <stdio.h>
#include <conio.h>
// Declaration of 2d array
int main(){
    int arr[4][4], i, j, p;
    printf("Enter the 2d array elements:");
    for (i=0; i<4; i++){
        for (j=0; j<4; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    printf("Your array is:\n");
    // searching an element in 2d array
    int flag=0;
    printf("Enter the number to be searched: ");
    scanf("%d", &p);
    for (i=0; i<4; i++){
        for (j=0; j<4; j++){
            if (arr[i][j]==p){
                flag=1;
                break;
            }else{
                flag=0;
            }
        }
    }
    if (flag==1){
    printf("\nThe number exist in the array");
    }else{
        printf("\n The number does not exist in the array");
    }
}