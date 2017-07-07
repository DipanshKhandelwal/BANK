#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>
#include <string.h>
#include <time.h>
struct customers
{   //creating a database for a person
    char firstname[12];
    char lastname[12];
    int accno;
    long long unsigned int money;
    char addr[50];
    long long unsigned int pno;
    char password[20];

};

struct info
{ //creating database to store transactions
    int acno;
    char inf[80];
    long long unsigned int amount;
    char time[20];
};

//function prototyping
void display();
void bankinfo();
int firstpage();
void newcustomer();
void secondpage(struct customers);
void banklogin();
void existingcustomer();
void bankmenu();
void allprofiles();
void viewprofile(struct customers);
void transfer(struct customers);
void transfer(struct customers);
void cashdeposit(struct customers);
void onpay(struct customers);
void lasttrans();
void lasttranspp(struct customers);
void changepn(struct customers);
void calc(struct customers);
void loans(struct customers);


void display()
{  //creating a animation to be displayed everytime we load a new page in progarm
    system("cls");
  printf("\n\n\n\n\t\t\t\t\t\t *\n\n\t\t\t\t\t\t   LOADING");Sleep(80);system("cls");
	printf("\n\n\n\n\t\t\t\t\t\t * *\n\n\t\t\t\t\t\t   LOADING");Sleep(80);system("cls");
	printf("\n\n\n\n\t\t\t\t\t\t * * *\n\n\t\t\t\t\t\t   LOADING");Sleep(80);system("cls");
	printf("\n\n\n\n\t\t\t\t\t\t * * * *\n\n\t\t\t\t\t\t   LOADING");Sleep(80);system("cls");
	printf("\n\n\n\n\t\t\t\t\t\t * * * * *\n\n\t\t\t\t\t\t   LOADING");Sleep(80);system("cls");
	printf("\n\n\n\n\t\t\t\t\t\t * * * * * *\n\n\t\t\t\t\t\t   LOADING");Sleep(80);system("cls");
	printf("\n\n\n\n\t\t\t\t\t\t * * * * * * *\n\n\t\t\t\t\t\t   LOADING");Sleep(80);system("cls");
	
	printf("\n\n\n\n\t\t\t\t\t\t * * * * * * *\n\n\t\t\t\t\t\t   LOADING   *");Sleep(80);;system("cls");
	printf("\n\n\n\n\t\t\t\t\t\t * * * * * * *\n\n\t\t\t\t\t\t   LOADING   *\n\n\t\t\t\t\t\t             *");Sleep(80);system("cls");
	printf("\n\n\n\n\t\t\t\t\t\t * * * * * * *\n\n\t\t\t\t\t\t   LOADING   *\n\n\t\t\t\t\t\t           * *");Sleep(80);system("cls");
	printf("\n\n\n\n\t\t\t\t\t\t * * * * * * *\n\n\t\t\t\t\t\t   LOADING   *\n\n\t\t\t\t\t\t         * * *");Sleep(80);system("cls");
	printf("\n\n\n\n\t\t\t\t\t\t * * * * * * *\n\n\t\t\t\t\t\t   LOADING   *\n\n\t\t\t\t\t\t       * * * *");Sleep(80);system("cls");
	printf("\n\n\n\n\t\t\t\t\t\t * * * * * * *\n\n\t\t\t\t\t\t   LOADING   *\n\n\t\t\t\t\t\t     * * * * *");Sleep(80);system("cls");
	printf("\n\n\n\n\t\t\t\t\t\t * * * * * * *\n\n\t\t\t\t\t\t   LOADING   *\n\n\t\t\t\t\t\t   * * * * * *");Sleep(80);system("cls");
	printf("\n\n\n\n\t\t\t\t\t\t * * * * * * *\n\n\t\t\t\t\t\t * LOADING   *\n\n\t\t\t\t\t\t * * * * * * *");Sleep(80);

	
        system("cls");
        printf("\n\n\n\n\n");
        int t=17;
        while(t--){printf("*\t");}
        	char tt[20];
		    struct tm *loc_time;
		    time_t curtime;
		    curtime = time (NULL);
		    loc_time = localtime (&curtime);
		    strcpy(tt,asctime(loc_time));
		    //get local time
		     printf("\n\n\t\t\t\t\t\t*** BANK OF GANDHINAGAR ***\n\n",tt);
		    printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\%s\n\n",tt);
		   
		    
}

void bankinfo()
{  //something about the bank
	display();
    printf("\n\n\n\t\t\t\t ** BANK OF GANDHINAGAR **\n\n\n");
    printf("\n\n\n\t\t\t\tBEST BANKING PARTNER SINCE 1850s ");
   getch();
    firstpage();
}

struct info information;
struct customers person;

