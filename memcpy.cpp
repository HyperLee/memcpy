#include<stdio.h>
#include<string.h>
 
int main(void)
{
  char src[] = "***";
  char dest[] = "abcdefg";
  printf("�ϥ� memcpy �e: %s\n", dest);
  memcpy(dest, src, strlen(src));
  printf("�ϥ� memcpy �Z: %s\n", dest);
  return 0;
}
