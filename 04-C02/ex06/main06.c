#include <stdio.h>
int ft_str_is_printable(char *str);
int main(){
	char string[] = "This is printable.";
	char *str;
	str = string;

	char weird[] = "Get some unprintable chars: tab (\t), beep: (\a).";
	char *wei;
	wei = weird;

	char empty[] = "";
	char *emp;
	emp = empty;

	printf("\n1 = Printable\n0 = Misterious\n\n");
	printf("%s : %d\n", string, ft_str_is_printable(str));
	printf("%s : %d\n", weird, ft_str_is_printable(wei));
	printf("Empty : %d\n\n", ft_str_is_printable(emp));
	return (0);
}
