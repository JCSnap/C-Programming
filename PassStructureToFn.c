#include <stdio.h>
#include <string.h>

typedef struct {
  char name[50]; // Fixed-size array for name
  int age;
  char gender;
} player_t;

// Function prototype
void print_player(char header[], player_t player);

int main(void) { // Fixed typo: viod -> void
  player_t player1 = {"Jason", 23, 'M'}, player2; // Fixed: 'M' instead of "M"

  strcpy(player2.name, "Jenny"); // Fixed: strcopy -> strcpy
  player2.age = 21;
  player2.gender = 'F'; // Fixed: 'F' instead of "F"

  print_player("player1", player1);
  print_player("player2", player2);

  return 0;
}

void print_player(char header[], player_t player) {
  printf("%s: name = %s; age = %d; gender = %c\n", header, player.name, player.age, player.gender);
}

