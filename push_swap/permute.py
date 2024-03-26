#!/usr/bin/python3

'''
premier argument : un entier n
deuxiemen argument : un indice i

calcule la liste des permutations de n entiers
et renvoie la permutations d'indice i
'''

import sys

def permute(l, start, n) :
	global result # la liste des permutations
	if start == n :
		result.append(l.copy())
	else :
		for i in range(start, n):
			l[start], l[i] = l[i], l[start]
			permute(l, start + 1, n)
			l[start], l[i] = l[i], l[start]

n = int(sys.argv[1])
l = list(range(n)) # la liste des entiers de 0 à n - 1
result = [] # la liste des permutations de l
permute(l, 0, n)
i = int(sys.argv[2])
for i in result[i] :
	print(i, end = " ")
print()