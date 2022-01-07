#include "ft_printf.h"

int main(int argc, char const *argv[])
{
	char c = 'a';
	char *str = NULL;

	int res1 = ft_printf("1 23 % c%% %X %d %p dsadasda\n", c, -42949672, 16, &c);
	int res2 = printf("1 23 % c%% %X %d %p dsadasda\n", c, -42949672, 16, &c);
	printf("res1 = %d res2 = %d\n", res1, res2);
	return 0;
}
