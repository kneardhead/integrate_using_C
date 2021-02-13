#include<stdio.h>
#include<math.h>
float main(){
    float x=0;
    float d = 0.01;
    float sum = 0;
    float old_sum;
    
    

    

    while (x <= 10)
    {
        old_sum = x * d;
        x = x + d;
        sum = sum + old_sum;
        
    }
    printf("\n");
    printf("%f",sum);
    printf("\n");

    return sum;
    
}