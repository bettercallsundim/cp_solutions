

#include <stdio.h>

int main()
{
    int arr[5],min=0;
    for(int i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    min=arr[0];
    for(int i=1;i<5;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    printf("\nMin = %d",min);
    
   
    

    return 0;
}