// WAP to compute the summition of the difference between the square root of 
//every consiquitive pari of numbers in an array

#include <stdio.h>
#include <math.h>

int main(){
    int Arr[25],i,n;
    float sum=0;
    
    printf("How many number you want to store:");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        printf("Enter the %d element \t",i+1);
        scanf("%d",&Arr[i]);
    }
    for(i=0;i<n-1;i++){
        sum+=(sqrt(Arr[i])-sqrt(Arr[i+1]));
    }
    printf("\nSum is:%.2f ",sum);
    return 0;
}