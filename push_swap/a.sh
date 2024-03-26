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

# premier argument : n, un nombre de nombres
# deuxieme argument : i, l'indice de la permutation que l'on veut afficher
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
	for i in {0..$(($(factorial $1) - 1))}
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
			echo "erreur sur le nombre de coups min pour ARG : $ARG"
			echo "nombre de coups : $count"
			exit 0
		fi
		if [ $count_max -gt $2 ]
		then
			echo "erreur sur le nombre de coups max pour ARG : $ARG"
			echo "nombre de coups : $count"
			exit 0
		fi
		# echo "permutation $i en $count coups"
	done
}
# test_permutation 3 2
# test_permutation 5 12











# ./push_swap
# ./push_swap ""
# ./push_swap "" ""
# ./push_swap " "
# ./push_swap 5
# ./push_swap 3 5
# ./push_swap 5 3
# ./push_swap "5 1 7"
# ./push_swap a
# ./push_swap 4 ""
# ./push_swap 4 5a 1
# ./push_swap 4 1 5a
# ./push_swap 999999999999999999999999999999999999999999999999 6
# ./push_swap 3 2 2 1
# ./push_swap 3 2 1 2
# ./push_swap 2 3 1 2
# ./push_swap -9 -2 0 2 3 4 6 8 9 23 50 886














# premier argument : numero du test
# deuxieme argument : nombre d'arguments pour le programme
# crée un dossier pour le test avec des arguments aléatoires et une output initialisée avec push_swap
# si push_swap est correct, l'output est initialisée avec un algorithme de tri correct
create_test_bonus ()
{
	FOLDER=${CWD}test_bonus_$1/
	mkdir $FOLDER
	ARG=$(random_input $2)
	echo -n $ARG > ${FOLDER}ARG.txt
	./push_swap $ARG > ${FOLDER}output.txt
}
# create_test_bonus 2 3








# argument : numero du test
test_bonus ()
{
	make bonus > /dev/null
	FOLDER=${CWD}test_bonus_${1}/

	ARG=$(cat ${FOLDER}ARG.txt)
	result=$(cat ${FOLDER}output.txt | ./checker $ARG)
	result_expected=$(cat ${FOLDER}output.txt | $CHECKER $ARG) 2> /dev/null

	echo "ARG : $ARG"
	echo "resultat : $result"
	echo "resultat avec le vrai checker : $result_expected"

	if [ $result != $result_expected ]
	then
		echo "${RED}erreur${RESET}"
		echo "output : \n$(cat ${FOLDER}output.txt)"
		exit 0
	fi
}
# test_bonus 2







# argument : numero du test
test_bonus_manual ()
{
	make bonus > /dev/null
	FOLDER=${CWD}test_bonus_${1}/
	ARG=$(cat ${FOLDER}ARG.txt)

	echo "ARG : $ARG"
	echo "program :"
	> ${FOLDER}output.txt

	result=$(cat ${FOLDER}output.txt | ./checker $ARG)
	result_expected=$(cat ${FOLDER}output.txt | $CHECKER $ARG) 2> /dev/null

	echo "resultat : $result"
	echo "resultat avec le vrai checker : $result_expected"

	if [ $result != $result_expected ]
	then
		echo "${RED}erreur${RESET}"
		exit 0
	fi
}
# test_bonus_manual 2





# autres tests manuels

# doit sarreter
# ./checker
# ./checker ""

# doit fonctionner
# ./checker 1
# ./checker "1"
# verifier le comportement avec des instructions correctes et pas correctes -> Error
# verifier fichier vide -> KO / OK
# verifier le comportement avec juste pa

# erreur
# ./checker a
# ./checker 4 5q 1
# ./checker 4 1 5t
# ./checker  999999999999999999999999999999999999999999999999 6
# ./checker 3 2 2 1
# ./checker 3 2 1 2
# ./checker 2 3 1 2