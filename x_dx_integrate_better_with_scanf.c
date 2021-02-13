#include<stdio.h>
#include<math.h>



float main(){
    float x;
    float d ;
    float sum = 0;
    float old_sum;
    float low_lim;
    float high_lim;

    x = low_lim;

    printf("The \\int x dx program.\nSet your required interval \\Delta:");
    scanf("%f",&d);
    printf("\nLower limit of integration:");
    scanf("%f",&low_lim);
    printf("Higher limit of integration: ");
    scanf("%f",&high_lim);

    if (low_lim >= high_lim)
    {
        printf("\nDamn, man, or woman (in case) how you increase backwards anyway?\n");
        return 0;
    }
    
    while (x <= high_lim)
    {
        old_sum = x * d;
        x = x + d;
        sum = sum + old_sum;
        
    }
    printf("\nIntegration of x dx from %f to %f is: ",low_lim,high_lim);
    printf("%f",sum);
    printf("\n");

    return sum;
    
}