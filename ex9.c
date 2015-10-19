#include <stdio.h>
const int EXIT_SUCCCESS = 0;

int main()
{
  int numbers[4] = {0};
  char name[4] = {'a','a','a','a'};

  //first print them out raw
  printf("numbers: %d %d %d %d\n", numbers[0], numbers[1], numbers[2], numbers[3]);
  printf("name each: %c %c %c %c\n", name[0], name[1], name[2], name[3]);
  printf("name: %s\n", name);

  // set the numbers
  numbers[0] = 1;
  numbers[1] = 2;
  numbers[2] = 3;
  numbers[3] = 4;

  // set the name
  name[0] = 'Z';
  name[1] = 'e';
  name[2] = 'd';
  //name[3] = '\0';

  //print them initialized
  printf("numbers: %d %d %d %d\n", numbers[0], numbers[1], numbers[2], numbers[3]);
  printf("name each: %c %c %c %c\n", name[0], name[1], name[2], name[3]);
  
  // another way to use name (to initialize a string)
  char *another = "Zed";
  printf("another: %s\n", another);
  printf("another each: %c %c %c %c\n",
    another[0], another[1], another[2], another[3] );
  numbers[0] = name[0];
  printf("name[0] into numbers[0]: %d\n", numbers[0]);
  name[0] = numbers[0];
  printf("numbers[0] into name[0]: %c\n", name[0]);

  return EXIT_SUCCCESS;
}