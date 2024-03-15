#!/usr/bin/zsh

BLACK='\e[30m'
RED='\e[31m'
GREEN='\e[32m'
YELLOW='\e[33m'
BLUE='\e[34m'
MAGENTA='\e[35m'
CYAN='\e[36m'
WHITE='\e[37m'
RESET='\e[0m'
CWD='./test/push_swap/'
CHECKER=${CWD}checker_linux

make > /dev/null

random_input ()
{
	seq -$1 $1 | sort -R | head -$1 | tr '\n' ' '
}

test ()
{
	((count_mean = 0))
	((count_min = 999999))
	((count_max = 0))
	for i in {1..$3}
	do
		echo "test $i"
		ARG=$(random_input $1)
		count=$(./push_swap $ARG | wc -l)
		((count_mean += $count))
		if (( count < count_min ))
		then
			count_min=$count
		elif (( count > count_max ))
		then
			count_max=$count
		fi
		result=$(./push_swap $ARG | $CHECKER $ARG)
		if [ $result != "OK" ]
		then
			echo "${RED}KO$RESET"
			echo "arguments : $ARG"
			exit 0
		fi
	done
	echo "nombre de coups min : $count_min"
	if (( $count_max > $2 ))
	then
		echo "nombre de coups max : $RED$count_max$RESET"
	else
		echo "nombre de coups max : $count_max"
	fi
	echo "nombre de coups en moyenne : $(($count_mean / $3))"
}
# test 100 700 30
# test 500 5500 20

test_bonus ()
{
	make bonus > /dev/null

	ARG=$(random_input 20)
	result=$(./push_swap $ARG | ./checker $ARG)
	echo $result
}
# test_bonus

ici ()
{
	make bonus > /dev/null

	ARG=$(random_input 5)
	echo $ARG
	./push_swap $ARG > ${CWD}sort_5_OK.txt
}
ici


# test le res sur vide
# test le res sur 2 elements tries et pas tries
# test le res sur les permutations de 3 elements

# test pas des nombres
# test int overflow
# test doublon



