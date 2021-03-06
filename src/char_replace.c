#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/* -------- Works only with single characters -------- */
char* replacechar(char *str, char *orig, char *rep) {
    char *chr = str;
    int i = 0;
    while((chr = strchr(chr, *orig)) != NULL) {
        *chr++ = *rep;
        i++;
    }
    return (char*)str;
}
char *correct(char *string)
{
  // ----------- nice way of doing it ----------
  // for (char *a = &string[0]; *a != '\0'; a += 1)
  // {
  //   *a = (*a == '0')? 'O': (*a == '5')? 'S': (*a == '1')? 'I' : *a;
  // }
  // return string;

  char *o_char = "0";
  char o = 'O';
  char *s_char = "5";
  char s = 'S';
  char *i_char = "1";
  char i = 'I';

  char *c = string;
  while (*c)
  {
    if (strchr(s_char, *c))
    {
      *c = s;
    }
    if (strchr(o_char, *c))
    {
      *c = o;
    }
    if (strchr(i_char, *c))
    {
      *c = i;
    }
    *c++;
  }
  return string;
}

int main() {
  char src[] = "PAR15";
  // printf("%s\n", src);

  printf("%s\n", correct(src));
  /* ----------- prompts for word and replacement character -------------
  char str[25];
  char hld[25];
  char orig[25];
  char rep[25];

  printf("Enter a word or sentence\n");
  fgets(hld, 25, stdin);

  printf("\nYou typed: %s\n", hld);
  printf("Would you like to replace any characters?\n");
  fgets(str, 25, stdin);

  if (str[0]=='Y')
  {
    printf("Enter character to replace:\n");
    fgets(orig, 25, stdin);
    printf("you entered: %s\nEnter replacement character:\n", orig);
    fgets(rep, 25, stdin);
    printf("you entered: %s\n", rep);
    printf("%s\n", replacechar(hld, orig, rep));

     // flush leaves the prompt running
    // flush();
  }
  */
  return 0;
}
