#include <stdio.h>

int main(){
    int reading[7]={4,7,6,3,4,9,5};
    int hottest_temp=reading[0];
    int coldest_temp=reading[0];
    for (int i = 0; i < 7; i++)
    {
        if (reading[i]>hottest_temp)
        {
            hottest_temp=reading[i];
        }
        if (reading[i]<coldest_temp)
        {
            coldest_temp=reading[i];
        }
        
        
    }
    printf(" Hottest Temperatue is %d \n",hottest_temp);
    printf(" Coldest Temperature is %d \n",coldest_temp);
    
    return 0;
}