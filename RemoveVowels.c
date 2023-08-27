#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void) {
  int i, len, count = 0;
  char str[101], newStr[101];

  printf("Enter a string (at most 100 characters): ");
  fgets(str, 101, stdin);
  len = strlen(str);
  if (str[len - 1] == '\n') {
    str[len - 1] = '\0';
  }
  len = strlen(str);

  // loop and use toupper
  for (i = 0; i < len; i++) {
    switch (toupper(str[i])) {
      case 'A':
      case 'E':
      case 'I':
      case 'O':
      case 'U':
        break;
      default:
        newStr[count] = str[i];
        count++;
    }
  }

  newStr[count] = '\0';
  printf("The string with vowels removed is: %s\n", newStr);
  return 0;
}
