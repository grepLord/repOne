#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.
void calculate_the_maximum(int n, int k) {
  //Write your code here.
  int max_and = 0;
  int max_or = 0;
  int max_xor = 0;
  for(int i=1; i<=n; i++)
  {
      for(int j=i+1; j<=n; j++)
      {
        {
            if((i&j) > max_and)
                max_and = i&j;
            if((i|j) > max_or)
                max_or = i|j;
            if((i^j) > max_xor)
                max_or = i^j;
        }
      }
  }
    printf("%d\n%d\n%d\n", max_and, max_or, max_xor);
}

int main() {
    int n, k;  
    //scanf("%d %d", &n, &k);
    n=5;k=4;
    calculate_the_maximum(n, k);
 
    return 0;
}
