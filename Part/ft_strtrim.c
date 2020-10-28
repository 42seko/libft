#include "libft.h"

int check_front(char const *s1, char const *set)
{
        int i;
        int j;

        i = 0;
        j = 0;
        while (s1[i]) //Hello World!
	{
		while (set[j] != '\0') //Hlde
                {
                        if (s1[i] == set[j]) //H == H e != H e != l e != d e == e
				break;
			j++;
                }
		if (j == '\0') // j = 0 j = e
			break;
		i++; //i = 1 i = 2
		j = 0;
	}
	return (i); //4
}

int check_end(char const * s1, char const *set)
{
        int i;
        int j;

        i = ft_strlen(s1);//12
        j = 0;
        while (i > 0)
		{
                while (set[j] != '\0')
                {
                        if (s1[i] == set[j])
                                break;
                        j++;
                }
				if (j == '\0')
					break;
				i--;
				j = 0;
		}
		return (i);
}

char    *ft_strtrim(char const *s1, char const *set)
{
        char *temp;
        int front;
        int end;
        int i;
	int j;

        i = 0;
        front = check_front(s1, set); // 4
        end = check_end(s1, set);// 12
        if (!(temp = (char *)malloc(sizeof(char *) * (end - front + 1))))
                return (0);
		j = front; //4
        while (i < end + 1)
        {
                temp[i] = s1[j];
                i++;
				j++;
        }
		temp[i] = '\0';
        return (temp);
}

#include <stdio.h>
int main(void)
{
	char arr[50] = "Hello World!";
	char Arr[50] = "Hlde";
	printf("%s", ft_strtrim(arr, Arr));
}
