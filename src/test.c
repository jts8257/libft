
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void	ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		write(1, &str[i++], 1);
	write(1, "\n", 1);
}

void	*ft_memmove(void *dst, const void *src, size_t len);

int		main(int ac, char **av)
{
	char dst[] = "helloworld";
	char dst1[] = "helloworld";
	char src[] = "fuckinfikinfokin";
	char src1[] = "fuckinfikinfokin";
	ft_putstr(memmove(av[1], av[3], atoi(av[4])));
	ft_putstr(ft_memmove(av[1], av[3], atoi(av[4])));
	ft_putstr(memmove(dst, src, 4));
	ft_putstr(ft_memmove(dst1, src1, 4));

//	printf("\n%s\n", memmove(av[1], av[3], atoi(av[4])));
//	printf("\n%s\n", memmove(av[2], av[3], atoi(av[4])));

//	printf("\n%s\n", memmove("helloworld", "fukinfikinfokin", 15));
//	printf("%s\n", ft_memmove("helloworld", "fukinfikinfokin", 15));
}

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t i;
	size_t src_len;
	char *dst_ptr;
	char *src_ptr;

	dst_ptr = (char *)dst;
	src_ptr = (char *)src;
	i = 0;
	while (src_ptr[src_len])
		src_len++;
	if (src > dst)
		while (len--)
		{
			dst_ptr[i] = src_ptr[i];
			i++;
		}
	else
		while (len--)
		{
			dst_ptr[i] = src_ptr[src_len];
			src_len--;
			i++;
	}
	return (dst_ptr);
}
