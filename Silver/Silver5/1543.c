//1543
#include <stdio.h>
#include <string.h>

int main()
{
  char str[2501] = {}; scanf("%[^\n]s", str);
  getchar();
  char target[51] = {}; scanf("%[^\n]s", target);
  
  int strlength = strlen(str);
  int targetlength = strlen(target);
  int count = 0;

  for(int i = 0; i < strlength; i++)
  {
    int k = i;
    int checker = 1;
    for(int j = 0; j < targetlength; j++)
    {
      if(str[k] != target[j])
      {
        checker = 0;
        break;
      }
      k++;
    }
    if(checker)
    {
      count++;
      i = k - 1;
    }
  }
  printf("%d", count);
}
