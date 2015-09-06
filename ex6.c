#include <stdio.h>
#include <wchar.h>
int main()
{
  int distance = 100;
  float power = 2.345;
  double super_power = 56789.4532;
  char initial = 'A';
  char first_name[] = "Краси";
  char last_name[] = "Беров";

  printf("You are %i miles away.\n", distance);
  printf("You have %.3f levels of power.\n", power);
  printf("You have %.5f awesome super_power.\n", super_power);
  printf("Mоята първа буква е %c.\n", initial);
  printf("Аз имам собствено име %s.\n", first_name);
  wprintf("Аз имам фамилно име %ls.\n", last_name);
  puts("");

  return 0;
}
