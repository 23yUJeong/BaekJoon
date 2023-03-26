#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main() {
  int H, M, a;

  scanf("%d %d", &H, &M);
  scanf("%d", &a);

  M += a;
  
  if(M >= 60){
    H += M / 60;
    if(M % 60 == 0){
      M = 0;
    }
    else{
      M %= 60;
    }
  }

  if(H >= 24){
    H -= 24;
  }

  printf("%d %d", H, M);
  
  return 0;
}