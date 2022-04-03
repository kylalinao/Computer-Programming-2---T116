// Write a program in C to calculate and print the Electricity bill of a given customer.
#include <stdio.h>

void main()
{  
   int custid, conu;
   float chg, surchg=0, gramt,total_amt;

   printf("Input Customer ID :");
   scanf("%d",&custid);
   printf("Input the unit consumed by the customer : ");
   scanf("%d",&conu);
   if (conu <250 )
	chg = 1.50;
   else	if (conu>=250 && conu<400)
		chg = 1.60;
	else if (conu>=450 && conu<600)
			chg = 1.85;
		else
			chg = 2.00;
   gramt = conu*chg;
   if (gramt>400)
	surchg = gramt*10/100.0;
   total_amt = gramt+surchg;
   if (total_amt  < 100)
	total_amt =100;
   printf("\n[Electricity Bill]\n");
   printf("Customer ID#                         :%d\n",custid);
   printf("unit Consumed                        :%d\n",conu);
   printf("Unit charges @P. %4.2f per Unit      :%8.2f\n",chg,gramt);
   printf("Surchage Amount                      :%8.2f\n",surchg);
   printf("Total Customer Bill                  :%8.2f\n",total_amt);

} 