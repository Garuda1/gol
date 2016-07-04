/*
** gol.c for source in /home/admin/Documents/Programming/gol/source
** 
** Made by Thomas Murgia
** Login   <garuda1@protonmail.com>
** 
** Started on  Sun Jul 03 23:39:04 2016 Thomas Murgia
** Last update Mon Jul 04 18:10:05 2016 Thomas Murgia
*/

#include  <ncurses.h>
#include  <stdlib.h>
#include  <stdint.h>
#include  <string.h>

#include  <args.h>
#include  <gol.h>
#include  <ui.h>

static
void        game(t_args *args)
{
  int       keep_running;
  int       generation;
  uint32_t  world[32];

  generation = 1;
  keep_running = 1;
  matrix_randomize(world);
  while (keep_running && (generation <= (args -> dump_cycle)))
    {
      next_gen(world);
      update_ui(generation, world);
      if (getch() == CHAR_EXIT)
        keep_running = 0;
      ++generation;
    }
  /* dump_matrix(); */
}

int       main(int argc, char **argv)
{
  t_args  args;

  init(&args);
  parse(&args, argc, argv);
  if (check(&args) == EXIT_FAILURE)
    return (EXIT_FAILURE);
  init_ui();
  game(&args);
  endwin();
  return (EXIT_SUCCESS);
}
