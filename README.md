https://github.com/raton-codeur/test

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