int firstpage()
{    //choosing the next function to be enabled
		char c;
        display();
        printf("\n\t\t\t\t*\tPRESS THE FOLLOWING NUMBERS TO PROCEED RESPECTIVELY\t*");
        printf("\n\n\n\t\t\t\t*\t\t1.New Custumer     \t\t\t\t*");
        printf("\n\n\n\t\t\t\t*\t\t2.Existing Custumer\t\t\t\t*");
        printf("\n\n\n\t\t\t\t*\t\t3.More About Us    \t\t\t\t*");
        printf("\n\n\n\t\t\t\t*\t\t4.Bank Login       \t\t\t\t*");
        printf("\n\n\n\t\t\t\t*\t\t5.Refresh          \t\t\t\t*");
        printf("\n\n\n\t\t\t\t*\t\t6.Exit             \t\t\t\t*\n\n\n");
        int t=17;
        while(t--){printf("*\t");}
        printf("\n\n\n\t\t\t\t\t\t");
        c=getch();
    
        switch(c)
        {   case '1': newcustomer();
                    break;
            case '2': existingcustomer();
                    break;
            case '3': bankinfo();
                    break;
            case '4': system("cls");
                    banklogin();
                    break;
            case '5': firstpage();
            case '6': return 0;
            default : firstpage();
        }

}


void newcustomer()
{   // adding a new customer 
   display();
    int accountstaken;
    FILE *record;
    record=fopen("record.txt","r+");
    fread(&accountstaken,sizeof(int),1,record);
    fclose(record);

    FILE *ptr;

    ptr=fopen("main.txt","r+");
     printf("\n\n\t\t\t\t\t\t\t*\tENTER YOUR FOLLOWING DETAILS\t*\n\n\n\n\n");
 	//entering details to a new person file
      printf("\n\n\t\t\t\t\tFIRSTNAME LASTNAME         :-  ");
      scanf("%s%s",person.firstname,person.lastname);
      printf("\n\n\t\t\t\t\tADDRESS IN FORM H NO./AREA :-  ");
       scanf("%s",person.addr);
      printf("\n\n\t\t\t\t\tPHONE NUMBER               :-  ");
        scanf("%llu",&person.pno);
        pp:
      printf("\n\n\t\t\t\t\tPASSWORD                   :-  ");
      //cascading password
		      char b,pass[20],pass2[20];
			int i=0;
			while(1)
			{ 
			b=getch();
			if(b==13)
		    	{ 
				pass[i]='\0';
				break;
				}
				
			else
				{
				pass[i]=b;
				printf("*");
				i++;
				}
			}
			
	  printf("\n\n\t\t\t\t\t\CONFIRM PASSWORD           :-  ");
	  	i=0;
			while(1)
			{ 
			b=getch();
			if(b==13)
		    	{ 
				pass2[i]='\0';
				break;
				}
				
			else
				{
				pass2[i]=b;
				printf("*");
				i++;
				}
			}
			
		if(strcmp(pass,pass2)!=0)
		{ printf("\n\n\t\t\t\t\t\t\t\t**  PASSWORD DO NOT MATCH  **");
			goto pp;
			}	
	else{
	strcpy(person.password,pass);		

    fseek(ptr,accountstaken*sizeof(struct customers),SEEK_SET);

    person.accno=accountstaken+1;
    person.money=0;
    fwrite(&person,sizeof(struct customers),1,ptr);
    display();
    printf("\n\n\t\t\t\t\t  ACCOUNT CREATED SUCCESSFULLY\n\n\n\n\n");
    printf("\n\n\t\t\t\t\tNAME-%s %s\n\n\t\t\t\t\tACCOUNT NO-%d\n\n\t\t\t\t\tPASSWORD-%s\n\n\t\t\t\t\tMONEY-%llu\n\n\t\t\t\t\tADDRESS-%s\n\n\t\t\t\t\tPHONE NO-%llu\n\n\t\t\t\t\t",person.firstname,person.lastname,person.accno,person.password,person.money,person.addr,person.pno);
    fclose(ptr);
      accountstaken++;

    information.acno=accountstaken;
    strcpy(information.inf,"account created");

    information.amount=0;
    //get loacl time
    struct tm *loc_time;
    time_t curtime;
    curtime = time (NULL);
    loc_time = localtime (&curtime);
    strcpy(information.time,asctime(loc_time));
	 
	 //writing data to database
    FILE *tr;
    tr=fopen("trans.txt","a");
    fwrite(&information,sizeof(struct info),1,tr);
    fclose(tr);
	

    record=fopen("record.txt","r+");
    fwrite(&accountstaken,sizeof(int),1,record);
    fclose(record);
	
    Sleep(5000);
   display();
    printf("\n\n\n\n\n\t\t\t\tyou have successfully logged in\n\n\n\n\n\t\t\t\tplease wait .... we are redirecting you");
    Sleep(3400);
        secondpage(person);
	}
}

