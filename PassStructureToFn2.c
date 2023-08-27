#include <stdio.h>
#include <string.h>

typedef struct {
  char name[50]; // Fixed-size array for name
  int age;
  char gender;
} player_t;

// Function prototype
void print_player(char header[], player_t player);
void change_name_and_age_actual(player_t *);
void change_name_and_age(player_t);

int main(void) { // Fixed typo: viod -> void
  player_t player1 = {"Jason", 23, 'M'}, player2; // Fixed: 'M' instead of "M"

  print_player("Player 1", player1);
  // This function call will not change the name and age of player1
  // because the function change_name_and_age() is passed a copy of player1
  change_name_and_age(player1);
  print_player("Player 1", player1);
  change_name_and_age_actual(&player1);
  print_player("Player 1", player1);

  return 0;
}

void print_player(char header[], player_t player) {
  printf("%s: name = %s; age = %d; gender = %c\n", header, player.name, player.age, player.gender);
}

void change_name_and_age(player_t player) {
  strcpy(player.name, "John");
  player.age = 30;
}

void change_name_and_age_actual(player_t *player) {
  strcpy((*player).name, "John");
  (*player).age = 30;
}
