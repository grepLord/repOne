#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    char num[100];
    scanf("%s", num);
    // int count[10] = {0,0,0,0,0,0,0,0,0,0}; 
    int *count = (int*)malloc(10 * sizeof(int));
    // for(int i = 0; i < strlen(num); i++){
    //     count[i] = 0;
    // }
    // printf("%d\n", strlen(num));
    for(int i = 0; i < strlen(num); i++)
    {
            int t = (num[i]) - '0';
            // printf("%c\n", t);
            count[t]+=1;
            t = 0;
        }  
    for(int i = 0; i < 10; i++)
    {
        printf("%d ", count[i]);
    }
    return 0;
}