void secondpage(struct customers person)
{   //menu to the existing logged in customer
       display();
        printf("\n\n\n\t\t\t\t*\tHELLO !! %s %s WELCOME TO BANK OF GANDHINAGAR\t*\n\n\n",person.firstname,person.lastname);
        printf("\n\n\n\t\t\t\t*\tPRESS THE FOLLOWING NUMBERS TO PROCEED RESPECTIVELY\t*\n\n\n");
        printf("\n\n\n\t\t\t\t\t*\t1.View Profile                   \t\t\t*");
        printf("\n\n\n\t\t\t\t\t*\t2.Cash Deposit                   \t\t\t*");
        printf("\n\n\n\t\t\t\t\t*\t3.Transfer Funds                 \t\t\t*");
        printf("\n\n\n\t\t\t\t\t*\t4.Change Phone Number            \t\t\t*");
        printf("\n\n\n\t\t\t\t\t*\t5.Online Payments                \t\t\t*");
        printf("\n\n\n\t\t\t\t\t*\t6.Last Transactions              \t\t\t*");
        printf("\n\n\n\t\t\t\t\t*\t7.Refresh                        \t\t\t*");
        printf("\n\n\n\t\t\t\t\t*\t8.Login Again                    \t\t\t*");
        printf("\n\n\n\t\t\t\t\t*\t9.Loan And Intrest Calculator    \t\t\t*");
        printf("\n\n\n\t\t\t\t\t*\ta.Learn About Policies And Loans\t\t\t*");
        printf("\n\n\n\t\t\t\t\t*\tb.Exit                          \t\t\t*");




        char choice;
        printf("\n\n\n\t\t\t\t");
        choice=getch();
        switch(choice)
        {   case '1': viewprofile(person);
                    break;
            case '2': cashdeposit(person);
                    break;
            case '3': transfer(person);
                    break;
            case '4': changepn(person);
                    break;
            case '5': onpay(person);
                    break;
            case '6': lasttranspp(person);
                    break;
            case '7': secondpage(person);
            case '8': firstpage();
            case '9': calc(person);
            case 'a':loans(person);
            case 'b':exit(1);
            default :secondpage(person);
        }

}

void banklogin()
{ 	//login for admin or bank administrtion
    display();
	char first[12];
	  char second[12];
	  char pass[20];

    FILE *ptr;
    ptr=fopen("banklogin.txt","r+");
    fread(&person,sizeof(struct customers),1,ptr);

    printf("\n\n\t\t\t\tENTER YOUR FOLLOWING DETAILS\n\n\n");
    
    printf("\n\n\t\t\t\tUSER NAME         :-  ");
    scanf("%s %s",first,second);
   if(strcmp(first,person.firstname)==0 && strcmp(second,person.lastname)==0)
   {
         printf("\n\n\t\t\t\tPASSWORD          :-  ");
         int i=0;
         char b;
			while(1)
			{ 
			b=getch();
			if(b==13)
		    	{ 
				pass[i]='\0';
				break;
				}
				
			else
				{
				pass[i]=b;
				printf("*");
				i++;
				}
			}

         if(strcmp(pass,person.password)==0)
         {
             printf("\n\n\n\n\t\t\t\t\t*\tsuccessful bank login\t*");
             fclose(ptr);
             Sleep(1800);
             system("cls");
             bankmenu();
         }else
         {
             printf("\n\n\n\n\t\t\t\twrong password\t\t\t\n\n\n\t\t\tredirecting....");
             Sleep(2000);
             banklogin();
         }

   }else
   {
       printf("\n\n\n\n\t\t\t\twrong username\t\t\t\n\n\n\t\t\tredirecting....");
       Sleep(2000);
       banklogin();

   }

}

void existingcustomer()
{  //login for existing customers
  display();
  char fname[12],pass[20];
  char lname[12];
  int temp;
     
        printf("\n\n\n\t\t\t\t\t\t\t*\tLOGIN WINDOW\t*\n\n\n\n");
    printf("\n\n\n\t\t\t\t\t\t\tENTER ACCOUNT NUMBER :-  ");
    scanf("%d",&temp);

    int accountstaken;
    FILE *record;
    record=fopen("record.txt","r+");
    fread(&accountstaken,sizeof(int),1,record);
    fclose(record);


    if(temp<=accountstaken)
    {

    FILE *list;
    list=fopen("main.txt","r");

    fseek(list,(temp-1)*sizeof(struct customers),SEEK_SET);
    fread(&person,sizeof(struct customers),1,list);
    printf("\n\n\n\t\t\t\t\t\t\tENTER YOUR NAME     :-  ");
    scanf("%s%s",fname,lname);
    if(strcmp(fname,person.firstname)==0 && strcmp(lname,person.lastname)==0)
    {
    printf("\n\n\n\t\t\t\t\t\t\tENTER PASSWORD      :-  ");
       int i=0;
       char b;
			while(1)
			{ 
			b=getch();
			if(b==13)
		    	{ 
				pass[i]='\0';
				break;
				}
				
			else
				{
				pass[i]=b;
				printf("*");
				i++;
				}
			}
      if(strcmp(pass,person.password)==0)
      {
          printf("\n\n\t\tsuccessful login");
          int n=15;
          while(n--)
          {
              Sleep(150);
              printf(".");
          }
          //writing data to file
          information.acno=person.accno;
          information.amount=0;
          strcpy(information.inf,"account logged in once");
          
          //getting local time
           struct tm *loc_time;
          time_t curtime;
          curtime = time (NULL);
          loc_time = localtime (&curtime);
          strcpy(information.time,asctime(loc_time));
          
          FILE *tr;
          tr=fopen("trans.txt","a");
          fwrite(&information,sizeof(struct info),1,tr);
          fclose(tr);

          Sleep(1100);
          secondpage(person);
      }else
         {
             system("cls");
        printf("\n\n\n\n\n");
         printf("\n\n\n\n\n\n\n\n\t\t\t\t\tWRONG PASSWORD\n\n\n\n\n\t\t\t\t\tDONT HAVE AN ACCOUNT ??\n\n\t\t\t\t\t PRESS 1 TO CREATE YOUR OWN ACCOUNT");
         char x;
         x=getch();
         if(x=='1'){ newcustomer(); }
        else {existingcustomer();}
         }

    }else
      {  system("cls");
        printf("\n\n\n\n\n");
        int t=17;
        while(t--){printf("*\t");}
         printf("\n\n\n\n\n\n\n\n\t\t\t\t\t\t\tNAME DOESNT MATCH WITH ACCOUNT NUMBER\n\n\n\n\n\t\t\t\t\t\t\tPLEASE TRY AGAIN !!!");
         Sleep(2400);
        existingcustomer();
      }

    fclose(list);
    secondpage(person);
    }else
    {
    	printf("\n\n\n\n\t\t\t\t**  ACCOUNT DOESNT EXIST  **\n\n\n\n\t\t\t\tREDIRECTING....");
    	Sleep(2400);
    	existingcustomer();
	}
}

