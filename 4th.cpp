#include <stdio.h>

#include <conio.h>

int main ()

{

int arr1[3][3],arr2[3][3],arr3[3][3],i,j;

for(int i=0;i<3;i++)

{

for(int j=0;j<3;j++)

{

scanf("%d",&arr1[i][j]);

}

}

for( int i=0;i<3;i++)

{

for(int j=0;j<3;j++)

{

scanf("%d",&arr2[i][j]);

}

}

{

printf("\nmatltiplication of 2D array\n");

}

for(int i=0;i<3;i++)

{

for(int j=0;j<3;j++)

{

arr3[i][j]=arr1[i][j]*arr2[i][j];

printf("%d ",arr3[i][j]);

}

printf("\n");

}

return 0;

}
