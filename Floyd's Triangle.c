/*

 Floyd's Triangle
1
2 3
4 5 6
7 8 9 10
*/
#include<stdio.h>
#include<conio.h>
int main(){
	 int i,j,n,k=1;
	 scanf("%d",&n);
	 for(i=0;i<n;i++)
	 {
	 	for(j=0;j<=i;j++)
		printf("%d ",k++);
		printf("\n");
	 }
}
