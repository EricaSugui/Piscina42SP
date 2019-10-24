#include <stdio.h>
int ft_str_is_lowercase(char *str);
int main(){
	char string[] = "thisisalllowercase";
	char *str;
	str = string;

	char weird[] = "thishassomeUPPERCASE";
	char *wei;
	wei = weird;

	char empty[] = "";
	char *emp;
	emp = empty;

	printf("\n1 = All lowercase\n0 = Other cases\n\n");
	printf("%s : %d\n", string, ft_str_is_lowercase(str));
	printf("%s : %d\n", weird, ft_str_is_lowercase(wei));
	printf("Empty : %d\n\n", ft_str_is_lowercase(emp));
	return (0);
}
