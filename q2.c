#include <stdio.h>

int main(){
    float power_usage[5];
    float sum=0,avg;
    printf("ENTER THE ARRAY \n ");

    for (int i = 0; i < 5; i++)
    {
        scanf("%f",&power_usage[i]);
    }
    printf("THE ARRAY IS AS FOLLOWS \n ");
    
    printf(" |");
    
    for (int i = 0; i < 5; i++)
    {
        printf("%5.2f |",power_usage[i]);
        sum+=power_usage[i];
    }
    avg=sum/5;
    printf(" \n THE TOTAL AVERAGE OF POWER USAGE IS : %.2f\n",avg);
    return 0;
}