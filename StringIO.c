#include <stdio.h>
#define LENGTH 10

int main(void) {
  char str[LENGTH];
  char str2[LENGTH];
  // EXAMPLE INPUT: "Hello World"
  // printf("Enter string, at most %d characters: ", LENGTH - 1);
  //scanf("%s", str);
  // printf("str = %s\n", str);
  // output: str = Hello
  // This is because scanf() stops reading at the first whitespace character.
  printf("Enter string, at most %d characters: ", LENGTH - 1);
  fgets(str2, LENGTH, stdin);
  printf("str2 = ");
  puts(str2);
  // output: str2 = Hello World
  // This is because fgets() reads the entire line, including the newline character.
  return 0;
}
