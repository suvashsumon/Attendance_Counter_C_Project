#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

// function for showing intro
int intro()
{
	printf("\n\n\t\t----------------------------------------------------------------------------------\n");
	printf("\t\t|                          Welcome to Attendence Counter                         |\n");
	printf("\t\t|                                                                                |\n");
	printf("\t\t|                                  Devloped By:                                  |\n");
	printf("\t\t|                               Suvash Kumar Sumon                               |\n");
	printf("\t\t|                           B.Sc.Engg(on going) in CSE                           |\n");
	printf("\t\t|                                   27th Batch                                   |\n");
	printf("\t\t|                              University of Rajshahi                            |\n");
	printf("\t\t|                          suvashkumar.naogaon@gmail.com                         |\n");
	printf("\t\t----------------------------------------------------------------------------------\n");
}
//function for compere choice....
int choice(int ch)
{
	if(ch==1) update();
	else if(ch==2) calculetion();
	else if(ch==3) show_log();
	//else if(choice==4)
}

//function for showing subject list
int sub_list()
{
	printf("\n\n\t\t1. Economics\n");
	printf("\t\t2. Statistics for Engineers\n");
	printf("\t\t3. Differential and Integral Calculus\n");
	printf("\t\t4. Applied Electricity and Magnetism\n");
	printf("\t\t5. Introduction to Digital Electronics\n");
	printf("\t\t6. Introduction to Digital Electronics Lab\n");
	printf("\t\t7. Object Oriented Programming\n");
	printf("\t\t8. Object Oriented Programming Lab\n\n");
}

//function for update attendance...
int update()
{
	FILE *file;
	int att_value, sub;
	char month[4], date[3];
	system("cls");
	intro();
	sub_list();
	printf("\t\tEnter Subject Choice: ");
	scanf("%d", &sub);
	printf("\n\t\tEnter Date(like - 02): ");
	scanf("%s", &date);
	printf("\n\t\tEnter Month(like - Jun): ");
	scanf("%s", &month);
	printf("\n\t\tEnter Attendance Type(0 for absent, 1 for present): ");
	scanf("%d", &att_value);
	system("cls");
	intro();
	printf("\n\n\t\tAttendence updated successfully....\n");
	if(sub==1)
	{
		file=fopen("econ1211.txt","a");
	}
	else if(sub==2)
	{
		file=fopen("stat1211.txt","a");
	}
	else if(sub==3)
	{
		file=fopen("math1211.txt","a");
	}
	else if(sub==4)
	{
		file=fopen("phy1221.txt","a");
	}
	else if(sub==5)
	{
		file=fopen("cse1211.txt","a");
	}
	else if(sub==6)
	{
		file=fopen("cse1212.txt","a");
	}
	else if(sub==7)
	{
		file=fopen("cse1221.txt","a");
	}
	else if(sub==8)
	{
		file=fopen("cse1222.txt","a");
	}
	fprintf(file,"\n%s %s %d", date, month, att_value);
	fclose(file);
	conti();
}

//function for calculetion
int calculetion()
{
	FILE *file;
	int date, att_value, att=0, clas=0, i, sub;
	char month[5];
	int persentage;
	system("cls");
	intro();
	sub_list();
	printf("\t\tEnter Subject Choice: ");
	scanf("%d", &sub);
	system("cls");
	intro();
	if(sub==1)
	{
		file=fopen("econ1211.txt","r");
		printf("\n\t\tSubject: Economics\n");
	}
	else if(sub==2)
	{
		file=fopen("stat1211.txt","r");
		printf("\n\t\tSubject: Statistics for Engineers\n");
	}
	else if(sub==3)
	{
		file=fopen("math1211.txt","r");
		printf("\n\t\tSubject: Differential and Integral Calculus\n");
	}
	else if(sub==4)
	{
		file=fopen("phy1221.txt","r");
		printf("\n\t\tSubject: Applied Electricity and Magnetism\n");
	}
	else if(sub==5)
	{
		file=fopen("cse1211.txt","r");
		printf("\n\t\tSubject: Introduction to Digital Electronics\n");
	}
	else if(sub==6)
	{
		file=fopen("cse1212.txt","r");
		printf("\n\t\tSubject: Introduction to Digital Electronics Lab\n");
	}
	else if(sub==7)
	{
		file=fopen("cse1221.txt","r");
		printf("\n\t\tSubject: Object Oriented Programming\n");
	}
	else if(sub==8)
	{
		file=fopen("cse1222.txt","r");
		printf("\n\t\tSubject: Object Oriented Programming Lab\n");
	}
	while(!feof(file))
	{
		fscanf(file,"%d%s%d",&date, &month, &att_value);
		att=att+att_value;
		clas++;
	}
	fclose(file);
	persentage=(att*100)/clas;
	printf("\t\tYour total class attendance is: %d out of %d\n", att, clas);
	printf("\t\tYour attendence in percentage: %d persent\n\n", persentage);
	conti();
}

