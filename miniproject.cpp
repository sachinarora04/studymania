#include<stdio.h>      
#include<process.h> 
#include<stdlib.h>     

struct income  { 
float donations,grants,misc; 
  }i;       
struct expenses { 
 float accou,bank,insau,supp,pay;                
	}e;   
void add_income(int);    
void add_expenses(int);  
void view_income(int);   
void view_expenses(int); 
void modify_income(int);  
void modify_expenses(int); 
float sum(int);            
float modify(float );
FILE *ptr;                 
int main()
{  
   int ch;
   start:
   system("cls");
   credit: 
   printf("\nMAIN MENU :\n\n");
   printf("1.Add Information \n");
   printf("2.View Information\n");
   printf("3.Modify Information\n ");
   printf("\b0.Exit\n");
   printf("Enter Your Choice :");
   scanf("%d",&ch);
switch(ch)
 {  
 case 1 : addinfo:
   system("cls");
  printf("\nADD INFORMATION\n\n");
 printf("1.Income \n");
 printf("2.Expenses \n");
printf("0.Return To Previous Menu\n");
printf("Enter Your Choice :");
scanf("%d",&ch);
 switch(ch)
 { 
 case 1: addincome:
  system("cls");
printf("\nADD INCOME\n\n");
printf("1.Donations\n");
printf("2.Grants\n");
printf("3.Misc\n");
printf("0.Return To Previous Menu\n");
printf("Enter Your Choice :");
scanf("%d",&ch);
 switch(ch)
  { 
 case 1:add_income(1);
  goto addincome;
  break;
 case 2:add_income(2);
 goto addincome;
 break;
case 3:add_income(3);
goto addincome;
break;
case 0:goto addinfo;
goto addincome;
break;
default:goto addincome;
}
break;
case 2: addexpenses:
system("cls");
printf("\nADD EXPENSES\n\n");
printf("1.Accounting Charges\n");
printf("2.Bank Charges\n");
printf("3.Insaurance Charges\n");
printf("4.Supplies\n");
printf("5.Payroll\n");
printf("0.Return To Previous Menu\n");
printf("Enter Your Choice :");
scanf("%d",&ch);
switch(ch)
 { 
								   case 1:add_expenses(1);
								          goto addexpenses;
										  break;
							       case 2:add_expenses(2);
								          goto addexpenses;
										  break;
							       case 3:add_expenses(3);
								          goto addexpenses;
										  break;
							       case 4:add_expenses(4);
								          goto addexpenses;
										  break;
							       case 5:add_expenses(5);
								          goto addexpenses;
										  break;
							       case 0:goto addinfo;
								          break;
							       default:goto addexpenses;
							 }
							   break;
                    case 0: goto start;
					        break;
                    default:printf("Invalid Choice, !Retry \n");
                              goto addinfo;
				  }
				   break;                  	        
	case 2 : viewinfo:
		     system("cls");
	         printf("\nVIEW INFORMATION \n\n");
	         printf("1.Income \n");
	         printf("2.Expenses \n");
	         printf("0.Return To Previous Menu\n");
	         printf("Enter Your Choice :\n");
	         scanf("%d",&ch);
				  switch(ch)
                  { case 1: viewincome:
                  	        
							printf("\nVIEW INCOME\n");
                  	        printf("1.Donations\n");
                  	        printf("2.Grants\n");
                  	        printf("3.Misc\n");
                  	        printf("0.Return To Previous Menu\n");
                  	        printf("Enter Your Choice :");
                  	        scanf("%d",&ch);
                  	         switch(ch)
							     { case 1:view_income(1);goto viewincome;break;
							       case 2:view_income(2);goto viewincome;break;
							       case 3:view_income(3);goto viewincome;break;
							       case 0: goto viewinfo;break;
							       default : goto viewincome;
							 }
							 break;
                    case 2: viewexpenses:
                    	    printf("\nVIEW EXPENSES\n");
                  	        printf("1.Accounting Charges\n");
                  	        printf("2.Bank Charges\n");
                  	        printf("3.Insaurance Charges\n");
                  	        printf("4.Supplies\n");
                  	        printf("5.Payroll\n");
							printf("0.Return To Previous Menu\n");
                  	        printf("Enter Your Choice :");
							scanf("%d",&ch);
                  	         switch(ch)
							     { 
								   case 1:view_expenses(1);
								          goto viewexpenses;
										  break;
							       case 2:view_expenses(2);
								          goto viewexpenses;
										  break;
							       case 3:view_expenses(3);
								          goto viewexpenses;
										  break;
							       case 4:view_expenses(4);
								          goto viewexpenses;
										  break;
							       case 5:view_expenses(5);
								          goto viewexpenses;
										  break;
							       
							       case 0:goto viewinfo ;
								          break;
							       default:goto viewexpenses;
							 }
							  break;
                    case 0: goto start;
					        break;
                    default:printf("Invalid Choice, !Retry \n");
                            goto viewinfo;
				  }
				    break;
	case 3 : modifyinfo:
		     system("cls");
	         printf("\nMODIFY INFORMATION\n");
	         printf("1.Modify Income \n");
	         printf("2.Modify Expenses \n");
	         printf("0.return to previous menu");
	         printf("Enter Your Choice :");
	         scanf("%d",&ch);
			 switch(ch)
                  {  
				    case 1: modifyincome:
                  	        printf("\n\tMODIFY INCOME\n");
                  	        printf("\t1.Donations\n");
                  	        printf("\t2.Grants\n");
                  	        printf("\t3.Misc\n");
                  	        printf("\t0.return to previous menu");
                  	        printf("\tEnter Your Choice :");
							scanf("%d",&ch);
                  	        switch(ch)
                  	           { 
								 case 1: modify_income(1);
								         goto modifyincome;
										 break;
                  	             case 2: modify_income(2);
								         goto modifyincome;
										 break;
                  	             case 3: modify_income(3);
								         goto modifyincome;
										 break;
								case 0: goto modifyinfo;
									     break;
                  	             default:printf("Invalid Choice, !Retry \n");
                                         goto modifyincome;
								 }
								  break;
                    case 2: modifyexpenses:
                    	    system("cls");
						    printf("\nMODIFY EXPENSES\n");
                  	        printf("\t1.Accounting Charges\n");
                  	        printf("\t2.Bank Charges\n");
                  	        printf("\t3.Insaurance Charges\n");
                  	        printf("\t4.Supplies\n");
                  	        printf("\t5.Payroll\n");
                  	        printf("\n 0 to previous menu");
                  	        printf("\tEnter Your Choice :");
							scanf("%d",&ch);
                  	         switch(ch)
							     { 
								   case 1:modify_expenses(1);
								          goto modifyexpenses;
										  break;
							       case 2:modify_expenses(2);
								          goto modifyexpenses;
										  break;
							       case 3:modify_expenses(3);
								          goto modifyexpenses;
										  break;
							       case 4:modify_expenses(4);
								          goto modifyexpenses;
										  break;
							       case 5:modify_expenses(5);
								          goto modifyexpenses;
										  break;
							       case 0:goto modifyinfo;
							       
							 }
							  break;
                    case 0: goto start;
					        break;
                    default:printf("Invalid Choice, !Retry \n");
                              goto modifyinfo;
				  }
				    break;			  
    case 0: exit(0);
	deafult:printf("Invalid Choice, !Retry \n");
	        goto start;			  
 }
exit:
return 0;
}
// functions definations
void add_income(int x)
{ 
  ptr=fopen("income.txt","wb+");
  switch(x)
    { 
	  case 1: printf("Enter Donations Amount:\n");
             scanf("%f",&i.donations);
			 break;
	 case 2: printf("Enter Grants Amount:\n");
	         scanf("%f",&i.grants);
			 break;
	 case 3: printf("Enter Misc Amount:\n");
	         scanf("%f",&i.misc);
			 break;
   }
 fwrite(&i,sizeof(i),1,ptr);
 fclose(ptr);
 }
