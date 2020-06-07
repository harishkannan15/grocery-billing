#include"stdio.h"
#include"conio.h"
int main()
{       float bill,rate[10];
    int qty[10],i,bid,n;
    char date[15],item[10][20],cname[20],addr[80],phone[11];

    printf("\nEnter the Bill id=");
    scanf("%d",&bid);
    fflush(stdin);
    printf("\nEnter the Date=");
    gets(date);
    printf("\nEnter the name of Customer=");
    gets(cname);
    printf("\nEnter the Address of customer=");
    gets(addr);
    printf("\nEnter the Phone number of customer=");
    gets(phone);
    printf("\n\nHow many purchase items=");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\n\nEnter the %d item name=",i+1);
        fflush(stdin);
        gets(item[i]);
        printf("\nEnter the rate of %s item=",item[i]);
        scanf("%f",&rate[i]);
        printf("\nEnter the quantity of %s item=",item[i]);
        scanf("%d",&qty[i]);
        bill=bill+(rate[i]*qty[i]);
    }
    printf("\n\n************ Wel - Come ******************");
    printf("\n\nBill id is= %d",bid);
    printf("\n\nDate= %s",date);
    printf("\n\nCustomer name= %s",cname);
    printf("\n\nAddress= %s",addr);
    printf("\n\nPhone number=%s",phone);
    printf("\n\n\nItem name\tRate\tQty\tAmount");
    for(i=0;i<n;i++)
    {
    printf("\n\n%s\t\t%.2f\t%d\t%.2f",item[i],rate[i],qty[i],rate[i]*qty[i]);
    }
    printf("\n\n\t\t\tTotal=  %.2f",bill);
    printf("\n\n************** Thank you ***********************");
    getch();
}
