#!/bin/zsh

n=$1
result=$(seq 0 $(($n - 1)))
result=$(echo $result | sort -R)
result=$(echo $result | tr '\n' ' ')
echo $result
