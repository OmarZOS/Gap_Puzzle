#!/bin/bash





echo -e "Hello, my program will generate you solution to a gap puzzle, enter a number \n(>=8) and press enter.."

read n

echo $n > tmp

g++ genp.cpp -o gen

( ./gen < tmp )	> dimac.cnf

sed -e "s/h/$( awk ' END {print NR-1 }' dimac.cnf )/g" -i dimac.cnf

cadical	dimac.cnf >sol

awk '  { if( $1=="v") for( i=2;i<=NF;i++) print $i   } ' sol > vars

g++ printer.cpp -o prin

./prin < tmp







rm tmp
#rm sol
#rm vars 
rm prin 
rm gen

