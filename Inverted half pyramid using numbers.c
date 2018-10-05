/*

inverted Half Pyramid using numbers
1 2 3 4 5
1 2 3 4
1 2 3
1 2
1

*/
#include<stdio.h>
#include<conio.h>
int main(){
	 int i,j,n;
	 scanf("%d",&n);
	 for(i=0;i<n;i++)
	 {
		for(j=1;j<=n-i;j++)
		printf("%d ",j);
		printf("\n");
	 }
}