//function for see details
int show_log()
{
	char log[9];
	int sub;
	FILE *file;
	system("cls");
	intro();
	sub_list();
	printf("\t\tEnter Subject Choice: ");
	scanf("%d", &sub);
	system("cls");
	intro();
	if(sub==1)
	{
		file=fopen("econ1211.txt","r");
		printf("\n\t\tSubject: Economics\n");
	}
	else if(sub==2)
	{
		file=fopen("stat1211.txt","r");
		printf("\n\t\tSubject: Statistics for Engineers\n");
	}
	else if(sub==3)
	{
		file=fopen("math1211.txt","r");
		printf("\n\t\tSubject: Differential and Integral Calculus\n");
	}
	else if(sub==4)
	{
		file=fopen("phy1221.txt","r");
		printf("\n\t\tSubject: Applied Electricity and Magnetism\n");
	}
	else if(sub==5)
	{
		file=fopen("cse1211.txt","r");
		printf("\n\t\tSubject: Introduction to Digital Electronics\n");
	}
	else if(sub==6)
	{
		file=fopen("cse1212.txt","r");
		printf("\n\t\tSubject: Introduction to Digital Electronics Lab\n");
	}
	else if(sub==7)
	{
		file=fopen("cse1221.txt","r");
		printf("\n\t\tSubject: Object Oriented Programming\n");
	}
	else if(sub==8)
	{
		file=fopen("cse1222.txt","r");
		printf("\n\t\tSubject: Object Oriented Programming Lab\n");
	}
	printf("\n\n\t\tYour Attedence Logs........\n\n");
	while(!feof(file))
	{
		fgets(log,8,file);
		printf("\t\t");
		puts(log);
	}
	fclose(file);
	printf("\n\n\t\t");
	conti();
}

// function for reverse steps
int rev()
{
	int ch;
	
	intro();
	printf("\n\n\t\t1. Update\n");
	printf("\t\t2. Calculetion\n");
	printf("\t\t3. Show Log\n");
	printf("\t\tEnter your choice(1/2/3): ");
	scanf("%d", &ch);
	if(ch>0 && ch<4) choice(ch);
	else 
	{
		system("cls");
		printf("\n\n\t\tInvalid Response!!!!");
	}
}

//function for continue
int conti()
{
	int con;
	printf("\n\n\t\tWant to continue?(1. Yes): ");
	scanf("%d", &con);
	if(con==1)
	{
		system("cls");
		rev();
	}
}

//Passward cheak
int password()
{
	char un[10];
	char pass[10];
	printf("\n\n\t\tUser Name: ");
	scanf("%s",&un);
	printf("\n\t\tPassword: ");
	scanf("%s", &pass);
	
	if(strcmp(un,"SK")==0 && strcmp(pass,"sk01717")==0)
	{
		system("cls");
		rev();
	}
	else
	{
		system("cls");
		intro();
		printf("\n\n\t\tWrong Username or Password.....\n\t\tTry Again.....\n\t\t");
		password();
		
	}
}
int main()
{
	system("COLOR FC");
	intro();
	password();
	getch();
}
