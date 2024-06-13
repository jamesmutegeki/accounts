#include <stdio.h>

int main() {
    int a,b,d;
    printf("Enter the value of a;\n");
    scanf("%d",&a);
    
    printf("Enter the value of b;\n");
     scanf("%d",&b);
     
     printf(" The sum of a and b is; %d\n ", a + b);
     d =a%b;
     printf("The reminder is; %d",d);
     
    return 0;
}