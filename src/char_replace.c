#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* replacechar(char *str, char *orig, char *rep) {
    char *chr = str;
    int i = 0;
    while((chr = strchr(chr, *orig)) != NULL) {
        *chr++ = *rep;
        i++;
    }
    return (char*)str;
}

int main() {
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

    /* flush leaves the prompt running */
    // flush();
  }
  return 0;
}
