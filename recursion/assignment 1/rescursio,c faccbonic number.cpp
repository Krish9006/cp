#include<stdio.h>
void printFibonacci(int n){
if(n>0){
n3 = n1 + n2;
n1 = n2;
n2 = n3;
printf("%d ",n3);
}
}
int main(){
static int n1=0,n2=1,n3;
printf("%d ",n3);
return 0;
}