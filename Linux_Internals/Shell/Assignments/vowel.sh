
#!/bin/bash

echo "To check whether vowel or consonant"
echo "Enter A character to check whethet it s vowel or consonant"
read a

case $a in
	"a") echo "It is a vowel" ;;
	"e") echo "It is a vowel" ;;
	"i") echo "It is a vowel" ;;
	"o") echo "It is a vowel" ;;
	"u") echo "It is a vowel" ;;
	"A") echo "It is a vowel" ;;
	"E") echo "It is a vowel" ;;
	"I") echo "It is a vowel" ;;
	"O") echo "It is a vowel" ;;
	"U") echo "It is a vowel" ;;
	*) echo "It is a Consonant" ;;
esac
