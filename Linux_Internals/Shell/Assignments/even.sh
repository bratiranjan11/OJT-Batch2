
#!/bin/bash

echo "To check Even or odd"
echo "Enter any Number"
read a
c=`expr $a % 2`
if [ $c -eq 0 ]
then
	echo "$a is even"
else
	echo "$a is Odd"
fi