void bankmenu()
{ //menu after bank login
		char choice;
       display();
        printf("\n\n\t\t\t\t");
        printf("PRESS THE FOLLOWING NUMBERS TO PROCEED RESPECTIVELY");
        printf("\n\n\n\t\t\t\t");
        printf("1.View All Profiles");
        printf("\n\n\n\t\t\t\t");
        printf("2.All Last Transactions");
        printf("\n\n\n\t\t\t\t");
        printf("3.Refresh");
        printf("\n\n\n\t\t\t\t");
        printf("4.Relogin Or First Page");
        printf("\n\n\n\t\t\t\t");
        printf("5.Exit App");

         printf("\n\n\n\t\t\t\t");
        choice=getch();
        switch(choice)
        {   case '1': allprofiles();
                    break;
            case '2': lasttrans();
                     break;
            case '3': bankmenu();
                    break;
            case '4': firstpage();
                    break;
            case '5': exit(1);

        }
        bankmenu();

}

void allprofiles()
{  //for viewing all the profiles saved in the database by the admin
	  FILE *list;
    int i,accountstaken;
    FILE *record;
    record=fopen("record.txt","r+");
    fread(&accountstaken,sizeof(int),1,record);
    fclose(record);

    list=fopen("main.txt","r");
      display();
        printf("\n\n\n\t\t\t\t*\tLIST OF ALL THE ACCOUNT HOLDERS\t*\n\n");

    for(i=0;i<accountstaken;i++)
    {
        fseek(list,i*sizeof(struct customers),SEEK_SET);
        fread(&person,sizeof(struct customers),1,list);
        printf("\n\n\t\t");
        printf("NAME:-%s %s  ACCOUNT NO:-%d   PASSWORD:-%s  MONEY:-%llu  ADDRESS:-%s  PHONE NO:-%llu",person.firstname,person.lastname,person.accno,person.password,person.money,person.addr,person.pno);
        printf("\n\n\n\n\t\t");
    }
    fclose(list);
    printf("\n\n\n\t\t\t\t\t\t**** enter anything to continue ****\n");
    getch();
    bankmenu();
}

void viewprofile(struct customers person)
{  //to view our own profile 
   display();
printf("\n\n\n\t\t\t\t\t\t\t\t\t*\tHELLO %s %s\t*",person.firstname,person.lastname);
        printf("\n\n\n\t\t\t\t*\tYOUR PROFILE\t*\n\n\n");
    printf("\n\n\n\t\t\t\t\t*\tNAME-%s %s\t\t\t*\n\n\n\t\t\t\t\t*\tACCOUNT NO-%d\t\t\t*\n\n\n\t\t\t\t\t*\tPASSWORD-%s\t\t\t*\n\n\n\t\t\t\t\t*\tMONEY-%llu\t\t\t*\n\n\n\t\t\t\t\t*\tADDRESS-%s\t\t\t*\n\n\n\t\t\t\t\t*\tPHONE NO-%llu\t\t\t*",person.firstname,person.lastname,person.accno,person.password,person.money,person.addr,person.pno);
    getch();
     information.acno=person.accno;
          strcpy(information.inf,"profile viewed");
          information.amount=0;

            struct tm *loc_time;
            time_t curtime;
            curtime = time (NULL);
            loc_time = localtime (&curtime);
            strcpy(information.time,asctime(loc_time));

          FILE *tr;
          tr=fopen("trans.txt","a");
          fwrite(&information,sizeof(struct info),1,tr);
          fclose(tr);


    secondpage(person);
}


