#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// char* remove_char(char* src)
// {
//   int len = strlen(src);
//   printf("%s has a length of %i chars\n", src, len);
//   char first = src[0];
//   char c = first;
//   printf("first char: %c\n", first);
//   char *p = src;
//   p++[strlen(p)] = '\0';
//   printf("%s\n", p);
//   // change int to char
//   // int i = 65;
//   // char c = i;
//   // printf("%c", c); //prints A
// }

char* remove_char(char* dst, const char* src)
{
  char *p = (char*)src;
  p++[strlen(p)] = '\0';
  printf("%s\n", p);
  return (char*)p;
}

int main()
{
  char* buffer;
  char word[] = "something";
  const size_t buffer_size = strlen(word) + 1;
  buffer = (char*) malloc(buffer_size);
  remove_char(buffer, word);
  free(buffer);
}
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
