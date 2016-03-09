/*
** main.c for main in /home/noboud_n/rendu/asm_minilibc
**
** Made by Nyrandone Noboud-Inpeng
** Login   <noboud_n@epitech.net>
**
** Started on  Sun Mar  6 14:32:53 2016 Nyrandone Noboud-Inpeng
** Last update Wed Mar  9 11:30:23 2016 Nyrandone Noboud-Inpeng
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdlib.h>

extern void	*my_memset(void *, int, size_t);
extern void	*my_memmove(void *, void *, size_t);
extern void	*my_memcpy(void *, void *, size_t);
extern size_t	my_strlen(char *);
extern int	my_strncmp(char *, char*, int);
extern int	my_strcmp(char *, char*);
extern int	my_strcasecmp(char *, char*);
extern char	*my_strchr(char *, int);
extern char	*my_strstr(char *, char *);
extern char	*my_rindex(char *, int);
extern size_t	my_strcspn(char *, char *);
extern char	*my_strpbrk(char *, char *);

#define RED "\033[01;31m"
#define END "\033[m"

void	test_strpbrk()
{
  printf("\n%s___Testing strpbrk___%s\n\n", RED, END);

  printf("asm = %s -- abcde2fghi3jk4l 34\n", my_strpbrk("abcde2fghi3jk4l", "34"));
  printf("c = %s -- abcde2fghi3jk4l 34\n", strpbrk("abcde2fghi3jk4l", "34"));

  printf("-\n");

  printf("asm = %s -- abcde2fghi3jk4l 2\n", my_strpbrk("abcde2fghi3jk4l", "2"));
  printf("c = %s -- abcde2fghi3jk4l 2\n", strpbrk("abcde2fghi3jk4l", "2"));

  printf("-\n");

  printf("asm = %s -- abcdee2fghi3jk4l e\n", my_strpbrk("abcdee2fghi3jk4l", "e"));
  printf("c = %s -- abcdee2fghi3jk4l e\n", strpbrk("abcdee2fghi3jk4l", "e"));

  printf("-\n");

  printf("asm = %s -- abcdee2fghi3jk4l l\n", my_strpbrk("abcdee2fghi3jk4l", "l"));
  printf("c = %s -- abcdee2fghi3jk4l l\n", strpbrk("abcdee2fghi3jk4l", "l"));

  printf("-\n");

  printf("asm = %s -- abcdee2fghi3jk4l 2ci\n", my_strpbrk("abcdee2fghi3jk4l", "2ci"));
  printf("c = %s -- abcdee2fghi3jk4l 2ci\n", strpbrk("abcdee2fghi3jk4l", "2ci"));

  printf("-\n");

  printf("asm = %s -- abcdee2fghi3jk4l 43\n", my_strpbrk("abcdee2fghi3jk4l", "43"));
  printf("c = %s -- abcdee2fghi3jk4l 43\n", strpbrk("abcdee2fghi3jk4l", "43"));

  printf("-\n");

  printf("asm = %s -- abcde2fghi3jk4l \"\"\n", my_strpbrk("abcde2fghi3jk4l", ""));
  printf("c = POINTEUR NULL\n");

  printf("-\n");

  printf("asm = %s -- \"\"  2\n", my_strpbrk("", "2"));
  printf("c = POINTEUR NULL\n");

  printf("-\n");

  printf("asm = %s -- abcde2fghi3jk4l \"\"\n", my_strpbrk("", ""));
  printf("c = POINTEUR NULL\n");
}

void	test_strcspn()
{
  printf("\n%s___Testing strcspn___%s\n\n", RED, END);

  printf("asm = %zu -- salut at\n", my_strcspn("salut", "at"));
  printf("c = %zu -- salut at\n", strcspn("salut", "at"));

  printf("-\n");

  printf("asm = %zu -- salut t\n", my_strcspn("salut", "t"));
  printf("c = %zu -- salut t\n", strcspn("salut", "t"));

  printf("-\n");

  printf("asm = %zu -- salut \"\"\n", my_strcspn("salut", ""));
  printf("c = %zu -- salut \"\"\n", strcspn("salut", ""));

  printf("-\n");

  printf("asm = %zu -- salut s\n", my_strcspn("salut", "s"));
  printf("c = %zu -- salut s\n", strcspn("salut", "s"));

  printf("-\n");

  printf("asm = %zu -- \"\" s\n", my_strcspn("", "s"));
  printf("c = %zu -- \"\" s\n", strcspn("", "s"));

  printf("-\n");

  printf("asm = %zu -- \"\" \"\"\n", my_strcspn("", ""));
  printf("c = %zu -- \"\" \"\"\n", strcspn("", ""));
}

void	test_rindex()
{
  printf("\n%s___Testing rindex___%s\n\n", RED, END);

  printf("asm = %s -- MDRCOUCOUSALUT M\n", my_rindex("MDRCOUCOUSALUT", 'M'));
  printf("c = %s -- MDRCOUCOUSALUT M\n", rindex("MDRCOUCOUSALUT", 'M'));

  printf("-\n");

  printf("asm = %s -- MDRCOUCOUSAUT C\n", my_rindex("MDRCOUCOUSALUT", 'C'));
  printf("c = %s -- MDRCOUCOUSALUT C\n", rindex("MDRCOUCOUSALUT", 'C'));

  printf("-\n");

  printf("asm = %s -- MDRCOUCOUSALUT T\n", my_rindex("MDRCOUCOUSALUT", 'T'));
  printf("c = %s -- MDRCOUCOUSALUT T\n", rindex("MDRCOUCOUSALUT", 'T'));

  printf("-\n");

  printf("asm = %s -- MDRCOUCOUSAUT X\n", my_rindex("MDRCOUCOUSALUT", 'X')); /* PTR NULL */
  printf("c = POINTEUR NULL -- MDRCOUCOUSALUT X\n");

  printf("-\n");

  printf("asm = %s -- \"\" C\n", my_rindex("", 'C')); /* PTR NULL */
  printf("c = POINTEUR NULL -- \"\" C\n");
}

