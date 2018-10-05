/*

Full Pyramid using Numbers
        1
      2 3 2
    3 4 5 4 3
  4 5 6 7 6 5 4
5 6 7 8 9 8 7 6 5

*/
#include<stdio.h>
#include<conio.h>
int main(){
	 int i,j,n,k=1;
	 scanf("%d",&n);
	 for(i=0;i<n;i++)
	 {
	 	//loop for spaces
	 	for(j=0;j<n-i;j++)
	 	printf("  ");
	 	//loop for first half of the triangle
	 	for(j=0;j<i;j++)
		printf("%d ",k++);
		//loop for second half of the triangle
		for(j=0;j<=i;j++)
		printf("%d ",k--);
		k=k+2;
		printf("\n");
	 }
}
