#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n, sum = 0;
    scanf("%d/n", &n);
    int *arr = (int*)malloc((n-1) * sizeof(int));
    for(int i = 0; i < n;){
        scanf("%d\t", &arr[i]);
        sum = sum + arr[i];
        i+=1;
    }   
    // for(int i = 0; i < n; i++){
    //     sum += arr[i];
    // }
    printf("%d\n", sum);
    return 0;
}