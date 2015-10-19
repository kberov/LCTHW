#include <stdio.h>
//#include <wchar.h>//wide character support - not yet understood how to use it
#include <string.h>//http://www.programmingsimplified.com/c-program-find-string-length
// http://stackoverflow.com/questions/5117393/utf-8-strings-length-in-linux-c
// TODO: http://www.daemonology.net/blog/2008-06-05-faster-utf8-strlen.html
// See also: http://www.programmingsimplified.com/c-program-examples
int main()
{
  int areas[] = {10, 12, 13, 14, 20, 2};
  char name[] = "Краси";
  char full_name[] = {
    'Z','e','d',
    ' ', 'A', ' ',
    'S', 'h', 'a', 'w', name[0],name[1],
    '\0' //avoid message "Conditional jump or move depends on uninitialised value(s)" in valgrind
  };

  // On some systems you may have to change the
  // %ld in this code to a %u since it will use unsigned ints
  printf("The size of an int: %ld\n", sizeof(int));
  printf("The size of areas (int[]): %ld\n",sizeof(areas));
  printf("The number of ints in areas: %ld\n", sizeof(areas) / sizeof(int));
  int last_in_areas = sizeof(areas) / sizeof(int) - 1;
  puts("All areas:");
  for (int i = 0; i <= last_in_areas; ++i)
  {
    printf(" %d", areas[i] );
  }
  printf("\nLast index number in areas: %d\n", last_in_areas);
  printf("The first area is %d, the last: %d\n\n", areas[0], areas[last_in_areas]);

  printf("The size of a char: %ld\n", sizeof(char));
  printf("The size of name (char[]):%ld\n", sizeof(name));
  printf("The number of chars in name: %ld\n\n", sizeof(name) / sizeof(char));
  
  printf("The length of name is %ld\n\n", strlen(name));
  puts("Name printed byte by byte:");
  /* Avoid valgrind errors "Conditional jump or move depends on uninitialised value(s)"
   and
   "Syscall param write(buf) points to uninitialised byte(s)"
   by using i < sizeof(name) and not i <= sizeof(name)
   Valgrind warns of the usage of the null byte in printf.
  */
  for (unsigned int i = 0; i < sizeof(name); ++i)
  {
    printf("%c",name[i] );
    if (i==strlen(name)) puts("");
  }
  
  printf("The sizeof full_name (char[])%ld\n", sizeof(full_name));
  printf("The number of chars in full_name: %ld\n\n", sizeof(full_name) / sizeof(char));
  
  printf("name='%s' and full_name='%s'\n\n", name, full_name);
  return 0;
}