#include <stdlib.h>
char *ft_strncpy(char *s1, char *s2, int n)
{
	int i = -1;
	while(++i < n && s2[i])
	{
		s1[i] = s2[i];
	}
	s1[i] = '\0';
	return(s1);
}
char    **ft_split(char *str)
{
	int i = 0;
	int j = 0;
	int k = 0;
	int wc = 0;
	while(str[i])
	{
		while(str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
			i++;
		if(str[i])
			wc++;
		while(str[i] && (str[i] != ' ' && str[i] != '\t' && str[i] != '\n'))
			i++;
	}
	char **out = (char **)malloc(sizeof(char *) * (wc + 1));
	i = 0;
	while(str[i])
	{
		while(str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
			i++;
		j = i;
		while(str[i] && (str[i] != ' ' && str[i] != '\t' && str[i] != '\n'))
			i++;
		if(j < i)
		{
			out[k] = (char *)malloc(sizeof(char) * ((i - j) + 1));
			ft_strncpy(out[k++], &str[j], i - j);
		}
	}
	out[k] = NULL;
	return(out);
}
/*
#include <stdio.h>
int main()
{
	char *str = ("merhaba deli dunya");
	char **res = ft_split(str);
	int i = 0;
	while(res[i] != NULL)
	{
		printf("%s\n", res[i]);
		i++;
	}
}
*/