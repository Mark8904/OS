#include<sys/types.h>
#include<sys/shm.h>
#include<sys/ipc.h>
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#define SharedMemSize 50
void main(){
int shmid;
char c;
char *shared_memory;
key_t key;
key=5677;
if((shmid=shmget(key,SharedMemSize,IPC_CREAT|0666))<0){
perror("shmget");
exit(1);}

if((shared_memory=shmat(shmid,NULL,0))==(char*)-1){
perror("shmat");
exit(1);}

sprintf("Message received:",shared_memory)
exit(0);}