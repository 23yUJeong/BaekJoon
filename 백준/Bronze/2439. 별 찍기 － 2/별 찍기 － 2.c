#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main() {
  int n, cnt = 0;

  scanf("%d", &n);

  for(int i = n; i > 0; i--){
    for(int j = 1; j < i; j++){
      printf(" ");
      cnt++;
    }
    for(int m = 1; m <= n - cnt; m++){
      printf("*");
    }
    printf("\n");
    cnt = 0;
  }
  
  return 0;
}