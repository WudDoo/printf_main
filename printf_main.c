#include<stdio.h>
#include<limits.h>
#include"../ft_printf.h"

int	check(int x, int y, int num, FILE *fp)
{
	if (x != y)
	{
		fprintf (fp,"\n%d: KO (Diff return value)\n", num);
		return (1);
	}
	else
		fprintf (fp,"%d: OK!!    ", num);
	if (num % 5 == 0)
		fprintf(fp,"\n");
	return (0);
}

int	main(void)
{
	FILE *fp;
	int		i = 0;
	char	*s = "Thi\ts is a str \n ing, wit h text and stuff!$ 3@ ~$*#";

	fp = fopen("res.txt", "w+");

	fprintf(fp,"_____________\n");
	fprintf(fp,"|            |\n");
	fprintf(fp,"|  %%c TESTS  |\n");
	fprintf(fp,"|____________|\n\n");
	i += check(printf("%c",'0'), ft_printf("%c",'0'), 1, fp);
	i += check(printf("%c %c",'0', 0), ft_printf("%c %c",'0', 0), 2, fp);
	i += check(printf("%c %c %c",' ', '1', '2'), ft_printf("%c %c %c",' ', '1', '2'), 3, fp);

	fprintf(fp,"\n\n\n_____________\n");
	fprintf(fp,"|            |\n");
	fprintf(fp,"|  %%s TESTS  |\n");
	fprintf(fp,"|____________|\n\n");
	i += check(printf("%s", ""), ft_printf("%s", ""), 1, fp);
	i += check(printf("   %s  ", ""), ft_printf("   %s  ", ""), 2, fp);
	i += check(printf(" %s ", "-"), ft_printf(" %s ", "-"), 3, fp);
	i += check(printf(" %s %s ", " - ", ""), ft_printf(" %s %s ", " - ", ""), 4, fp);
	i += check(printf(" %s %s %s %s %s", " - ", "", "4", "", s), ft_printf(" %s %s %s %s %s", " - ", "", "4", "", s), 5, fp);

	fprintf(fp,"\n\n\n_____________\n");
	fprintf(fp,"|            |\n");
	fprintf(fp,"|  %%p TESTS  |\n");
	fprintf(fp,"|____________|\n\n");
	i += check(printf(" %p ", (void *)0),ft_printf(" %p ", (void *)0), 1, fp);
	i += check(printf(" %p ", (void *)-2),ft_printf(" %p ", (void *)-2), 2, fp);
	i += check(printf(" %p ", (void *)1),ft_printf(" %p ", (void *)1), 3, fp);
	i += check(printf(" %p ", (void *)87),ft_printf(" %p ", (void *)87), 4, fp);
	i += check(printf(" %p ", (void *)104),ft_printf(" %p ", (void *)104), 5, fp);
	i += check(printf(" %p ", (void *)INT_MIN),ft_printf(" %p ", (void *)INT_MIN), 6, fp);
	i += check(printf(" %p ", (void *)INT_MAX),ft_printf(" %p ", (void *)INT_MAX), 7, fp);

	fprintf(fp,"\n\n\n_____________\n");
	fprintf(fp,"|            |\n");
	fprintf(fp,"|  %%d TESTS  |\n");
	fprintf(fp,"|____________|\n\n");
	i += check(printf(" %d ", 0),ft_printf(" %d ", 0), 1, fp);
	i += check(printf(" %d ", -2),ft_printf(" %d ", -2), 2, fp);
	i += check(printf(" %d ", 10),ft_printf(" %d ", 10), 3, fp);
	i += check(printf(" %d ", 87),ft_printf(" %d ", 87), 4, fp);
	i += check(printf(" %d ", 1),ft_printf(" %d ", 1), 5, fp);
	i += check(printf(" %d ", 104),ft_printf(" %d ", 104), 6, fp);
	i += check(printf(" %d ", -35),ft_printf(" %d ", -35), 7, fp);
	i += check(printf(" %d ", -116),ft_printf(" %d ", -116), 8, fp);
	i += check(printf(" %d ", INT_MIN),ft_printf(" %d ", INT_MIN), 9, fp);
	i += check(printf(" %d ", INT_MAX),ft_printf(" %d ", INT_MAX), 10, fp);
	i += check(printf(" %d %d ", INT_MIN, INT_MAX),ft_printf(" %d %d ", INT_MIN, INT_MAX), 11, fp);

	fprintf(fp,"\n\n\n_____________\n");
	fprintf(fp,"|            |\n");
	fprintf(fp,"|  %%i TESTS  |\n");
	fprintf(fp,"|____________|\n\n");
	i += check(printf(" %i ", 0),ft_printf(" %i ", 0), 1, fp);
	i += check(printf(" %i ", -2),ft_printf(" %i ", -2), 2, fp);
	i += check(printf(" %i ", 10),ft_printf(" %i ", 10), 3, fp);
	i += check(printf(" %i ", 87),ft_printf(" %i ", 87), 4, fp);
	i += check(printf(" %i ", 1),ft_printf(" %i ", 1), 5, fp);
	i += check(printf(" %i ", 104),ft_printf(" %i ", 104), 6, fp);
	i += check(printf(" %i ", -35),ft_printf(" %i ", -35), 7, fp);
	i += check(printf(" %i ", -116),ft_printf(" %i ", -116), 8, fp);
	i += check(printf(" %i ", INT_MIN),ft_printf(" %i ", INT_MIN), 9, fp);
	i += check(printf(" %i ", INT_MAX),ft_printf(" %i ", INT_MAX), 10, fp);
	i += check(printf(" %i %i ", INT_MIN, INT_MAX),ft_printf(" %i %i ", INT_MIN, INT_MAX), 11, fp);

	fprintf(fp,"\n\n\n_____________\n");
	fprintf(fp,"|            |\n");
	fprintf(fp,"|  %%u TESTS  |\n");
	fprintf(fp,"|____________|\n\n");
	i += check(printf(" %u ", 0),ft_printf(" %u ", 0), 1, fp);
	i += check(printf(" %u ", -2),ft_printf(" %u ", -2), 2, fp);
	i += check(printf(" %u ", 10),ft_printf(" %u ", 10), 3, fp);
	i += check(printf(" %u ", 87),ft_printf(" %u ", 87), 4, fp);
	i += check(printf(" %u ", 1),ft_printf(" %u ", 1), 5, fp);
	i += check(printf(" %u ", 104),ft_printf(" %u ", 104), 6, fp);
	i += check(printf(" %u ", -35),ft_printf(" %u ", -35), 7, fp);
	i += check(printf(" %u ", -116),ft_printf(" %u ", -116), 8, fp);
	i += check(printf(" %u ", INT_MIN),ft_printf(" %u ", INT_MIN), 9, fp);
	i += check(printf(" %u ", INT_MAX),ft_printf(" %u ", INT_MAX), 10, fp);
	i += check(printf(" %u %u ", INT_MIN, INT_MAX),ft_printf(" %u %u ", INT_MIN, INT_MAX), 11, fp);

	fprintf(fp,"\n\n\n_____________\n");
	fprintf(fp,"|            |\n");
	fprintf(fp,"|  %%x TESTS  |\n");
	fprintf(fp,"|____________|\n\n");
	i += check(printf(" %x ", 0),ft_printf(" %x ", 0), 1, fp);
	i += check(printf(" %x ", -2),ft_printf(" %x ", -2), 2, fp);
	i += check(printf(" %x ", 10),ft_printf(" %x ", 10), 3, fp);
	i += check(printf(" %x ", 87),ft_printf(" %x ", 87), 4, fp);
	i += check(printf(" %x ", 1),ft_printf(" %x ", 1), 5, fp);
	i += check(printf(" %x ", 104),ft_printf(" %x ", 104), 6, fp);
	i += check(printf(" %x ", -35),ft_printf(" %x ", -35), 7, fp);
	i += check(printf(" %x ", -116),ft_printf(" %x ", -116), 8, fp);
	i += check(printf(" %x ", INT_MIN),ft_printf(" %x ", INT_MIN), 9, fp);
	i += check(printf(" %x ", INT_MAX),ft_printf(" %x ", INT_MAX), 10, fp);
	i += check(printf(" %x %x ", INT_MIN, INT_MAX),ft_printf(" %x %x ", INT_MIN, INT_MAX), 11, fp);

	fprintf(fp,"\n\n\n_____________\n");
	fprintf(fp,"|            |\n");
	fprintf(fp,"|  %%X TESTS  |\n");
	fprintf(fp,"|____________|\n\n");
	i += check(printf(" %X ", 0),ft_printf(" %X ", 0), 1, fp);
	i += check(printf(" %X ", -2),ft_printf(" %X ", -2), 2, fp);
	i += check(printf(" %X ", 10),ft_printf(" %X ", 10), 3, fp);
	i += check(printf(" %X ", 87),ft_printf(" %X ", 87), 4, fp);
	i += check(printf(" %X ", 1),ft_printf(" %X ", 1), 5, fp);
	i += check(printf(" %X ", 104),ft_printf(" %X ", 104), 6, fp);
	i += check(printf(" %X ", -35),ft_printf(" %X ", -35), 7, fp);
	i += check(printf(" %X ", -116),ft_printf(" %X ", -116), 8, fp);
	i += check(printf(" %X ", INT_MIN),ft_printf(" %X ", INT_MIN), 9, fp);
	i += check(printf(" %X ", INT_MAX),ft_printf(" %X ", INT_MAX), 10, fp);
	i += check(printf(" %X %X ", INT_MIN, INT_MAX),ft_printf(" %X %X ", INT_MIN, INT_MAX), 11, fp);

	fprintf(fp,"\n\n\n_____________\n");
	fprintf(fp,"|            |\n");
	fprintf(fp,"|  %%%% TESTS  |\n");
	fprintf(fp,"|____________|\n\n");
	i += check(printf(" %% "),ft_printf(" %% "), 1, fp);
	i += check(printf(" %%%% "),ft_printf(" %%%% "), 2, fp);
	i += check(printf(" %%  %%"),ft_printf(" %%  %%"), 3, fp);

	if (i == 0)
	{
		fprintf(fp,"\n\n\n************************************************************\n");
		fprintf(fp,"*                                                          *\n");
		fprintf(fp,"*     CONGRATS!! Your ft_printf passed all the tests!!     *\n");
		fprintf(fp,"*                                                          *\n");
		fprintf(fp,"************************************************************\n");
	}
	else
	{
		fprintf(fp,"\n\n\n*****************************************************************\n");
		fprintf(fp,"*                                                               *\n");
		fprintf(fp,"*     Hmmmm... It seems that we've encountered a mistake...     *\n");
		fprintf(fp,"*                                                               *\n");
		fprintf(fp,"*****************************************************************\n");
	}
}
