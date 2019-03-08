#include<stdio.h>
#include<sys/wait.h>
#include <unistd.h>
int main()
{
int n,i,j,flag=0,pid,sp=0,snp=0,a[100];


scanf("%d",&n);

for(i=0;i<n;i++) scanf("%d",&a[i]);

pid=fork();

for(i=0;i<n;i++){
for(j=2;j<a[i];j++){

if(a[i]%j==0) flag=1;

}
if(flag!=1 && pid==0){
//if(flag!=1){
//printf("%d\n",a[i]);
printf("inside child process: %d\n",getpid());
int cc=getpid();
sp=sp+a[i];
}

else {snp=snp+a[i]; printf("inside parent process: %d\n",getpid()); }
flag=0;
}

printf("%d is sum of prime and %d is sum of non prime\n",sp,snp);



return 0;
}

