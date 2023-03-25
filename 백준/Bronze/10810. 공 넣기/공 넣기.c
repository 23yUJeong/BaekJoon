#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main() {
  int n, m;

  scanf("%d %d", &n, &m);
  int arr[n];
  for(int i = 0; i < n; i++) {
    arr[i] = 0;
  }

  for(int c = 1, i, j, k; c <= m; c++) {
    scanf("%d %d %d", &i, &j, &k);

    for(int t = i - 1; t < j; t++) {
      arr[t] = k;
    }
  }

  for(int i = 0; i < n; i++) {
    if(arr[i] == 0) {
      arr[i] = 0;
    }
    printf("%d ", arr[i]);
  }
  
  return 0;
}