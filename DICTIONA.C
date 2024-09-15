//////////////////////////////// PROJECT : DICTIONARY ///////////////////////

#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<string.h>

void home();
void search_word();
void add_word();
void show_dic();

char word[][30]={"Apple","Mango","Orange","Banana","Rehan","Ravi"};
char word_mean[][50]={"seb","Aam","Santra","Kela","Khan","Chomo"};
static char w1[100][30],wm[100][50];
static int l1,l2,w=0,ii=0;

void main()
{
	int ch;

	l1=sizeof(word)/sizeof(word[0]);
	l2=sizeof(word_mean)/sizeof(word_mean[0]);
	home:
	clrscr();


	home();

	gotoxy(21,21);
	printf("\n\t   ||              Choose an Option : ");
	scanf("%d",&ch);

   if(ch<4)
   {

	switch(ch)
	{

		case 1:
		search_word();
		break;

		case 2:
		add_word();
		break;

		case 3:
		show_dic();
		break;

	       //	default :
	       //	printf("\n\n\tInvalid Choice");
	}

    goto home;

   }

   else if(ch==4)
   {
	printf("\n\n\n\t\tPlease Wait Exiting ....");
	delay(2000);
	 goto exit;
   }

   else
   {
	printf("\n\n\n\t   Invalid Choice......!");
   }

getch();
exit:
}

/* HOME INTERFACE OF DICTIONARY */
void home()
{
	printf("\n\t***************************************************************");
	printf("\n\t||                                                           ||");
	printf("\n\t||          WELCOME TO ENGLISH TO HINDI DICTIONARY           ||");
	printf("\n\t||                                                           ||");
	printf("\n\t***************************************************************\n");

	printf("\n\t     ____________________HOME INTERFACE___________________");
	printf("\n\t   ||-----MENUES:-----------------------------------------||");
	printf("\n\t   ||                                                  	  ||");
	printf("\n\t   ||     PRESS 1 : To Search Word.		          ||");
	printf("\n\t   ||							  ||");
	printf("\n\t   ||     PRESS 2 : To Add Worlds In The Dictiobary.   	  ||");
	printf("\n\t   ||                                                  	  ||");
	printf("\n\t   ||     PRESS 3 : To Show Dictionary.	                  ||");
	printf("\n\t   ||	  		 		                  ||");
	printf("\n\t   ||     PRESS 4 : To Exit.			          ||");
	printf("\n\t   || 					                  ||");
	printf("\n\t   ||-----------------------------------------------------||");


	printf("\n\t   ||-----------------------------------------------------||");
	printf("\n\t   || 					                  ||");
	printf("\n\t   || 					                  ||");
	printf("\n\t   || 					                  ||");
	printf("\n\t   ||-----------------------------------------------------||");

}

/* SEARCH INTERFAEC OF DICTIONARY */
void search_word()
{
	char str[20],choice;
	int i,r,r1;

   while(choice!='e')
   {
	clrscr();
	printf("\n\n||||||||||||||||||||||| Enter Word To Find Meaning ||||||||||||||||||||||||");
	printf("\n                        _________________________                         \n");


	printf("\n\t\t|----------------------------------------------|");
	printf("\n\t\t|                                              |");
	printf("\n\t\t|                                              |");
	printf("\n\t\t|                                              |");
	printf("\n\t\t|                                              |");
	printf("\n\t\t|                                              |");
	printf("\n\t\t|----------------------------------------------|");

	gotoxy(7,7);
	scanf("%s",&str,printf("\n\n\t\t|            Enter Word : "));
	printf("\n\n\n");

	printf("\n\n\t\tsearching..... ");
	delay(2000);

	for(i=0;i<l1;i++)
	{

		r=strcmp(str,word[i]);

		if(r==0)
		{
			printf("\n\t\t\t_____________________________");
			printf("\n\t\t\t|     WORD   :   Meaning    |");
			printf("\n\t\t\t|___________________________|");
			printf("\n\t\t\t|     %s  :    %s      \t",str,word_mean[i]);
			printf("\n\t\t\t|___________________________|");
			delay(2000);
			break;
		}

	}

     if(r!=0)
     {
	if(w!=0||w>0)
	{
	    for(i=0;i<w;i++)
	    {
		  r1=strcmp(str,w1[i]);

		  if(r1==0)
		  {
			printf("\n\t\t\t_____________________________");
			printf("\n\t\t\t|     WORD   :   Meaning    |");
			printf("\n\t\t\t|___________________________|");
			printf("\n\t\t\t|     %s  :    %s      \t",str,wm[i]);
			printf("\n\t\t\t|___________________________|");
			delay(2000);
			break;
		   }
	    }
	}
     }

	if( r!=0 && r1!=0 )
	{
		delay(2000);
		printf("\n\n\t\tNo Word Found.....!\n\t\t");
	}

	printf("\n\n\t\tEnter 'E' For Returning Home \n\t\tEnter 'C' For Search Again .\n\n\t\tEnter Your Choice : ");
	scanf("%s",&choice);

	if(choice=='E'|| choice=='e')
	{
	      break;
	}
   }


}

/* NEW WORD ADDING INTERFACE */
void add_word()
{
	char choice='C';

  while(choice!='E')
  {
	clrscr();
	printf("\n\n<<||<<||<<||<<||<<||  START ADDING WORDS IN DICTIONARY  ||>>||>>||>>||>>||>>||>>");
	printf("\n\n\t\t|----------------------------------------------|");
	printf("\n\t\t|                                              |");
	printf("\n\t\t|                                              |");
	printf("\n\t\t|                                              |");
	printf("\n\t\t|                                              |");
	printf("\n\t\t|                                              |");
	printf("\n\t\t|                                              |");
	printf("\n\t\t|                                              |");
	printf("\n\t\t|                                              |");
	printf("\n\t\t|----------------------------------------------|");


	gotoxy(6,6);
	printf("\n\n\t\t|        Enter Word : ");
	scanf("%s",&w1[ii]);

	gotoxy(9,9);
	printf("\n\n\t\t|        Enter Word Meaning : ");
	scanf("%s",&wm[ii]);

	printf("\n\n\n\n");

	w++;
	ii++;

	printf("\n\n\t\tWord Added Successfully.....");
	delay(900);

	printf("\n\n\t\tEnter 'E' For returning Home \n\t\tEnter 'C' for Adding New one .\n\n\t\tEnter Your choice : ");
	scanf("%s",&choice);

       if(choice=='E'||choice=='e')
       break;
  }


}

/*DICTIONARY ALL WORD LIST */
void show_dic()
{
	int i;
	clrscr();
	printf("\n\n\t|-------------------|------------------------|");
	printf("\n\t|  WORD             |      MEANING           |");
	printf("\n\t|-------------------|------------------------|\n");


  for(i=0;i<l1;i++)
  {
	printf("\t|  %s :                  %s          \n",word[i],word_mean[i]);
	printf("\t|                   |                        |\n");
	printf("\t|-------------------|------------------------|\n");
  }

  for(i=0;i<w;i++)
  {
	printf("\t|   %s :                 %s          \n",w1[i],wm[i]);
	printf("\t|                   |                        |\n");
	printf("\t|-------------------|------------------------|\n");
  }

  printf("\n\t  PRESS Enter To Return Home : ");
  getch();

}