void	test_strstr()
{
  printf("\n%s___Testing strstr___%s\n\n", RED, END);
  printf("asm = %s -- abcdefghijkl \"\"\n", my_strstr("abcdefghijkl", ""));
  printf("c   = %s -- abcdefghijkl \"\"\n", strstr("abcdefghijkl", ""));

  printf("-\n");

  printf("asm = %s -- MDRCOUCOUSALUT UT\n", my_strstr("MDRCOUCOUSALUT", "UT"));
  printf("c   = %s -- MDRCOUCOUSALUT UT\n", strstr("MDRCOUCOUSALUT", "UT"));

  printf("-\n");

  printf("asm = %s -- MDRCOUCOUSALUT \"\"\n", my_strstr("MDRCOUCOUSALUT", ""));
  printf("c   = %s -- MDRCOUCOUSALUT \"\"\n", strstr("MDRCOUCOUSALUT", ""));

  printf("-\n");

  printf("asm = %s -- MDRCOUCOUSALUT OU\n", my_strstr("MDRCOUCOUSALUT", "OU"));
  printf("c   = %s -- MDRCOUCOUSALUT OU\n", strstr("MDRCOUCOUSALUT", "OU"));

  printf("-\n");

  printf("asm = %s -- MDRCOUCOUSALUT MDR\n", my_strstr("MDRCOUCOUSALUT", "MDR"));
  printf("c   = %s -- MDRCOUCOUSALUT MDR\n", strstr("MDRCOUCOUSALUT", "MDR"));

  printf("-\n");

  printf("asm = %s -- MDRCOUCOUSALUT D\n", my_strstr("MDRCOUCOUSALUT", "D"));
  printf("c   = %s -- MDRCOUCOUSALUT D\n", strstr("MDRCOUCOUSALUT", "D"));

  printf("-\n");

  printf("asm = %s -- \"\" X\n", my_strstr("", "X")); /* Si ça ne compile pas (erreur de printf sur un ptr null), c'est NORMAL ! Dans le cas contraire, le printf doit print "(null)"*/
  printf("c   = POINTEUR NULL -- \"\" X\n");

  printf("-\n");

  printf("asm = %s -- MDRCOUCOUSALUT X\n", my_strstr("MDRCOUCOUSALUT", "X")); /* Si ça ne compile pas (erreur de printf sur un ptr null), c'est NORMAL ! Dans le cas contraire, le printf doit print "(null)"*/
  printf("c   = POINTEUR NULL -- MDRCOUCOUSALUT X\n");
}

