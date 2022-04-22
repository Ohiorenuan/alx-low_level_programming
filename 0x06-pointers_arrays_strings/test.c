#include <stdio.h>

int main(void)
{
	int n = 0;
	char s1[98] = "Hello ";
	while (s1[n])
	{
		n++;
	}
	s1[n] = 't';
	s1[n + 1] = '\0';
	printf("%s\n",s1);
	return (0);
}
