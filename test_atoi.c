#include <stdio.h>
#include <stdlib.h>

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (c);
	return (0);
}
int	ft_isspace(int c)
{
	if (c == ' ' || (c >= 9 && c <= 13))
		return (1);
	return (0);
}
int	ft_atoi(const char *str)
{
	int	result;
	int	sign;

	result = 0;
	sign = 1;
	while (ft_isspace(*str))
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign *= -1;
		str++;
		if (ft_isdigit(*str) == 0) 
			return (result);
	}
	while (ft_isdigit(*str))
	{
		result *= 10;
		result += (*str - 48) * sign;
		str++;
	}
	return (result);
}

int main (int argc, char **argv)
{
	printf("%d\n", atoi(argv[1]));
	printf("%d\n", ft_atoi(argv[1]));
}
