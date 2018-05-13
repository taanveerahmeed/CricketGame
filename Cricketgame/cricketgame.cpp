#include<stdio.h>
#include<conio.h>
#include<time.h>
#include<stdlib.h>

int main(void)

{
	srand(time(NULL));
	int element[13]={0,1,2,3,4,5,6,7,8,9,10,11,12};
	int toss[5]={0,1,2,3,4};
	int toss2[5]={0,1,2,3,4};
	int run=0;
	int run2=0;
	int wicket=0;
	int wicket2=0;
	int bowl=10;
	int bowl2=10;
	int decession;
	int score1,score2;

	printf("                       ********Welcome to cricket game*********\n\n\npress any key to continue\n");
	getch();
	system("cls");

	printf("\n\n\n\n\n\t\t\t\tNow tossss...");
	getch();
	system("cls");
	printf("\n\n\n\t\t\tIt will depend on youe luck\n\n\nPress any key to toss\n\n\n");
	getch();
	system("cls");

	for (int i=1;i<2;i++)
	{
		getch();

		int x1=rand()%5;
		if (x1==0||x1==4)
		{
			printf("\n\n\t\t\tCongrtz!!! You have won the toss\n\n ");
			getch();
			system("cls");
			printf("\n\nWhat do you want??\n\n\n1.press 1 to bat first and then press 'enter'\t2.press 2 to field first and then 'enter'\n\n");
			scanf("%d",&decession);

			if(decession==1)
			{
				system("cls");
				printf("\n\n\n\t\t\tSo u have selected to bat first....\n\n\n\t\t\tGet ready with your openers....GOOD LUCK ...\n\n");
				getch();
				system("cls");
				printf("\n\nPress any key to play\n\n");
				getch();
				system("cls");
				for (int j=1;j<10;j++)
				{
					getch();
					int x=rand()%13;

					if (x==6)
						{
							printf("\n\nIts a huge 6\n\n");
							run=run+6;
							bowl=bowl--;
							wicket=wicket;
							getch();
							system("cls");
							printf("\n\nCurrent score is %d run and fall of wicket is %d....%d bowl remaining..\n\n",run,wicket,bowl);

						}
					else if (x==0)
						{
							printf("its a dott ball...!!!!\n");
							run=run;
							bowl=bowl--;
							wicket=wicket;
							getch();
							system("cls");
							printf("\n\nCurrent score is %d run and fall of wicket is %d....%d bowl remaining..\n\n",run,wicket,bowl);
						}
					else if (x==1)
						{
							printf("\n\nOH its a single...\n\n");
							run=run+1;
							bowl=bowl--;
							wicket=wicket;
							getch();
							system("cls");
							printf("\n\nCurrent score is %d run and fall of wicket is %d....%d bowl remaining..\n\n",run,wicket,bowl);
						}
					else if (x==2)
						{
							printf("\n\nThey have scored a two....\n\n");
							run=run+2;
							bowl=bowl--;
							wicket=wicket;
							getch();
							system("cls");
							printf("\n\nCurrent score is %d run and fall of wicket is %d....%d bowl remaining..\n\n",run,wicket,bowl);
						}
					else if (x==3)
						{
							printf("\n\nOH that was a good running...its a three..\n\n");
							run=run+3;
							bowl=bowl--;
							wicket=wicket;
							getch();
							system("cls");
							printf("\n\nCurrent score is %d run and fall of wicket is %d....%d bowl remaining..\n\n",run,wicket,bowl);
						}
					else if (x==4)
						{
							printf("\n\nIts a boundary....its 4...\n\n");
							run=run+4;
							bowl=bowl--;
							wicket=wicket;
							getch();
							system("cls");
							printf("\n\nCurrent score is %d run and fall of wicket is %d....%d bowl remaining..\n\n",run,wicket,bowl);
						}
					else if (x==5)
						{
							printf("\n\nIts a wide\n\n");
							run=run+1;
							bowl=bowl;
							wicket=wicket;
							getch();
							system("cls");
							printf("\n\nCurrent score is %d run and fall of wicket is %d....%d bowl remaining..\n\n",run,wicket,bowl);
						}
					else if (x==7)
						{
							printf("\n\nIts a no ball\n\n");
							run=run+1;
							bowl=bowl;
							wicket=wicket;
							getch();
							system("cls");
							printf("\n\nCurrent score is %d run and fall of wicket is %d....%d bowl remaining..\n\n",run,wicket,bowl);

						}
					else if (x==8)
						{
							printf("\n\nIts a catch\n\n");
							run=run;
							bowl=bowl--;
							wicket=wicket+1;
							getch();
							system("cls");
							printf("\n\nCurrent score is %d run and fall of wicket is %d....%d bowl remaining..\n\n",run,wicket,bowl);
						}
					else if (x==9)
						{
							printf("\n\nOH!!!!Its caught in behind\n\n");
							run=run;
							bowl=bowl--;
							wicket=wicket+1;
							getch();
							system("cls");
							printf("\n\nCurrent score is %d run and fall of wicket is %d....%d bowl remaining..\n\n",run,wicket,bowl);
						}
					else if (x==10)
						{
							printf("\n\nIt was a great job by keeper!!!! stampping\n\n");
							run=run;
							bowl=bowl--;
							wicket=wicket+1;
							getch();
							system("cls");
							printf("\n\nCurrent score is %d run and fall of wicket is %d....%d bowl remaining..\n\n",run,wicket,bowl);
						}
					else if (x==11)
						{
							printf("\n\nIt is an unfortunate run out\n\n");
							run=run;
							bowl=bowl--;
							wicket=wicket+1;
							getch();
							system("cls");
							printf("\n\nCurrent score is %d run and fall of wicket is %d....%d bowl remaining..\n\n",run,wicket,bowl);

						}
					else if (x==12)
						{
							printf("\n\nIts a great bowled\n\n");
							run=run;
							bowl=bowl--;
							wicket=wicket+1;
							getch();
							system("cls");
							printf("\n\nCurrent score is %d run and fall of wicket is %d....%d bowl remaining..\n\n",run,wicket,bowl);
						}

					if (wicket==10)
					{
						break;
					}
				}

				printf("              WELL DONE \n\nYOUR SCORE IS %d RUN BY LOSSING %d WCKETS\n\n\n",run,wicket);
				score1=run;
				printf("Press any key\n");
				getch();
				system("cls");
				printf("\n\nNow the othe team will bat\n\n\n");
				printf("\n\nPress any key to play\n\n");

				for (int j=1;j<10;j++)
				{
					getch();
					int x=rand()%13;

					if (x==6)
						{
							printf("\n\nIts a huge 6\n\n");
							run2=run2+6;
							bowl2=bowl2--;
							wicket2=wicket2;
							getch();
							system("cls");
							printf("\n\nCurrent score is %d run and fall of wicket is %d....%d bowl remaining..\n\n",run2,wicket2,bowl2);

						}
					else if (x==0)
						{
							printf("\n\nits a dott ball...!!!!\n\n");
							run2=run2;
							bowl2=bowl2--;
							wicket2=wicket2;
							getch();
							system("cls");
							printf("\n\nCurrent score is %d run and fall of wicket is %d....%d bowl remaining..\n\n",run2,wicket2,bowl2);
						}
					else if (x==1)
						{
							printf("\n\nOH its a single...\n\n");
							run2=run2+1;
							bowl2=bowl2--;
							wicket2=wicket2;
							getch();
							system("cls");
							printf("\n\nCurrent score is %d run and fall of wicket is %d....%d bowl remaining..\n\n",run2,wicket2,bowl2);
						}
					else if (x==2)
						{
							printf("\n\nThey have scored a two....\n\n");
							run2=run2+2;
							bowl2=bowl2--;
							wicket2=wicket2;
							getch();
							system("cls");
							printf("\n\nCurrent score is %d run and fall of wicket is %d....%d bowl remaining..\n\n",run2,wicket2,bowl2);
						}
					else if (x==3)
						{
							printf("\n\nOH that was a good running by the batsmen!!!...its a three..\n\n");
							run2=run2+3;
							bowl2=bowl2--;
							wicket2=wicket2;
							getch();
							system("cls");
							printf("\n\nCurrent score is %d run and fall of wicket is %d....%d bowl remaining..\n\n",run2,wicket2,bowl2);
						}
					else if (x==4)
						{
							printf("\n\nThat was a good ball....Its a boundary....its 4...\n\n");
							run2=run2+4;
							bowl2=bowl2--;
							wicket2=wicket2;
							getch();
							system("cls");
							printf("\n\nCurrent score is %d run and fall of wicket is %d....%d bowl remaining..\n\n",run2,wicket2,bowl2);
						}
					else if (x==5)
						{
							printf("\n\nOH....Its a wide\n\n ");
							run2=run2+1;
							bowl2=bowl2;
							wicket2=wicket2;
							getch();
							system("cls");
							printf("\n\nCurrent score is %d run and fall of wicket is %d....%d bowl remaining..\n\n",run2,wicket2,bowl2);
						}
					else if (x==7)
						{
							printf("\n\nGreat mistake by the bowler.....Its a no ball\n\n");
							run2=run2+1;
							bowl2=bowl2;
							wicket2=wicket2;
							getch();
							system("cls");
							printf("\n\nCurrent score is %d run and fall of wicket is %d....%d bowl remaining..\n\n",run2,wicket2,bowl2);

						}
					else if (x==8)
						{
							printf("\n\n Wow it was a great ball...Its a good catch\n\n");
							run2=run2;
							bowl2=bowl2--;
							wicket2=wicket2+1;
							getch();
							system("cls");
							printf("\n\nCurrent score is %d run and fall of wicket is %d....%d bowl remaining..\n\n",run2,wicket2,bowl2);
						}
					else if (x==9)
						{
							printf("\n\nOH!!!!Its caught in behind\n\n");
							run2=run2;
							bowl2=bowl2--;
							wicket2=wicket2+1;
							getch();
							system("cls");
							printf("\n\nCurrent score is %d run and fall of wicket is %d....%d bowl remaining..\n\n",run2,wicket2,bowl2);
						}
					else if (x==10)
						{
							printf("\n\nIt was a great job by keeper!!!! stampping\n\n");
							run2=run2;
							bowl2=bowl2--;
							wicket2=wicket2+1;
							getch();
							system("cls");
							printf("\n\nCurrent s;6core is %d run and fall of wicket is %d....%d bowl remaining..\n\n",run2,wicket2,bowl2);
						}
					else if (x==11)
						{
							printf("\n\nIt is a great fielding by the fielder....its a run out\n\n");
							run2=run2;
							bowl2=bowl2--;
							wicket2=wicket2+1;
							getch();
							system("cls");
							printf("\n\nCurrent score is %d run and fall of wicket is %d....%d bowl remaining..\n\n",run2,wicket2,bowl2);

						}
					else if (x==12)
						{
							printf("\n\nIts a great bowled\n\n");
							run2=run2;
							bowl2=bowl2--;
							wicket2=wicket2+1;
							getch();
							system("cls");
							printf("\n\nCurrent score is %d run and fall of wicket is %d....%d bowl remaining..\n\n",run2,wicket2,bowl2);
						}

					if (wicket2==10)
					{
						break;
					}
				}

				printf("\n\nThe other team scored %d runs by losing %d wickets\n\n",run2,wicket2);
				score2=run2;
				getch();
				system("cls");

				if (score1>score2)
				{
					printf("\n\n\t\t\tCONGRTZ!!!!!! U hv won by %d runs\n\n",run-run2);
				}
				else
				{
					printf("\n\n\t\t\tSORRY!!!!!You Have lost by %d runs\n\n",run2-run);
				}

			}


			else if (decession==2)
			{
				system("cls");
				printf("\n\n\n\t\t\tSo u have selected to bowl first...\n\n\n Get your bowlers ready...\n\n\n");
				getch();
				system("cls");
				printf("Press any key to play\n");
				for (int j=1;j<10;j++)
				{
					getch();
					int x=rand()%13;

					if (x==6)
						{
							printf("\n\nIts a huge 6\n\n");
							run2=run2+6;
							bowl2=bowl2--;
							wicket2=wicket2;
							getch();
							system("cls");
							printf("\n\nCurrent score is %d run and fall of wicket is %d....%d bowl remaining..\n\n",run2,wicket2,bowl2);

						}
					else if (x==0)
						{
							printf("\n\nits a dott ball...!!!!\n\n");
							run2=run2;
							bowl2=bowl2--;
							wicket2=wicket2;
							getch();
							system("cls");
							printf("\n\nCurrent score is %d run and fall of wicket is %d....%d bowl remaining..\n\n",run2,wicket2,bowl2);
						}
					else if (x==1)
						{
							printf("\n\nOH its a single...\n\n");
							run2=run2+1;
							bowl2=bowl2--;
							wicket2=wicket2;
							getch();
							system("cls");
							printf("\n\nCurrent score is %d run and fall of wicket is %d....%d bowl remaining..\n\n",run2,wicket2,bowl2);
						}
					else if (x==2)
						{
							printf("\n\nThey have scored a two....\n\n");
							run2=run2+2;
							bowl2=bowl2--;
							wicket2=wicket2;
							getch();
							system("cls");
							printf("\n\nCurrent score is %d run and fall of wicket is %d....%d bowl remaining..\n\n",run2,wicket2,bowl2);
						}
					else if (x==3)
						{
							printf("\n\nOH that was a good running by the batsmen!!!...its a three..\n\n");
							run2=run2+3;
							bowl2=bowl2--;
							wicket2=wicket2;
							getch();
							system("cls");
							printf("\n\nCurrent score is %d run and fall of wicket is %d....%d bowl remaining..\n\n",run2,wicket2,bowl2);
						}
					else if (x==4)
						{
							printf("\n\nThat was a good ball....Its a boundary....its 4...\n\n");
							run2=run2+4;
							bowl2=bowl2--;
							wicket2=wicket2;
							getch();
							system("cls");
							printf("\n\nCurrent score is %d run and fall of wicket is %d....%d bowl remaining..\n\n",run2,wicket2,bowl2);
						}
					else if (x==5)
						{
							printf("\n\nOH....Its a wide\n\n ");
							run2=run2+1;
							bowl2=bowl2;
							wicket2=wicket2;
							getch();
							system("cls");
							printf("\n\nCurrent score is %d run and fall of wicket is %d....%d bowl remaining..\n\n",run2,wicket2,bowl2);
						}
					else if (x==7)
						{
							printf("\n\nGreat mistake by the bowler.....Its a no ball\n\n");
							run2=run2+1;
							bowl2=bowl2;
							wicket2=wicket2;
							getch();
							system("cls");
							printf("\n\nCurrent score is %d run and fall of wicket is %d....%d bowl remaining..\n\n",run2,wicket2,bowl2);

						}
					else if (x==8)
						{
							printf("\n\n Wow it was a great ball...Its a good catch\n\n");
							run2=run2;
							bowl2=bowl2--;
							wicket2=wicket2+1;
							getch();
							system("cls");
							printf("\n\nCurrent score is %d run and fall of wicket is %d....%d bowl remaining..\n\n",run2,wicket2,bowl2);
						}
					else if (x==9)
						{
							printf("\n\nOH!!!!Its caught in behind\n\n");
							run2=run2;
							bowl2=bowl2--;
							wicket2=wicket2+1;
							getch();
							system("cls");
							printf("\n\nCurrent score is %d run and fall of wicket is %d....%d bowl remaining..\n\n",run2,wicket2,bowl2);
						}
					else if (x==10)
						{
							printf("\n\nIt was a great job by keeper!!!! stampping\n\n");
							run2=run2;
							bowl2=bowl2--;
							wicket2=wicket2+1;
							getch();
							system("cls");
							printf("\n\nCurrent s;6core is %d run and fall of wicket is %d....%d bowl remaining..\n\n",run2,wicket2,bowl2);
						}
					else if (x==11)
						{
							printf("\n\nIt is a great fielding by the fielder....its a run out\n\n");
							run2=run2;
							bowl2=bowl2--;
							wicket2=wicket2+1;
							getch();
							system("cls");
							printf("\n\nCurrent score is %d run and fall of wicket is %d....%d bowl remaining..\n\n",run2,wicket2,bowl2);

						}
					else if (x==12)
						{
							printf("\n\nIts a great bowled\n\n");
							run2=run2;
							bowl2=bowl2--;
							wicket2=wicket2+1;
							getch();
							system("cls");
							printf("\n\nCurrent score is %d run and fall of wicket is %d....%d bowl remaining..\n\n",run2,wicket2,bowl2);
						}

					if (wicket2==10)
						{
							break;
						}
				}
				score2=run2;
				system("cls");
				printf("\n\n\n\t\t\tThe score is %d run and fall of wicket is %d\n\n\n",run2,wicket2);
				getch();
				system("cls");
				printf("\n\n\t\t\tNow the other team will bowl\n\n");
				getch();
				system("cls");
				printf("\n\nPress any key to play\n\n");
				for (int j=1;j<10;j++)
				{
					getch();
					int x=rand()%13;

					if (x==6)
						{
							printf("\n\nIts a huge 6\n\n");
							run=run+6;
							bowl=bowl--;
							wicket=wicket;
							getch();
							system("cls");
							printf("\n\nCurrent score is %d run and fall of wicket is %d....%d bowl remaining..\n\n",run,wicket,bowl);

						}
					else if (x==0)
						{
							printf("its a dott ball...!!!!\n");
							run=run;
							bowl=bowl--;
							wicket=wicket;
							getch();
							system("cls");
							printf("\n\nCurrent score is %d run and fall of wicket is %d....%d bowl remaining..\n\n",run,wicket,bowl);
						}
					else if (x==1)
						{
							printf("\n\nOH its a single...\n\n");
							run=run+1;
							bowl=bowl--;
							wicket=wicket;
							getch();
							system("cls");
							printf("\n\nCurrent score is %d run and fall of wicket is %d....%d bowl remaining..\n\n",run,wicket,bowl);
						}
					else if (x==2)
						{
							printf("\n\nThey have scored a two....\n\n");
							run=run+2;
							bowl=bowl--;
							wicket=wicket;
							getch();
							system("cls");
							printf("\n\nCurrent score is %d run and fall of wicket is %d....%d bowl remaining..\n\n",run,wicket,bowl);
						}
					else if (x==3)
						{
							printf("\n\nOH that was a good running...its a three..\n\n");
							run=run+3;
							bowl=bowl--;
							wicket=wicket;
							getch();
							system("cls");
							printf("\n\nCurrent score is %d run and fall of wicket is %d....%d bowl remaining..\n\n",run,wicket,bowl);
						}
					else if (x==4)
						{
							printf("\n\nIts a boundary....its 4...\n\n");
							run=run+4;
							bowl=bowl--;
							wicket=wicket;
							getch();
							system("cls");
							printf("\n\nCurrent score is %d run and fall of wicket is %d....%d bowl remaining..\n\n",run,wicket,bowl);
						}
					else if (x==5)
						{
							printf("\n\nIts a wide\n\n");
							run=run+1;
							bowl=bowl;
							wicket=wicket;
							getch();
							system("cls");
							printf("\n\nCurrent score is %d run and fall of wicket is %d....%d bowl remaining..\n\n",run,wicket,bowl);
						}
					else if (x==7)
						{
							printf("\n\nIts a no ball\n\n");
							run=run+1;
							bowl=bowl;
							wicket=wicket;
							getch();
							system("cls");
							printf("\n\nCurrent score is %d run and fall of wicket is %d....%d bowl remaining..\n\n",run,wicket,bowl);

						}
					else if (x==8)
						{
							printf("\n\nIts a catch\n\n");
							run=run;
							bowl=bowl--;
							wicket=wicket+1;
							getch();
							system("cls");
							printf("\n\nCurrent score is %d run and fall of wicket is %d....%d bowl remaining..\n\n",run,wicket,bowl);
						}
					else if (x==9)
						{
							printf("\n\nOH!!!!Its caught in behind\n\n");
							run=run;
							bowl=bowl--;
							wicket=wicket+1;
							getch();
							system("cls");
							printf("\n\nCurrent score is %d run and fall of wicket is %d....%d bowl remaining..\n\n",run,wicket,bowl);
						}
					else if (x==10)
						{
							printf("\n\nIt was a great job by keeper!!!! stampping\n\n");
							run=run;
							bowl=bowl--;
							wicket=wicket+1;
							getch();
							system("cls");
							printf("\n\nCurrent score is %d run and fall of wicket is %d....%d bowl remaining..\n\n",run,wicket,bowl);
						}
					else if (x==11)
						{
							printf("\n\nIt is an unfortunate run out\n\n");
							run=run;
							bowl=bowl--;
							wicket=wicket+1;
							getch();
							system("cls");
							printf("\n\nCurrent score is %d run and fall of wicket is %d....%d bowl remaining..\n\n",run,wicket,bowl);

						}
					else if (x==12)
						{
							printf("\n\nIts a great bowled\n\n");
							run=run;
							bowl=bowl--;
							wicket=wicket+1;
							getch();
							system("cls");
							printf("\n\nCurrent score is %d run and fall of wicket is %d....%d bowl remaining..\n\n",run,wicket,bowl);
						}

					if (wicket==10)
					{
						break;
					}
				}
				getch();
				system("cls");
				score1=run;
				printf("\n\n\n\t\t\tThe score is %d run and wicket is %d\n\n",run,wicket);
				getch();
				system("cls");
				if (score1>score2)
				{
					printf("\t\t\tCongrtz You have won the match By % wickets\n\n",10-wicket);
				}

				else
				{
					printf("\t\t\tSOrry You have lost the match by %d wickets\n\n",10-wicket);
				}

			}
		}
		else
		{
			printf("\n\n\n\t\t\tOpsss!!! You have loss the toss\n\n\n");
			printf("\n\n\n\t\t\tOther team will deceide\n\n\npress any key\n\n");
			getch();
			system("cls");
			int x2=rand()%5;

			if (x2==3||x2==0)
			{
				printf("\n\n\n\t\t\tThe other team has selected to bowl first.....\n\n\n\n\t\t\tso get ready with your openers..\n\n\n\n");
				getch();
				system("cls");
				printf("\n\n\nEvery time press any key to play..\n\n\n");
				for (int j=1;j<10;j++)
				{
					getch();
					int x=rand()%13;

					if (x==6)
						{
							printf("\n\nIts a huge 6\n\n");
							run=run+6;
							bowl=bowl--;
							wicket=wicket;
							getch();
							system("cls");
							printf("\n\nCurrent score is %d run and fall of wicket is %d....%d bowl remaining..\n\n",run,wicket,bowl);

						}
					else if (x==0)
						{
							printf("its a dott ball...!!!!\n");
							run=run;
							bowl=bowl--;
							wicket=wicket;
							getch();
							system("cls");
							printf("\n\nCurrent score is %d run and fall of wicket is %d....%d bowl remaining..\n\n",run,wicket,bowl);
						}
					else if (x==1)
						{
							printf("\n\nOH its a single...\n\n");
							run=run+1;
							bowl=bowl--;
							wicket=wicket;
							getch();
							system("cls");
							printf("\n\nCurrent score is %d run and fall of wicket is %d....%d bowl remaining..\n\n",run,wicket,bowl);
						}
					else if (x==2)
						{
							printf("\n\nThey have scored a two....\n\n");
							run=run+2;
							bowl=bowl--;
							wicket=wicket;
							getch();
							system("cls");
							printf("\n\nCurrent score is %d run and fall of wicket is %d....%d bowl remaining..\n\n",run,wicket,bowl);
						}
					else if (x==3)
						{
							printf("\n\nOH that was a good running...its a three..\n\n");
							run=run+3;
							bowl=bowl--;
							wicket=wicket;
							getch();
							system("cls");
							printf("\n\nCurrent score is %d run and fall of wicket is %d....%d bowl remaining..\n\n",run,wicket,bowl);
						}
					else if (x==4)
						{
							printf("\n\nIts a boundary....its 4...\n\n");
							run=run+4;
							bowl=bowl--;
							wicket=wicket;
							getch();
							system("cls");
							printf("\n\nCurrent score is %d run and fall of wicket is %d....%d bowl remaining..\n\n",run,wicket,bowl);
						}
					else if (x==5)
						{
							printf("\n\nIts a wide\n\n");
							run=run+1;
							bowl=bowl;
							wicket=wicket;
							getch();
							system("cls");
							printf("\n\nCurrent score is %d run and fall of wicket is %d....%d bowl remaining..\n\n",run,wicket,bowl);
						}
					else if (x==7)
						{
							printf("\n\nIts a no ball\n\n");
							run=run+1;
							bowl=bowl;
							wicket=wicket;
							getch();
							system("cls");
							printf("\n\nCurrent score is %d run and fall of wicket is %d....%d bowl remaining..\n\n",run,wicket,bowl);

						}
					else if (x==8)
						{
							printf("\n\nIts a catch\n\n");
							run=run;
							bowl=bowl--;
							wicket=wicket+1;
							getch();
							system("cls");
							printf("\n\nCurrent score is %d run and fall of wicket is %d....%d bowl remaining..\n\n",run,wicket,bowl);
						}
					else if (x==9)
						{
							printf("\n\nOH!!!!Its caught in behind\n\n");
							run=run;
							bowl=bowl--;
							wicket=wicket+1;
							getch();
							system("cls");
							printf("\n\nCurrent score is %d run and fall of wicket is %d....%d bowl remaining..\n\n",run,wicket,bowl);
						}
					else if (x==10)
						{
							printf("\n\nIt was a great job by keeper!!!! stampping\n\n");
							run=run;
							bowl=bowl--;
							wicket=wicket+1;
							getch();
							system("cls");
							printf("\n\nCurrent score is %d run and fall of wicket is %d....%d bowl remaining..\n\n",run,wicket,bowl);
						}
					else if (x==11)
						{
							printf("\n\nIt is an unfortunate run out\n\n");
							run=run;
							bowl=bowl--;
							wicket=wicket+1;
							getch();
							system("cls");
							printf("\n\nCurrent score is %d run and fall of wicket is %d....%d bowl remaining..\n\n",run,wicket,bowl);

						}
					else if (x==12)
						{
							printf("\n\nIts a great bowled\n\n");
							run=run;
							bowl=bowl--;
							wicket=wicket+1;
							getch();
							system("cls");
							printf("\n\nCurrent score is %d run and fall of wicket is %d....%d bowl remaining..\n\n",run,wicket,bowl);
						}

					if (wicket==10)
					{
						break;
					}
				}

				printf("              WELL DONE \n\nYOUR SCORE IS %d RUN BY LOSSING %d WCKETS\n\n\n",run,wicket);
				score1=run;
				printf("Press any key\n");
				getch();
				system("cls");
				printf("\n\nNow the othe team will bat\n\n\n");
				printf("\n\nPress any key to play\n\n");

				for (int j=1;j<10;j++)
				{
					getch();
					int x=rand()%13;

					if (x==6)
						{
							printf("\n\nIts a huge 6\n\n");
							run2=run2+6;
							bowl2=bowl2--;
							wicket2=wicket2;
							getch();
							system("cls");
							printf("\n\nCurrent score is %d run and fall of wicket is %d....%d bowl remaining..\n\n",run2,wicket2,bowl2);

						}
					else if (x==0)
						{
							printf("\n\nits a dott ball...!!!!\n\n");
							run2=run2;
							bowl2=bowl2--;
							wicket2=wicket2;
							getch();
							system("cls");
							printf("\n\nCurrent score is %d run and fall of wicket is %d....%d bowl remaining..\n\n",run2,wicket2,bowl2);
						}
					else if (x==1)
						{
							printf("\n\nOH its a single...\n\n");
							run2=run2+1;
							bowl2=bowl2--;
							wicket2=wicket2;
							getch();
							system("cls");
							printf("\n\nCurrent score is %d run and fall of wicket is %d....%d bowl remaining..\n\n",run2,wicket2,bowl2);
						}
					else if (x==2)
						{
							printf("\n\nThey have scored a two....\n\n");
							run2=run2+2;
							bowl2=bowl2--;
							wicket2=wicket2;
							getch();
							system("cls");
							printf("\n\nCurrent score is %d run and fall of wicket is %d....%d bowl remaining..\n\n",run2,wicket2,bowl2);
						}
					else if (x==3)
						{
							printf("\n\nOH that was a good running by the batsmen!!!...its a three..\n\n");
							run2=run2+3;
							bowl2=bowl2--;
							wicket2=wicket2;
							getch();
							system("cls");
							printf("\n\nCurrent score is %d run and fall of wicket is %d....%d bowl remaining..\n\n",run2,wicket2,bowl2);
						}
					else if (x==4)
						{
							printf("\n\nThat was a good ball....Its a boundary....its 4...\n\n");
							run2=run2+4;
							bowl2=bowl2--;
							wicket2=wicket2;
							getch();
							system("cls");
							printf("\n\nCurrent score is %d run and fall of wicket is %d....%d bowl remaining..\n\n",run2,wicket2,bowl2);
						}
					else if (x==5)
						{
							printf("\n\nOH....Its a wide\n\n ");
							run2=run2+1;
							bowl2=bowl2;
							wicket2=wicket2;
							getch();
							system("cls");
							printf("\n\nCurrent score is %d run and fall of wicket is %d....%d bowl remaining..\n\n",run2,wicket2,bowl2);
						}
					else if (x==7)
						{
							printf("\n\nGreat mistake by the bowler.....Its a no ball\n\n");
							run2=run2+1;
							bowl2=bowl2;
							wicket2=wicket2;
							getch();
							system("cls");
							printf("\n\nCurrent score is %d run and fall of wicket is %d....%d bowl remaining..\n\n",run2,wicket2,bowl2);

						}
					else if (x==8)
						{
							printf("\n\n Wow it was a great ball...Its a good catch\n\n");
							run2=run2;
							bowl2=bowl2--;
							wicket2=wicket2+1;
							getch();
							system("cls");
							printf("\n\nCurrent score is %d run and fall of wicket is %d....%d bowl remaining..\n\n",run2,wicket2,bowl2);
						}
					else if (x==9)
						{
							printf("\n\nOH!!!!Its caught in behind\n\n");
							run2=run2;
							bowl2=bowl2--;
							wicket2=wicket2+1;
							getch();
							system("cls");
							printf("\n\nCurrent score is %d run and fall of wicket is %d....%d bowl remaining..\n\n",run2,wicket2,bowl2);
						}
					else if (x==10)
						{
							printf("\n\nIt was a great job by keeper!!!! stampping\n\n");
							run2=run2;
							bowl2=bowl2--;
							wicket2=wicket2+1;
							getch();
							system("cls");
							printf("\n\nCurrent s;6core is %d run and fall of wicket is %d....%d bowl remaining..\n\n",run2,wicket2,bowl2);
						}
					else if (x==11)
						{
							printf("\n\nIt is a great fielding by the fielder....its a run out\n\n");
							run2=run2;
							bowl2=bowl2--;
							wicket2=wicket2+1;
							getch();
							system("cls");
							printf("\n\nCurrent score is %d run and fall of wicket is %d....%d bowl remaining..\n\n",run2,wicket2,bowl2);

						}
					else if (x==12)
						{
							printf("\n\nIts a great bowled\n\n");
							run2=run2;
							bowl2=bowl2--;
							wicket2=wicket2+1;
							getch();
							system("cls");
							printf("\n\nCurrent score is %d run and fall of wicket is %d....%d bowl remaining..\n\n",run2,wicket2,bowl2);
						}

					if (wicket2==10)
					{
						break;
					}
				}

				printf("\n\nThe other team scored %d runs by losing %d wickets\n\n",run2,wicket2);
				score2=run2;
				getch();
				system("cls");

				if (score1>score2)
				{
					printf("\n\n\t\t\tCONGRTZ!!!!!! U hv won by %d runs\n\n",run-run2);
				}
				else
				{
					printf("\n\n\t\t\tSORRY!!!!!You Have lost by %d runs\n\n",run2-run);
				}

			}


			else
			{
				system("cls");
				printf("\n\n\n\t\t\tThe other team has selected to bat first.....\n\n\n\t\t\t\tso get ready to bowl.....\n\n\n");
				getch();
				system("cls");
				printf("\n\n\Every time press any key to play\n\n\n");
				getch();
				system("cls");
				printf("\n\n\t\t\tPress any key to Start\n\n\n");
				for (int j=1;j<10;j++)
				{
					getch();
					int x=rand()%13;

					if (x==6)
						{
							printf("\n\nIts a huge 6\n\n");
							run2=run2+6;
							bowl2=bowl2--;
							wicket2=wicket2;
							getch();
							system("cls");
							printf("\n\nCurrent score is %d run and fall of wicket is %d....%d bowl remaining..\n\n",run2,wicket2,bowl2);

						}
					else if (x==0)
						{
							printf("\n\nits a dott ball...!!!!\n\n");
							run2=run2;
							bowl2=bowl2--;
							wicket2=wicket2;
							getch();
							system("cls");
							printf("\n\nCurrent score is %d run and fall of wicket is %d....%d bowl remaining..\n\n",run2,wicket2,bowl2);
						}
					else if (x==1)
						{
							printf("\n\nOH its a single...\n\n");
							run2=run2+1;
							bowl2=bowl2--;
							wicket2=wicket2;
							getch();
							system("cls");
							printf("\n\nCurrent score is %d run and fall of wicket is %d....%d bowl remaining..\n\n",run2,wicket2,bowl2);
						}
					else if (x==2)
						{
							printf("\n\nThey have scored a two....\n\n");
							run2=run2+2;
							bowl2=bowl2--;
							wicket2=wicket2;
							getch();
							system("cls");
							printf("\n\nCurrent score is %d run and fall of wicket is %d....%d bowl remaining..\n\n",run2,wicket2,bowl2);
						}
					else if (x==3)
						{
							printf("\n\nOH that was a good running by the batsmen!!!...its a three..\n\n");
							run2=run2+3;
							bowl2=bowl2--;
							wicket2=wicket2;
							getch();
							system("cls");
							printf("\n\nCurrent score is %d run and fall of wicket is %d....%d bowl remaining..\n\n",run2,wicket2,bowl2);
						}
					else if (x==4)
						{
							printf("\n\nThat was a good ball....Its a boundary....its 4...\n\n");
							run2=run2+4;
							bowl2=bowl2--;
							wicket2=wicket2;
							getch();
							system("cls");
							printf("\n\nCurrent score is %d run and fall of wicket is %d....%d bowl remaining..\n\n",run2,wicket2,bowl2);
						}
					else if (x==5)
						{
							printf("\n\nOH....Its a wide\n\n ");
							run2=run2+1;
							bowl2=bowl2;
							wicket2=wicket2;
							getch();
							system("cls");
							printf("\n\nCurrent score is %d run and fall of wicket is %d....%d bowl remaining..\n\n",run2,wicket2,bowl2);
						}
					else if (x==7)
						{
							printf("\n\nGreat mistake by the bowler.....Its a no ball\n\n");
							run2=run2+1;
							bowl2=bowl2;
							wicket2=wicket2;
							getch();
							system("cls");
							printf("\n\nCurrent score is %d run and fall of wicket is %d....%d bowl remaining..\n\n",run2,wicket2,bowl2);

						}
					else if (x==8)
						{
							printf("\n\n Wow it was a great ball...Its a good catch\n\n");
							run2=run2;
							bowl2=bowl2--;
							wicket2=wicket2+1;
							getch();
							system("cls");
							printf("\n\nCurrent score is %d run and fall of wicket is %d....%d bowl remaining..\n\n",run2,wicket2,bowl2);
						}
					else if (x==9)
						{
							printf("\n\nOH!!!!Its caught in behind\n\n");
							run2=run2;
							bowl2=bowl2--;
							wicket2=wicket2+1;
							getch();
							system("cls");
							printf("\n\nCurrent score is %d run and fall of wicket is %d....%d bowl remaining..\n\n",run2,wicket2,bowl2);
						}
					else if (x==10)
						{
							printf("\n\nIt was a great job by keeper!!!! stampping\n\n");
							run2=run2;
							bowl2=bowl2--;
							wicket2=wicket2+1;
							getch();
							system("cls");
							printf("\n\nCurrent s;6core is %d run and fall of wicket is %d....%d bowl remaining..\n\n",run2,wicket2,bowl2);
						}
					else if (x==11)
						{
							printf("\n\nIt is a great fielding by the fielder....its a run out\n\n");
							run2=run2;
							bowl2=bowl2--;
							wicket2=wicket2+1;
							getch();
							system("cls");
							printf("\n\nCurrent score is %d run and fall of wicket is %d....%d bowl remaining..\n\n",run2,wicket2,bowl2);

						}
					else if (x==12)
						{
							printf("\n\nIts a great bowled\n\n");
							run2=run2;
							bowl2=bowl2--;
							wicket2=wicket2+1;
							getch();
							system("cls");
							printf("\n\nCurrent score is %d run and fall of wicket is %d....%d bowl remaining..\n\n",run2,wicket2,bowl2);
						}

					if (wicket2==10)
						{
							break;
						}
				}
				score2=run2;
				system("cls");
				printf("\n\n\n\t\t\tThe score is %d run and fall of wicket is %d\n\n\n",run2,wicket2);
				getch();
				system("cls");
				printf("\n\n\t\t\tNow the other team will bowl\n\n");
				getch();
				system("cls");
				printf("\n\nPress any key to play\n\n");
				for (int j=1;j<10;j++)
				{
					getch();
					int x=rand()%13;

					if (x==6)
						{
							printf("\n\nIts a huge 6\n\n");
							run=run+6;
							bowl=bowl--;
							wicket=wicket;
							getch();
							system("cls");
							printf("\n\nCurrent score is %d run and fall of wicket is %d....%d bowl remaining..\n\n",run,wicket,bowl);

						}
					else if (x==0)
						{
							printf("its a dott ball...!!!!\n");
							run=run;
							bowl=bowl--;
							wicket=wicket;
							getch();
							system("cls");
							printf("\n\nCurrent score is %d run and fall of wicket is %d....%d bowl remaining..\n\n",run,wicket,bowl);
						}
					else if (x==1)
						{
							printf("\n\nOH its a single...\n\n");
							run=run+1;
							bowl=bowl--;
							wicket=wicket;
							getch();
							system("cls");
							printf("\n\nCurrent score is %d run and fall of wicket is %d....%d bowl remaining..\n\n",run,wicket,bowl);
						}
					else if (x==2)
						{
							printf("\n\nThey have scored a two....\n\n");
							run=run+2;
							bowl=bowl--;
							wicket=wicket;
							getch();
							system("cls");
							printf("\n\nCurrent score is %d run and fall of wicket is %d....%d bowl remaining..\n\n",run,wicket,bowl);
						}
					else if (x==3)
						{
							printf("\n\nOH that was a good running...its a three..\n\n");
							run=run+3;
							bowl=bowl--;
							wicket=wicket;
							getch();
							system("cls");
							printf("\n\nCurrent score is %d run and fall of wicket is %d....%d bowl remaining..\n\n",run,wicket,bowl);
						}
					else if (x==4)
						{
							printf("\n\nIts a boundary....its 4...\n\n");
							run=run+4;
							bowl=bowl--;
							wicket=wicket;
							getch();
							system("cls");
							printf("\n\nCurrent score is %d run and fall of wicket is %d....%d bowl remaining..\n\n",run,wicket,bowl);
						}
					else if (x==5)
						{
							printf("\n\nIts a wide\n\n");
							run=run+1;
							bowl=bowl;
							wicket=wicket;
							getch();
							system("cls");
							printf("\n\nCurrent score is %d run and fall of wicket is %d....%d bowl remaining..\n\n",run,wicket,bowl);
						}
					else if (x==7)
						{
							printf("\n\nIts a no ball\n\n");
							run=run+1;
							bowl=bowl;
							wicket=wicket;
							getch();
							system("cls");
							printf("\n\nCurrent score is %d run and fall of wicket is %d....%d bowl remaining..\n\n",run,wicket,bowl);

						}
					else if (x==8)
						{
							printf("\n\nIts a catch\n\n");
							run=run;
							bowl=bowl--;
							wicket=wicket+1;
							getch();
							system("cls");
							printf("\n\nCurrent score is %d run and fall of wicket is %d....%d bowl remaining..\n\n",run,wicket,bowl);
						}
					else if (x==9)
						{
							printf("\n\nOH!!!!Its caught in behind\n\n");
							run=run;
							bowl=bowl--;
							wicket=wicket+1;
							getch();
							system("cls");
							printf("\n\nCurrent score is %d run and fall of wicket is %d....%d bowl remaining..\n\n",run,wicket,bowl);
						}
					else if (x==10)
						{
							printf("\n\nIt was a great job by keeper!!!! stampping\n\n");
							run=run;
							bowl=bowl--;
							wicket=wicket+1;
							getch();
							system("cls");
							printf("\n\nCurrent score is %d run and fall of wicket is %d....%d bowl remaining..\n\n",run,wicket,bowl);
						}
					else if (x==11)
						{
							printf("\n\nIt is an unfortunate run out\n\n");
							run=run;
							bowl=bowl--;
							wicket=wicket+1;
							getch();
							system("cls");
							printf("\n\nCurrent score is %d run and fall of wicket is %d....%d bowl remaining..\n\n",run,wicket,bowl);

						}
					else if (x==12)
						{
							printf("\n\nIts a great bowled\n\n");
							run=run;
							bowl=bowl--;
							wicket=wicket+1;
							getch();
							system("cls");
							printf("\n\nCurrent score is %d run and fall of wicket is %d....%d bowl remaining..\n\n",run,wicket,bowl);
						}

					if (wicket==10)
					{
						break;
					}
				}
				getch();
				system("cls");
				score1=run;
				printf("\n\n\n\t\t\tThe score is %d run and wicket is %d\n\n",run,wicket);
				getch();
				system("cls");
				if (score1>score2)
				{
					printf("\t\t\tCongrtz You have won the match By % wickets\n\n",10-wicket);
				}

				else
				{
					printf("\t\t\tSOrry You have lost the match by %d wickets\n\n",10-wicket);
				}


			}

			//system("cls");
		}
		//scanf("%d",&element[i]);

	}

	/*for (int j=1;j<10;j++)
	{
		getch();
		int x=rand()%13;

		if (x==6)
		{
			printf("Your run is 6\n");

		}
		else if (x==0)
		{
			printf("Your run is 0\n");
		}
		else if (x==1)
		{
			printf("Your run is 1\n");
		}
		else if (x==2)
		{
			printf("Your run is 2\n");
		}
		else if (x==3)
		{
			printf("Your run is 3\n");
		}
		else if (x==4)
		{
			printf("Your run is 4\n");
		}
		else if (x==5)
		{
			printf("Its a wide\n ");
		}
		else if (x==7)
		{
			printf("Its a no ball\n");

		}
		else if (x==8)
		{
			printf("Its a catch\n");
		}
		else if (x==9)
		{
			printf("Its caught behind\n");
		}
		else if (x==10)
		{
			printf("Its stampping\n");
		}
		else if (x==11)
		{
			printf("Its run out\n");

		}
		else if (x==12)
		{
			printf("Its bowled\n");
		}
	}*/
	getch();
}
