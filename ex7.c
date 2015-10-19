//ex7.c
#include <stdio.h>
int main(int argc, char const *argv[])
{
  int bugs = 100;
  double bug_rate = 1.2;
  printf("You have %d bugs at the imaginary bug rate of %.2f.\n", bugs, bug_rate);

  long universe_of_defects = 1L * 1024L * 1024L * 1024L;
  printf("The entire universe has %ld bugs.\n", universe_of_defects);
  
  double expected_bugs = bugs * bug_rate;
  printf("You are expected to have %.3f bugs.\n", expected_bugs);
  
  return 0;
}