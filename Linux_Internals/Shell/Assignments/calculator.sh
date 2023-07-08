


#!/bin/bash
echo "Simple Calculator"

echo "Please Enter Two numbers : "
read a
read b

echo "Enter Choice :"
echo "1. Add"
echo "2. Sub"
echo "3. Mul"
echo "4. Div"
read c

case $c in
	1)res=`expr $a + $b` ;;
	2)res=`expr $a - $b` ;;
	3)res=`expr $a /* $b` ;;
	4)res=`expr $a / $b` ;;
	*)echo "Wrong Choice Entered"
esac
echo "Result : $res"