void	test_strchr()
{
  printf("\n%s___Testing strchr___%s\n\n", RED, END);
  printf("asm : %s -- AOIJDSCXBC D\n", my_strchr("AOIJDSCXBC", 'D'));
  printf("c   : %s -- AOIJDSCXBC D\n", strchr("AOIJDSCXBC", 'D'));
  puts("-");
  printf("asm : %s -- ABC A\n", my_strchr("ABC", 'A'));
  printf("c   : %s -- ABC A\n", strchr("ABC", 'A'));
  puts("-");
  printf("asm : %s -- ABC B\n", my_strchr("ABC", 'B'));
  printf("c   : %s -- ABC B\n", strchr("ABC", 'B'));
  puts("-");
  printf("asm : %s -- ABC C\n", my_strchr("ABC", 'C'));
  printf("c   : %s -- ABC C\n", strchr("ABC", 'C'));
  puts("-");
  printf("asm : %s -- ABC C\n", my_strchr("ABX", 'C'));
  printf("c   : POINTEUR NULL -- ABX C\n");
}

void	test_strlen()
{
  printf("\n%s___Testing strlen___%s\n\n", RED, END);
  printf("asm %zu -- SalutLaFamille\n", my_strlen("SalutLaFamille"));
  printf("c   %zu -- SalutLaFamille\n", strlen("SalutLaFamille"));
  puts("-");
  printf("asm %zu -- \"\"\n", my_strlen(""));
  printf("c   %zu -- \"\"\n", strlen(""));
  puts("-");
  printf("asm %zu -- æ«øðæð\n", my_strlen("æ«øðæð"));
  printf("c   %zu -- æ«øðæð\n", strlen("æ«øðæð"));
  puts("-");
  printf("asm %zu -- Matuidi Charo\n", my_strlen("Matuidi Charo"));
  printf("c   %zu -- Matuidi Charo\n", strlen("Matuidi Charo"));
}

void	test_strcasecmp()
{
  printf("\n%s___Testing strcasecmp___%s\n\n", RED, END);

  printf("asm %d -- \"\" TOTO\n", my_strcasecmp("TOTO", ""));
  printf("c   %d -- \"\" TOTO\n", strcasecmp("TOTO", ""));
  puts("-");
  printf("asm %d -- \"\" TOTO\n", my_strcasecmp("", "TOTO"));
  printf("c   %d -- \"\" TOTO\n", strcasecmp("", "TOTO"));
  puts("-");
  printf("asm %d -- CATR PRET\n", my_strcasecmp("CATR", "PRET"));
  printf("c   %d -- CATR PRET\n", strcasecmp("CATR", "PRET"));
  puts("-");
  printf("asm %d -- CatR CATR\n", my_strcasecmp("CatR", "CATR"));
  printf("c   %d -- CatR CATR\n", strcasecmp("CatR", "CATR"));
  puts("-");
  printf("asm %d -- CATR PRET\n", my_strcasecmp("CATR", "PRET"));
  printf("c   %d -- CATR PRET\n", strcasecmp("CATR", "PRET"));
  puts("-");
  printf("asm %d Caza caaa\n", my_strcasecmp("Caza", "caaa"));
  printf("c   %d Caza caaa\n", strcasecmp("Caza", "caaa"));
  puts("-");
  printf("asm %d Colo Colo\n", my_strcasecmp("Colo", "Colo"));
  printf("c   %d Colo Colo\n", strcasecmp("Colo", "Colo"));
  puts("-");
  printf("asm %d -- PILD Caso\n", my_strcasecmp("PILD", "Cado"));
  printf("c   %d -- PILD Caso\n", strcasecmp("PILD", "Cado"));
  puts("-");
  printf("asm %d -- \"\" \"\"\n", my_strcasecmp("", ""));
  printf("c   %d -- \"\" \"\"\n", strcasecmp("", ""));
  puts("-");
  printf("asm %d -- a z\n", my_strcasecmp("a", "z"));
  printf("c   %d -- a z\n", strcasecmp("a", "z"));
  puts("-");
  printf("asm %d -- Zab zeb\n", my_strcasecmp("Zab", "zeb"));
  printf("c   %d -- Zab zeb\n", strcasecmp("Zab", "zeb"));
}

