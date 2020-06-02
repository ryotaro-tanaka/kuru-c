// $ make
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  char str[32];

  fgets(str, sizeof(str), stdin);

  int val = atoi(str);
  printf("%d\n", val*val);
  
  return 0;
}
