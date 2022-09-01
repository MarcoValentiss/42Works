#include <stdio.h>
#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	std;
	i = 0;	
	while (i < (size/2))
	{
		std = tab[i];
		tab[i] = tab[(size -1) -i];
		tab[(size -1) -i] = std;
	}
}

int	main(void)
{
	int	deneme[6] = {1,2,3,4,5,6};
	int	loop;
	int	loop1;
	loop = 0;
	while (loop < 6)
	{
		printf("%d", deneme[loop]);
		loop++;
	}
	ft_rev_int_tab(deneme, 6);
	write(1, "\n", 1);
	loop1 = 0;
	while (loop1 < 6)
	{
		printf("%d", deneme[loop1]);
		loop1++;
	}
	return (0);
}	
