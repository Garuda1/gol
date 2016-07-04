/*
** matrix.c for source in /home/admin/Documents/Programming/gol/source
** 
** Made by Thomas Murgia
** Login   <garuda1@protonmail.com>
** 
** Started on  Mon Jul 04 14:11:28 2016 Thomas Murgia
** Last update Mon Jul 04 18:11:06 2016 Thomas Murgia
*/

#include  <stdint.h>
#include  <gol.h>

void      matrix_clr(uint32_t *matrix)
{
  int     i;

  i = 0;
  while (i < 32)
    matrix[i++] = 0;
}
