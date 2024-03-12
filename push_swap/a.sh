#!/usr/bin/zsh

make re

make fclean bonus


A='\033[0;31m'

for i in {0..10000}
do
	args=$(./random_input.sh 100)
	./push_swap $args > f
	cat f | wc -l
	# if [ $? -ne 0 ]
	# then
	# 	printf "${A}KO ! :("
	# fi
done





# a :
# 	cc -g srcs/*.c srcs/libft/libft.a -o push_swap

# b :
# 	cc -g -fsanitize=address srcs/*.c srcs/libft/libft.a -o push_swap

# c : b
# 	@echo -n "nombre de nombres : "
# 	@read args; args=$$(./random_input.sh $$args); echo $$args; ./push_swap $$args; ./push_swap $$args | ./checker_linux $$args

# d : b
# 	args=$$(./random_input.sh $(args)); echo $$args; ./push_swap $$args; ./push_swap $$args | ./checker_linux $$args

# args = 2 4 9 1 5 8 10 3 7 6
# e :
# 	./push_swap $(args); ./push_swap "$(args)" | ./checker_linux "$(args)"

# f : b
# 	./push_swap $(args)



# bonus :
# 	cc -g -fsanitize=address $abonus.c  $ainitialization.c $ainitialize_arguments.c $awrong_input*.c $aoperation_generic*.c  $aget_next*.c $alibft/libft.a -o checker
# 	cat f | ./checker 3 2 1 0