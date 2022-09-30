#include <stdio.h>

int exa(int a, int b);

void main()
{
    int a=0, b=0;
    printf("Ingrese el valor de a \n");
    scanf("%d",&a);
    printf("Ingrese el valor de b \n");
    scanf("%d",&b);
    printf("%d \n", proble(a, b));
}

int exa(int a, int b)
{
    if(b==0){
        return 1;
    }
    else if(a==0){
        return 0;
    }
    else{
        return a * proble(a,b-1);
    }
}