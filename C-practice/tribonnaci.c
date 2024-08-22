#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.

int find_nth_term(int n, int a, int b, int c) {
  //Write your code here.
  int out = 0;
  if(n == 1)
    return a;
  if(n == 2)
    return b;
  if(n == 3)
    return c;
  for(int i = 2; i < n-1; i ++){
      out = a + b + c;
      a = b;
      b = c; 
      c = out;
  }
  return out;
}

int main() {
    int n, a, b, c;
  
    scanf("%d %d %d %d", &n, &a, &b, &c);
    int ans = find_nth_term(n, a, b, c);
 
    printf("%d", ans); 
    return 0;
}