void transfer(struct customers person)
{   //to transfer money from one account to other 
	display();
    char pass[20],fname[12],lname[12];
    int accno,t;
    long long unsigned int amount;
    struct customers person2;
printf("\n\n\n\t\t\t\t*\tHELLO %s %s\t*",person.firstname,person.lastname);
        printf("\n\n\n\t\t\t\t*\tTO TRANSFER YOUR MONEY\t*\n\n\n");
        
    printf("\n\n\n\t\t\t\t*\tENTER PASSWORD :-     ");
    int i=0;
       char b;
			while(1)
			{ 
			b=getch();
			if(b==13)
		    	{ 
				pass[i]='\0';
				break;
				}
				
			else
				{
				pass[i]=b;
				printf("*");
				i++;
				}
			}
    if(strcmp(pass,person.password)==0)
    {
    printf("\n\n\n\t\t\t\t\t*\tACCOUNT NO OF THE PERSON YOU WANT TO SEND MONEY :-  ");
    scanf("%d",&accno);
    int accountstaken;
    FILE *record;
    record=fopen("record.txt","r+");
    fread(&accountstaken,sizeof(int),1,record);
    fclose(record);

    if(accno>accountstaken)
    {    system("cls");

        printf("\n\n\n\n\n");
        t=17;
        while(t--){printf("*\t");}
        printf("\n\n\n\t\t\t\t\tno such account available !!!!");
    }
    else
    {
        FILE *ptr;
        ptr=fopen("main.txt","r+");
        fseek(ptr,(accno-1)*sizeof(struct customers),SEEK_SET);
        fread(&person2,sizeof(struct customers),1,ptr);
      p:
    printf("\n\n\n\t\t\t\t\t*\tENTER THE NAME OF THE PERSON                    :-  ");
        scanf("%s%s",fname,lname);
        if(strcmp(fname,person2.firstname)!=0 || strcmp(lname,person2.lastname)!=0)
        {
         printf("\n\n\n\n");
            t=17;
            while(t--){printf("*\t");}
            printf("\n\n\n\t\t\t\t\tname doesnt matches with account number\n\n\t\t\tplease be careful !!!!\n\n\n\t\t\t\TRY AGAIN !!!!");
            Sleep(1000);
            goto p;
        }else
        {
             printf("\n\n\n\t\t\t\t\t*\tENTER AMOUNT TO BE TRANSFERRED                       :-  ");
            scanf("%llu",&amount);
            if(amount>person.money)
            {    system("cls");
                printf("\n\n\n\n\n");
                t=17;
                while(t--){printf("*\t");}
                printf("\n\n\n\t\t\t\t\tyou dont have sufficient balance !!!!\n\n\n\t\t\t\t\tyou just have %llu rupees in your account",person.money);
                Sleep(2000);
                printf("\n\n\n\t\t\t\tredirecting to home");
                int f=4;
                while(f--){ printf(">");
                Sleep(100);
				}
                
                secondpage(person);
            }else
            {
                person.money=person.money-amount;
                person2.money=person2.money+amount;
                printf("\n\n\n\n\t\t\t\tNOW YOU HAVE %d RUPEES LEFT IN YOUR ACCOUNT ",person.money);
                printf("\n\n\n\t\t\t\ttransaction in progress");
               int p=10;
               while(p--){Sleep(80);printf(". ");}

                fseek(ptr,(person2.accno-1)*sizeof(struct customers),SEEK_SET);
                fwrite(&person2,sizeof(struct customers),1,ptr);

                fseek(ptr,(person.accno-1)*sizeof(struct customers),SEEK_SET);
                fwrite(&person,sizeof(struct customers),1,ptr);
                fclose(ptr);
                printf("\n\n\n\n\t\t\t\tmoney successfully  transferred");
                Sleep(1100);
				
                 struct tm *loc_time;
                time_t curtime;
                curtime = time (NULL);
                loc_time = localtime (&curtime);
                strcpy(information.time,asctime(loc_time));

                  FILE *tr;
                  tr=fopen("trans.txt","a");

                   information.acno=person.accno;
                
                  strcpy(information.inf,"money sent to ");
                  strcat(information.inf,fname);
                  strcat(information.inf," ");
                  strcat(information.inf,fname);
                  
                  
                    information.amount=amount;
                  fwrite(&information,sizeof(struct info),1,tr);

                   information.acno=person2.accno;
                  strcpy(information.inf,"money recieved by ");
                   strcat(information.inf,person.firstname);
                   strcat(information.inf," ");
                  strcat(information.inf,person.lastname);
                  
                    information.amount=amount;
                  fwrite(&information,sizeof(struct info),1,tr);
                  fclose(tr);



                secondpage(person);

            }
        }
    }
  }else
  {
  	printf("\n\n\n\t\t\t\tWRONG PASSWORD \n\n\n\t\t\t\t redirecting....");
  	Sleep(2000);
  	transfer(person);
  }
}

