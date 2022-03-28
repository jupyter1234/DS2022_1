#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	FILE* f1;
	char* f1name = "input.txt";
	int list[9];
	f1 = fopen(f1name, "r");
	for (int i = 0; i < 9; i++)
	{
		fscanf(f1, "%d ", &list[i]);
	}

	int max = -9999;
	int min = 9999;
	for (int i = 0; i < 9; i++)
	{
		if (list[i] > max)
		{
			max = list[i];
		}
	}
	for (int i = 0; i < 9; i++)
	{
		if (list[i] < min)
		{
			min = list[i];
		}
	}
	printf("Min: %d\nMax: %d", min, max);
	fclose(f1);

}