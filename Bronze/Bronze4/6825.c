//6825
#include <stdio.h>

int main()
{
    double w; scanf("%lf", &w);
    double h; scanf("%lf", &h);
    
    double bmi = w / (h * h);
    
    if(bmi > 25.0)
    {
        printf("Overweight");   
    }
    else if(bmi > 18.5)
    {
        printf("Normal weight");
    }
    else
    {
        printf("Underweight");
    }
}