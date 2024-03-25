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

# argument : le nombre de nombres à générer
# sortie : $1 nombres compris entre -$1 et $1
random_input ()
{
	seq -$1 $1 | sort -R | head -$1 | tr '\n' ' '
}

# premier argument : le nombre de nombres
# deuxieme argument : le nombre max de coup pour avoir tous les bonus
# troisieme argument : le nombre de tests a lancer
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












# prend un nombre en parametre et renvoie sa factorielle
factorial ()
{
	result=1
	n=$1
	while [ $n -gt 1 ]
	do
		result=$((result * n))
		n=$((n - 1))
	done
	echo $result
}

# premier argument : nombre de nombres
# deuxieme argument : la combien-ieme permutation on veut
permute ()
{
	echo $(${CWD}/permute.py $1 $2)
}

# premier argument : le nombre darguments a permuter pour envoyer au programme
# deuxieme argument : le nombre max de coups pour avoir les points
test_permutation ()
{
	((count_min = 999999))
	((count_max = 0))
	for i in {1..$(factorial $1)}
	do
		ARG=$(permute $1 $i)
		count=$(./push_swap $ARG | wc -l)
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
		if [ $count_min -ne 0 ]
		then
			echo "erreur sur le nombre de coups min pour ARG :\n$ARG"
			exit 0
		fi
		if [ $count_max -gt $2 ]
		then
			echo "erreur sur le nombre de coups max pour ARG :\n$ARG"
			exit 0
		fi
	done
}
# test_permutation 3 2
test_permutation 5 15











# ./push_swap
# ./push_swap 5
# ./push_swap 3 5
# ./push_swap 5 3
# ./push_swap 5 1 7
# ./push_swap "5 1 7"
# ./push_swap a
# ./push_swap 4 5a 1
# ./push_swap 999999999999999999999999999999999999999999999999 6
# ./push_swap 3 2 2 1
# ./push_swap -9 -2 0 2 3 4 6 8 9 23 50 886














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