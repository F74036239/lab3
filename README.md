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

nlogn = 3x10^3

n^2   = 10^6

3x10^3 / 10^6 = 3x10^-3 

if insertion-sort is n^2 , quick-sort = 3x10^-3x0.01 = 3x10^-5 > 0.0000.... 

results(2):

input size:10000

sort():0.0000seconds

insertion_sort():1.2800seconds

explanation:

nlogn = 4x10^4 

n^2   = 10^8

4x10^4 / 10^8 = 4x10^-4 

if insertion-sort is n^2 , quick-sort = 4x10^-4x1.28 ≒ 4x10^-4 > 0.0000....  

results(3):

input size:100000

sort():0.0400seconds

insertion_sort():130.2500seconds

explanation:

nlogn = 5x10^5 

n^2   = 10^10

5x10^5 / 10^10 = 5x10^-5 

if insertion-sort is n^2 , quick-sort = 5x10^-5x130.25 = 6.5125x10^-3 < 0.04  (X)

if quick-sort is nlogn , insertion-sort = 0.04 / 10^-5 = 4000  > 130.25  

results(4):

input size:1000000

sort():0.5700seconds

insertion_sort():12817.1700seconds

explanation:

nlogn = 6x10^6 

n^2   = 10^12

6x10^6 / 10^12 = 6x10^-6 

if insertion-sort is n^2 , quick-sort = 6x10^-6x12817.17 = 7.690302x10^-2  < 0.57 (X) 

if quick-sort is nlogn , insertion-sort = 0.57 / 10^-5 = 5.7x10^4 > 12817.17  
