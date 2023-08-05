#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include <time.h>
#include <string.h>

int count;
int key;
char pass2[50];
char user2[50];
char user[500];
char username[500];
char password[50];
char pass[50];
char v[100];
char nick[100];
char musical[100];
char pet[100];
char maiden[200];
int ch;
int n;
int ch1;
int exit1;
int enc1,enc2,enc3,enc4,enc5,enc6,enc7,enc8,enc9,enc10,enc11;

char fn[30];char ln[30];char company[30];char email[50];char houseNo[5];char locality[30];
char pincode[10];char UID[20];char ProjDet[100];char CC[30];char budget[10];char profit[10];char date[15];

char fn1[30];char ln1[30];char contact[11];char BloodG[30];
char health[300];char occupation[100];

int main2();

int main2_0();

int view_encinfo();

int keylogger();

void SetColor(int ForgC);

int main_exit;

void fordelay(int j);

int captcha() ;

int display1();

void menu();

void close(void)
{
	SetColor(15);
    printf("\n\n\n\n \t\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 THANK YOU!!!!!!!\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
}

int Info_Official()
{
	system("cls");
	SetColor(15);
	printf("\nFirst Name:\n");
	scanf("%s",fn);
	SetColor(9);
	printf("\nLast name:\n");
	scanf("%s",ln);
	SetColor(15);
	printf("\nCompany Name :\n");
	scanf("%s",company);
	SetColor(9);
	printf("\nEmail-id:\n");
	scanf("%s", email);
	SetColor(15);
	printf("\nUID:\n");
	scanf("%s",UID);
	SetColor(9);
	printf("\nProject Details:\n");
	scanf("%s",ProjDet);
	SetColor(15);
	printf("\nClient Company:\n");
	scanf("%s",CC);
	SetColor(9);
	printf("\nBudget:\n");
	scanf("%s",budget);
	SetColor(15);
	printf("\nProfit\n");
	scanf("%s",profit);
	SetColor(9);
	printf("\nDue Date[dd:mm:yyyy]:\n");
	scanf("%s",date);
							
}
int main1()//encryting official info
{
system("cls");
SetColor(3);
printf("\n\n\t\t\t\t\t\t\t\t Your details are encrypted\n");
int i;
key=3;
for(i = 0; fn[i] != '\0'; ++i){
enc1= fn[i];
if(enc1 >= 'a' && enc1 <= 'z'){
enc1 = enc1 + key;
if(enc1 > 'z'){
enc1 = enc1 - 'z' + 'a' - 1;
}
fn[i] = enc1;
}
else if(enc1 >= 'A' && enc1 <= 'Z'){
enc1 = enc1 + key;
if(enc1 > 'Z'){
enc1 = enc1 - 'Z' + 'A' - 1;
}
fn[i] = enc1;
}
}
SetColor(3);
printf("\n\n\n\t\tFirst name:");
SetColor(15);
printf(" %s", fn);



for(i = 0; ln[i] != '\0'; ++i)
{
enc2= ln[i];
if(enc2 >= 'a' && enc2 <= 'z')
{
enc2 = enc2 + key;
if(enc2 > 'z')
{
enc2 = enc2 - 'z' + 'a' - 1;
}
ln[i] = enc2;
}
else if(enc2 >= 'A' && enc2 <= 'Z')
{
enc2 = enc2 + key;
if(enc2 > 'Z')
{
enc2 = enc2 - 'Z' + 'A' - 1;
}
ln[i] = enc2;
}
}
SetColor(3);
printf("\n\t\tLast name:");
SetColor(15);
printf(" %s", ln);



for(i = 0; company[i] != '\0'; ++i){
enc3= company[i];
if(enc3 >= 'a' && enc3 <= 'z'){
enc3 = enc3 + key;
if(enc3 > 'z'){
enc3 = enc3 - 'z' + 'a' - 1;
}
company[i] = enc3;
}
else if(enc3 >= 'A' && enc3 <= 'Z'){
enc3 = enc3 + key;
if(enc3 > 'Z'){
enc3 = enc3 - 'Z' + 'A' - 1;
}
company[i] = enc3;
}
}
SetColor(3);
printf("\n\t\tCompany name:");
SetColor(15);
printf(" %s", company);



for(i = 0; email[i] != '\0'; ++i){
enc4= email[i];
if(enc4 >= 'a' && enc4 <= 'z'){
enc4 = enc4 + key;
if(enc4 > 'z'){
enc4 = enc4 - 'z' + 'a' - 1;
}
email[i] = enc4;
}
else if(enc4>='0' && enc4<='9')
{
enc4=enc4+key;
if (enc4>'9')
{
enc4=enc4-'9'+'1'-1;
}
email[i]=enc4;
}
else if(enc4 >= 'A' && enc4 <= 'Z'){
enc4 = enc4 + key;
if(enc4 > 'Z'){
enc4 = enc4 - 'Z' + 'A' - 1;
}
email[i] = enc4;
}
}
SetColor(3);
printf("\n\t\tEmail:");
SetColor(15);
printf(" %s", email);




for(i = 0; UID[i] != '\0'; ++i)
{
enc5= UID[i];
if(enc5 >= 'a' && enc5 <= 'z')
{
enc5 = enc5 + key;
if(enc5 > 'z')
{
enc5 = enc5 - 'z' + 'a' - 1;
}
UID[i] = enc5;
}
else if(enc5>='0' && enc5<='9')
{
enc5=enc5+key;
if (enc5>'9')
{
enc5=enc5-'9'+'1'-1;
}
UID[i]=enc5;
}
else if(enc5 >= 'A' && enc5 <= 'Z')
{
enc5 = enc5 + key;
if(enc5 > 'Z')
{
enc5 = enc5 - 'Z' + 'A' - 1;
}
UID[i] = enc5;
}
}
SetColor(3);
printf("\n\t\tUID:");
SetColor(15);
printf(" %s", UID);



for(i = 0; ProjDet[i] != '\0'; ++i)
{
enc6= ProjDet[i];
if(enc6 >= 'a' && enc6 <= 'z')
{
enc6 = enc6 + key;
if(enc6 > 'z')
{
enc6 = enc6 - 'z' + 'a' - 1;
}
ProjDet[i] = enc6;
}
else if(enc6 >= 'A' && enc6 <= 'Z')
{
enc6 = enc6 + key;
if(enc6 > 'Z')
{
enc6 = enc6 - 'Z' + 'A' - 1;
}
ProjDet[i] = enc6;
}
}
SetColor(3);
printf("\n\t\tProject details:");
SetColor(15);
printf(" %s", ProjDet);


for(i = 0; CC[i] != '\0'; ++i)
{
enc7= CC[i];
if(enc7 >= 'a' && enc7 <= 'z')
{
enc7 = enc7 + key;
if(enc7 > 'z')
{
enc7 = enc7 - 'z' + 'a' - 1;
}
CC[i] = enc7;
}
else if(enc7 >= 'A' && enc7 <= 'Z')
{
enc7 = enc7 + key;
if(enc7 > 'Z')
{
enc7 = enc7 - 'Z' + 'A' - 1;
}
CC[i] = enc7;
}
}
SetColor(3);
printf("\n\t\tClient company:");
SetColor(15);
printf(" %s",CC);



for(i = 0; budget[i] != '\0'; ++i)
{
enc8= budget[i];
 if(enc8>='0' && enc8<='9')
{
enc8=enc8+key;
if (enc8>'9')
{
enc8=enc8-'9'+'1'-1;
}
budget[i]=enc8;
}
}
SetColor(3);
printf("\n\t\tBudget:");
SetColor(15);
printf(" %s", budget);


for(i = 0; profit[i] != '\0'; ++i)
{
enc9= profit[i];
 if(enc9>='0' && enc9<='9')
{
enc9=enc9+key;
if (enc9>'9')
{
enc9=enc9-'9'+'1'-1;
}
profit[i]=enc9;
}
}
SetColor(3);
printf("\n\t\tProfit:");
SetColor(15);
printf(" %s", profit);


for(i = 0; date[i] != '\0'; ++i)
{
enc10= date[i];
 if(enc10>='0' && enc10<='9')
{
enc10=enc10+key;
if (enc10>'9')
{
enc10=enc10-'9'+'1'-1;
}
date[i]=enc10;
}
}
SetColor(3);
printf("\n\t\tDue date:");
SetColor(15);
printf(" %s", date);

printf("\n\n\t\t Do you want to view your data after decryption?\n\n\t\tEnter\n\t\t1:To view\n\t\t0:To exit\n");
int ans;
printf("\n\t\tEnter your choice:");
scanf("%d",&ans);
switch(ans)
{
	case 1:{ main2();break;}
	case 2:{close();break;}
	default:printf("\n\t\tInvalid choice");
}
}
int Info_Personal()
{	
	system("cls");
	SetColor(13);
	printf("\nFirst Name:\n");
	scanf("%s",fn1);
	SetColor(9);
	printf("\nLast name:\n");
	scanf("%s",ln1);
	SetColor(1);
	printf("\nContact Number:\n");
	scanf("%s",contact);
	SetColor(2);
	printf("\nHouse number:\n");
	scanf("%s",houseNo);
	SetColor(14);
	printf("\nLocality:\n");
	scanf("%s",locality);
	SetColor(12);
	printf("\nPincode:\n");
	scanf("%s",pincode);
	SetColor(4);
	printf("\nBlood Group:\n");
	scanf("%s",BloodG);
	SetColor(13);
	printf("\nHealth Issues:\n");
	scanf("%s",health);
	SetColor(9);
	printf("\nOccupation:\n");
	scanf("%s",occupation);
}
int main1_0()//encrypting personal info
{
system("cls");
SetColor(3);
printf("\n\n\t\t\t\t\t\t\t\t Your details are encrypted\n");
int i;
key=3;
for(i = 0; fn1[i] != '\0'; ++i){
enc1= fn1[i];
if(enc1 >= 'a' && enc1 <= 'z'){
enc1 = enc1 + key;
if(enc1 > 'z'){
enc1 = enc1 - 'z' + 'a' - 1;
}
fn1[i] = enc1;
}
else if(enc1 >= 'A' && enc1 <= 'Z'){
enc1 = enc1 + key;
if(enc1 > 'Z'){
enc1 = enc1 - 'Z' + 'A' - 1;
}
fn1[i] = enc1;
}
}
SetColor(3);
printf("\n\n\n\t\tFirst name:");
SetColor(15);
printf(" %s", fn1);



for(i = 0; ln1[i] != '\0'; ++i)
{
enc2= ln1[i];
if(enc2 >= 'a' && enc2 <= 'z')
{
enc2 = enc2 + key;
if(enc2 > 'z')
{
enc2 = enc2 - 'z' + 'a' - 1;
}
ln1[i] = enc2;
}
else if(enc2 >= 'A' && enc2 <= 'Z')
{
enc2 = enc2 + key;
if(enc2 > 'Z')
{
enc2 = enc2 - 'Z' + 'A' - 1;
}
ln1[i] = enc2;
}
}
SetColor(3);
printf("\n\t\tLast name:");
SetColor(15);
printf(" %s", ln1);



for(i = 0; contact[i] != '\0'; ++i)
{
enc3= contact[i];
if(enc3>='0' && enc3<='9')
{
enc3=enc3+key;
if (enc3>'9')
{
enc3=enc3-'9'+'1'-1;
}
contact[i]=enc3;
}
}
SetColor(3);
printf("\n\t\tContact:");
SetColor(15);
printf(" %s",contact);



for(i = 0; houseNo[i] != '\0'; ++i)
{
enc4= houseNo[i];
if(enc4 >= 'a' && enc4 <= 'z'){
enc4 = enc4 + key;
if(enc4 > 'z')
{
enc4 = enc4 - 'z' + 'a' - 1;
}
houseNo[i] = enc4;
}
else if(enc4>='0' && enc4<='9')
{
enc4=enc4+key;
if (enc4>'9')
{
enc4=enc4-'9'+'1'-1;
}
houseNo[i]=enc4;
}
else if(enc4 >= 'A' && enc4 <= 'Z'){
enc4 = enc4 + key;
if(enc4 > 'Z'){
enc4 = enc4 - 'Z' + 'A' - 1;
}
houseNo[i] = enc4;
}
}
SetColor(3);
printf("\n\t\tHouse Number:");
SetColor(15);
printf(" %s", houseNo);




for(i = 0; locality[i] != '\0'; ++i)
{
enc5= locality[i];
if(enc5 >= 'a' && enc5 <= 'z')
{
enc5 = enc5 + key;
if(enc5 > 'z')
{
enc5 = enc5 - 'z' + 'a' - 1;
}
locality[i] = enc5;
}
else if(enc5>='0' && enc5<='9')
{
enc5=enc5+key;
if (enc5>'9')
{
enc5=enc5-'9'+'1'-1;
}
locality[i]=enc5;
}
else if(enc5 >= 'A' && enc5 <= 'Z')
{
enc5 = enc5 + key;
if(enc5 > 'Z')
{
enc5 = enc5 - 'Z' + 'A' - 1;
}
locality[i] = enc5;
}
}
SetColor(3);
printf("\n\t\tLocality:");
SetColor(15);
printf(" %s",locality);



for(i = 0;pincode[i] != '\0'; ++i)
{
enc6= pincode[i];
if(enc6>='0' && enc6<='9')
{
enc6=enc6+key;
if (enc6>'9')
{
enc6=enc6-'9'+'1'-1;
}
pincode[i]=enc6;
}
}
SetColor(3);
printf("\n\t\tPincode:");
SetColor(15);
printf(" %s", pincode);


for(i = 0; BloodG[i] != '\0'; ++i)
{
enc7= BloodG[i];
if(enc7 >= 'a' && enc7 <= 'z')
{
enc7 = enc7 + key;
if(enc7 > 'z')
{
enc7 = enc7 - 'z' + 'a' - 1;
}
BloodG[i] = enc7;
}
else if(enc7 >= 'A' && enc7 <= 'Z')
{
enc7 = enc7 + key;
if(enc7 > 'Z')
{
enc7 = enc7 - 'Z' + 'A' - 1;
}
BloodG[i] = enc7;
}
}
SetColor(3);
printf("\n\t\tBlood Group:");
SetColor(15);
printf(" %s",BloodG);



for(i = 0; health[i] != '\0'; ++i)
{
enc8= health[i];
if(enc8 >= 'a' && enc8 <= 'z')
{
enc8 = enc8 + key;
if(enc8 > 'z')
{
enc8 = enc8 - 'z' + 'a' - 1;
}
health[i] = enc8;
}
else if(enc8 >= 'A' && enc8 <= 'Z')
{
enc8 = enc8 + key;
if(enc8 > 'z')
{
enc8 = enc8 - 'z' + 'a' - 1;
}
health[i] = enc8;
}
}
SetColor(3);
printf("\n\t\tHealth:");
SetColor(15);
printf(" %s", health);


for(i = 0; occupation[i] != '\0'; ++i)
{
enc9= occupation[i];
if(enc9 >= 'a' && enc9 <= 'z')
{
enc9 = enc9 + key;
if(enc9 > 'z')
{
enc9 = enc9 - 'z' + 'a' - 1;
}
occupation[i] = enc9;
}
else if(enc9 >= 'A' && enc9 <= 'Z')
{
enc9 = enc9 + key;
if(enc9 > 'z')
{
enc9 = enc9 - 'z' + 'a' - 1;
}
occupation[i] = enc9;
}
}
SetColor(3);
printf("\n\t\tOccupation:");
SetColor(15);
printf(" %s", occupation);


printf("\n\n\t\tDo you want to view your data after decryption?\n\n\t\tEnter\n\t\t1:To view\n\t\t0:To exit\n");
int ans;
printf("\n\t\tEnter your choice:");
scanf("%d",&ans);
switch(ans)
{
	case 1:{ main2_0();break;}
	case 2:{close();break;}
	default:printf("\n\t\tInvalid choice");
}
}
int Choice()
{
	
	system("cls");
	SetColor(15);
	printf("\n\t\tWould you like to store personal or official information. Kindly choose the respective choices:\n");
	printf("\n\t\t1.Personal\n");
	printf("\n\t\t2.Official\n");
	scanf("%d",&n);
	switch(n)
	{
		case 1:
		{
			
			Info_Personal();
			break;
		}
		
		case 2:
		{
			
			Info_Official();
			break;
		}
		default: 
		{
			printf("Wrong choice");
			Choice();
			break;
		}
	}
}

int check()//checks if password meets all requirements
{
	SetColor(15);
	printf("\n\t\tEnter a password that satisfies the following criteria\n\n\t\t1. password should contain atleast one capital letter\n\t\t2. should have one digit from(o-9)\n\t\t3. atleast one special charecter($,*,#,&,@,!,^,_,%)\n\t\t4. length should be atleast 8 characters\n\n\t\t");
    scanf("%s",&pass);
    int len,i,flag1=0,flag2=0,flag3=0,flag4=0;
    len=strlen(pass);
    if(len<9)
    flag1=1;
    else
    {
        for(i=0;i<len;i++)
        if((pass[i]>=48&&pass[i]<=58))
        {
            flag2=0;

            break;
        }
        else
        flag2=1;

        for(i=0;i<len;i++)
        if((pass[i]>=65&&pass[i]<=90))
        {
            flag3=0;

            break;
        }
        else
        flag3=1;

        for(i=0;i<len;i++)
        if(pass[i]=='#'||pass[i]=='$'||pass[i]=='*'||pass[i]=='&' || pass[i]=='@'||pass[i]=='_' || pass[i]=='!' || pass[i] == '%' || pass[i] == '^')
        {
            flag4=0;

            break;
        }
        else
        flag4=1;


    }
    if(flag1==1||flag2==1||flag3==1||flag4==1)
	{
		SetColor(4);
		printf("\n\t\tInvalid Password\n");
		printf("\n\n\t\tEnter 1 to try again:");
		scanf("%d",&exit1);
		system("cls");
		if (exit1==1)
		{
			check(pass);
		}
	}
    else
	{
	SetColor(4);
    printf("\n\t\tYour password is saved!\n");
	}


    return 0;
}
 
  
int first_time_login()
{
	system("cls");
	SetColor(15);
	printf("\n\n\t\tEnter the username:");
	scanf("%s",&user);
	check(pass);
	return 0;
}

int display1()
{
	SetColor(15);
	printf("\n\t\tUsername given: %s", user);
	printf("\n\t\tPassword given: %s\n\n",pass);
}

int security_qs()
{
	SetColor(4);
	printf("\n\t\tSecurity Question \n\t\tPick any one \n\n");
	SetColor(15);
	printf("\t\t1. Your favourite type of vacation (location) \n\t\t2. Your Childhood nickname \n\t\t3. Your favourite musical instrument  \n\t\t4. Name of your first pet \n\t\t5. Your mothers maiden name\n\n\t\tEnter your choice: ");
	
	scanf("%d",&ch);
	SetColor(4);
	switch(ch)
	{
		case 1:
		{
			
			printf("\n\t\tEnter Your favourite type of vacation (location):");
			
			//getchar();
			scanf("%s",&v);
			//printf(v);
			Choice();
			break;
			
		}
		case 2:
		{
			
			printf("\n\t\tEnter Your Childhood nickname:");
			scanf("%s",&nick);
			Choice();
			break;
		}
		case 3:
		{
			
			printf("\n\t\tEnter Your favourite musical instrument:");
			scanf("%s",&musical);
			Choice();
			break;
		}
		case 4:
		{
			
			printf("\n\t\tEnter Name of your first pet:");
			scanf("%s",&pet);
			Choice();
			break;
		}
		case 5:
		{
			
			printf("\n\t\tEnter Your mothers maiden name:");
			scanf("%s",maiden);
			Choice();
			break;
		}
		default : 
		{
			printf("\n\t\tInvalid choice");
			fordelay(1000000000);
			system("cls");
			security_qs();
			break;
		}
				
	}

}
char v1[100],nick1[100],musical1[100],pet1[100],maiden1[100];
int recheck_sec_qs()
{
	SetColor(4);
	printf("\n\n\n\t\tSecurity Question \n\t\tPick your question  \n\n");
	SetColor(15);
	printf("\t\t1. Your favourite type of vacation (location) \n\t\t2. Your Childhood nickname \n\t\t3. Your favourite musical instrument  \n\t\t4. Name of your first pet \n\t\t5. Your mothers maiden name\n\n\t\tEnter your choice: ");
	
	scanf("%d",&ch1);
	SetColor(4);
	if(ch == ch1)
	{
		printf("\n\t\tEnter your answer:");
		switch(ch1)
		{
			case 1:
			{
				scanf("%s",v1);
				if (strcmp(v1,v)==0)
				{
					SetColor(15);
					printf("\n\t\tSecurity questuion was verified successfully\n"); 
					break;
				}
				else
				{
					SetColor(15);
					printf("\t\tWrong Answer Entered\n");
					fordelay(1000000000);
					system("CLS");
					recheck_sec_qs();
					break;
				}
			}
			case 2:
			{
				scanf("%s",nick1);
				if (strcmp(nick1,nick)==0)
				{
					SetColor(15);
					printf("\n\t\tSecurity questuion was verified successfully\n");
					break;
				}
				else
				{
					SetColor(15);
					printf("\t\tWrong Answer Entered\n");
					fordelay(1000000000);
					system("CLS");
					recheck_sec_qs();
					break;
				}
			}
			case 3:
			{
				scanf("%s",musical1);
				if (strcmp(musical1,musical)==0)
				{
					SetColor(15);
					printf("\n\t\tSecurity questuion was verified successfully\n");
					break;
				}
				else
				{
					SetColor(15);
					printf("\t\tWrong Answer Entered\n");
					fordelay(1000000000);
					system("CLS");
					recheck_sec_qs();
					break;
				}
			}
			case 4:
			{
				scanf("%s",pet1);
				if (strcmp(pet1,pet)==0)
				{
					SetColor(15);
					printf("\n\t\tSecurity questuion was verified successfully\n");
					break;
				}
				else
				{
					SetColor(15);
					printf("\t\tWrong Answer Entered\n");
					fordelay(1000000000);
					system("CLS");
					recheck_sec_qs();
					break;
				}
			}
			case 5:
			{
				SetColor(15);
				scanf("%s",maiden1);
				if (strcmp(maiden1,maiden)==0)
				{
					SetColor(15);
					printf("\n\t\tSecurity questuion was verified successfully\n");
					break;
				}
				else
				{
					
					printf("\t\tWrong Answer Entered\n");
					fordelay(1000000000);
					system("CLS");
					recheck_sec_qs();
					break;
				}
			}
		}					
	
	}
	else
	{
		printf("\n\t\tWrong Answer Entered\n");
		printf("\t\tTry again\n");
		fordelay(1000000000);
		system("CLS");
		recheck_sec_qs();
		//break;
	}
}
int new_profile()//creating a new profile
{
	int x,y,z;
	y=first_time_login();
	z=display1();
	fordelay(1000000000);
	fordelay(100000);
	x=security_qs();
	SetColor(15);
	printf("\n\n\n\t\tEnter 1 to go to the main menu and 0 to exit:");
	scanf("%d",&main_exit);
	if (main_exit==1)
			menu();
    else if(main_exit==0)
            close();
}

int l_check()//checking login credentials
{
	SetColor(1);
	int i;
	char username[500];
	printf("\n\n\t\tEnter the username:");
	scanf("%s",username);
	char password[50];
	printf("\n\n\t\tEnter the Password:");
	scanf("%s",password);
	SetColor(15);
	if (strcmp(user,username)==0&&strcmp(pass,password)==0)
        {
			
			printf("\n\nPassword Match!!!\nLOADING");
			for(i=0;i<=6;i++)
			{
				fordelay(100000000);
				printf(".");
			}
			keylogger();
			recheck_sec_qs();
			SetColor(15);
			printf("\n\nLOADING CAPTCHA");
			fordelay(1000000000);
			for(i=0;i<=8;i++)
			{
				fordelay(100000000);
				printf(".");
			}
			system("CLS");
			captcha();
			for(i=0;i<=6;i++)
			{
				fordelay(10000000);
			}
            //system("cls");
            //menu();
        }
	 else
        {   SetColor(15);
			strcpy(user2,username);
			strcpy(pass2,password);
			count++;
			printf("\n\n\nInvalid Credentials!!\a\a\a");
            printf("\n\nEnter 1 to try again and 0 to exit:");
            scanf("%d",&main_exit);
            if (main_exit==1)
                    {

                        system("cls");
                        menu();
                    }

            else if (main_exit==0)
                    {
                    system("cls");
                    close();
					}
         

        }
	
}
char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789";


int intN(int n) 
{
	return rand() % n; //mod basically gives postive integer values which is exactly what is required in captcha
}


char *randomString(int len) 
{
  char *rstr = malloc((len + 1) * sizeof(char));
  int i;
  for (i = 0; i < len; i++) {
    rstr[i] = alphabet[intN(strlen(alphabet))];
  }
  rstr[len] = '\0';
  return rstr;
}

int captcha() //function that produces random characters using random function
{
  srand(time(NULL));
  SetColor(1);
  printf("\t\n\nEnter the below captcha:\n\n");
  SetColor(15);
  char *p;
  p = randomString(10);
  printf("%s\n", p);
  char string1[100] ;
  printf("\n");
  scanf("%s",string1);
  SetColor(1);
  if (strcmp(string1, p) == 0)
  {
      printf("\n\nCaptcha Verification Successful!\n");
	  SetColor(15);
	  view_encinfo();
  }
  else
  {
      printf("\n\nCaptcha Verification unsuccessful\n" );
	  printf("\nTry again\n" );
	  fordelay(1000000000);
	  system("cls");
	  captcha();
  }
  SetColor(15);
  return 0;

}


int main2()//decrypting official information
{
system("cls");
SetColor(3);
printf("\n\n\t\t\t\t\t\t\t\t Data after decryption\n");
int i;
key=3;
for(i = 0; fn[i] != '\0'; ++i){
enc1= fn[i];
if(enc1 >= 'a' && enc1 <= 'z'){
enc1 = enc1 - key;
if(enc1 < 'a'){
enc1 = enc1 + 'z' - 'a' + 1;
}
fn[i] = enc1;
}
else if(enc1 >= 'A' && enc1 <= 'Z'){
enc1 = enc1 - key;
if(enc1 <'A'){
enc1 = enc1 + 'Z' - 'A' + 1;
}
fn[i] = enc1;
}
}
SetColor(3);
printf("\n\n\n\t\tFirst name:");
SetColor(15);
printf(" %s", fn);



for(i = 0; ln[i] != '\0'; ++i)
{
enc2= ln[i];
if(enc2 >= 'a' && enc2 <= 'z')
{
enc2 = enc2 - key;
if(enc2 < 'a')
{
enc2 = enc2 + 'z' - 'a' + 1;
}
ln[i] = enc2;
}
else if(enc2 >= 'A' && enc2 <= 'Z')
{
enc2 = enc2 - key;
if(enc2 < 'A')
{
enc2 = enc2 + 'Z' - 'A' + 1;
}
ln[i] = enc2;
}
}
SetColor(3);
printf("\n\t\tLast name:");
SetColor(15);
printf(" %s", ln);



for(i = 0; company[i] != '\0'; ++i){
enc3= company[i];
if(enc3 >= 'a' && enc3 <= 'z'){
enc3 = enc3 - key;
if(enc3 < 'a'){
enc3 = enc3 + 'z' - 'a' + 1;
}
company[i] = enc3;
}
else if(enc3 >= 'A' && enc3 <= 'Z'){
enc3 = enc3 - key;
if(enc3 < 'A'){
enc3 = enc3 + 'Z' - 'A' + 1;
}
company[i] = enc3;
}
}
SetColor(3);
printf("\n\t\tCompany name:");
SetColor(15);
printf(" %s", company);



for(i = 0; email[i] != '\0'; ++i)
{
enc4 = email[i];
if(enc4 >= 'a' && enc4 <= 'z'){
enc4 = enc4 - key;
if(enc4 < 'a'){
enc4 = enc4 + 'z' - 'a' + 1;
}
email[i] = enc4;
}
else if(enc4 >= 'A' && enc4 <= 'Z'){
enc4 = enc4 - key;
if(enc4 < 'A'){
enc4 = enc4 + 'Z' - 'A' + 1;
}
email[i] = enc4;
}

else if(enc4>='0' && enc4<='9')
{
enc4=enc4 - key;
if (enc4<'0')
{
enc4=enc4 +'9'-'0'+1;
}
email[i]=enc4;
}
}

SetColor(3);
printf("\n\t\tEmail:");
SetColor(15);
printf(" %s", email);




for(i = 0; UID[i] != '\0'; ++i)
{
enc5= UID[i];
if(enc5 >= 'a' && enc5 <= 'z')
{
enc5 = enc5 - key;
if(enc5 < 'a')
{
enc5 = enc5 + 'z' - 'a' + 1;
}
UID[i] = enc5;
}
else if(enc5>='0' && enc5<='9')
{
enc5=enc5-key;
if (enc5<'0')
{
enc5=enc5 + '9'-'0' + 1;
}
UID[i]=enc5;
}
else if(enc5 >= 'A' && enc5 <= 'Z')
{
enc5 = enc5 - key;
if(enc5 < 'A')
{
enc5 = enc5 + 'Z' - 'A' + 1;
}
UID[i] = enc5;
}
}
SetColor(3);
printf("\n\t\tUID:");
SetColor(15);
printf(" %s", UID);



for(i = 0; ProjDet[i] != '\0'; ++i)
{
enc6= ProjDet[i];
if(enc6 >= 'a' && enc6 <= 'z')
{
enc6 = enc6 - key;
if(enc6 < 'a')
{
enc6 = enc6 + 'z' - 'a' + 1;
}
ProjDet[i] = enc6;
}
else if(enc6 >= 'A' && enc6 <= 'Z')
{
enc6 = enc6 - key;
if(enc6 < 'A')
{
enc6 = enc6 + 'Z' - 'A' + 1;
}
ProjDet[i] = enc6;
}
}
SetColor(3);
printf("\n\t\tProject details:");
SetColor(15);
printf(" %s", ProjDet);


for(i = 0; CC[i] != '\0'; ++i)
{
enc7= CC[i];
if(enc7 >= 'a' && enc7 <= 'z')
{
enc7 = enc7 - key;
if(enc7 < 'a')
{
enc7 = enc7 + 'z' - 'a' + 1;
}
CC[i] = enc7;
}
else if(enc7 >= 'A' && enc7 <= 'Z')
{
enc7 = enc7 - key;
if(enc7 < 'A')
{
enc7 = enc7 + 'Z' - 'A' + 1;
}
CC[i] = enc7;
}
}
SetColor(3);
printf("\n\t\tClient company:");
SetColor(15);
printf(" %s",CC);



for(i = 0; budget[i] != '\0'; ++i)
{
enc8= budget[i];
 if(enc8>='0' && enc8<='9')
{
enc8=enc8-key;
if (enc8<'0')
{
enc8=enc8+'9'-'0'+1;
}
budget[i]=enc8;
}
}
SetColor(3);
printf("\n\t\tBudget:");
SetColor(15);
printf(" %s", budget);


for(i = 0; profit[i] != '\0'; ++i)
{
enc9= profit[i];
 if(enc9>='0' && enc9<='9')
{
enc9=enc9-key;
if (enc9<'0')
{
enc9=enc9+'9'-'0'+1;
}
profit[i]=enc9;
}
}
SetColor(3);
printf("\n\t\tProfit:");
SetColor(15);
printf(" %s", profit);


for(i = 0; date[i] != '\0'; ++i)
{
enc10= date[i];
if(enc10>='0' && enc10<='9')
{
enc10=enc10-key;
if (enc10<'0')
{
enc10=enc10+'9'-'1'+1;
}
date[i]=enc10;
}
}
SetColor(3);
printf("\n\t\tDue date:");
SetColor(15);
printf(" %s", date);
}



int main2_0()//decrypting personal info
{
system("cls");
SetColor(5);
printf("\n\n\t\t\t\t\t\t\t\t Data after decryption\n");
int i;
key=3;
for(i = 0; fn1[i] != '\0'; ++i){
enc1= fn1[i];
if(enc1 >= 'a' && enc1 <= 'z'){
enc1 = enc1 - key;
if(enc1 < 'a'){
enc1 = enc1 + 'z' - 'a' + 1;
}
fn1[i] = enc1;
}
else if(enc1 >= 'A' && enc1 <= 'Z'){
enc1 = enc1 - key;
if(enc1 <'A'){
enc1 = enc1 + 'Z' - 'A' + 1;
}
fn1[i] = enc1;
}
}
SetColor(5);
printf("\n\n\n\t\tFirst name:");
SetColor(15);
printf(" %s", fn1);



for(i = 0; ln1[i] != '\0'; ++i)
{
enc2= ln1[i];
if(enc2 >= 'a' && enc2 <= 'z')
{
enc2 = enc2 - key;
if(enc2 < 'a')
{
enc2 = enc2 + 'z' - 'a' + 1;
}
ln1[i] = enc2;
}
else if(enc2 >= 'A' && enc2 <= 'Z')
{
enc2 = enc2 - key;
if(enc2 < 'A')
{
enc2 = enc2 + 'Z' - 'A' + 1;
}
ln1[i] = enc2;
}
}
SetColor(5);
printf("\n\t\tLast name:");
SetColor(15);
printf(" %s", ln1);



for(i = 0; contact[i] != '\0'; ++i){
enc3= contact[i];
if(enc3>='0' && enc3<='9')
{
enc3=enc3 - key;
if (enc3<'0')
{
enc3=enc3 +'9'-'0'+1;
contact[i]=enc3;
}
}
}
SetColor(5);
printf("\n\t\tContact number:");
SetColor(15);
printf(" %s", contact);



for(i = 0; houseNo[i] != '\0'; ++i)
{
enc4 = houseNo[i];
if(enc4 >= 'a' && enc4 <= 'z'){
enc4 = enc4 - key;
if(enc4 < 'a'){
enc4 = enc4 + 'z' - 'a' + 1;
}
houseNo[i] = enc4;
}
else if(enc4 >= 'A' && enc4 <= 'Z'){
enc4 = enc4 - key;
if(enc4 < 'A'){
enc4 = enc4 + 'Z' - 'A' + 1;
}
houseNo[i] = enc4;
}

else if(enc4>='0' && enc4<='9')
{
enc4=enc4 - key;
if (enc4<'0')
{
enc4=enc4 +'9'-'0'+1;
}
houseNo[i]=enc4;
}
}

SetColor(5);
printf("\n\t\tHouse Number:");
SetColor(15);
printf(" %s", houseNo);




for(i = 0; locality[i] != '\0'; ++i)
{
enc5= locality[i];
if(enc5 >= 'a' && enc5 <= 'z')
{
enc5 = enc5 - key;
if(enc5 < 'a')
{
enc5 = enc5 + 'z' - 'a' + 1;
}
locality[i] = enc5;
}
else if(enc5>='0' && enc5<='9')
{
enc5=enc5-key;
if (enc5<'0')
{
enc5=enc5 + '9'-'0' + 1;
}
locality[i]=enc5;
}
else if(enc5 >= 'A' && enc5 <= 'Z')
{
enc5 = enc5 - key;
if(enc5 < 'A')
{
enc5 = enc5 + 'Z' - 'A' + 1;
}
locality[i] = enc5;
}
}
SetColor(5);
printf("\n\t\tlocality:");
SetColor(15);
printf(" %s", locality);



for(i = 0; pincode[i] != '\0'; ++i)
{
enc6= pincode[i];
 if(enc6>='0' && enc6<='9')
{
enc6=enc6-key;
if (enc6<'0')
{
enc6=enc6+'9'-'0'+1;
}
pincode[i]=enc6;
}
}
SetColor(5);
printf("\n\t\tPincode:");
SetColor(15);
printf(" %s", pincode);


for(i = 0; BloodG[i] != '\0'; ++i)
{
enc7= BloodG[i];
if(enc7 >= 'a' && enc7 <= 'z')
{
enc7 = enc7 - key;
if(enc7 < 'a')
{
enc7 = enc7 + 'z' - 'a' + 1;
}
BloodG[i] = enc7;
}
else if(enc7 >= 'A' && enc7 <= 'Z')
{
enc7 = enc7 - key;
if(enc7 < 'A')
{
enc7 = enc7 + 'Z' - 'A' + 1;
}
BloodG[i] = enc7;
}
}
SetColor(5);
printf("\n\t\tBlood Group:");
SetColor(15);
printf(" %s",BloodG);



for(i = 0; health[i] != '\0'; ++i)
{
enc8= health[i];
if(enc8 >= 'a' && enc8 <= 'z')
{
enc8 = enc8 - key;
if(enc8 < 'a')
{
enc8 = enc8 + 'z' - 'a' + 1;
}
health[i] = enc8;
}
else if(enc8 >= 'A' && enc8 <= 'Z')
{
enc8 = enc8 - key;
if(enc8 < 'A')
{
enc8 = enc8 + 'Z' - 'A' + 1;
}
health[i] = enc8;
}
}
SetColor(5);
printf("\n\t\tHealth Issues:");
SetColor(15);
printf(" %s", health);


for(i = 0; occupation[i] != '\0'; ++i)
{
enc9= occupation[i];
if(enc9 >= 'a' && enc9 <= 'z')
{
enc9 = enc9 - key;
if(enc9 < 'a')
{
enc9 = enc9 + 'z' - 'a' + 1;
}
occupation[i] = enc9;
}
else if(enc9 >= 'A' && enc9 <= 'Z')
{
enc9 = enc9 - key;
if(enc9 < 'A')
{
enc9 = enc9 + 'Z' - 'A' + 1;
}
occupation[i] = enc9;
}
}
SetColor(5);
printf("\n\t\tOccupation:");
SetColor(15);
printf(" %s", occupation);
}


int view_encinfo()//function to view the encrypted info
{
	if (n==1)
	{
		main1_0();
	}
	else 
	{
		main1();
	}
	return 0;
}

int keylogger()//functions that stores the password if wrong password
{
	if (count==0)
	printf("");
	else 
	{
	system("cls");
	SetColor(4);
	printf("\n\t\tWARNING!\n");
	SetColor(15);
	printf("\n\n\t\tUnauthorised Login Attempt detected!\a\a\a");
	printf("\n\t\tGiven creditianls were: \n\t\tUsername:%s\n\t\tPassword:%s",user2,pass2); 
	}
}
	

int log_in()
{
	system("cls");
	l_check();
	
}


void menu(void)//opening window with options for use to choose for the user to work accordingly
{   int choice;
    system("cls");
    //system("color 8");
	SetColor(4);
	printf("\n\n\n\t\t\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 DATA ENCIPHER \xB2\xB2\xB2\xB2\xB2\xB2\xB2");
	SetColor(15);
	printf("\n\n\n\t\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 WELCOME TO THE MAIN MENU \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\t\t\t\t\n\n\n\n");
	SetColor(4);
	printf("\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
	SetColor(15);

    printf("\n\n\t\t1.Create a new profile\n\t\t2.Log in to an existing profile \n\t\t3.Exit\n");
	SetColor(4);
	printf("\n\t\tEnter your choice:");
    scanf("%d",&choice);
	switch(choice)
    {
        case 1:new_profile();
        break;
        case 2:log_in();
        break;
        case 3:close();
        break;
		default:
		{
			SetColor(15);
			printf("\n\nInvalid choice");
			printf("\nTry again");
			fordelay(1000000000);
			system("cls");
			menu();
			break;
		}
		

    }				
		
}

void SetColor(int ForgC)//function that sets the text color
{
     WORD wColor;//A word is a pointer pointing to the stdlib that specifies the amount of data that a machine can process at one time
     //This handle is needed to get the current background attribute
     HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
	 //Retrieves a handle to the specified standard device (standard input, standard output, or standard error).
     CONSOLE_SCREEN_BUFFER_INFO csbi;
	 //Contains information about a console screen buffer -> calling the struct which is already predefined in stdlib.h
     //csbi is used for wAttributes word

     if(GetConsoleScreenBufferInfo(hStdOut, &csbi))////A pointer to a CONSOLE_SCREEN_BUFFER_INFO structure that receives the console screen buffer information.
	 {
          //To mask out all but the background attribute, and to add the color
          wColor = (csbi.wAttributes & 0xF0) + (ForgC & 0x0F);//It's used in order to distinguish between bases of hexadecimal values for distinguishing between the range of colours
          SetConsoleTextAttribute(hStdOut, wColor);
		  //Sets the attributes of characters written to the console screen buffer by the WriteFile or WriteConsole function,
		  //or echoed by the ReadFile or ReadConsole function. This function affects text written after the function call
      }
	  
}

void fordelay(int j)//a function that is used to delay the program 
{   int i,k;
    for(i=0;i<j;i++)
         k=i;
}


void main()
{
	menu();
}