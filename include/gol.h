/*
** gol.h for include in /home/admin/Documents/Programming/gol/include
** 
** Made by Thomas Murgia
** Login   <garuda1@protonmail.com>
** 
** Started on  Mon Jul 04 00:12:52 2016 Thomas Murgia
** Last update Mon Jul 04 00:12:52 2016 Thomas Murgia
*/

#ifndef   GOL_H_
#define   GOL_H_

#include  <stdint.h>

#define   RAND_SRC    "/dev/urandom"  /* Change to fit your entropy needs */

#define   CHAR_RESET  'r'
#define   CHAR_EXIT   'q'
#define   CHAR_ALIVE  '#'
#define   CHAR_DEAD   '*'

#define   BIT(x)      (1 << x)

void      next_gen(uint32_t *world);

void      matrix_clr(uint32_t *matrix);
void      matrix_randomize(uint32_t *matrix);

int       neighbour_count(uint32_t *world, int x, int y);
int       cell_state(uint32_t *world, int x, int y);
void      cell_clr(uint32_t *world, int x, int y);
void      cell_set(uint32_t *world, int x, int y);

#endif    /* !GOL_H_ */
