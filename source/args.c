/*
** args.c for source in /home/admin/Documents/Programming/gol/source
** 
** Made by Thomas Murgia
** Login   <garuda1@protonmail.com>
** 
** Started on  Sun Jul 03 23:41:44 2016 Thomas Murgia
** Last update Mon Jul 04 18:11:02 2016 Thomas Murgia
*/

#include  <stdlib.h>
#include  <string.h>
#include  <stdio.h>
#include  <args.h>

int       init(t_args *args)
{
  args -> dump_cycle = 64;
  return (EXIT_SUCCESS);
}

void      parse(t_args *args, int argc, char **argv)
{
  int     i;

  i = 1;
  while (i < argc)
    {
      if (!strcmp(argv[i], "-d") && (i + 1) < argc)
        args -> dump_cycle = atoi(argv[++i]);
      ++i;
    }
}

void      print_syntax(void)
{
  puts("Syntax: gol [-d dump_cycle]");
}

int       check(t_args *args)
{
  if (args -> dump_cycle < 0)
    {
      print_syntax();
      return (EXIT_FAILURE);
    }
  return (EXIT_SUCCESS);
}
