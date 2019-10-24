#include <stdio.h>
int ft_str_is_alpha(char *str);
int main(){
	char string[] = "Thisisjustamockstring";
	char *str;
	str = string;

	char weird[] = "Thís ïz $a$ #weird# @@@ string!!!";
	char *wei;
	wei = weird;

	char empty[] = "";
	char *emp;
	emp = empty;

	printf("\n1 = Alphabetical\n0 = Weird\n\n");
	printf("%s : %d\n", string, ft_str_is_alpha(str));
	printf("%s : %d\n", weird, ft_str_is_alpha(wei));
	printf("Empty : %d\n\n", ft_str_is_alpha(emp));

	return (0);
}
