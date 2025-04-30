#include <stdio.h>

int main() {
   char str[100];
    int n,i,p;
   printf("Enter the value of N : ");
   scanf("%d",&n);
   if(n>=1 && n<=10)
   {
          for(i=0;i<n;i++)
        {
          scanf(" %[^\n]s",str[i]);

        }
   }
   else
   {
       printf("Invalid input.");
   }
          for(i=0;i<n;i++)
        {
              printf("%s",str[i]);
        }

   return 0;
  
}
