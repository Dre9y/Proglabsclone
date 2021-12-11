#include <stdio.h>
#include <math.h>
int main()
{
    float z1,z2,a;
    scanf("%f",&a);
     z1 = (sin(4*a)/(1+cos(4*a)))*(cos(2*a)/(1+cos(2*a))); 
      z2 = 1/tan((3./2)*M_PI-a);  
     printf("%f %f",z1,z2);
    return 0;
}