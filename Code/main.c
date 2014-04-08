#include <stdio.h>
#include "include/htmlparser.h"
#include "include/jsparser.h"

int main() {
  unsigned int getchar_ret;
  htmlparser_ctx *parser = htmlparser_new();
  

  while((getchar_ret = getchar()) != EOF) {
    char c = (char)getchar_ret;

    /* If we received a '$' character, we output the current tag and attribute
     * name to stdout. */

    if (c == '$') {
      printf("[[ ");
      if (htmlparser_tag(parser))
        printf("tag=%s ", htmlparser_tag(parser));
      if (htmlparser_attr(parser))
        printf("attr=%s ", htmlparser_attr(parser));
      printf("]]");


    /* If we read any other character, we pass it to the parser and echo it to
     * stdout. */
    } else {

      htmlparser_parse_chr(parser, c);
      putchar(c);
    }
  }
}
