#include <stdio.h>
int ft_str_is_numeric(char *str);
int main(){
	char string[] = "64826841651";
	char *str;
	str = string;

	char weird[] = "68426482A";
	char *wei;
	wei = weird;

	char empty[] = "";
	char *emp;
	emp = empty;

	printf("\n1 = Numerical\n0 = Not numerical\n\n");
	printf("%s : %d\n", string, ft_str_is_numeric(str));
	printf("%s : %d\n", weird, ft_str_is_numeric(wei));
	printf("Empty : %d\n\n", ft_str_is_numeric(emp));
	return (0);
}
