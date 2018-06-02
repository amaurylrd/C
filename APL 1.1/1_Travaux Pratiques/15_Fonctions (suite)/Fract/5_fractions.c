#include "mylib.h"

int		main(void)
{
	char		c;
	char		a[256], b[256];
	int			testa, testb, testc;
	double		var1, var2, var3, var4, res;

	printf("Entrez une fraction (a/b) : ");
	testa = scanf("%s", a);
	getchar();

	while (testa == 0)
	{
		printf("Error Syntax ; Usage : <int/int>.\n");
		main();
	}

	printf("Choisissez une opération (+, -, *, /) : ");
	testc = scanf("%c", &c);
	getchar();

	while (testc == 0)
	{
		printf("Error Syntax ; Usage : <int/int>.\nChoisissez une opération (+, -, *, /) : ");
		testc = scanf("%c", &c);
		getchar();
	}
	if (checker_char(c) == 1)
		exit (1);

	printf("Entrez une fraction (a'/b') : ");
	testb = scanf("%s", b);
	getchar();

	while (testb == 0)
	{
		printf("Error Syntax ; Usage : <int/int>.\nEntrez une fraction (a'/b') : ");
		testb = scanf("%s", b);
		getchar();
	}
	if (checker_int(a) == 1 || checker_int(b) == 1)
		exit (1);

	var1 = split_a(a);
	var3 = split_a(b);
	var2 = split_b(a);
	var4 = split_b(b);
	if (warn_0(var2) == 1 || warn_0(var4) == 1)
	{
		printf("Error Data (b != 0) ; Usage : <a/b>.\n");
		exit (1);
	}

	printf("\nvar 1/2 : %.0lf / %.0lf\nsigne   : %c\nvar 3/4 : %.0lf / %.0lf\n\n", var1, var2, c, var3, var4);
	res = ope(var1, var2, var3, var4, c);
	printf("Le resultat reel (5.3) est %5.3lf.\nLa fraction minimale est %.0lf/1.\n", res, res);
	return (1);
}

int			warn_0(double var)
{
	return (var == 0 ? 1 : 0);
}

double		conv(double x, int d)
{
	int res;
	
	res = x * d;
	return (res);
}

double		ope(double v1, double v2, double v3, double v4, char c)
{
	double			res, top, bot;

	top = v1/v2;
	bot = v3/v4;

	if (c == '+')
		res = top + bot;
	else if (c == '-')
		res = top - bot;
	else if (c == '*')
		res = top * bot;
	else
		res = top / bot;
	return (res);
}

int		checker_char(char c)
{
	if (c != '/' && c != '+' && c != '*' && c != '-')
	{
		printf("Error Syntax (wrong ope) ; Usage <char>.\n");
		return (1);
	}
	return (0);
}

int		checker_int(char *str)
{
	size_t		i, cmp, k;

	i = 0;
	cmp = 0;
	k = 0;
	while (str[i])
	{
		if ((str[i] >= '0') && (str[i] <= '9'))
			cmp++;
		if (str[i] == '/')
			k++;
		i++;
	}
	if (i == cmp)
	{
		printf("Error Syntax (missing '/'); Usage : <int/int>.\n");
		return (1);
	}
	/*ne marche pas des dixaines (ex 1/12 / 1/20) /!\ */
	if (k > 1) 
	{
		printf("Error Syntax (only 1 '/' CHAR); Usage : <int/int>.\n");
		return (1);
	}
	return (0);
}

double		split_a(char *str)
{
	double			var;

	var = atoi(str);
	return (var);
}

double      split_b(char *str)
{
	double		var, tmp, k;
	size_t		i, cmp;

	var = 0.0;
	i = 0;
	cmp = 0;
	while (str[i])
	{
		if (str[i] == '/')
			cmp = i;
		i++;
	}
	if (cmp == 0)
	{
		printf("Error Syntax ; Usage <int/int>.\n");
		exit (1);
	}
	--i;
	k = 1.0;
	while (i > cmp)
	{
		tmp = (double)(str[i] - '0');
		var += tmp * k;
		k *= 10.0;
		i--;
	}
	return (var);
}
