/*
** world.c for source in /home/admin/Documents/Programming/gol/source
** 
** Made by Thomas Murgia
** Login   <garuda1@protonmail.com>
** 
** Started on  Mon Jul 04 00:24:26 2016 Thomas Murgia
** Last update Mon Jul 04 00:24:26 2016 Thomas Murgia
*/

#include    <gol.h>
#include    <stdint.h>

void        next_gen(uint32_t *world)
{
  uint32_t  buf[32];
  int       ix;
  int       iy;

  matrix_clr(buf);
  iy = 0;
  while (iy < 32)
    {
      ix = 0;
      while (ix < 32)
        {
          if (neighbour_count(world, ix, iy) == 3)
             cell_set(buf, ix, iy);
          else if (neighbour_count(world, ix, iy) == 2 &&
                   cell_state(world, ix, iy) == CHAR_ALIVE)
             cell_set(buf, ix, iy);
          ++ix;
        }
      ++iy;
    }
}
