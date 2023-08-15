#include <stdio.h>

// Print strings using different escape sequences
int main(void) {
  printf("Hello, World!\n"); // \n is a newline
  printf("Hello, \"World!\"\n"); // \" is a double quote
  printf("Hello, \tWorld!\n"); // \t is a tab
  printf("Hello, \rWorld!\n"); // \r is a carriage return
  printf("Hello, \bWorld!\n"); // \b is a backspace
  printf("Hello, \fWorld!\n"); // \f is a form feed
  printf("Hello, \vWorld!\n"); // \v is a vertical tab
  printf("Hello, \aWorld!\n"); // \a is an alert
  printf("Hello, \\World!\n"); // \\ is a backslash
  printf("Hello, \?World!\n"); // \? is a question mark
  printf("Hello, \0World!\n"); // \0 is a null character
  printf("Hello, \x41World!\n"); // \x41 is a hexadecimal value
  printf("Hello, \u03C0World!\n"); // \u03C0 is a unicode value
  printf("Hello, %%World!\n"); // %% is a percent sign
  return 0;
}

