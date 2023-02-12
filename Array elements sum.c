#include<stdio.h>
void main()
{
 int num ,sum=0;
 printf("The following program is to input user provided array and find the sum of its elements:-\n\n");
 printf("Enter the size of Array:-");
 scanf("%d",&num);
 int arr[num];
 printf("Enter the values in the array:-\n");
 for(int i=0;i<num;i++)
 {
  scanf("%d",&arr[i]);
 }
 printf("The provided array is as follows:-\n");
 for(int i=0;i<num;i++)
 {
  printf("%d\t",arr[i]);
  sum=sum+arr[i];
 }
 printf("\n\n%d is the sum of all the elements in the provided array",sum);


}
