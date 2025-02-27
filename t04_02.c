// 12S24045 - Mutiara YH Sianturi
// 12S24047 - Davina Hutabarat

#include <stdio.h>
#include <string.h>

int main(int _argv, char **_argc) {
  char input[21];
  fgets(input, sizeof(input), stdin);
  input[strcspn(input, "\n")] = 0;
  for (int i = 0; i < strlen(input); i++) {
  printf("%03d", input[i]);
  }

  printf("\n");

  return 0;
}
