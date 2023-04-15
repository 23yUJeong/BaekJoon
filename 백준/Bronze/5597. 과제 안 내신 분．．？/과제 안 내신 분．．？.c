#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main() {
  int num, students[31] = { 0 };

  for(int i = 0; i < 28; i++) {
    scanf("%d", &num);
    students[num] = num;
  }

  for(int i = 1; i < 31; i++) {
    if(students[i] == 0) {
      printf("%d\n", i);
    }
  }

  return 0;
}