#include <stdio.h>
void ft_putstr_non_printable(char *str);
int main(){
	char stringtext[] = "Without\a music,\a life\a would\a be\a a\a mistake.\a\a\a - F. Nietzsche";
	char *str;

	str = stringtext;
	ft_putstr_non_printable(str);
	return (0);
}
