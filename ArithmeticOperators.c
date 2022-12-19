

// Eksiklikleri gider, hatayi coz. 

#include <stdio.h>
int main()
{
    int a = 9; 
    int b = 3; 
    int c;
    
    c = a+b;
    printf("a+b = %d \n",c);
    c = a-b;
    printf("a-b = %d \n",c);
    c =a*b;
    printf("a*b = %d \n",c);
    c = a/b;
    printf("a/b = %d \n",c);
    c =b%a;
    printf("Remainder when a divided by b = %d \n",c);
    
    return 0;
}
