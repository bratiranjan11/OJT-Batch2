#!/bin/bash

echo "1.List of the files"
echo "2.NO. of Processes"
echo "3.Today's Date"
echo "4.Logged Users"
echo "5.exit"

echo "Enter your choice"

read ch
case $ch in
	1)ls ;;
	2)ps ;;
	3)date ;;
	4)who ;;
	5) exit ;;
	*)echo "Wrong choice,Enter Again"
esac
