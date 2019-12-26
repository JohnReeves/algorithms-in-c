echo Hello John
echo

cal
date

echo


# gcc -o sample sample.c
# including any other gcc flags you like
# ./path-to-sample/sample

gcd=$PWD/"01 Fundamentals/02 C"
echo "building: "$gcd

gcc "$gcd/"gcd.c -o ./Results/gcd
./Results/gcd