#include "get_next_line.h"
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>

int			main(int argc, char *argv[])
{
	char	*line;
	int		fldsc;
	int		a = 0;
/*
	fldsc = open("sometext.txt", O_RDONLY);
//	printf("%d\n", fldsc);

//	a = get_next_line(fldsc, &line);
//	printf("|%d| |%s|\n", a, line);
//	a = get_next_line(fldsc, &line);
//	printf("|%d| |%s|\n", a, line);
//	a = get_next_line(fldsc, &line);
//	printf("|%d| |%s|\n", a, line);
//	a = get_next_line(fldsc, &line);
//	printf("|%d| |%s|\n", a, line);
//	a = get_next_line(fldsc, &line);
//	printf("|%d| |%s|\n", a, line);

	while (( a = get_next_line(fldsc, &line)) > 0)
	{
		printf("%s\n", line);
		free(line);
	}
*/
	if (argc > 1)
	{
		// fldsc = open(argv[1], O_RDONLY);
		fldsc = open("sometext.txt", O_RDONLY);
		while ((a = get_next_line(fldsc, &line)))
		{
			printf("%d\t%s\n", a, line);
			free(line);
		}
		printf("%d\t%s\n", a, line);
//		free(line);
	}
	return (0);
}
