/*
** cell.c for source in /home/admin/Documents/Programming/gol/source
** 
** Made by Thomas Murgia
** Login   <garuda1@protonmail.com>
** 
** Started on  Mon Jul 04 14:06:17 2016 Thomas Murgia
** Last update Mon Jul 04 14:06:17 2016 Thomas Murgia
*/

#include  <gol.h>

static
int       out_of_bounds(int x)
{
  if ((x < 0) || (x > 31))
    return (1);
  return (0);
}

int       cell_state(uint32_t *world, int x, int y)
{
  if (out_of_bounds(x) || out_of_bounds(y))
    return (CHAR_DEAD);
  if (world[y] & BIT(x))
    return (CHAR_ALIVE);
  return (CHAR_DEAD);
}

void      cell_clr(uint32_t *world, int x, int y)
{
  world[y] &= ~BIT(x);
}

void      cell_set(uint32_t *world, int x, int y)
{
  world[y] |= BIT(x);
}
