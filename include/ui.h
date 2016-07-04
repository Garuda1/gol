/*
** ui.h for include in /home/admin/Documents/Programming/gol/include
** 
** Made by Thomas Murgia
** Login   <garuda1@protonmail.com>
** 
** Started on  Mon Jul 04 00:11:52 2016 Thomas Murgia
** Last update Mon Jul 04 00:11:52 2016 Thomas Murgia
*/

#ifndef   UI_H_
#define   UI_H_

#include  <stdint.h>

void      init_ui(void);
void      print_matrix(uint32_t *matrix);
void      update_ui(int generation, uint32_t *world);

#endif    /* !UI_H_ */
