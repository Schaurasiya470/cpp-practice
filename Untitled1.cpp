#include <stdio.h>
#include <stdlib.h>

int main()
{
	for (int i = 0; i < 5; i++)
	{
		if (i % 2 != 0)
		{
			for (int j = 0; j < 5; j++)
				printf("* ");
		}
		else
			for (int j = 0; j < 5; j++)
				printf(" *");
		printf("\n");
	}
}
