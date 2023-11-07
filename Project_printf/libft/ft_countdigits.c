#include "libft.h"

int	ft_countdigits(int num)
{
    int count = 0;

    if (num == 0)
    {
        return 1;
    }

    if (num < 0)
    {
        num = -num;
        count++;
    }

    while (num > 0)
    {
        num = num / 10;
        count++;
    }

    return count;
}
