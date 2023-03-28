#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main() {
  int X, N, result = 0;

  scanf("%d", &X);
  scanf("%d", &N);
  int a[N], b[N];

  for(int i = 0; i < N; i++){
    scanf("%d %d", &a[i], &b[i]);
  }

  for(int i = 0; i < N; i++){
    result += a[i] * b[i];
  }

  if(result == X){
    printf("Yes");
  }
  else{
    printf("No");
  }
  
  return 0;
}