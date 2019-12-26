echo 
echo '####################'
cal
echo '####################'
date +'%d/%m/%Y %H:%M:%S'
echo '####################'
echo

# gcc -o sample sample.c
# including any other gcc flags you like
# ./path-to-sample/sample

gcd=$PWD/"01 Fundamentals/02 C"
echo "building: "$gcd
echo "output files in ./Results"
echo

gcc "$gcd/"gcd.c -o ./Results/gcd
./Results/gcd
