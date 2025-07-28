#include <stdio.h>
#include <conio.h>

int main(){
    int Arr[25],i;

    // TAKING INPUT FROM THE USER AND STORING IT
    int n;
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
    int p;
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

    // TAKING INPUT FROM THE USER TO COUNT THE FREQUENCY OF
    int num,count=0;
    printf("\nNumber you want to count: ");
    scanf("%d",&num);
    for(i = 0;i < n; i++){
        if(Arr[i]==num){
            count++;
        }
    }
        printf("Frequency is: %d ",count);
    

    // SUM OF ARRAY
    int t=0;
    for(i = 0;i < n; i++){
        t=t+Arr[i];
    }
    printf("Sum= %d ",t);
    return 0;
}