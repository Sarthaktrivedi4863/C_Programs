//c project for making different types of calculators
#include<stdio.h>
#include <string.h>
#include<stdlib.h>
#define sqr(a)   (a)*(a)
#define cube(x)   (sqr(x)*(x))
int main ()
{
	char type;
//	while(type!='x')
do	{
	
	printf("\n \t \t \t  => ENTER THE TYPE OF CALCULATOR <=");
		printf("\n");
	printf("\n");
	printf("\n For simple calculator PRESS                            => s <=");
	printf("\n For finding square and cube of any number PRESS        => c <=");
	printf("\n For electricity bill calculator PRESS                  => e <=");
	printf("\n For matrix calculation PRESS                           => m <=");
	printf("\n For percentage and grade calculation PRESS             => p <=");
	printf("\n For foctorial of any number PRESS                      => f <=");
		printf("\n");
			printf("\n");
	printf("\n \t \t \t  PRESS 'x' TO EXIT");
	
	scanf("%c",&type);
	printf("\n You selected %c",type);
printf("\n");
	
	
		if(type=='s')
		{printf("\n You select simple calculator");
		
		   int first,second;
		   char op;
		   printf("\n Enter the operator");
		   scanf("%s",&op);
		   printf("\n Enter first and second number");
		   scanf("%d %d",&first,&second);
		   switch(op)
		 {
		  case'+': 
		  printf("\n-----------------------------------------------------------------");
		   printf(" \n Sum of %d and %d is %d <=============================",first,second,first+second);
		  printf("\n-----------------------------------------------------------------"); 
		   break;
		   
		   case'-':
		   	printf("\n-----------------------------------------------------------------");
		   	printf("\n Sub of %d and %d is %d <=============================",first,second,first-second);
		   	printf("\n-----------------------------------------------------------------");
			   break;
		   	
		   	case'*':
		   		printf("\n-----------------------------------------------------------------");
		   		printf("\n Multiplication of %d and %d is %d <========================",first,second,first*second);
		   		printf("\n-----------------------------------------------------------------");
				   break;
		   		
		   		case'/':
		   			printf("\n-----------------------------------------------------------------");
		   			printf("\n Division of %d by %d is %d <=============================",first,second,first/second);
		   			printf("\n-----------------------------------------------------------------");
		   			break;
		   		
		   	
		 }
		}
		
		//00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000
		else if(type=='e')
		{printf("\n You selected electricity bill calculator");
		
		float time;
		float watt,kw,h,unit,charge,tb;
		printf("\n Enter power of device in watt ");
		scanf("%f",&watt);
		printf("\n Enter the time for which device is used in minutes");
		scanf("%f",&time);
		printf("\n Enter the rate of electricity per KWH");
		scanf("%f",&charge);
		
		kw=watt/1000;
		h=time/60;
		unit=kw*h;
		tb=unit*charge;
		printf("\n-----------------------------------------------------------------");
		printf("\n Total Bill amount for %f unit is %f <======================================",unit,tb);
		printf("\n-----------------------------------------------------------------");
			//0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000
		}
		else if(type=='m')
		{char func;
			printf("\n For matrix addition PRESS                  'a'  ");
			printf("\n For matrix substraction PRESS              's'  ");
			printf("\n For matrix multiplication PRESS            'm'  ");
			printf("\n For transpose of matrix PRESS              't'  ");
			scanf("%s",&func);
			if(func=='a')
			{printf("\n You selected matrix ADDITION");
				int a[3][3],b[3][3],c[3][3],i,j;
				printf("\n Enter the element of matrix 'a'");
				for(i=0;i<3;i++)
				{for(j=0;j<3;j++)
				{printf("\n a[%d][%d]",i,j);
				scanf("%d",&a[i][j]);
			 }
				}//for loop
				printf("\n Enter the elements of matrix 'b'");
				for(i=0;i<3;i++){
					for(j=0;j<3;j++){
						printf("\n b[%d][%d]",i,j);
						scanf("%d",&b[i][j]);
					}
				}//for loop
				
				for(i=0;i<3;i++){
					for(j=0;j<3;j++){
						c[i][j]=a[i][j]+b[i][j];
					}
				}//end addition
				printf("\n RESULTANT MATRIX");
				printf("\n-----------------------------------------------------------------");
				printf("\n");
				for(i=0;i<3;i++){
					for(j=0;j<3;j++){
			
						printf("%d\t",c[i][j]);
					}printf("\n");
				}//end printing
				printf("\n-----------------------------------------------------------------");
			}//111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111
			else if(func=='s')
			{printf("\n You selected matrix SUBTRACTION");
			int a[3][3],b[3][3],c[3][3],i,j;
			// printf("\n for substraction of matrix all the corresponding element of first matrix will be greater than second");
				printf("\n Enter the element of matrix 'a'");
				for(i=0;i<3;i++)
				{for(j=0;j<3;j++)
				{printf("\n a[%d][%d]",i,j);
				scanf("%d",&a[i][j]);
			 }
				}//for loop
				printf("\n Enter the elements of matrix 'b'");
				for(i=0;i<3;i++){
					for(j=0;j<3;j++){
							printf("\n b[%d][%d]",i,j);
						scanf("%d",&b[i][j]);
					}
				}//for loop
				
				for(i=0;i<3;i++){
					for(j=0;j<3;j++){
						c[i][j]=a[i][j]-b[i][j];
					}
				}//end addition
				printf("\n RESULTANT MATRIX");
				printf("\n-----------------------------------------------------------------");
				printf("\n");
				for(i=0;i<3;i++){
					for(j=0;j<3;j++){
						printf("%d\t",c[i][j]);
					}printf("\n");
				}//end printing
				printf("\n-----------------------------------------------------------------");
			}
			//222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222
			else if(func=='m')
			{
				printf("\n You select matrix MULTIPLICATION");
				int a[3][3],b[3][3],r[3][3],i,j,k;
				
					printf("\n Enter the element of matrix 'a'");
				for(i=0;i<3;i++)
				{for(j=0;j<3;j++)
				{printf("\n a[%d][%d]",i,j);
				scanf("%d",&a[i][j]);
			 }
				}//for loop
				printf("\n Enter the elements of matrix 'b'");
				for(i=0;i<3;i++){
					for(j=0;j<3;j++){
							printf("\n b[%d][%d]",i,j);
						scanf("%d",&b[i][j]);
					}
				}//for loop
				
				for(i=0;i<3;i++){
					for(j=0;j<3;j++){
						r[i][j]=0;
						for(k=0;k<3;k++){
							r[i][j]=r[i][j]+a[i][k]*b[k][j];
						}
					}
				}//end multiplication
				printf("\n RESULTANT MATRIX");
				printf("\n-----------------------------------------------------------------");
				printf("\n");
				for(i=0;i<3;i++){
					for(j=0;j<3;j++){
						printf("%d\t",r[i][j]);
					}printf("\n");
				}
				printf("\n-----------------------------------------------------------------");
			}
			//333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333
			else if(func=='t')
			
			{
				printf("\n You select the TRANSPOSE of matrix");
				int a[3][3],r[3][3],i,j;
					printf("\n Enter the element of matrix");
				for(i=0;i<3;i++)
				{for(j=0;j<3;j++)
				{printf("\n a[%d][%d]",i,j);
				scanf("%d",&a[i][j]);
			 }
				}//for loop
				
						for(i=0;i<3;i++){
							for(j=0;j<3;j++){
								r[j][i]=a[i][j];
							}
							
						}//end transpose
						printf("\n RESULTANT MATRIX");
						printf("\n-----------------------------------------------------------------");
						printf("\n");
						for(i=0;i<3;i++){
							for(j=0;j<3;j++){
								printf("%d\t",r[i][j]);
							}printf("\n");
						}
						printf("\n-----------------------------------------------------------------");
						}
					else 
					printf("\n INCORRECT OPTION PLEASE SELECT FROM GIVEN OPTION");
			
			
			
		}
	//44444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444	
		
	else if(type=='p')
	
	{printf("\n You selected grade and percentage calculator");
	int marks,tmarks;
	float per,tot;
	printf("\n Enter the marks obtained by the candidate");
	scanf("%d",&marks);
	printf("\n Enter the total number of marks ");
	scanf("%d",&tmarks);
	tot=marks*100;
	per=tot/tmarks;
	printf("\n-----------------------------------------------------------------");
	printf("\n Percentge obtained by the caandidate is %f",per);
	printf("\n-----------------------------------------------------------------");
	if(per>=90)
	{
	printf("\n-----------------------------------------------------------------");
	printf("\n candidate obtained grade 'A'");
		printf("\n-----------------------------------------------------------------");
		}
	else if(per>=80)
	{	printf("\n-----------------------------------------------------------------");
	printf("\n candidate obtained grade 'B'");
		printf("\n-----------------------------------------------------------------");
	}
	else if(per>=70)
	{	printf("\n-----------------------------------------------------------------");
	printf("\n candidate obtained grade 'C'");
		printf("\n-----------------------------------------------------------------");
	}
	else if	(per>=50)
	{	printf("\n-----------------------------------------------------------------");
	printf("\n candidate obtained grade 'D'");
		printf("\n-----------------------------------------------------------------");
	}
	else if (per>=30)
	{	printf("\n-----------------------------------------------------------------");
	printf("\n candtidate obtained grade 'E'");
		printf("\n-----------------------------------------------------------------");
	}
	else 
	{	printf("\n-----------------------------------------------------------------");
	printf("\n FAIL BETTER LUCK NEXT TIME");
		printf("\n-----------------------------------------------------------------");}
		}	
	//555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555
	else if(type=='c')
{int num,res;
char cs;
		printf("\n For square of number PRESS 's' and For cube PRESS 'c'");
	scanf("%s",&cs);
	printf("\n Enter the number");
	scanf("%d",&num);
	
	if(cs=='s')
	{res=sqr(num);
		printf("\n-----------------------------------------------------------------");
	printf("\n Result is %d <===================================",res);
		printf("\n-----------------------------------------------------------------");
	}
	else if (cs=='c')
	{res=cube(num);
		printf("\n-----------------------------------------------------------------");
	printf("\n Result is %d <==================================",res);
		printf("\n-----------------------------------------------------------------");}
	else
	{
	printf("\n-----------------------------------------------------------------");	
	printf("\n INVALID OPTION");
		printf("\n-----------------------------------------------------------------");
}}
	
//666666666666666666666666666666666666666666666666666666666666666666666666666666666666666666666666666666666666666666666666666666	
	else if(type=='f')
	{
		
		int num,fct=1,i;
		printf("\n Enter the number");
		scanf("%d",&num);
		for(i=1;i<=num;i++)
		{fct=fct*i;
		}
			printf("\n-----------------------------------------------------------------");
		printf("\n %d is Factorial <=========================",fct);
		printf("\n-----------------------------------------------------------------");}
//77777777777777777777777777777777777777777777777777777777777777777777777777777777777777777777777777777777777777777777777777777
else if(type=='x')
{ char str[100];
	printf("\n \t \t \t=>PLEASE GIVE REVIEW TO THE CALCULATOR FOR EXITING<= ");
	scanf("%s",&str);
	printf("\n \t \t \t  \t=>THANKU! FOR FEEDBACK<=  ");
	printf("\n YOUR FEEDBACK");
	printf("\n - %s",str);
	exit(1);
}

//88888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888
else 
{printf("\n INVALID OPTION");
	}	
}while(type!='x');
	
return 0;}//end main


