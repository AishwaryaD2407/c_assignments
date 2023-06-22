#include<stdio.h>
#include<stdlib.h>
typedef struct n
 	{
      		int d;
		struct n *next;

	}sll;


void add (sll**);
void print (sll*);
 void delete(sll**);
void main()
{
  sll *h=0;

  int p;
while(1)
{
printf("\n enter option  1)enter data 2) print 3) delete\n");
 scanf("%d",&p);
switch(p)
{
 case 1:add(&h);break;
 case 2:print(h);break;
 case 3: delete(&h);break;
 case 0:exit(0);break; 
}

}
}
 void add(sll **ptr )
 {
   sll *new;
   new=malloc(sizeof(sll));
   printf("\n enter data \n");
   scanf("%d",&new->d);
   new->next=*ptr;
   *ptr=new; 
 }

void print(sll *ptr)
{
   while(ptr!=0)
    {
       printf("\n%d\n",ptr->d);
       ptr=ptr->next;
       
    }
}

void delete(sll **ptr)
{
   sll *del ,*p;
  int c=0,pos,i;
   p =*ptr;
    while(*ptr!=0)
     { 
        c++;
        *ptr=(*ptr)->next;
        
     }

        printf("\n enter position to delete\n");
         scanf("%d",&pos);
         if(pos<=c)
         {
            if(pos==1)
		{
                   *ptr=(p)->next;
		   free(p);        
		}
              else
                 {
                    del=p=(*ptr);
                    for(i=1;i<pos;i++)
			{ 
                          p=(p)->next;
			  
                        }
                       del=p;
                       del=del->next;
                        
                     p->next=del->next;
                       free(del);
                 }
          
         }
             

}
















































































