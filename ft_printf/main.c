// https://github.com/raton-codeur/tests/blob/main/README.md#ft_printf

#include "../../ft_printf.h"
#include <stdio.h>
#include <assert.h>

/* base */
// int main ()
// {
// 	char *s = "s;dlfkj sliugkjdn soi";
// 	printf("result :\n");
// 	int result = ft_printf(s);
// 	printf("\nexpected :\n");
// 	int expected = printf("%s", s);
// 	assert(result == expected);
// }

/* char */
// int	main()
// {
// 	int result;
// 	int expected;
// 	char *s = "%c";

// 	for (int c = -5; c <= 300; c++) {
// 		printf("\n\nresult pour c = %d :\n", c);
// 		result = ft_printf(s, c);
// 		printf("\nexpected pour c = %d :\n", c);
// 		expected = printf(s, c);
// 		assert(result == expected);
// 	}
// }

/* string */
// int main()
// {
// 	char *s = "%s";
// 	char *ss = "salut";

// 	printf("result :\n");
// 	int result = ft_printf(s, ss);
// 	printf("\nexpected :\n");
// 	int expected = printf(s, ss);

// 	assert(result == expected);
// }

/* string null */
// int main()
// {
// 	char *s = "%s";
// 	char *ss = NULL;

// 	printf("result :\n");
// 	int result = ft_printf(s, ss);
// 	printf("\nexpected :\n");
// 	int expected = printf(s, ss);
// 	assert(result == expected);
// }

/* pointer */
// int main ()
// {
// 	char *s = "%p";
// 	int v = 5;
// 	int *vv = &v;

// 	printf("result :\n");
// 	int result = ft_printf(s, vv);
// 	printf("\nexpected :\n");
// 	int expected = printf(s, vv);

// 	assert(result == expected);
// }

/* pointer null */
// int main ()
// {
// 	char *s = "%p";
// 	int *vv = NULL;

// 	printf("result :\n");
// 	int result = ft_printf(s, vv);
// 	printf("\nexpected :\n");
// 	int expected = printf(s, vv);

// 	printf("\nresult : %d, expected = %d\n", result, expected);

// 	printf("\ntruly expected : \"0x0\" -> 3\n");
// }

/* decimal = integer */
// int main()
// {
// 	int result;
// 	int expected;
// 	// char *s = "%i";
// 	char *s = "%d";
// 	int n;

// 	n = 456;
// 	printf("\n\nresult :\n");
// 	result = ft_printf(s, n);
// 	printf("\nexpected :\n");
// 	expected = printf(s, n);
// 	assert(result == expected);

// 	n = 0;
// 	printf("\n\nresult :\n");
// 	result = ft_printf(s, n);
// 	printf("\nexpected :\n");
// 	expected = printf(s, n);
// 	assert(result == expected);

// 	n = -5;
// 	printf("\n\nresult :\n");
// 	result = ft_printf(s, n);
// 	printf("\nexpected :\n");
// 	expected = printf(s, n);
// 	assert(result == expected);

// 	n = -2147483648;
// 	printf("\n\nresult :\n");
// 	result = ft_printf(s, n);
// 	printf("\nexpected :\n");
// 	expected = printf(s, n);
// 	assert(result == expected);

// 	n = 2147483647;
// 	printf("result :\n");
// 	result = ft_printf(s, n);
// 	printf("\nexpected :\n");
// 	expected = printf(s, n);
// 	assert(result == expected);
// }

/* unsigned */
// int main()
// {
// 	int result;
// 	int expected;
// 	char *s = "%u";
// 	unsigned int n;

// 	n = 0;
// 	printf("\n\nresult :\n");
// 	result = ft_printf(s, n);
// 	printf("\n expected :\n");
// 	expected = printf(s, n);
// 	assert(result == expected);

// 	n = 8;
// 	printf("\n\nresult :\n");
// 	result = ft_printf(s, n);
// 	printf("\n expected :\n");
// 	expected = printf(s, n);
// 	assert(result == expected);

// 	n = 4294967295;
// 	printf("\n\nresult :\n");
// 	result = ft_printf(s, n);
// 	printf("\n expected :\n");
// 	expected = printf(s, n);
// 	assert(result == expected);
// }

/* hexa */
// int	main()
// {
// 	int result;
// 	int expected;
// 	int n;
// 	// char *s = "%x";
// 	char *s = "%X";

// 	n = 2148;
// 	printf("\n\nresult :\n");
// 	result = ft_printf(s, n);
// 	printf("\nexpected :\n");
// 	expected = printf(s, n);
// 	assert(result == expected);

// 	n = 10;
// 	printf("\n\nresult :\n");
// 	result = ft_printf(s, n);
// 	printf("\nexpected :\n");
// 	expected = printf(s, n);
// 	assert(result == expected);

// 	n = 0;
// 	printf("\n\nresult :\n");
// 	result = ft_printf(s, n);
// 	printf("\nexpected :\n");
// 	expected = printf(s, n);
// 	assert(result == expected);

// 	n = 8;
// 	printf("\n\nresult :\n");
// 	result = ft_printf(s, n);
// 	printf("\nexpected :\n");
// 	expected = printf(s, n);
// 	assert(result == expected);

// 	n = -1;
// 	printf("\n\nresult :\n");
// 	result = ft_printf(s, n);
// 	printf("\nexpected :\n");
// 	expected = printf(s, n);
// 	assert(result == expected);

// 	n = 2147483647;
// 	printf("\n\nresult :\n");
// 	result = ft_printf(s, n);
// 	printf("\nexpected :\n");
// 	expected = printf(s, n);
// 	assert(result == expected);

// 	n = -2147483648;
// 	printf("\n\nresult :\n");
// 	result = ft_printf(s, n);
// 	printf("\nexpected :\n");
// 	expected = printf(s, n);
// 	assert(result == expected);
// }

/* % */
// int main()
// {
// 	printf("result :\n");
// 	int result = printf("%%");
// 	printf("\nexpected :\n");
// 	int expected = printf("%%");
// 	assert(result == expected);
// }

/* indéfini : pourcentage + lettre qui n'est pas une spécification de format */
// int main ()
// {
// 	printf("ft_printf :\n");
// 	int result = ft_printf("a%wb");
// 	printf("result : %d\n", result);
// }

/* indéfini : erreur sur le nombre d'arguments */
// int main ()
// {
// 	ft_printf("<%d>");
// 	ft_printf("<%d>", 5, 8);
// }
