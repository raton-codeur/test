# libft

* créer `libft.a` dans le working directory avec :
```
make fclean all
```
ou :
```
make fclean all bonus
```
* placer le dossier `tests` dans le working directory et modifier `libft/main.c` au besoin
* compiler avec :
```
cc -Wall -Wextra -Werror -lbsd -fsanitize=address -g tests/libft/*.c -L. -lft
```

# get_next_line

* placer le dossier `tests` dans le working directory et modifier `get_next_line/main.c` au besoin
* compiler la partie obligatoire avec :
```
cc -Wall -Wextra -Werror -fsanitize=address -g get_next_line.c get_next_line_utils.c tests/get_next_line/*.c -D BUFFER_SIZE=4
```
(modifier BUFFER_SIZE)
* compiler la partie bonus avec :
```
cc -Wall -Wextra -Werror -fsanitize=address -g *_bonus.c tests/get_next_line/*.c -D BUFFER_SIZE=4
```
(modifier BUFFER_SIZE)

# ft_printf

* placer le dossier `tests` dans le working directory et modifier `ft_printf/main.c` au besoin
* créer `libftprintf.a` dans le working directory avec :
```
make fclean all
```
* compiler avec :
```
cc -Wall -Wextra -Werror -fsanitize=address -g tests/ft_printf/main.c -L. -lftprintf
```
