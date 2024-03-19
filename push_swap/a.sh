#!/usr/bin/zsh

# https://github.com/raton-codeur/test/blob/main/README.md#push_swap

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

test_basique ()
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
# test_basique 100 700 30
# test_basique 500 5500 20


# ./push_swap
# ./push_swap 5
# ./push_swap 3 5
# ./push_swap 5 3

test_3 ()
{
	ARG="$1 $2 $3"
	count=$(./push_swap $ARG | wc -l)
	result=$(./push_swap $ARG | $CHECKER $ARG)
	if [ $result != "OK" ] || (( $count > 3 ))
	then
		echo "${RED}erreur$RESET"
		echo "arguments : $ARG"
		echo "result : \n$(./push_swap $ARG)"
		exit 0
	fi
}
test_3 1 2 3
test_3 1 3 2
test_3 2 1 3
test_3 2 3 1
test_3 3 1 2
test_3 3 2 1


# ./push_swap 5 1 7
# ./push_swap "5 1 7"
# ./push_swap a
# ./push_swap 4 5a 1
# ./push_swap 9999999999999999999999999999999999999999
# ./push_swap 3 2 2 1





create_test_bonus ()
{
	FOLDER=${CWD}test_bonus_$1/
	mkdir $FOLDER
	ARG=$(random_input $2)
	echo -n $ARG > ${FOLDER}ARG.txt
	./push_swap $ARG > ${FOLDER}output.txt
}
# create_test_bonus 2 5

test_bonus ()
{
	make bonus > /dev/null
	FOLDER=${CWD}test_bonus_${1}/

	ARG=$(cat ${FOLDER}ARG.txt)
	result=$(cat ${FOLDER}output.txt | ./checker $ARG)
	result_expected=$(cat ${FOLDER}output.txt | $CHECKER $ARG) 2> /dev/null
	if [ $result != $result_expected ]
	then
		echo "${RED}erreur${RESET}"
		echo "ARG : $ARG"
		echo "output : \n$(cat ${FOLDER}output.txt)"
		echo "result : $result"
		echo "expected : $result_expected"
		exit 0
	else
		echo OK
	fi
}
# test_bonus 2