#include <stdio.h>

__attribute__((constructor))
void init()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
