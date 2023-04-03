#include <stdio.h>
/**
  *main - Program that prints the size of various types
  *Return: always 0 (success)
  */
int main(void)
{
	printf("size of a char: %d bytes(s)\n", sizeof(char));
	printf("size of an int: %d byte(s)\n", sizeof(int));
	printf("size of a long int: %d byte(s)\n", sizeof(long int));
	printf("size of a long long int: %d byte(s)\n", sizeof(long long int));
return (0);
}
