read first
read second
if [ $first -eq $second ]
then
	echo "X is equal to Y"
elif [ $first -gt $second ]
then
	echo "X is greater than Y"
else
	echo "X is less than Y"
fi
