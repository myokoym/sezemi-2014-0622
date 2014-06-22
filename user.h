#ifndef USER_H
#define USER_H

#define USER_RECIPES_SIZE 256

#include "recipe.h"

typedef struct {
  int id;
  char *name;
  int n_recipes;
  Recipe *recipes[USER_RECIPES_SIZE];
} User;

void user_print_name(User *);
int user_scan_recipes_from_file(User *, char *);
void user_print_all(User *);
int user_print_with_id(User *, int);

#endif /* USER_H */
