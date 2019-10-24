#include <stdio.h>

char *ft_strcpy(char *dest, char *src);

int main(){
	char source[] = "This is a source string.";
//	char *src;
//	src = source;
	char destiny[] = "This is a destiny string.";
	char *dest;
	printf("\nBefore:\nSource: %s\nDestinty: %s", source, destiny);
    dest = ft_strcpy(destiny, source);
	printf("\nAfter (must be source string):\n%s\n\n", dest);
	return (0);
}
