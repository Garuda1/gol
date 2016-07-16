/*
** ui.c for source in /home/admin/Documents/Programming/gol/source
** 
** Made by Thomas Murgia
** Login   <garuda1@protonmail.com>
** 
** Started on  Sun Jul 03 23:51:31 2016 Thomas Murgia
** Last update Mon Jul 04 18:11:20 2016 Thomas Murgia
*/

#include  <gol.h>
#include  <ui.h>

#include  <ncurses.h>
#include  <stdint.h>

void      init_ui(void)
{
  int     x;
  int     y;

  (void)y;
  initscr();
  raw();
  curs_set(0);
  noecho();
  halfdelay(5);
  getmaxyx(stdscr, y, x);
  mvaddstr(1, (x / 2) - 10, "CONWAY'S GAME OF LIFE");
  mvaddstr(3, 2, "Generation:");
}

void      print_matrix(uint32_t *matrix)
{
  int     ix;
  int     iy;
  int     x;
  int     y;

  getmaxyx(stdscr, y, x);
  iy = 31;
  while (iy)
    {
      ix = 0;
      while (ix < 32)
        {
          mvaddch((y / 2) + iy - 16, (x / 2) + ix - 16, cell_state(matrix, ix, iy));
          ++ix;
        }
      --iy;
    }
}

void      update_ui(int generation, uint32_t *world)
{
  print_matrix(world);
  mvprintw(3, 2, "                 ");
  mvprintw(3, 2, "Generation: %d", generation);
}
