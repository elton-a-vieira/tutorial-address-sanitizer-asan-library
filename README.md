# Introduction  

A simple program that demonstrates the address sanitizer (asan) library use

# How to build

~~~bash
$ gcc -g -fsanitize=address -static-libasan -o main main.c
~~~


# How to run

~~~bash
$ ./main
~~~

# Reference

[link](https://www.cse.unsw.edu.au/~learn/debugging/modules/asan/)