#include <unistd.h>

voidft_putchar(char c)
{
	write(1, &c, 1);
}

voidft_ft(char *********nbr)
{
	char nbr;
	char *nbr2;
	char **nbr3;
	char ***nbr4;
	char ****nbr5;
	char *****nbr6;
	char ******nbr7;
	char *******nbr8;
	char ********nbr9;
	char *********nbr10;

	*nbr = '4';
	nbr2 = &nbr;
	nbr3 = &nbr2;
	nbr4 = &nbr3;
	nbr5 = &nbr4;
	nbr6 = &nbr5;
	nbr7 = &nbr6;
	nbr8 = &nbr7;
	nbr9 = &nbr8;
	nbr10 = &nbr9;
}

int main()
{
	char a;
	char nbr;
    char *nbr2;
    char **nbr3;
    char ***nbr4;
    char ****nbr5;
    char *****nbr6;
    char ******nbr7;
    char *******nbr8;
    char ********nbr9;
    char *********nbr10;

	nbr = &a;
    nbr2 = &nbr;
    nbr3 = &nbr2;
    nbr4 = &nbr3;
    nbr5 = &nbr4;
    nbr6 = &nbr5;
    nbr7 = &nbr6;
    nbr8 = &nbr7;
    nbr9 = &nbr8;
    nbr10 =&nbr9;

	nbr = &a;
	ft_ft(b);
	ft_putchar(a);
	return (0);
}
