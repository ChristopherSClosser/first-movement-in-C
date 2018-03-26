#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// char *correct(char *string)
// {
//
// }

char* replacechar(char *str, char *orig, char *rep) {
    char *ix = str;
    int n = 0;
    while((ix = strchr(ix, *orig)) != NULL) {
        *ix++ = *rep;
        n++;
    }
    return (char*)str;
}

int main() {
  char str[25];
  char hld[25];
  char orig[25];
  char rep[25];
  // char word;

  printf("Enter a word or sentence\n");
  fgets(hld, 25, stdin);

  printf("\nYou typed: %s\n", hld);
  printf("Would you like to replace any characters?\n");
  fgets(str, 25, stdin);
  // printf("hold %s\n", hld);
  if (str[0]=='Y')
  {
    printf("Enter character to replace:\n");
    fgets(orig, 25, stdin);
    printf("you entered: %s\nEnter replacement character:\n", orig);
    fgets(rep, 25, stdin);
    printf("you entered: %s\n", rep);
    // printf("Enter replacement character:\n");
    // fgets(rep, 25, stdin);
    // char* buffer;
    // const size_t buffer_size = strlen(hld) + 1;
    // buffer = (char*) malloc(buffer_size);
    printf("%s\n", replacechar(hld, orig, rep));
    // free(buffer);

    /* flush leaves the prompt running */
    // flush();
  }
  return 0;
}
