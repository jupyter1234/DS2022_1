#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	int n1, n2;
	printf("First num : ");
	scanf("%d", &n1);
	printf("Second num : ");
	scanf("%d", &n2);
	if (n1 >= 100000 || n2>=100000)
	{
		printf("\nNumber must be less than 100000.");
	}
	else
	{
		//약수 찾아서 합 구하기
		int sum1 = 0, sum2 = 0;
		for (int i = 1; i < n1; i++)
		{
			if (n1 % i == 0)
			{
				sum1 += i;
			}
		}

		for (int i = 1; i < n2; i++)
		{
			if (n2 % i == 0)
			{
				sum2 += i;
			}
		}

		if (sum1 == n2 && sum2 == n1)
		{
			printf("Amicable");
		}
		else
			printf("Not amicable");
	}
	}
	
	
