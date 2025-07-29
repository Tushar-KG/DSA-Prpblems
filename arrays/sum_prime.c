#include <stdio.h>
#include <conio.h>

int main(){
    int Arr[25],n,j,i,p=1,sum=0;

    printf("How many number you want to store:");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        printf("Enter the %d element \t",i+1);
        scanf("%d",&Arr[i]);
    }

    for(i=0;i<n;i++){
        p=0;
        if(Arr[i]>=2){
            for(j=1;j<=Arr[i];j++){
                if(Arr[i]%j==0){
                    p++;
                }
            }
            if(p==2){
                sum=sum+Arr[i];
            }
            
        }

    }
    printf("Total Sum of Prime Numbers is %d",sum);
    return 0;
}