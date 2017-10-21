#include <stdio.h>
#include "dbg.h"
#include "test.h"

int counter()
{
	int i = 0;
	for (i = 0; i < 5; i++) {
		printf("count is at %d", i);
	}

	return i;
}

int main(int argc, char *argv[])
{
	counter();
	
	return 0;
}
