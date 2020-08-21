int main (int av, char **ac)
{
	char **result;
	int i;

	i = 0;
	result = ft_split(ac[1], ac[2][0]);
	if (!result)
		return (0);
	while (result[i])
	{
		printf("%s\n", result[i]);
		i++;
	}
}
