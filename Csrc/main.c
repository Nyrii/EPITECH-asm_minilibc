/*
** main.c for main in /home/noboud_n/rendu/asm_minilibc
**
** Made by Nyrandone Noboud-Inpeng
** Login   <noboud_n@epitech.net>
**
** Started on  Sun Mar  6 14:32:53 2016 Nyrandone Noboud-Inpeng
** Last update Sun Mar  6 18:31:16 2016 guillaume wilmot
*/

#include <stdio.h>
#include <string.h>

int	main()
{
  printf("asm %d\n", my_strlen("SalutLaFamille"));
  printf("c   %d\n", strlen("SalutLaFamille"));
  printf("c   %d\n", strlen(NULL));
  printf("asm %d\n", my_strlen(NULL));
  return (0);
}