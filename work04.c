#include <stdlib.h>
#include <stdio.h>

#include <string.h>

/*
int strcmp(char *s1, char *s2);
int strncmp(char *s1, char *s2, size_t n) //size_t is the return type of sizeof

strcmp() compares two strings s1 and s2.
strncmp() is similar to strcmp(), except it compares at most n bytes.

returns diff in ASCII values of first unidentical char
*/

int main(){
  int result;
  char str1[] = "abcd";
  char str2[] = "abcd";
  char str3[] = "abCd";
  
  //=========================strcmp()=========================
  
  //comparing strings str1 and str2
  result = strcmp(str1, str2);
  printf("strcmp(str1, str2) = %d\n", result);
  //returns 0 b/c strings are the same

  //comparing strings str2 and str3
  result = strcmp(str2, str3);
  printf("strcmp(str2, str3) = %d\n", result);
  //returns 32 b/c ASCII value of 'c' is 99 and ASCII value of 'C' is 67

  //comparing strings str3 and str2
  result = strcmp(str3, str2);
  printf("strcmp(str3, str2) = %d\n", result);
  //returns -32 b/c ASCII value of 'C' is 67 and ASCII value of 'c' is 99


  //=========================strncmp()=========================

  //comparing first 2 bytes of str2 and str3
  result = strncmp(str2, str3, 2);
  printf("strncmp(str2, str3, 2) = %d\n", result);
  //returns 0 b/c first 2 bytes are identical

  //comparing first 3 bytes of str2 and str3
  result = strncmp(str2, str3, 3);
  printf("strncmp(str2, str3, 3) = %d\n", result);
  //returns 32 b/c differences in ASCII value of 3rd byte is 32


  return 0;
}
