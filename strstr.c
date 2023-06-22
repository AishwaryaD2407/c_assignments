#include<stdio.h>
#include<string.h>

void main()
{
 char a[50],b[50];
 int i,j,k,bl,c;
 printf("\nenter the strings\n");
 scanf("%s%s",a,b);
bl=strlen(b);
 for(i=0;a[i];i++)
   {
       if(a[i]==b[0])
       {
           j=i;
        
          for(k=0;b[k];k++,j++)
             {
               if(b[k]==a[j])
                  {
			c++;
                   }
               
             }
             
                   
        
          }
        if(c==bl)
        {
        printf("\n yes\n");
        break;
         }
       }
    
    
         
     

   }
   


