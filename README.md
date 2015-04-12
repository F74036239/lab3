# lab3
1.

how to compile your program for question A: 

F74036239@2015cpp:~/lab3$ make

g++ -o weight weight.cpp

F74036239@2015cpp:~/lab3$

2.

the empirical results and explanation for question B:

results(1):

input size:1000  

sort():0.0000seconds

insertion_sort():0.0100seconds

explanation:

nlogn = 3*10^3

n^2   = 10^6

3*10^3 / 10^6 = 3*10^-3 ≒ 10^-3

0.0000... / 0.01 < 0.00001 / 0.01 (= 10^-3)

results(2):

input size:10000

sort():0.0000seconds

insertion_sort():1.2800seconds

explanation:

nlogn = 4*10^4 

n^2   = 10^8

4*10^4 / 10^8 = 4*10^-4 ≒ 10^-3

0.0000... / 1.2800 < 0.00001 / 1.28 (=7.8125*10^-6 ≒ 10^-5)

results(3):

input size:100000

sort():0.0400seconds

insertion_sort():130.2500seconds

explanation:

nlogn = 5*10^5 

n^2   = 10^10

5*10^5 / 10^10 = 5*10^-5 ≒ 10^-4

0.04 / 130.25 = 0.0003071017 ≒ 3*10^-4 ≒ 10^-4

results(4):

input size:1000000

sort():0.5700seconds

insertion_sort():12817.1700seconds

explanation:

nlogn = 6*10^6 

n^2   = 10^12

6*10^6 / 10^12 = 6*10^-6 ≒ 10^-5

0.57 / 12817.17 = 4.44716*10^-5 ≒ 10^-4
