 #include<stdio.h>

 int main()
 {
     int a[3][3], i, j, s=0;
     printf("Enter the elements of 3*3 matrix:");
     for(i=0;i<3;i++)
     {
         for(j=0;j<3;j++)
         {
             scanf("%d",(*(a+i)+j));
         }
     }
     for(i=0;i<3;i++)
     {
         for(j=0;j<3;j++)
         {
             printf("%d\t",*(*(a+i)+j));
         }
         printf("\n");
     }
     for(i=0;i<3;i++)
     {
         s += a[i][i];
     }
     printf("\n%d",s);
     return 0;
 }
