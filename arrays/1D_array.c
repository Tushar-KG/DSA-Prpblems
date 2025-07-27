#include <stdio.h>
// #include <conio.h>

int main(){
    int Arr[25],i,n,p;

    // TAKING INPUT FROM THE USER AND STORING IT

    printf("How many no you want to store: ");
    scanf("%d",&n);

    printf("Enter the %d element into array \n",n);

    for(i=0;i<n;i++){
        scanf("%d",&Arr[i]);
    }

    printf("The element of the Array are,");

    for(i=0;i<n;i++){
        printf("\t %d",Arr[i]);
    }

    // TAKING INPUT AND CHECKING IF ITS IN THE ARRAY

    printf("\nNumber you want to search: ");
    scanf("%d",&p);

    for(i = 0;i < n; i++){

        if (Arr[i]==p){
            printf("\nfound");
            break;
        }
    }
        if(i==n){
            printf("not found");
        }
    
    return 0;
}