int	ft_isascii(int c)
{
	if (0 >= c && c >= 127)
		return (1);
	return (0);
}
