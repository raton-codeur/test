#!/usr/bin/python3
import sys

def permute(l, start, n) :
	global result
	if start == n :
		result.append(l.copy())
	else :
		for i in range(start, n):
			l[start], l[i] = l[i], l[start]
			permute(l, start + 1, n)
			l[start], l[i] = l[i], l[start]

n = int(sys.argv[1]) # la taille de l
l = list(range(n)) # la liste des entiers de 0 à n - 1
result = []
permute(l, 0, n)
i = int(sys.argv[2]) - 1 # argv 2 -> la i eme permutation de l, son indice est argv - 1
for i in result[i] :
	print(i, end = " ")
print()