#include <stdio.h>
char *ft_strncpy(char *dest, char *src, unsigned int n);

int main()
{
	char *dest;
	char source_val[] = "This is source. YYYYYYYYYY";
	char just_something[] = "Just a string to hold a place. XXXXXXXXXX";
	char *src;
	char *destiny;
	dest = just_something;
	src = source_val;
	destiny = ft_strncpy(dest, src, 10);
	printf("\n\n10:---%s---",destiny);
	destiny = ft_strncpy(dest, src, 20);
	printf("\n20:---%s---",destiny);
	destiny = ft_strncpy(dest, src, 30);
	printf("\n30:---%s---",destiny);
	destiny = ft_strncpy(dest, src, 40);
	printf("\n40:---%s---\n\n",destiny);
	return (0);
}
