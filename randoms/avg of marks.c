#include <stdio.h>

int main()
{
    int x,total=0,count=0;
    float avg;
    
    while(x!=0){
        scanf("%d",&x);
        total+=x;
        count++;
    }
    avg = (float)total / (count-1);
    printf("%.2f",avg);
    

    return 0;
}