#include <stdio.h>
#include <stdlib.h>

#define count(a) (sizeof(a)/sizeof(*a))

int main(int argc, char const *argv[])
{
	for(int i = 0; i < 10; ++i)
	{
		printf("%i\n", i);
	}

	return 0;
}