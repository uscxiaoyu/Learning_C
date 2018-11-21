#include <stdio.h>
#define MAXCHAR 1000
int str_len(char *s);

int main()
{
  char a[MAXCHAR];
  char *pa, c;
  int i;

  i = 0;
  a[i++] = getchar(); /*  */

  while ((c = getchar()) != '\n' && i < MAXCHAR)
    a[i++] = c;

  pa = a;  /* The pointer to a[0], equivalent to pa = &a[0] */
  printf("\nThe length of the character is %d\n", str_len(pa));
}

int str_len(char *s)
{
  int n;

  for (n = 0; *s != '\0'; s++)
    n++;
  return n;
}
