#include "main.h"
#include <stdlib.h>
#include <time.h>

/**
 * main - entry point
 *
 * Return: random number
 */


int main(void)
{
	srand(time(NULL));
	return rand(); 
}
