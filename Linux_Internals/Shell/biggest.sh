#!/bin/bash

echo -e "Enter two numbers\n"
read a b
if [ $a -gt $b ]
then 
	echo "$a is greater"
else
	echo "$b is greater"
fi
