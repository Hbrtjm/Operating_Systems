#pragma once
#include <stdbool.h>

#define GRID_HEIGHT 35
#define GRID_WIDTH 35

char *create_grid();
void destroy_grid(char *grid);
void draw_grid(char *grid);
void init_grid(char *grid);
bool is_alive(int row, int col, char *grid);
void update_grid(char *src, char *dst);
