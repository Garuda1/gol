/*
** args.h for source in /home/admin/Documents/Programming/gol/include
** 
** Made by Thomas Murgia
** Login   <garuda1@protonmail.com>
** 
** Started on  Sun Jul 03 23:40:38 2016 Thomas Murgia
** Last update Sun Jul 03 23:40:38 2016 Thomas Murgia
*/

#ifndef   ARGS_H_
#define   ARGS_H_

typedef struct s_args t_args;
struct    s_args
{
  int     dump_cycle;
};

int       init(t_args *args);
void      parse(t_args *args, int argc, char **argv);
void      print_syntax(void);
int       check(t_args *args);

#endif    /* !ARGS_H_ */
