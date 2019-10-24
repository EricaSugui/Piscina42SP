// compile line:
// gcc -Wall -Werror -Wextra -o ft_print_memory main.c ft_print_memory.c && ./ft_print_memory
//
#include <stdio.h>
void *ft_print_memory(void *addr, unsigned int size);
int main(){
	unsigned int size;
	char *str_pointer;
	size=92;
	char string[] = "Bonjour les aminches...c est fou.tout.ce qu on peut faire avec...print_memory..    ..lol. .";
	str_pointer = string;
	char *return_pointer;
	return_pointer = ft_print_memory(str_pointer, size);
	return (0);
}
