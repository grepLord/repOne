#include<stdio.h>
int main()
{
    int value = 1;
    int *pointer; 
    printf("%d\n", value);                                                                                                                                  
    printf("%x\n", &value+1);
    printf("%x\n", (void *)value);

}