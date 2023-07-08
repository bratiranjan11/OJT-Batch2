
#!/bin/bash
echo "Swapping two numbers using functions"

func()
{
echo "Enter two numbers"
read a b
echo "before Swapping a=$a,b=$b"
c=$a
a=$b
b=$c
echo "After swapping a=$a,b=$b"
}

echo "swapping 2 nos using function"
func
