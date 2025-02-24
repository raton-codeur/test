https://github.com/raton-codeur/test

# CPP 02

## pour ex01

```
static void printBits(int n)
{
    for (int i = 31; i >= 0; i--)
	{
        std::cout << ((n >> i) & 1);
        if (i % 4 == 0)
			std::cout << " ";
		if (i % 8 == 0)
			std::cout << std::endl;
		if (i == 8)
			std::cout << "---------" << std::endl;
    }
}

int main()
{
	Fixed e(2);
	printBits(e.getRawBits());
	Fixed f(2.5f);
	printBits(f.getRawBits());
}

### pourquoi arrondir ?

exemple :
on a 2 bits pour la partie fractionnaire et qu'on veut représenter 1.9

(1 << 2) = 2 ^ 2 = 4

1.9 * 4 = 7.6

si on arrondi pas, on va coder le nombre par _rawValue = 7 ---->  1|11
on a : 1,11 en base 2 = 1.75

et si on arrondi, on va coder le nombre par _rawValue = 8  ----> 10|00
on a : 10,0 en base 2 = 2

## main.c pour le 03

```
#include "Point.hpp"

#define RESET "\033[0m"
#define RED "\033[31m"
#define GREEN "\033[32m"

static void testPoint(const Point& a, const Point& b, const Point& c, const Point& p)
{
	if (bsp(a, b, c, p))
		std::cout << GREEN << p << " is strictly inside ABC" << RESET << std::endl;
	else
		std::cout << RED << p << " is outside ABC (or on its boundary)" << RESET << std::endl;
}

int main()
{
	const Point a(-1.24, 0.52);
	const Point b(4.7, 3.26);
	const Point c(1.28, -3.04);

	std::cout << "A = " << a << std::endl;
	std::cout << "B = " << b << std::endl;
	std::cout << "C = " << c << std::endl;

	/* inside */
	testPoint(a, b, c, Point(2.5, 1.56));
	testPoint(a, b, c, Point(1.58, -2.12));
	testPoint(a, b, c, Point(-0.18, 0.7));

	/* outside */
	testPoint(a, b, c, Point(3, 7));
	testPoint(a, b, c, Point(5.001, -0.26));
	testPoint(a, b, c, Point(-0.22, -1.64));

	/* boundary */
	testPoint(a, b, c, b);
	std::cout << "simpler ABC : ";
	testPoint(Point(0, 0), Point(1, 0), Point(1, 1), Point(0.5, 0.5));
}

```

# ft_printf simple

main.c :

```
#include <stdio.h>
#include <assert.h>
#include "ft_printf.h"

int main ()
{
	int result =
	ft_printf("test\n");
	int expected =
	   printf("test\n");
	assert(result == expected);
}
```

compilation :

```
cc -Wall -Wextra -Werror -fsanitize=address -g3 main.c -L. -lftprintf && ./a.out
```

à vérifier :

- chaine simple
- plusieurs arguments
- %c 
- %s
  - chaine nulle
  - chaine vide
- %p
  - pointeur nul
- %d et %i
  - int min et max
- %u
  - 4294967296
- %x et %X
- %%
- % + lettre autre
- argument null
- pas d'argument
- erreur sur le nombre de parametres


# libft

* créer `libft.a` dans le répertoire de rendu avec :
```
make fclean all
```
ou :
```
make fclean all bonus
```
* placer le dossier `test` dans le répertoire de rendu et modifier `libft/main.c` au besoin
* compiler avec :
```
cc -Wall -Wextra -Werror -lbsd -fsanitize=address -g test/libft/*.c -L. -lft
```

# get_next_line

* placer le dossier `test` dans le répertoire de rendu et modifier `get_next_line/main.c` au besoin
* compiler la partie obligatoire avec :
```
cc -Wall -Wextra -Werror -fsanitize=address -g get_next_line.c get_next_line_utils.c test/get_next_line/*.c -D BUFFER_SIZE=4
```
(modifier BUFFER_SIZE)
* compiler la partie bonus avec :
```
cc -Wall -Wextra -Werror -fsanitize=address -g *_bonus.c test/get_next_line/*.c -D BUFFER_SIZE=4
```
(modifier BUFFER_SIZE)

# ft_printf

* placer le dossier `test` dans le répertoire de rendu et modifier `ft_printf/main.c` au besoin
* créer `libftprintf.a` dans le répertoire de rendu avec :
```
make fclean all
```
* compiler avec :
```
cc -Wall -Wextra -Werror -fsanitize=address -g test/ft_printf/main.c -L. -lftprintf
```
# push_swap

* placer le dossier `test` dans le répertoire de rendu
* flags à ajouter dans le `Makefile` :
```
-g -fsanitize=address
```
* compiler la partie obligatoire avec :
```
make fclean all
```
le programme `push_swap` doit avoir été créé à la racine du projet
* modifier le fichier de test avec :
```
code test/push_swap/a.sh
```
lancer les tests avec :
```
./test/push_swap/a.sh
```

* compiler la partie bonus avec :
```
make bonus
```
le programme `checker` doit avoir été créé à la racine du projet


