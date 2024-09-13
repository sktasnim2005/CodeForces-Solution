#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int T;
    scanf("%d",&T);
    for(int j=0;j<T;j++){
  int n; 
  scanf("%d", &n); 
  int a[n]; 
  int sum = 0;
  for (int i = 0; i < n; i++) {
    scanf("%d", &a[i]); 
    sum += abs(a[i]); 
  }
  printf("%d\n", sum);
  
    }
   return 0;  
}
