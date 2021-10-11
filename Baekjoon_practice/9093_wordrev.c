#include <stdio.h>

int main(void)
{
	int num = 0;;
	int i;
	int j;
	int k;
	int m;
	int check;
	int size;
	char str[BUFSIZ];
	char arr[21][BUFSIZ];

	scanf("%d", &num);
	while (num > 0)
	{
		getchar();
		scanf("%[^\n]s", str);
		size = 0;
		while (str[size])
			size++;
		i = 0;
		j = 0;
		while (i < size)
		{
			k = 0;
			while (str[i] != ' ' && str[i])
			{
				arr[j][k] = str[i];
				i++;
				k++;
			}
			arr[j][k] = '\0';
			j++;
			i++;
		}
		i = 0;
		while (i < j)
		{
			size = 0;
			while (arr[i][size])
				size++;
			size--;
			while (arr[i][size])
			{
				printf("%c", arr[i][size]);
				size--;
			}
			printf(' ');
			i++;
		}
		num--;
		printf("\n");
	}
	return 0;
}