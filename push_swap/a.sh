#!/usr/bin/zsh

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