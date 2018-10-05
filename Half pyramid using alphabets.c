/*
Half Pyramid using Alphabets
A
B B
C C C
D D D D
E E E E E
*/
#include<stdio.h>
#include<conio.h>
int main(){
	 int i,j,n;
	 char s='A';
	 scanf("%d",&n);
	 for(i=1;i<=n;i++)
	 {
		for(j=1;j<=i;j++)
		printf("%c ",s);
		s++;
		printf("\n");
	 }
}
