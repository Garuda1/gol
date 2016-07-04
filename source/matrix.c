/*
** matrix.c for source in /home/admin/Documents/Programming/gol/source
** 
** Made by Thomas Murgia
** Login   <garuda1@protonmail.com>
** 
** Started on  Mon Jul 04 14:11:28 2016 Thomas Murgia
** Last update Mon Jul 04 18:11:06 2016 Thomas Murgia
*/

#include  <unistd.h>
#include  <stdint.h>
#include  <fcntl.h>
#include  <gol.h>

static
int         my_rand(void)
{
  uint32_t  val;
  int       fd;

  fd = open(RAND_SRC, O_RDONLY);
  read(fd, &val, 4);
  close(fd);
  return (val);
}

void      matrix_randomize(uint32_t *matrix)
{
  int     i;

  i = 0;
  while (i < 32)
    matrix[i++] = my_rand();
}

void      matrix_clr(uint32_t *matrix)
{
  int     i;

  i = 0;
  while (i < 32)
    matrix[i++] = 0;
}