void cashdeposit(struct customers person)
{	//to deposit money to the account
	display();
    long long unsigned int amount;
    char uu[20];
    printf("\n\n\n\t\t\t\t\t\t*\tHELLO %s %s\t*",person.firstname,person.lastname);
    printf("\n\n\t\t\t\t\tENTER AMOUNT         :-  ");
    scanf("%llu",&amount);
    printf("\n\n\t\t\t\t\tENTER PASSWORD       :-  ");
    scanf("%s",uu);
    if(strcmp(person.password,uu)==0)
   {
	 printf("\n\n\t\t\t\t\t*  INSERT THE MONEY  *\a");
    Sleep(2000);
    printf("\n\n\t\t\t\t\t*  COUNTING THE MONEY  *");
    int b=7;
    while(b--){Sleep(80); printf(".");}
    Sleep(1000);
    person.money=person.money+amount;
    FILE *ptr;
    ptr=fopen("main.txt","r+");
    fseek(ptr,(person.accno-1)*sizeof(struct customers),SEEK_SET);
    fwrite(&person,sizeof(struct customers),1,ptr);

    printf("\n\n\t\t\t\t\t*  MONEY SUCCESSFULLY TRANSFERRED  *");
    printf("\n\n\t\t\t\t\t   NOW YOU HAVE %d RUPEES LEFT IN YOUR ACCOUNT ",person.money);

    getch();
                  FILE *tr;
                  tr=fopen("trans.txt","a");
                     struct tm *loc_time;
                    time_t curtime;
                    curtime = time (NULL);
                    loc_time = localtime (&curtime);
                    strcpy(information.time,asctime(loc_time));
                   information.acno=person.accno;
                  strcpy(information.inf,"money deposited");
                    information.amount=amount;
                  fwrite(&information,sizeof(struct info),1,tr);
                  fclose(tr);

    fclose(ptr);
    secondpage(person);
}else
{
	 printf("\n\n\t\t\t\t\t*  WRONG PASSWORD  *\n\n\t\t\t\t\t redirecting . . . ");
	 Sleep(2000);
	 cashdeposit(person);
}

}

void onpay(struct customers person)
{  //online payment from the account
	 char transid[25],proname[25],transif[25],proname2[25];
    int otp,x,y,z,a;
    long long unsigned int  amount;
    display();
    printf("\n\n\n\t\t\t\t\t\t*\tHELLO %s %s\t*",person.firstname,person.lastname);
    printf("\n\n\t\t\t\t\t\t\t*\tONLINE PAYMENT PORTAL\t*\n\n\n\n\n");
    
    printf("\n\n\t\t\t\tTRANSACTION ID :-  ");
    scanf("%s",transid);
    strcpy(transif,"transaction id :- ");
    strcat(transif,transid);
    
    printf("\n\n\t\t\t\tPROVIDERS NAME :-  ");
    scanf("%s",proname);
    strcpy(proname2,"provider's name:- ");
    strcat(proname2,proname);
    
     printf("\n\n\t\t\t\tPASSWORD :-       ");
     int i=0;
       char b,pass[20];
			while(1)
			{ 
			b=getch();
			if(b==13)
		    	{ 
				pass[i]='\0';
				break;
				}
				
			else
				{
				pass[i]=b;
				printf("*");
				i++;
				}
			}
     if(strcmp(pass,person.password)==0){
    printf("\n\n\t\t\t\tENTER AMOUNT   :-  ");
    scanf("%llu",&amount);
    if(amount<person.money)
    {

       x=rand()%9;
       y=rand()%9;
       z=rand()%9;
       a=rand()%9;

       printf("\n\n\n\n\n\t\t\t\tSENDING OTP TO YOUR NUMBER -- %llu",person.pno);
       Sleep(2000);
       printf("\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t%d%d%d%d",x,y,z,a);
      printf("\n\n\n\n\n\t\t\t\t *** ENTER OTP FOR TRANSACTION ***");
       x=1000*x+100*y+10*z+a;
      again:
           scanf("%d",&otp);
           if(x!=otp)
           {
               printf("\n\t\t\t\tWRONG OTP\n\t\t\tTRY AGAIN");
               goto again;
           }else
           {
                printf("\n\n\n\n\n\t\t\t\t\tPAYMENT SUCCESSFUL");
               person.money=person.money-amount;
				printf("\n\n\n\n\t\t\t\tNOW YOU HAVE %d RUPEES LEFT IN YOUR ACCOUNT ",person.money);
				Sleep(2100);
                FILE *ptr;
                ptr=fopen("main.txt","r+");
                fseek(ptr,(person.accno-1)*sizeof(struct customers),SEEK_SET);
                fwrite(&person,sizeof(struct customers),1,ptr);

                FILE *tr;
                  tr=fopen("trans.txt","a");

                   information.acno=person.accno;
                   char d[50];
                   strcpy(information.inf,"online payment done");
                  strcat(information.inf,"\n\t");
                   strcat(information.inf,transif);
                   strcat(information.inf,"\n\t");
                   strcat(information.inf,proname2);
                   
                    information.amount=amount;
                       struct tm *loc_time;
                        time_t curtime;
                        curtime = time (NULL);
                        loc_time = localtime (&curtime);
                        strcpy(information.time,asctime(loc_time));
                  fwrite(&information,sizeof(struct info),1,tr);
                  fclose(tr);



                fclose(ptr);
                secondpage(person);
           }
    }
    else
    {
        printf("\n\n\n\n\t\t\t\t** INSUFFICIENT BALANCE **\n\n\n\n\t\t\t\tredirecting . . . ");
        Sleep(1800);
        secondpage(person);
    }

}else
{
	 printf("\n\n\n\n\t\t\t\t** WRONG PASSWORD **\n\n\n\n\t\t\t\tredirecting . . . ");
	 Sleep(2000);
	 onpay(person);
}
}

