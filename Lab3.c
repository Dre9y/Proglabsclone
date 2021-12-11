#include <stdio.h>
int main(){
    int a,b,c;
 scanf("%x%x",&a,&c);
 printf("%o\n",a);
    b = a << 4; 
    printf("%x\n",b); 
    b = a&c; 
    printf("%x",b); 
}