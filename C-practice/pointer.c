#include <stdio.h>
#include <stdlib.h>

void update(int *a,int *b) {
    // Complete this function
    int t = *a;
    *a = *a + *b;
    *b = *b - t;    
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    printf("Enter the two numbers.\n");
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d\n", a, abs(b));

    return 0;
}