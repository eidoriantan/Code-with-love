#include<stdio.h>
#include<conio.h>
void main()
{
    int a[10],i,size,item,pos,flag=0;
    clrscr();
     
    printf("\n  Enter the size of an array: ");
    scanf("%d",&size);
     
    printf("\n  Enter the elements of the array: ");
     
    //LOOP TO STORE THE ELEMENTS
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
     
    printf("\n  Enter the element to be searched: ");
    scanf("%d",&item);
     
    //LOOP TO CHECK WHETHER THE SEARCH ELEMENT IS PRESENT OR NOT
    for(i=0;i<size;i++)
    {
        if(item==a[i])
        {
            pos=i;
            flag=1;
            break;
        }
    }
     
    if(flag==1)
        printf("\n  The element is in the list and its position is: %d",pos+1);
    else
        printf("\n  The element is not found");
    getch();
}
