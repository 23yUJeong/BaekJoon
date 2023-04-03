#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main() {
  int arr[3], max = 0;

  for(int i = 0; i < 3; i++){
    scanf("%d", &arr[i]);
  }

  for(int i = 0; i < 3; i++){
    if(arr[i] > max){
      max = arr[i];
    }
  }

  if(arr[0] != arr[1] && arr[1] != arr[2] && arr[2] != arr[0]){
    printf("%d", max * 100);
  }
    
  else if(arr[0] == arr[1] && arr[1] != arr[2]){
    printf("%d", 1000 + arr[0] * 100);
  }
  else if(arr[1] == arr[2] && arr[2] != arr[0]){
    printf("%d", 1000 + arr[1] * 100);
  }
  else if(arr[2] == arr[0] && arr[0] != arr[1]){
    printf("%d", 1000 + arr[2] * 100);
  }
    
  else if(arr[0] == arr[1] && arr[1] == arr[2] && arr[2] == arr[0]){
    printf("%d", 10000 + arr[0] * 1000);
  }

  return 0;
}