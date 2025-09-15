#include <stdio.h>
#include <string.h>

int main()
{
  char word[80], reversed_word[80];
  int i, j, len;

  scanf("%s", word);

  len = strlen(word);

  for (i = 0, j = len - 1; i < len; i++, j--)
  {
    reversed_word[i] = word[j];
  }

  // word = 'madam';
  // reversed_word = '';
  // i = 5;
  // j = -1;
  // reversed_word[0] = word[4] => m;
  // reversed_word[1] = word[3] => a;
  // reversed_word[2] = word[2] => d;
  // reversed_word[3] = word[1] => a;
  // reversed_word[4] = word[0] => m;

  reversed_word[i] = '\0';
  printf("%s\n", reversed_word);

  if (strcmp(word, reversed_word) == 0)
  {
    printf("%s is a palindrome.\n", word);
  }
  else
  {
    printf("%s is not a palindrome.\n", word);
  }

  return 0;
}
