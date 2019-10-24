#include <stdio.h>
char *ft_strcapitalize(char *str);
int main(){
	char string[] = "ol\'a, tudo bem? 42palavras quarenta-e-duas; cinquenta+e+um";
	char *str;
	str = string;

	char weird[] = "Also, this is another text TO DO SO.";
	char *wei;
	wei = weird;

	char empty[] = "";
	char *emp;
	emp = empty;

	printf("\n\nBefore: %s\n", string);
	printf("After : %s\n\n", ft_strcapitalize(str));
	printf("Before: %s\n", weird);
	printf("After : %s\n\n", ft_strcapitalize(wei));
	printf("Empty : -%s-\n\n", ft_strcapitalize(emp));
	return (0);
}
