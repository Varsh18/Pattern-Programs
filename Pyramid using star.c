/*

Full Pyramid using star
        *
      * * *
    * * * * *
  * * * * * * *
* * * * * * * * *

*/
#include<stdio.h>
#include<conio.h>
int main(){
	 int i,j,n;
	 scanf("%d",&n);
	 for(i=0;i<n;i++)
	 {
	 	//loop for spaces
	 	for(j=0;j<n-i;j++)
	 	printf("  ");
	 	//loop for first half of the triangle
	 	for(j=0;j<i;j++)
		printf("* ");
		//loop for second half of the triangle
		for(j=0;j<=i;j++)
		printf("* ");
		printf("\n");
	 }
}
