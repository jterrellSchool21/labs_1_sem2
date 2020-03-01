#include <cstdio>
#include <cstdlib>
#include <ctime>

#define ABS(x) (x > 0) ? x : x * -1
#define MAXRAND 100
#define N 3
#define M 3

void	PrintArray_one(int *array, int n)
{
	int		i;

	i = 0;
	printf("X = ");
	while (i < n)
	{
		printf("%d ", array[i]);
		i++;
	}
	printf("\n");
}

int		*SolveMatrix(int **array1, int **array2, int n, int m)
{
	int 	i;
	int		j;
	int 	*X;
	int 	flag;

	i = 0;
	if (!(X = (int*)malloc(sizeof(int) * N)))
		exit(1);
	while (i < n)
	{
		j = 0;
		flag = 1;
		while (j < m)
		{
			if (array1[i][j] > array2[i][j])
				flag = 0;
			j++;
		}
		if (flag == 1)
			X[i] = 1;
		else
			X[i] = 0;
		i++;
	}
	return (X);
}

int 	*Medium_Value(int **array, int n, int m)
{
	int 	i;
	int		j;
	int 	res;
	int		count;
	int 	*number;

	number = (int*)malloc(sizeof(int) * N + 1);
	count = 0;
	i = 0;
	res = 0;
	while (i < n)
	{
		j = 0;
		while (j < m)
		{
			if (array[i][j] >= 0)
			{
				count++;
				res += array[i][j];
			}
			j++;
		}
		if (i > 0 && number[i - 1] < count)
			number[i] = count - number[i];
		else
			number[i] = count;
		i++;
	}
	number[N] = res / count;
	return (number);
}

void	Free_Matrix(int **array, int n, int m)
{
	int 	i;

	i = 0;
	while (i < n)
	{
		free(array[i]);
		i++;
	}
	free(array);
}

int 	Value_Of_Main(int **array, int n, int m)
{
	int 	i;
	int 	j;
	int 	res;

	res = 0;
	i = 0;
	while (i < n)
	{
		j = 0;
		while (j < m)
		{
			if (i == j)
				res += array[i][j];
			j++;
		}
		i++;
	}
	return (res);
}

void	Do_Absolute_Value(int **array, int n, int m)
{
	int 	i;
	int 	j;

	i = 0;
	while (i < n)
	{
		j = 0;
		while (j < m)
		{
			if (array[i][j] < 0 && i < j)
				array[i][j] = ABS(array[i][j]);
			j++;
		}
		i++;
	}
}

void	ft_bzero(int **array, int n, int m)
{
	int 	i;
	int 	j;

	i = 0;
	while (i < n)
	{
		j = 0;
		while (j < m)
		{
			array[i][j] = 0;
			j++;
		}
		i++;
	}
}

void	FillArray(int **array, int n, int m)
{
	int 	i;
	int 	j;

	i = 0;
	while (i < n)
	{
		j = 0;
		while (j < m)
		{
			array[i][j] = rand() % MAXRAND - MAXRAND / 2;
			j++;
		}
		i++;
	}
}

void	PrintArray(int **array, int n, int m)
{
	int 	i;
	int 	j;

	i = 0;
	while (i < n)
	{
		j = 0;
		while (j < m)
		{
			printf("array[%d][%d] = %d \t", i, j, array[i][j]);
			j++;
		}
		printf("\n");
		i++;
	}
}

int		**CreateArray(int n, int m)
{
	int 	i;
	int 	**res;

	i = 0;
	if (!(res = (int**)malloc(sizeof(int*) * n)))
		exit(1);
	while (i < m)
	{
		if (!(res[i] = (int*)malloc(sizeof(int) * m)))
			exit(1);
		i++;
	}
	ft_bzero(res, n, m);
	return (res);
}

void	Put_To_File(int **mass, int n, int m)
{
	int 	i;

	fopen()
}

int		main(void)
{
	int 	**first;
	int 	**A;
	int 	main_1;
	int 	medium_value;

	srand(time(0));
	first = CreateArray(N, M);
	A = CreateArray(N, M);
	FillArray(first, N, M);
	FillArray(A, N, M);
	PrintArray(first, N, M);
	printf("\n");
	PrintArray(A, N, M);
	main_1 = Value_Of_Main(first, N, M);
	medium_value = Medium_Value(first, N, M)[N];
	printf("Medium value of first matrix = %d\n", medium_value);
	printf("Value of first matrix main = %d\n", main_1);
	PrintArray_one(SolveMatrix(first, A, N, M), N);
	Do_Absolute_Value(first, N, M);
	PrintArray(first, N, M);
	Free_Matrix(first, N, M);
	return 0;
}