#include <stdio.h>
#include <conio.h>


int BinarySearch(int Arr[],int left, int p,int right){
    int mid;
    if(right<left){
        printf("Not Found");
        return 0;
    }else{
        mid=(left+right)/2;
        if(Arr[mid]==p){
            printf("Found");
            return 1;
        }else if(Arr[mid]<p){
            return BinarySearch(Arr,mid+1,p,right);
        }else{
            return BinarySearch(Arr,left,p,mid-1);
        }
    }
}
int main(){
    int Arr[25],i,n,p;
    // size of array
    printf("How many number you want to store?\n");
    scanf("%d",&n);

    printf("\nEnter the numbers in acceding order.\n");
    // input of array
    for(i=0;i<n;i++){
        printf("Enter the %d element \t",i+1);
        scanf("%d",&Arr[i]);
    }

    printf("Enter the number you want to search:\n");
    scanf("%d",&p);
    int left=0,right=n-1;
    BinarySearch(Arr, left, p, right);
    return 0;
}