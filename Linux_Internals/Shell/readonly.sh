#!/bin/bash

var=31
readonly var
#var=40
echo "var=>$var"

hello()
{
	echo "Hello world"
}
readonly hello

#hello()
#{
#	echo "Hello world A1"
#}


hello