void	test_strncmp()
{
  printf("\n%s___Testing strncmp___%s\n\n", RED, END);
  printf("asm %d -- CATR PRET 4\n", my_strncmp("CATR", "PRET", 4));
  printf("c   %d -- CATR PRET 4\n", strncmp("CATR", "PRET", 4));
  puts("-");
  printf("asm %d -- CATR PRET 6\n", my_strncmp("CATR", "CATR", 6));
  printf("c   %d -- CATR PRET 6\n", strncmp("CATR", "CATR", 6));
  puts("-");
  printf("asm %d -- CATR PRET 1\n", my_strncmp("CATR", "PRET", 1));
  printf("c   %d -- CATR PRET 1\n", strncmp("CATR", "PRET", 1));
  puts("-");
  printf("asm %d Caza Caaa 4\n", my_strncmp("Caza", "Caaa", 4));
  printf("c   %d Caza Caaa 4\n", strncmp("Caza", "Caaa", 4));
  puts("-");
  printf("asm %d Colo Colo 5\n", my_strncmp("Colo", "Colo", 5));
  printf("c   %d Colo Colo 5\n", strncmp("Colo", "Colo", 5));
  puts("-");
  printf("asm %d -- PILD Caso 4\n", my_strncmp("PILD", "Cado", 4));
  printf("c   %d -- PILD Caso 4\n", strncmp("PILD", "Cado", 4));
  puts("-");
  printf("asm %d -- \"\" \"\" 1\n", my_strncmp("", "", 1));
  printf("c   %d -- \"\" \"\" 1\n", strncmp("", "", 1));
  puts("-");
  printf("asm %d -- a z 0\n", my_strncmp("a", "z", 0));
  printf("c   %d -- a z 0\n", strncmp("a", "z", 0));
  puts("-");
  printf("asm %d -- zab zeb 2\n", my_strncmp("zab", "zeb", 2));
  printf("c   %d -- zab zeb 2\n", strncmp("zab", "zeb", 2));
}

void	test_strcmp()
{
  printf("\n%s___Testing strcmp___%s\n\n", RED, END);
  printf("asm %d -- CATR PRET\n", my_strcmp("CATR", "PRET"));
  printf("c   %d -- CATR PRET\n", strcmp("CATR", "PRET"));
  puts("-");
  printf("asm %d -- CATR PRET\n", my_strcmp("CATR", "PRET"));
  printf("c   %d -- CATR PRET\n", strcmp("CATR", "PRET"));
  puts("-");
  printf("asm %d Caza Caaa\n", my_strcmp("Caza", "Caaa"));
  printf("c   %d Caza Caaa\n", strcmp("Caza", "Caaa"));
  puts("-");
  printf("asm %d Colo Colo\n", my_strcmp("Colo", "Colo"));
  printf("c   %d Colo Colo\n", strcmp("Colo", "Colo"));
  puts("-");
  printf("asm %d -- PILD Caso\n", my_strcmp("PILD", "Cado"));
  printf("c   %d -- PILD Caso\n", strcmp("PILD", "Cado"));
  puts("-");
  printf("asm %d -- \"\" \"\"\n", my_strcmp("", ""));
  printf("c   %d -- \"\" \"\"\n", strcmp("", ""));
  puts("-");
  printf("asm %d -- a z\n", my_strcmp("a", "z"));
  printf("c   %d -- a z\n", strcmp("a", "z"));
  puts("-");
  printf("asm %d -- zab zeb\n", my_strcmp("zab", "zeb"));
  printf("c   %d -- zab zeb\n", strcmp("zab", "zeb"));
}


