#include<stdio.h>
/**
  *main - program that prints the size of various types on the computer it is compiled and run on.
  *Return: always 0 (success)
  */
int main(void)
{
	printf("size of a char: %d bytes(s)", sizeof(char));
	printf("size of an int: %d byte(s)", sizeof(int));
	printf("size of a long int: %d byte(s)", sizeof(long int));
	printf("size of a long long int: %d byte(s)", sizeof(long long int));
return (0);
}
