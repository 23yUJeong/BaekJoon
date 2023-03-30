#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main() {
  int H, M;

  scanf("%d %d", &H, &M);

  M -= 45;
  
  if(M < 0) {
    H--;
    M += 60;
    if(H > 23) {
      H = 0;
    }
    else if(H < 0) {
      H = 24 + H;
    }
  }

  printf("%d %d", H, M);
  
  return 0;
}