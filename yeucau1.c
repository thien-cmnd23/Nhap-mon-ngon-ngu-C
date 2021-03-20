#include <stdio.h>

int main() {
  int n,s;
  s = 0;
  printf ("Nhap n: "); 
  scanf ("%d",&n);
  for (int i = 1; i<=n; i++){
    s+= i*i;
  }
  printf ("S = 1^2 + 2^2+...+ %d^2 = %d",n,s); 
  return 0;
}
