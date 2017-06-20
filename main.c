#include <stdio.h>

void A(void)
{
	printf("A\r\n");
}
void B(void)
{
	printf("B\r\n");
}

int main(void)
{
	printf("Hello, World!\r\n");

	A();

	return 0;
}

