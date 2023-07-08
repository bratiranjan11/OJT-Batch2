#!/bin/bash

echo "To check entered password is correct or not"
pass=0987
echo "Please Enter your password"
read a
if [ $a -eq $pass ]
then
	echo "ACCESS GRANTED"
else
	echo "ACCESS DENIED"
fi


