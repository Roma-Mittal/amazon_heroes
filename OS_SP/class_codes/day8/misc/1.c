#include<stdio.h>
#include<string.h>

void main()
{
	char buf[20] = "hello saturday";
	printf("buf = %s\n", buf);
	memset(buf, '-', 9);
	printf("buf = %s\n", buf);

	return;
}
