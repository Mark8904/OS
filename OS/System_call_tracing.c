//helloworld.c

#include<stdio.h>

void main()

printf("Hello World \n");

}

// systemcall.sh

cat hellotrace | cut -f1-d"("

Output:

[root@localhost os]# gcc helloworld.c -o hello 
[root@localhost os]# strace -o hellotrace ./hello

Hello World

[root@localhost os]# vi systemcall.sh 
[root@localhost os]# sh systemcall.sh

execve