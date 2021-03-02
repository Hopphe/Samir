#include <stdio.h>
int main ( )
{
	int i, j, cart[20][20], ext,c=0;
	
// Input of set A:
     
     int a[20], n;
     printf("Enter the size of set A:");
     scanf("%d",&n);
     for(i=0;i<n;i++)
     {
     	printf("Enter the elements of set A:");
     	scanf("%d",&a[i]);
	 }
	 
// Input of set B:

     int b[20],l;
     printf("Enter the size of set B:");
     scanf("%d",&l);
     ext=2*l;
     for(i=0;i<l;i++)
     {
     	printf("Enter the elements of set B:");
     	scanf("%d",&b[i]);
	 }
	 
	 
// Cartesian product of two sets:
	 
	 for(i=0;i<n;i++)
	 {
	 	c=0;
	 	for(j=0;j<ext;j=j+2)
	 	{
	 		cart[i][j]=a[i];
	 		cart[i][j+1]=b[c];
	 		c++;
		 }
	 }
	 
	 printf("\nThe cartesian praoduct of sets A and B is:\n");
	 for(i=0;i<n;i++)
	 {
	 	for(j=0;j<ext;j=j+2)
	 	{
	 		printf("%d",cart[i][j]);
	 		printf("%d\t",cart[i][j+1]);
	 	
		 }
		 	printf("\n");
	 }
     
}

