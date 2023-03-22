#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main() {
  int arr[9], max = 0, num = 0;

  for(int i = 0; i < 9; i++){
    scanf("%d", &arr[i]);
  }

  for(int i = 0; i < 9; i++){
    if(arr[i] > max){
      max = arr[i];
        num = i;
    }
  }

  printf("%d\n%d", max, num + 1);
  
  return 0;
}