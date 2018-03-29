#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/*
"""
------------- Python version ---------------

def high(x):
    alpha = 'abcdefghijklmnopqrstuvwxyz'
    wlist = x.lower().split(' ')
    scores = []
    for word in wlist:
        total = 0
        for char in word:
            total += alpha.find(char) + 1
        scores.append(total)
    return wlist[scores.index(max(scores))]
"""

 @param str: a C-string containing only lowercase letters and spaces (' ')
    @return: a C-string allocated on the heap containing the highest scoring word of str
*/
char *highestScoringWord(char *str)
{
  char *p = str;
  const char *alph = "abcdefghijklmnopqrstuvwxyz";
  char * found = strstr( alph, "z" );
  int idx = found - alph + 1;
  printf("%i\n", idx);
  return p;
}

int main(int argc, char const *argv[]) {
  printf("%s\n", highestScoringWord("OnE"));
  return 0;
}
