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

hello=$PWD/"01 Fundamentals/01 Introduction"
gcd=$PWD/"01 Fundamentals/02 C"
sieve=$PWD/"01 Fundamentals/03 Elementary Data Structures"

echo "building: "$hello
echo "building: "$arrays
echo "building: "$gcd

echo "output files in ./Results"
echo

gcc "$hello/"hello.c -o ./Results/hello
gcc "$gcd/"gcd.c -o ./Results/gcd
gcc "$sieve/"sieve.c -o ./Results/sieve
#./Results/gcd