void lasttrans()
{  //bank admin option only to view all last transactions
	 FILE *ptr;
    ptr=fopen("trans.txt","r");
     int i;
 printf("\n\n\nACCOUNT NO.\nTRANSACTION\nTIME\nMONEY\n");
 while(fread(&information,sizeof(struct info),1,ptr)==1)
   {
         
       if(information.amount==0)
       {
            printf("\taccount number-%d\n\t%s\n\t%s\n\n\n",information.acno,information.inf,information.time);
       }
       else
       printf("\taccount number-%d\n\t%s\n\t%s\n\trupees:-%llu\n\n\n",information.acno,information.inf,information.time,information.amount);

   }
  
    printf("\n\n\n\t\t\t\t\t\t**** enter anything to continue ****\n");
    getch();
    fclose(ptr);
    bankmenu();
}

void lasttranspp(struct customers person)
{  //to view all last transactions by a customer 
   FILE *ptr;
    ptr=fopen("trans.txt","r");
     int i,entries;

printf("\n\n\n\t\t\t\t\t\t\t\t\t*\tHELLO %s %s\t*",person.firstname,person.lastname);
 printf("\n\n\n\tACCOUNT NO.\n\tTRANSACTION\n\tTIME\n\tMONEY\n\n");
      while(fread(&information,sizeof(struct info),1,ptr)==1)
   {

    if(person.accno==information.acno)
       {
              if(information.amount==0)
           {
                printf("\taccount number-%d\n\t%s\n\t%s\n\n\n",information.acno,information.inf,information.time);
           }
           else
           printf("\taccount number-%d\n\t%s\n\t%s\n\trupees:-%llu\n\n\n",information.acno,information.inf,information.time,information.amount);
       }

   }

    fclose(ptr);
    printf("\n\n\n\t\t\t\t\t\t**** enter anything to continue ****\n");
    getch();
    secondpage(person);
}

void changepn(struct customers person)
{   //to change phone number
	char a;
	display();
    long long unsigned int b,c;
    printf("\n\n\n\t\t\t\t\t\t*\tHELLO %s %s\t*",person.firstname,person.lastname);
    printf("\n\n\t\t\t\t\t\t\t*\tTO CHANGE MOBILE NUMBER\t*\n\n\n\n\n");
    printf("\n\n\t\t\t\tENTER 1 TO CONTINUE");
    a=getch();
    if(a=='1')
    {	
    	gg:
        printf("\n\n\t\t\t\tENTER NEW MOBILE NUMBER :-  ");
        scanf("%llu",&b);
        printf("\n\n\t\t\t\tCONFIRM THE NUMBER      :-  ");
        scanf("%llu",&c);
        
if(b==c){
		        person.pno=b;
		         FILE *ptr;
		         ptr=fopen("main.txt","r+");
		        fseek(ptr,(person.accno-1)*sizeof(struct customers),SEEK_SET);
		        fwrite(&person,sizeof(struct customers),1,ptr);
		        fclose(ptr);
		        Sleep(1500);
		        printf("mobile no. saved");

                FILE *tr;
                  tr=fopen("trans.txt","a");
                    int amount =0;
                   information.acno=person.accno;
                  strcpy(information.inf,"phone no changed ");
                  
                    information.amount=amount;
                     struct tm *loc_time;
                    time_t curtime;
                    curtime = time (NULL);
                    loc_time = localtime (&curtime);
                    strcpy(information.time,asctime(loc_time));
                  fwrite(&information,sizeof(struct info),1,tr);
                  fclose(tr);
                  printf("\n\n\t\t\t\t *** PHONE NUMBER CHANGED ***");
                  Sleep(2000);
        }else
        {
        	printf("\n\n\t\t\t\tNUMBERS DO NOT MATCH TRY AGAIN !!!!");
        	Sleep(2000);
        	goto gg;
		}

    }

    secondpage(person);
}

void calc(struct customers person)
{   //to calculate loan intrest
    display();
    double b;
	 printf("\n\n\n\t\t\t\t\t\t\t\t\t*\tHELLO %s %s\t*",person.firstname,person.lastname);
     printf("\n\n\n\t\t\t\t*\tPRESS THE FOLLOWING NUMBERS TO PROCEED RESPECTIVELY\t*");
        printf("\n\n\n\t\t\t\t*\t\t1.Home Loan Intrest     \t\t\t\t*");
        printf("\n\n\n\t\t\t\t*\t\t2.Car Loan Intrest      \t\t\t\t*");
        printf("\n\n\n\t\t\t\t*\t\t3.Educational Loan Intrest     \t\t\t\t*");
        printf("\n\n\n\t\t\t\t*\t\t4.Last Page\t\t\t\t*");
        

  char d=getch();
  display();
  switch(d)
  {
  	case '1': printf("\n\n\n\t\t\t\t\t\t\t ** HOME LOAN **\n\n\n\n\t\t\t\tWe charge a nominal rate of 12.18 percentage on home loans");
  			  printf("\n\n\n\n\t\t\t\tTo calculate your home loan intrest");
  			  printf("\n\n\n\n\t\t\t\tENTER LOAN VALUE                 :- ");
  			  scanf("%lf",&b);
  			  printf("\n\n\n\n\t\t\t\tYOUR INTREST IS CALCULATED TO BE :- rupees %lf",b*(12.18)/100);
  			  getch();
  			  break;
  		
  	case '2':printf("\n\n\n\t\t\t\t\t\t\t ** CAR LOAN **\n\n\n\n\t\t\t\tWe charge a nominal rate of 9.2 percentage on car loans");
  			  printf("\n\n\n\n\t\t\t\tTo calculate your car loan intrest");
  			  printf("\n\n\n\n\t\t\t\tENTER LOAN VALUE                 :- ");
  			  scanf("%lf",&b);
  			  printf("\n\n\n\n\t\t\t\tYOUR INTREST IS CALCULATED TO BE :- rupees %lf",b*(9.2)/100);
  			  getch();
  			  break;
  			  
  	case '3':printf("\n\n\n\t\t\t\t\t\t\t ** EDUCATIONAL LOAN **\n\n\n\n\t\t\t\tWe charge a nominal rate of 6.2 percentage on educational loans");
  			  printf("\n\n\n\n\t\t\t\tTo calculate your educational loan intrest");
  			  printf("\n\n\n\n\t\t\t\tENTER LOAN VALUE                 :- ");
  			  scanf("%lf",&b);
  			  printf("\n\n\n\n\t\t\t\tYOUR INTREST IS CALCULATED TO BE :- rupees %lf",b*(6.2)/100);
  			  getch();
  			  break;
  			  
  }

    system("cls");
    secondpage(person);
}

