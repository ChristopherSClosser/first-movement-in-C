#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* remove_char(char* dst, const char* src)
{
  char *p = (char*)src;
  p++[strlen(p) - 1] = '\0';
  // printf("%s\n", p);
  return (char*)p;
}

void flush();
int main()
{
    char str[25];
    char hld[25];
    // char word;

    printf("Enter a word or sentence\n");
    fgets(hld, 25, stdin);

    printf("\nYou typed: %s\n", hld);
    printf("Would you like to strip the first and last characters?\n");
    fgets(str, 25, stdin);
    // printf("hold %s\n", hld);
    if (str[0]=='Y')
      printf("you pressed yes or: %s\n", str);
      char* buffer;
      const size_t buffer_size = strlen(hld) + 1;
      buffer = (char*) malloc(buffer_size);
      printf("%s\n", remove_char(buffer, hld));
      free(buffer);

      // flush leaves the prompt running
      // flush();

    return 0;
}

void flush()
{
    int c;
    while ((c = getchar()) != '\n' && c != EOF)
        ;
}

// int main () {
//     char word;
//
//     printf("Type in a word \n");
//     scanf("%s", word);
//     printf("The word you typed was %s\n", word);
// }

// int main()
// {
//   char* buffer;
//   // char word[1024];
//   // scanf("Enter string to remove first and last character: %1023s", word);      /* scan until whitespace or no more space */
//   // scanf("%1023[^\n]", word);  /* scan until newline or no more space */
//   // fgets(word, 1024, stdin);   /* scan including newline or no more space */
//   // printf("Enter string to remove first and last character: ");
//   // fgets(word);
//   // printf("You said: %s\n", word);
//   // char x[10];
//   char word[1024] = raw_input("Enter string to remove first and last character: ", word, 1024);
//   const size_t buffer_size = strlen(word) + 1;
//   buffer = (char*) malloc(buffer_size);
//   remove_char(buffer, word);
//   free(buffer);
// }
// #include <criterion>
// #include <string.h>
// #include <stdlib.h>

// char* remove_char(char*, const char*);


// int main ()
// {
//   int i;
//   char* strings[] = {"eloquent", "country", "person", "place", "ok"};
//   // char* expected[] = {"loquen", "ountr", "erso", "lac", ""};
//   char* buffer;
//     for(i=0; i<sizeof(strings)/sizeof(char*); i++) {
//         const size_t buffer_size = strlen(strings[i]) + 1;
//         buffer = (char*) malloc(buffer_size);
//         // memset(buffer, '#', buffer_size);
//         remove_char(buffer, strings[i]);
//         // cr_assert_str_eq(remove_char(buffer, strings[i]), expected[i]);
//         free(buffer);
//     }
// }
