#include <iostream>
#include <cstdlib>
int main()
{
	int i;
	int *ptr = (int *)malloc(sizeof(int) * 5);
	for (i = 0; i < 5; i++)
	{
		ptr[i] = i;
		printf("%d", ptr[i]);
	}
}
