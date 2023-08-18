#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{  
     char password[50];
     char name[20];
     printf("\n!!!---Enter user name and password---!!!");
     printf("\nEnter your username:");
     gets(name);
     int p=0;
     puts("Enter Password:");
     do{
     	password[p]=getch();
     	if(password[p]!='\r')
     	printf("*");
     	p++;
	 }while(password[p-1]!='\r');
	 password[p-1]='\0';
if(strcmp(name,"sarthak")==0)
{
    if(strcmp(password,"1234")==0)
    {
	
system("cls");
printf("\t $$ You sucessfully loged in in the game $$");
	int a,b,d,i;
	char z,c;
	printf("\nWelcome to the game\n");
	printf("Try your luck\n");
	printf("Press any key to enter in game...\n");
//	scanf("%c",&z);
getch();
	
START:
system("cls");	
//	printf("\n!!--OPPS, You loose the game--!!\n");
	printf("\n \nEnter the difficulty level\n");
			printf("Enter 1 for easy\n");
			printf("Enter 2 for moderate\n");
			printf("Enter 3 for hard\n");
			printf("Enter 0 to exit");
			scanf("%d",&a);
			printf("%d",a);
	//easy level		
			if(a==1)
			{printf("\n You selected easy level");
				printf("\nYou have 10 chances to find secrete number the number between 1 to 100");
				srand(time(0));
				int sn=1+(rand()%100);
				d=10;
		
				
				for(i=1;i<=10;i++)
				{ printf("\n");
				printf("\nEnter your Number");
				scanf("%d",&b);
					if(b==sn)
					{
						printf("\n\t\t!!-- BOOYAH you won the game --!!");
							printf("\n !!--PRESS ANY KEY TO CONTINUE--!!");
					//	scanf("%c",&c);
	getch();
					 goto START;
					}
					else if(b<sn)
					{
				
					printf("\n Secret number is greater then %d",b);
					d-=1;
					printf("\n %d chances are left",d);
					}
					else if(b>sn)
					{
						printf("\n Secret number is smaller then %d",b);
						d-=1;
					printf("\n %d chances are left",d);
					}
					
				
				}
					printf("\n\t!!--OPPS, You loose the game--!!");
					printf("\n Secret Number is %d\n",sn);
						printf("\n !!--PRESS ANY KEY TO CONTINUE--!!");
						//scanf("%c",&c);
						getch();
                    goto START;
			}
			
			//medium level
			else if(a==2)
			{printf("\n You selected medium level");
				printf(" \nyou have 7 chances to find the secret number between 1 to 100");
				srand(time(0));
				int sn=1+(rand()%100);
			 d=7;
		
				
				for(i=1;i<=7;i++)
				{ printf("\n");
				printf("\nEnter your Number");
				scanf("%d",&b);
					if(b==sn)
					{
						printf("\n \t\tBOOYAH you won the game !!");
							printf("\n !!--PRESS ANY KEY TO CONTINUE--!!");
					//	scanf("%c",&c);
					getch();
					 goto START;
					}
					else if(b<sn)
					{
				
					printf("\n Secret number is greater then %d",b);
					d-=1;
					printf("\n %d chances are left",d);
					}
					else if(b>sn)
					{
						printf("\n Secret number is smaller then %d",b);
						d-=1;
					printf("\n %d chances are left",d);
					}
					
				
				}
					printf("\n\t!!--OPPS, You loose the game--!!");
					printf("\n Secret Number is %d\n",sn);
						printf("\n !!--PRESS ANY KEY TO CONTINUE--!!");
					//	scanf("%c",&c);
					getch();
                    goto START;
			}
			
			//hard level
			else if(a==3)
			{
			printf("\n You selected hard level");
				printf(" \nyou have 5 chances to find the secret number betwwen 1 to 100");
				srand(time(0));
				int sn=1+(rand()%100);
			
				d=5;
				for(i=1;i<=5;i++)
				{ printf("\n");
				printf("\nEnter your Number");
				scanf("%d",&b);
					if(b==sn)
					{
						printf("\n \t\tBOOYAH you won the game !!");
							printf("\n !!--PRESS ANY KEY TO CONTINUE--!!");
					//	scanf("%c",&c);
					getch();
					 goto START;
					}
					else if(b<sn)
					{
				
					printf("\n Secret number is greater then %d",b);
					d-=1;
					printf("\n %d chances are left",d);
					}
					else if(b>sn)
					{
						printf("\n Secret number is smaller then %d",b);
						d-=1;
					printf("\n %d chances are left",d);
					}
					
				
				}
				
					printf("\n\t!!--OPPS, You loose the game--!!\n");
					printf("\n Secret Number is %d\n",sn);
					printf("\n !!--PRESS ANY KEY TO CONTINUE--!!");
				//	scanf("%c",&c);
				getch();
					                    goto START;
			}
			else if(a==0)
			{system("cls");
				exit(0);
				
			}
			else{
				printf("\n Please select in given option");
				getch();
				goto START;
			}   }
		else
		{
			printf("\n Wrong Password");
			printf("\n Hint:1234");
			}	
		}
		else
		{
			printf("\n Invalid username");
			printf("\n Hint:sarthak");
		}
		
return 0;}
