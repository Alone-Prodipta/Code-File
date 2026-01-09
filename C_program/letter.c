#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
void A();void B();void C();void D();
void E();void F();void G();void H();
void I();void J();void K();void L();
void M();void N();void O();void P();
void Q();void R();void S();void T();
void U();void V();void W();void X();
void Y();void Z();
int main()
{       
	char ch,upper,op;
	int n;
	do
	{
		printf("\nEnter any uppercase alphabet of your choice\n");
		scanf("%c",&ch);
		switch(toupper(ch))
		{      
			case 'A':
			{       
				printf("\n");
				A();
				break;
			}
			case 'B':
			{
				printf("\n");
				B();
				break;
			}
			case 'C':
			{
				printf("\n");
				C();
				break;
			}
			case 'D':
			{
				printf("\n");
				D();
				break;
			}
			case 'E':
			{
				printf("\n");
				E();
				break;
			}
			case 'F':
			{
				printf("\n");
				F();
				break;
			}
			case 'G':
			{
				printf("\n");
				G();
				break;
			}
			case 'H':
			{
				printf("\n");
				H();
				break;
			}
			case 'I':
			{
				printf("\n");
				I();
				break;
			}
			case 'J':
			{
				printf("\n");
				J();
				break;
			}
			case 'K':
			{
				printf("\n");
				K();
				break;
			}	
			case 'L':
			{
				printf("\n");
				L();
				break;
			}
			case 'M':
			{
				printf("\n");
				M();
				break;
			}
			case 'N':
			{
				printf("\n");
				N();
				break;
			}
			case 'O':
			{
				printf("\n");
				O();
				break;
			}
			case 'P':
			{
				printf("\n");
				P();
				break;
			}
			case 'Q':
			{
				printf("\n");
				Q();
				break;
			}
			case 'R':
			{
				printf("\n");
				R();
				break;
			}
			case 'S':
			{
				printf("\n");
				S();
				break;
			}
			case 'T':
			{
				printf("\n");
				T();
				break;
			}
			case 'U':
			{
				printf("\n");
				U();
				break;
			}
			case 'V':
			{
				printf("\n");
				V();
				break;
			}
			case 'W':
			{
				printf("\n");
				W();
				break;
			}
			case 'X':
			{
				printf("\n");
				X();
				break;
			}
			case 'Y':
			{
				printf("\n");
				Y();
				break;
			}
			case 'Z':
			{
				printf("\n");
				Z();
				break;
			}
			default:
			{
				printf("Invalid input");
			}
		
		}
			printf("Do you want to continue?\n");
			printf("Press 'y' for 'yes' and 'n' for 'no'\n");
			scanf(" %c",&op);
			fflush(stdin);
			if(op=='n'||op=='N')
			{
				break;
			}
			if(op!='y'||op!='Y')
			{
				int k=0;
			}	
	} 
	while(op=='y'||op=='Y');
	printf("You have exited!");
	system("pause");
	return 0;
}
void A()
{
	int i,j,k,d;
	for(i=1;i<=5;i++)
	{
		for(k=1;k<=(5-i);k++)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
				if(i==3)
				{
				   if(j==3||j==1)
				   {
				        printf("%c ",(char)65);
				   }
				   else
				   {
					    printf("  ");
				   }
				}
				else if((i==5)&&(j>=2&&j<=4))
				{
					    printf("  ");
				}
				else
				{
					printf("%c ",(char)65);
				}
		}
		printf("\n");
	}
}
void B()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			if((i==2||i==4)&&(j==2||j==3||j==4))
			{

				printf(" ");
			}
            else if(j==5&&(i==1||i==5||i==3))
            {
                printf(" ");
            }
			else
			{
				printf("%c",(char)66);
			}
		}
		printf("\n");
	}
}
void C()
{       
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=4;j++)
		{
			if((i==3||i==4)&&(j==2||j==3||j==4))
			{
				printf(" ");
			}
			else if(i==2&&(j==2||j==3))
			{
				printf("  ");
			}
			else
			{
				printf("%c ",(char)67);
			}
		}
		printf("\n");
	}
}
void D()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=4;j++)
		{
		      if((i==1||i==5)&&(j==3||j==4))
		      {
				printf(" ");
		      }
		      else if((i==2||i==4)&&(j==2))
		      {
				printf(" ");
		      }
		      else if((i==3)&&(j==2)||(j==3))
		      {
				printf(" ");
		      }
		      else
		      {
				printf("%c ",(char)68);
		      }
		}
		printf("\n");
	}
}
void E()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=4;j++)
		{
		      if((i==2||i==4)&&(j==2||j==3||j==4))
		      {
				printf(" ");
		      }
		      else
		      {
				printf("%c",(char)69);
		      }
		}
		printf("\n");
	}

}
void F()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=4;j++)
		{
		      if((i==2||i==4||i==5)&&(j==2||j==3||j==4))
		      {
				printf(" ");
		      }
		      else
		      {
				printf("%c",(char)70);
		      }
		}
		printf("\n");
	}
}
void G()
{
	int i,j,k;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			if((i==3||i==2)&&(j==2||j==3||j==4||j==5))
			{
				printf(" ");
			}
			else if(i==4&&(j==2||j==3||j==4))
			{
				printf(" ");
			}
			else
			{
				printf("%c",(char)71);
			}
		}
		for(k=1;k<=2;k++)
		{
			if(k==2&&(i==5))
			{
				printf(" %c",(char)71);
			}
			else if(k==1&&i==4)
			{
				printf("GG");
			}
		}
		printf("\n");
	}
}
void H()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=4;j++)
		{
		    if((i!=3)&&(j==2||j==3))
		    {
			printf(" ");
		    }
		    else
		    {
			printf("%c",(char)72);
		    }
		}
		printf("\n");
	}
}
void I()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
		    if((j!=3)&&(i==2||i==3||i==4))
		    {
				printf(" ");
		    }
		    else
		    {
				printf("%c",(char)73);
		    }
		}
		printf("\n");
	}
}
void J()
{
	int i,j;
	for(i=1;i<=6;i++)
	{
		for(j=1;j<=5;j++)
		{
			if((i>=2&&i<=6)&&(j==4||j==5))
			{
				printf(" ");
			}
			else if((i>=2&&i<=4)&&(j==1||j==2))
			{
				printf(" ");
			}
			else if(i==5&&j==2)
			{
				printf(" ");
			}
			else
			{
				printf("%c",(char)74);
			}
		}
		printf("\n");
	}
}
void K()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
	for(j=1;j<5;j++)
	{
	    if((i==1||i==5)&&(j==2||j==3))
	    {
			printf(" ");
	    }
	    else if((i==3)&&(j==3||j==4))
	    {
			printf(" ");
	    }
	    else if((i==2||i==4)&&(j==2||j==4))
	    {
			printf(" ");
	    }
	    else
	    {
			printf("%c ",(char)75);
	    }
	}
	printf("\n");
    }
}
void L()
{
	int i,j;
	for(i=1;i<5;i++)
	{
		printf("%c\n",(char)76);
	}
	for(j=1;j<=4;j++)
	{
		printf("%c",(char)76);
	}
	printf("\n");
}
void M()
{
	int i,j,k,m;
	for(i=1;i<=5;i++)
	{
		printf("%c",(char)77);
		for(j=1;j<5;j++)
		{
			if(i==j)
			{
				printf("%c",(char)77);
			}
			else
			{
				printf(" ");
			}
		}
		for(m=1;m<=5;m++)
		{
			if((i+m)==6)
			{
				printf("%c",(char)77);
			}
			else
			{
				printf(" ");
			}
		}
		for(k=1;k<2;k++)
		{
			printf("%c",(char)77);
		}
	printf("\n");
	}
}
void N()
{       int i,j,k;
	for(i=1;i<=5;i++)
	{
		printf("%c",(char)78);
		for(j=1;j<5;j++)
		{
			if(i==j)
			{
				printf("%c",(char)78);
			}
			else
			{
				printf(" ");
			}
		}
		printf(" ");
		for(k=1;k<2;k++)
		{
			printf("%c",(char)78);
		}
		printf("\n");
	}
}
void O()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			if((i==1||i==5)&&(j==1||j==5))
			{
				printf(" ");
			}	
			else if((i>=2&&i<=4)&&(j>=2&&j<=4))
			{
				printf(" ");
			}
			else
			{
				printf("%c",(char)79);
			}
		}
		printf("\n");
	}
}
void P()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=4;j++)
		{
			if((i==4||i==5)&&(j==2||j==3||j==4))
			{

				printf(" ");
			}
			else if(i==2&&(j==2||j==3))
			{
				printf(" ");
			}
			else
			{
				printf("%c",(char)80);
			}
		}
		printf("\n");
	}
}
void Q()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			if((i>=2&&i<=4)&&(j>=2&&j<=4))
			{
				if(i==4&&j==4)
				{
					printf("%c",(char)81);
				}
				else
				{
					printf(" ");
				}
			}
			else
			{
				printf("%c",(char)81);
			}
		}
		printf("\n");
	}
	for(i=1;i<=6;i++)
	{
		printf(" ");
	}
	printf("%c",(char)81);
}
void R()
{
	int i,j;
	for(i=1;i<=6;i++)
	{
		for(j=1;j<=4;j++)
		{
			if((i==4)&&(j==3||j==4))
			{
				printf(" ");
			}
			else if((i==5)&&(j==2||j==4))
			{
				printf(" ");
			}
			else if((i==6)&&(j==3||j==2))
			{
				printf(" ");
			}
			else if(i==2&&(j==2||j==3))
			{
				printf(" ");
			}
			else
			{
				printf("%c",(char)82);
			}
		}
		 printf("\n");
		}
}
void S()
{
	 int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=4;j++)
		{
			if(i==2&&(j>=2&&j<=4))
			{
				printf(" ");
			}
			else if(i==4&&(j>=1&&j<=3))
			{
				printf(" ");
			}
			else
			{
				printf("%c",(char)83);
			}
		}
		printf("\n");
	}
}
void T()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			if(j!=3&&(i>=2))
			{
				printf(" ");
			}
			else
			{
				printf("%c",(char)84);
			}
		}
			printf("\n");
	}
}
void U()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			if(i!=5&&(j>=2&&j<=4))
			{
				printf(" ");
			}
			else
			{
				printf("%c",(char)85);
			}
		}
			printf("\n");
	}
}
void V()
{
	int i,j,k;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=(5*3)-1;j++)
		{
			if((i==j)||(i+j)==(5*3)-2)
			{
				printf("%c",(char)86);
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	for(k=1;k<=4;k++)
	{
		printf(" ");
	}
	printf("  %c",(char)86);
 }
void W()
{
	int i,j,k,m;
	for(i=1;i<=5;i++)
	{
		printf("%c",(char)87);
		for(m=1;m<=5;m++)
		{
			if((i+m)==6)
			{
				printf("%c",(char)87);
			}
			else
			{
				printf(" ");
			}
		}
		for(j=1;j<=5;j++)
		{
			if(i==j)
			{
				printf("%c",(char)87);
			}
			else
			{
				printf(" ");
			}
		}
		for(k=1;k<2;k++)
		{
			printf("%c",(char)87);
		}
	printf("\n");
	}
}
void X()
{
	int i,j,k;

	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			if(i==j)
			{
				printf("%c ",(char)88);
			}
			else if((i+j)==6)
			{
				printf("%c ",(char)88);
			}
			else
			{
				printf("  ");
			}
		}
		printf("\n");
	}
}
void Y()
{
	int i,j,k;

	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			if(i<=3)
			{
				if(i==j)
				{
					printf("%c ",(char)89);
				}
				else if((i+j)==6)
				{
					printf("%c ",(char)89);
				}
				else
				{
					printf("  ");
				 }
			  }
			  else
			  {
				if(j!=5)
				{
					printf(" ");
				}
				else
				{
					printf("%c",(char)89);
				}
			 }
		}
		printf("\n");
	}
}
void Z()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			if((i==1||i==5)||(i+j)==6)
			{
				printf("%c ",(char)90);
			}
			else
			{
				printf("  ");
			}
		}
		printf("\n");
	}
}