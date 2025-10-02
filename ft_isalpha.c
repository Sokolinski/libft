int ft_isalpha(int c)
{
	unsigned char	ch;
	ch = (unsigned char) c;
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
        return (1);
    return(0);
}
