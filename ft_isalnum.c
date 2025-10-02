int ft_isalnum(int c)
{
	unsigned char	ch;

	ch =(unsigned char) c;
    if((ch >= '0' && ch <= '9') || (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
        return (1);
    return (0);
}
