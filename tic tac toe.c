#include<stdio.h>
#include<conio.h>
char ch[9]={'1','2','3','4','5','6','7','8','9'};
char str1[100],str2[100];
main()
{
	int i,y;
    game_name();
	playboard();
	players();
	for(i=1;i<=9;i++)
	{
		symbol_input(i);
		playboard();
		y=checker();
		if(y==1)
		break;
	}
}
int game_name()
{
	printf("\n****TIC TAC TOE****");
	return 0;
}
int playboard()
{
	printf("\n\n\n\n   %c  |   %c  |   %c  ",ch[0],ch[1],ch[2]);
	printf("\n______|______|______");
	printf("\n   %c  |   %c  |   %c  ",ch[3],ch[4],ch[5]);
	printf("\n______|______|______");
	printf("\n   %c  |   %c  |   %c  ",ch[6],ch[7],ch[8]);
	printf("\n      |      |     ");
	return 0;
}
int players()
{
	printf("\n\n\n enter the name of first player:-");
	gets(str1);
	printf("\n enter the name of second player:-");
	gets(str2);
	printf("\nsymbol of player1,%s:x",str1);
	printf("\nsymbol of player2,%s:0",str2);
	return 0;
}
int symbol_input(int x)
{
	int j,a;
	char mark[1];
	a=x% 2;
	switch(a)
	{
		case 0:
			{
			 printf("\n\n%s,enter your symbol:-",str2);
			 gets(mark);
			 for(j=0;j<9;j++)
			 {
			 	if(ch[j]==mark[0])
			 	{
			 		ch[j]='0';
				 }
			 }
			 break;	
			}
	    case 1:
			{
             printf("\n\n%s,enter your symbol:-",str1);
			 gets(mark);
			 for(j=0;j<9;j++)
			 {
			 	if(ch[j]==mark[0])
			 	{
			 		ch[j]='x';
				 }
			 }
			 break;
			}
	}
	return 0;
}
int checker(int s)
{
	if(ch[0]==ch[3] && ch[3]==ch[6])
	{
		if(ch[3]=='x')
		{
		printf("\nwinner player:-%s",str1);
	    }
	    else{
	    printf("\nwinner player:-%s",str2);
		}
		return 1;
	}
	if(ch[1]==ch[4] && ch[4]==ch[7])
	{
		if(ch[4]=='x')
		{
		printf("\nwinner player:-%s",str1);
	    }
	    else{
	    printf("\nwinner player:-%s",str2);
		}
		return 1;
	}
	if(ch[2]==ch[5] && ch[5]==ch[8])
	{
		if(ch[5]=='x')
		{
		printf("\nwinner player:-%s",str1);
	    }
	    else{
	    printf("\nwinner player:-%s",str2);
		}
		return 1;
	}
	if(ch[0]==ch[1] && ch[1]==ch[2])
	{
		if(ch[1]=='x')
		{
		printf("\nwinner player:-%s",str1);
	    }
	    else{
	    printf("\nwinner player:-%s",str2);
		}
		return 1;
	}
	if(ch[3]==ch[4] && ch[4]==ch[5])
	{
		if(ch[4]=='x')
		{
		printf("\nwinner player:-%s",str1);
	    }
	    else{
	    printf("\nwinner player:-%s",str2);
		}
		return 1;
	}
	if(ch[6]==ch[7] && ch[7]==ch[8])
	{
		if(ch[7]=='x')
		{
		printf("\nwinner player:-%s",str1);
	    }
	    else{
	    printf("\nwinner player:-%s",str2);
		}
		return 1;
	}
	if(ch[0]==ch[4] && ch[4]==ch[8])
	{
		if(ch[4]=='x')
		{
		printf("\nwinner player:-%s",str1);
	    }
	    else{
	    printf("\nwinner player:-%s",str2);
		}
		return 1;
	}
	if(ch[2]==ch[4] && ch[4]==ch[6])
	{
		if(ch[4]=='x')
		{
		printf("\nwinner player:-%s",str1);
	    }
	    else{
	    printf("\nwinner player:-%s",str2);
		}
		return 1;
	}
	return 0;
}

