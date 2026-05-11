#include <stdio.h>
#include <stdlib.h>

int main()
{
	for (int i = 0; i < 5; i++)
	{

		for (int j = 0; j < 5; j++)
		{

			if (i == 0 || i == 4)
				printf("*");
			if (i > 0 && i < 4)
			{
				if (j == 0)
					printf("*");
				else
					printf(" ");
			}
		}
		printf("\n");
	}
}