void	test_memset()
{
  char	*str1;
  char	*str2;
  int	k;

  printf("\n%s___Testing memset___%s\n\n", RED, END);
  str1 = malloc(5);
  str2 = malloc(5);
  str1 = my_memset(str2, 42, 5);
  str2 = memset(str1, 42, 5);
  printf("asm : ");
  for (k = 0; k < 5; k++)
    printf("%d ", str1[k]);
  printf(" -- str2, 42, 5\nc   : ");
  for (k = 0; k < 5; k++)
    printf("%d ", str2[k]);
  puts(" -- str2, 42, 5\n-");
  str1 = my_memset(str1, -12, 3);
  str2 = memset(str2, -12, 3);
  printf("asm : ");
  for (k = 0; k < 5; k++)
    printf("%d ", str1[k]);
  printf(" -- str2 -12 3\nc   : ");
  for (k = 0; k < 5; k++)
    printf("%d ", str2[k]);
  puts(" -- str2 -12 3");
}

void	test_memcpy()
{
  char	*str1;
  char	*str2;
  char	*str3;
  char	*str4;

  printf("\n%s___Testing memcpy___%s\n\n", RED, END);
  str2 = strdup("Test                    mdr");
  str1 = strdup("L'asm mdr");
  str4 = strdup("Test                    mdr");
  str3 = strdup("L'asm mdr");
  str2 = my_memcpy(str2, str1, 9);
  str4 = memcpy(str4, str3, 9);
  printf("asm : %s -- str2, str1, 9\n", str2);
  printf("c   : %s -- str4, str3, 9\n", str4);
  str2 = strdup("TestDuMemCpyMdr");
  str4 = strdup("TestDuMemCpyMdr");
  str2 = my_memcpy(str2, &str2[9], 8);
  str4 = memcpy(str4, &str2[9], 8);
  puts("-");
  printf("asm : %s -- str2, &str2[4], 8\n", str2);
  printf("c   : %s -- str2, &str2[4], 8\n", str4);
}

void	test_memmove()
{
  char	*str1;
  char	*str2;
  char	*str3;
  char	*str4;

  printf("\n%s___Testing memmove___%s\n\n", RED, END);
  str2 = strdup("Test                    mdr");
  str1 = strdup("L'asm mdr");
  str4 = strdup("Test                    mdr");
  str3 = strdup("L'asm mdr");
  str2 = my_memmove(str2, str1, 9);
  str4 = memmove(str4, str3, 9);
  printf("asm : %s -- str2, str1, 9\n", str2);
  printf("c   : %s -- str4, str3, 9\n", str4);
  str2 = strdup("TestDuMemmoveMdr");
  str4 = strdup("TestDuMemmoveMdr");
  str2 = my_memmove(str2, &str2[4], 8);
  str4 = memmove(str4, &str4[4], 8);
  puts("-");
  printf("asm : %s -- str2, &str2[4], 8\n", str2);
  printf("c   : %s -- str2, &str2[4], 8\n", str4);
}

int	main()
{
  test_strlen();
  test_strncmp();
  test_strcmp();
  test_strcasecmp();
  test_strchr();
  test_memset();
  test_memcpy();
  test_memmove();
  test_strstr();
  test_rindex();
  test_strcspn();
  test_strpbrk();
  return (0);
}
