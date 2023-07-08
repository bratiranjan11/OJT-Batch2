#!/bin/bash
echo "To check palindrome number in between 1 to 10000"

echo "Enter a number in betweebn 1 to 10000"

read num
s=0
rev=""
temp=$num
while [ $num -gt 0 ]
do
	s=$(( $num % 10 ))
	num=$(( $num / 10 ))
	rev=$( echo ${rev}${s} )
done

if [ $temp -eq $rev ];
then
    echo "Number is palindrome"
else
    echo "Number is NOT palindrome"
fi