void loans(struct customers person)
{  //some information about the loans
	display();
    char a;
	 printf("\n\n\n\t\t\t\t\t\t*\tHELLO %s %s\t*",person.firstname,person.lastname);
     printf("\n\n\n\t\t\t\t*\tPRESS THE FOLLOWING NUMBERS TO PROCEED RESPECTIVELY\t*");
        printf("\n\n\n\t\t\t\t*\t\t1.car loan     \t\t\t\t*");
        printf("\n\n\n\t\t\t\t*\t\t2.education loan                   \t\t\t\t*");
        printf("\n\n\n\t\t\t\t*\t\t3.home loan                   \t\t\t\t*");
        a=getch();
        system("cls");
        display();
      switch(a)
      {
            case '1': printf("\n\n\n\n\t\t\t\t** CAR LOAN **\n\n\n\n\t\t");
			printf("For those individuals who prefer to travel more conservatively or to get to their destinations faster, a two-wheeler is as much a boon as it is to a car owner. With newer models coming out each year, the options available to the customer are both attractive as well as convenient.");

					printf("\nBank of Gandhinagar Two-Wheeler Loan make it possible to purchase a two-wheeler and pay back in easy monthly instalments, thereby reducing the burden of a one-time payment.");
								
								printf("\nAll resident Indians, salaried, professionals, self-employed, businessmen and farmers can apply for this loan.");
								
								printf("\nTerms & Conditions");
								
								printf("\nFinance for a minimum of Rs. 5000 and a maximum of Rs. 1 Lakh (or five times of the monthly income, whichever is less) can be availed of through the loan.");
								
								printf("\nEligibility Based on Bureau Score");
								
								printf("\nMargin of 10% on loan amount.");
								
								printf("\nThe loan amount can be repaid in maximum 60 months from the date of disbursement of loan.");
								
								printf("\nAs a security, the vehicle to be purchased out of the loan is to be hypothecated to the bank.");
								
								printf("\nFor loan exceeding Rs. 50000, a third party guarantee and / other securities like NSC, Share certificates, etc or a mortgage of property owned.");
								
								printf("\nThe vehicle will have to be insured with the bank's clause");
								  getch();
								   break;
		               
			   
			   case '2': printf("\n\n\n\n\t\t\t\t** EDUCATION LOAN **\n\n\n\n\t\t");
			    printf("The Prime Minister's New 15 Point Programme for the Welfare of Minorities was announced in June, 2006. It provides that the schemes for scholarships for meritorious students from minority communities will be formulated and implemented. The scheme of Interest Subsidy on educational loans for overseas studies will promote educational advancement of student from minority communities");
									
									printf("The objective of the scheme is to award interest subsidy to meritorious students belonging to economically weaker sections of notified minority communities so as to provide them better opportunities for higher education abroad and enhance their employability.");
																	
									printf("This is a Central Sector Scheme to provide interest subsidy to the student belonging to the communities declared as minority communities in terms of section 2 (c) of National Commission for Minorities Act, 1992, on the interest payable for the period of moratorium for the Education Loans under the Scheme of Interest subsidy on Educational Loans for Overseas Studies to pursue approved 	courses of studies abroad at Masters and Ph.D levels.");
									 getch();
									   break;
						   
						   
                 case '3':printf("\n\n\n\n\t\t\t\t** HOME LOAN **\n\n\n\n\t\t");
				  printf("WORLD BANK invites you to be a proud owner of your own home and offers easy Home Loan with a number of conveniences to suit your budget.");
									printf("\nHome Loan is available for:");
									
									printf("\nPurchase of new / old dwelling unit.");
									
									printf("\nConstruction of house.");
									
									printf("\nPurchase of plot of land for construction of a house.");
									
									printf("\nRepaying a loan already taken from other Housing Finance Company / Bank.");
									
									printf("\nRepayment period up to 30 years (floating rate option). ");
									
									printf("\nReimbursement of cost of plot of land (purchased within 24 months)");
									   getch();
									   break;
                    
               
               }
    system("cls");
    secondpage(person);
}



int main()
{ //for changing background and text colour
	system("color 81");
  firstpage();

    return 0;
}


