#include<stdio.h>
#include<string.h>
 
int main(void)
{
  char src[] = "***";
  char dest[] = "abcdefg";
  printf("Before: %s\n", dest);
  memcpy(dest, src, strlen(src));
  printf("After: %s\n", dest);
  return 0;
}
