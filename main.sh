clear 
echo '+------------------+'
cal
echo '+------------------+'
date +'%d/%m/%Y %H:%M:%S'
echo '+------------------+'
echo

# gcc -o sample sample.c
# including any other gcc flags you like
# ./path-to-sample/sample

hello=$PWD/"01 Fundamentals/01 Introduction"
gcd=$PWD/"01 Fundamentals/02 C"
sieve=$PWD/"01 Fundamentals/03 Elementary Data Structures"
list=$PWD/"01 Fundamentals/03 Elementary Data Structures"

echo "building: "
echo '+------------------+'
echo "hello.c"
echo "sieve.c"
echo "gcd.c"
echo "list.c"
echo '+------------------+'
echo "binaries in ./Results"
echo '+------------------+'

gcc "$hello/"hello.c -o ./Results/hello
gcc "$gcd/"gcd.c -o ./Results/gcd
gcc "$list/"list.c -o ./Results/list
gcc "$sieve/"sieve.c -o ./Results/sieve
#./Results/gcd
