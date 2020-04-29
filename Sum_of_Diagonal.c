#include<stdio.h>
int main()
{
  int arr[3][3],i,j, sum=0, sub=0;
  int *p;
  p=&arr[0][0];
  
  printf("Enter elements of Array: ");
  for(i=0;i<3;i++)
  
    {
      for(j=0;j<3;j++)
      {
        scanf("%d",&arr[i][j]);
      }
    }
   
   printf("Array is: \n");
   for(i=0;i<3;i++)
  
    {

      for(j=0;j<3;j++)
      {
        printf("%d\t",*(p+i*3+j));
      }
    printf("\n");
   }
   for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i==j)
            {
                sum=sum+arr[i][j];
            }
            if ((i + j) == (3 - 1)) 

                sub += arr[i][j];
        }
    }
 
    printf("The sum of Main diagonal elements of a square matrix = %d\n",sum);
    printf("The sum of Sub diagonal elements of a square matrix = %d\n",sub);

return 0;
}