void add_expenses(int x)
 {  
  ptr=fopen("expenses.txt","wb+");
  switch (x)
  { 
     case 1: printf("Enter Accounting Expenses:\n");
             scanf("%f",&e.accou);
			 break;
    case 2: printf("Enter Bank Expenses:\n");
            scanf("%f",&e.bank);
			break;
    case 3: printf("Enter Insaurance Expenses:\n");
            scanf("%f",&e.insau);
			break;        
    case 4: printf("Enter Supply Expenses:\n");
            scanf("%f",&e.supp);
			break;        
    case 5: printf("Enter Pay Expenses:\n");
            scanf("%f",&e.pay);
			break;        
           
   } 
 fwrite(&e,sizeof(e),1,ptr);
 fclose(ptr);
}
void view_income(int x)
{ 
  ptr=fopen("income.txt","rb");
  fread(&i,sizeof(i),1,ptr);
   switch(x)
    { 
	  case 1: system("cls");
             fscanf(ptr,"%f",&i.donations);
             printf("Amount of Donations : %.2f\n",i.donations);
             break;
     case 2: system("cls");
             fseek(ptr,4,0);
	         fscanf(ptr,"%f",&i.grants);
			 printf("Amount of Grants : %.2f\n",i.grants);
             break;        
     case 3: system("cls");
	         printf("Amount of Misc : %.2f\n",i.misc);
             break;        
    
  }
 fclose(ptr);
}
void  view_expenses(int x)
 { 
  ptr=fopen("expenses.txt","rb");
  fread(&e,sizeof(e),1,ptr);
  switch(x)
  { 
      case 1:  system("cls");
             printf("Accounting Expenses : %.2f\n",e.accou);
             break; 
      case 2: system("cls");
	         printf("Bank Expenses : %.2f\n",e.bank);
             break;
	  case 3: system("cls");
	        printf("Insaurance Expenses : %.2f\n",e.insau);
             break; 		           
      case 4: system("cls");
	         printf("Supply Expenses : %.2f\n",e.supp);
             break;          
      case 5: system("cls");
	         printf("Pay Expenses : %.2f\n",e.pay);
             break;          
      
  }
 fclose(ptr);  
}
void modify_income(int x)
 { 
  ptr=fopen("income.txt","w+");
  fread(&i,sizeof(i),1,ptr);
  switch(x)
   {
      case 1:printf("Enter data new amount");
              scanf("%f",&i.donations);
			  break;  
      case 2: printf("Enter data new amount");
              scanf("%f",&i.grants);
			  break;           
      case 3: printf("Enter data new amount");
              scanf("%f",&i.misc);
			  break;
  } 
 fwrite(&i,sizeof(i),1,ptr);
 fclose(ptr);		
}
void modify_expenses(int x)
 { 
  ptr=fopen("expenses.txt","w+");
  fread(&e,sizeof(e),1,ptr);
  switch(x)
   { 
      case 1: printf("Enter data new amount");
              scanf("%f",&e.accou);
			  break; 
      case 2:printf("Enter data new amount");
              scanf("%f",&e.bank);
			  break; 
      case 3:printf("Enter data new amount");
              scanf("%f",&e.insau);
			  break; 
      case 4: printf("Data Updated \n");
              printf("Current Status :%.2f\n",e.pay);
			  break;         
      case 5: printf("Data Updated \n");
              printf("Current Status :%.2f\n",e.supp);
			  break;         
      
     }
 fwrite(&i,sizeof(i),1,ptr);
 fclose(ptr);	
}


