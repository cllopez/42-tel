#include "ft_printf.h"
#include <limits.h>

int main() {
	// Test du format %c
	char caractere = 'A';
	printf(" %c \n\n", caractere);
	ft_printf(" %c \n", caractere);
	// Test du format %s
	char *chaine = NULL;
	printf(" %s \n\n", chaine);
	ft_printf(" %s \n", chaine);
	// Test du format %p
	/* int nombre = 0;
	printf(" %p %p \n\n", NULL, (void *)&nombre);
	ft_printf(" %p %p \n", NULL, (void *)&nombre); */
	// Test du format %d
	/* int entier_decimal = -42; */
	printf(" %d %d %ld %ld %lu %d %d", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, 
	-42);
	ft_printf(" %d %d %d %d %d %d %d", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, 
	-42);
	/* printf(" %d \n\n", entier_decimal);
	ft_printf(" %d \n", entier_decimal); */
	// Test du format %i
	int entier_base10 = 67890;
	printf(" %i \n\n", entier_base10);
	ft_printf(" %i \n", entier_base10);
	// Test du format %u
	unsigned int entier_non_signe = -1;
	int result = 0;
	printf("%d \n", result);
	result = ft_printf(" %u ", entier_non_signe);
	result = 0;
	printf("%d \n\n", result);
	result = printf(" %u ", entier_non_signe);
	// Test du format %x
	int nombre_hex_min = -100;
	printf(" %x \n\n", nombre_hex_min);
	ft_printf(" %x \n", nombre_hex_min);
	// Test du format %X
	printf(" %X \n\n", nombre_hex_min);
	ft_printf(" %X \n", nombre_hex_min);
	// Test du pourcentage %%
	printf(" %% \n\n");
	ft_printf(" %% \n");
	return 0;
} 