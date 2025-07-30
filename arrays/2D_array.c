#include <stdio.h>
#include <conio.h>

int main(){
    int arr[4][4], i, j, p;
    // Declaration of 2d array
    printf("Enter the 2d array elements:");
    for (i=0; i<4; i++){
        for (j=0; j<4; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    // printing original matrix
    printf("Your array is:\n");
    for (i=0; i<4; i++){
        for (j=0; j<4; j++){
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
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
        printf("\nThe number does not exist in the array");
    }
}