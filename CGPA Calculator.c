#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
struct courses
{
    char code[8];
    char name[30];
    float gpa;
}c;
struct studentinfo
{
    char nickname[50];
    char id[15];
    char username[10];
    char password[10];
    char email[30];
    int contactnum;

} si;
void fordelay(int j);
void menu();
void cgpa(int s);
void sgpa(int c);
void simple_calculator();
void grade();
void about();
void add_course();
void show_courses();
void record();
void login();
void registration();
void gateway();
int main()
{
    int i,choice,semester,courses,c;
    printf("\n\n\n\n\n\n\n\t\t\tPress any key to start......");
    getch();
    system("cls");
    system("color E");
    printf("\n\n\n\n\n\n\n\n\t\t\tLOADING");
    for(i=0;i<=6;i++)
        {
            fordelay(100000000);
            printf(". ");
        }
        printf("\n");
    while(1)
    {
        system("cls");
        system("color 3");
        menu();
        scanf("%d",&choice);
        system("cls");
        switch(choice)
        {
        case 1:
            c=1;
            while(c)
            {
                system("cls");
                system("color B");
                printf("                           !!!!!!Calculate CUMULATIVE GRADE POINT AVERAGE(CGPA)!!!!!!\n\n\n");
                printf("Enter no. of semester(1-12): ");
                scanf("%d",&semester);
                    if(semester<1 || semester>12)
                    {
                        system("color 4");
                        printf("\n\nWrong choice!\nYour semester is not more/less than 1-12.\n\n\n");
                        printf("Press 1 to continue, 0 to main menu....");
                        scanf("%d",&c);
                        continue;
                    }
                    else
                    {
                        system("cls");
                        system("color B");
                        cgpa(semester);
                        system("pause");
                        break;
                    }
            }
            break;
        case 2:
            c=1;
            while(c)
            {
                system("cls");
                system("color B");
                printf("                           !!!!!!Calculate SEMESTER-WISE GRADE POINT AVERAGE(SGPA)!!!!!!\n\n\n");
                printf("Enter no. of Courses(1-12): ");
                scanf("%d",&courses);
                    if(courses<2 || courses>10)
                    {
                        system("color 4");
                        printf("\n\nWrong choice!\nPlease enter valid information.\n\n\n");
                        printf("Press 1 to continue, 0 to main menu....");
                        scanf("%d",&c);
                        continue;
                    }
                    else
                    {
                        system("cls");
                        system("color B");
                        sgpa(courses);
                        system("pause");
                        break;
                    }
            }
            break;
        case 3:
            simple_calculator();
            break;
        case 4:
            system("color A");
            grade();
            break;
        case 5:
            gateway();
            break;
        case 6:
            about();
            break;
        case 0:
            system("color D");
            printf("\n\n\n\n\t\t\tHave a nice day!\n\t\t\tSee you.\n\n\n\n\n");
            exit(0);
        default :
            system("cls");
            system("color 4");
            printf("\n\nWrong choice!\nPlease Enter a valid no.\n\n\n");
            system("pause");
        }
    }



    return 0;
}
void fordelay(int j)
{   int i,k;
    for(i=0;i<j;i++)
         k=i;
}
void menu()
{
    printf("\t\t======================================\n");
    printf("\t\t||==================================||\n");
    printf("\t\t||CCC||DIU CGPA/SGPA CALCULATOR||CCC||\n");
    printf("\t\t||                                  ||\n");
    printf("\t\t||                                  ||\n");
    printf("\t\t||      1.CALCULATE CGPA            ||\n");
    printf("\t\t||                                  ||\n");
    printf("\t\t||      2.CALCULATE SGPA            ||\n");
    printf("\t\t||                                  ||\n");
    printf("\t\t||      3.SIMPLE CALCULATION        ||\n");
    printf("\t\t||                                  ||\n");
    printf("\t\t||      4.DIU GRADING SYSTEM        ||\n");
    printf("\t\t||                                  ||\n");
    printf("\t\t||      5.LOGIN                     ||\n");
    printf("\t\t||                                  ||\n");
    printf("\t\t||      6.ABOUT                     ||\n");
    printf("\t\t||                                  ||\n");
    printf("\t\t||      0.EXIT                      ||\n");
    printf("\t\t||                                  ||\n");
    printf("\t\t||NB: To see your previous record or||\n");
    printf("\t\t||save your courses/gpa login first.||\n");
    printf("\t\t||==================================||\n");
    printf("\t\t||..................................||\n");
    printf("\n\t\tPress 1/2/3/4/5/6/0 what do you want: ");

}
void cgpa(int s)
{
    int i,credit,sumc=0;
    float gpa,sumgc,sumg=0,tcgpa;
        printf("                           !!!!!!Calculate CUMULATIVE GRADE POINT AVERAGE(CGPA)!!!!!!\n\n\n");
        printf("Please enter no. of %d semester information consecutively.\n",s);
        printf("-------------------------");
        for(i=1;i<=s;i++)
        {
            printf("\nsemester %d  |   GPA: ",i);
            scanf("%f",&gpa);
            printf("            |CREDIT: ",i);
            scanf("%d",&credit);
            sumc+=credit;
            sumgc=gpa*credit;
            sumg+=sumgc;
            printf("-------------------------");
        }
    //}
    tcgpa=sumg/sumc;
    printf("\n\n\tYour CGPA is %.2f\n\n\n",tcgpa);

}
void sgpa(int c)
{
    int i,credit,sumc=0;
    float gpa,sumgc,sumg=0,tsgpa;
        system("cls");
        printf("                           !!!!!!Calculate SEMESTER-WISE GRADE POINT AVERAGE(SGPA)!!!!!!\n\n\n");
        printf("Please enter the no. of %d courses information consecutively.\n",c);
        printf("-------------------------");
        for(i=1;i<=c;i++)
        {
            printf("\nCourse %d  |   GPA: ",i);
            scanf("%f",&gpa);
            printf("            |CREDIT: ",i);
            scanf("%d",&credit);
            sumc+=credit;
            sumgc=gpa*credit;
            sumg+=sumgc;
            printf("-------------------------");
        }
    //}
    tsgpa=sumg/sumc;
    printf("\n\n\tYour SGPA is %.2f\n\n\n",tsgpa);

}
void simple_calculator()
{

    int item,i,mod1,mod2,mod,absv,c=1;
    char o;
    double add=0,sub,mul=1,div,temp,temp1,sq;
    while(c){
    system("cls");
    system("color 7");
    printf("                           !!!!!!SIMPLE MATHEMATICS CALCULATOR!!!!!!\n\n\n");
    printf("Operations:\n");
    printf("\t\t--------------------\n");
    printf("\t\t( + )( - )( x )( / )\n");
    printf("\t\t--------------------\n");
    printf("\t\tPow(^) Mod(m) Abs(a)\n");
    printf("\t\t--------------------\n");
    printf("\t\t   Square root(s)\n");
    printf("\t\t--------------------\n");
    printf("\nEnter the sign which operation you want to do: ");
    getchar();
    scanf("%c",&o);
    switch(o)
    {
    case '+':
        printf("\nHow many item you want to add: ");
        scanf("%d",&item);
        for(i=1;i<=item;i++)
        {
            printf("Enter value %d: ",i);
            scanf("%lf",&temp);
            add+=temp;
        }
        printf("\nSummation = %.2lf\n\n",add);
        printf("\nMultiplication = %.2lf\n\n",mul);
        printf("Press 1 to continue, 0 to main menu....");
        scanf("%d",&c);
        break;
    case '-':
            printf("\nEnter value 1: ");
            scanf("%lf",&temp);
            printf("\nEnter value 2: ");
            scanf("%lf",&temp1);
            sub=temp-temp1;
            printf("\nSubstraction = %.2lf\n\n",sub);
        printf("\nMultiplication = %.2lf\n\n",mul);
        printf("Press 1 to continue, 0 to main menu....");
        scanf("%d",&c);
            break;
    case '*':
        printf("\nHow many item you want to multiplicate: ");
        scanf("%d",&item);
        for(i=1;i<=item;i++)
        {
            printf("Enter value %d: ",i);
            scanf("%lf",&temp);
            mul*=temp;
        }
        printf("\nMultiplication = %.2lf\n\n",mul);
        printf("Press 1 to continue, 0 to main menu....");
        scanf("%d",&c);
        break;
    case '/':
        printf("\nEnter value 1: ");
        scanf("%lf",&temp);
        printf("\nEnter value 2: ");
        scanf("%lf",&temp1);
        div=temp/temp1;
        printf("\nDivision = %.2lf\n\n",div);
        printf("Press 1 to continue, 0 to main menu....");
        scanf("%d",&c);
            break;
    case '^':
        printf("\nEnter value 1: ");
        scanf("%lf",&temp);
        printf("\nEnter value 2: ");
        scanf("%lf",&temp1);
        printf("\nPower = %.2lf\n\n",pow(temp,temp1));
        printf("Press 1 to continue, 0 to main menu....");
        scanf("%d",&c);
            break;
    case 'm':
        printf("\nEnter value 1: ");
        scanf("%d",&mod1);
        printf("\nEnter value 2: ");
        scanf("%d",&mod2);
        mod=mod1%mod2;
        printf("\nModulus = %d\n\n",mod);
        printf("Press 1 to continue, 0 to main menu....");
        scanf("%d",&c);
            break;
    case 'M':
        printf("\nEnter value 1: ");
        scanf("%d",&mod1);
        printf("\nEnter value 2: ");
        scanf("%d",&mod2);
        mod=mod1%mod2;
        printf("\nModulus = %d\n\n",mod);
        printf("Press 1 to continue, 0 to main menu....");
        scanf("%d",&c);
            break;
    case 'a':
        printf("\nEnter the value: ");
        scanf("%d",&absv);
        printf("\nAbsulate = %d\n\n",abs(absv));
        printf("Press 1 to continue, 0 to main menu....");
        scanf("%d",&c);
        break;
    case 'A':
        printf("\nEnter the value: ");
        scanf("%d",&absv);
        printf("\nAbsulate = %d\n\n",abs(absv));
        printf("Press 1 to continue, 0 to main menu....");
        scanf("%d",&c);
        break;
    case 's':
        printf("\nEnter the value: ");
        scanf("%lf",&sq);
        printf("\nSquare root = %.2lf\n\n",sqrt(sq));
        printf("Press 1 to continue, 0 to main menu....");
        scanf("%d",&c);
        break;
    case 'S':
        printf("\nEnter the value: ");
        scanf("%lf",&sq);
        printf("\nSquare root = %.2lf\n\n",sqrt(sq));
        printf("Press 1 to continue, 0 to main menu....");
        scanf("%d",&c);
        break;
    default:
        system("cls");
        system("color 4");
        printf("                           !!!!!!SIMPLE MATHEMATICS CALCULATOR!!!!!!\n\n\n");
        printf("\n\nWrong choice!\nPlease enter a correct sign.\n\n\n");
        printf("Press 1 to continue, 0 to main menu....");
        scanf("%d",&c);
    }
    }

}
void grade()
{
    printf("                        !!!!!!Daffodil International University GRADING SYSTEM!!!!!!\n\n\n");
    printf("Marks obtained out of 100     Grade    Grade point      Remarks\n");
    printf("                                       Equivalent\n\n");
    printf("80 and above                  A+         4.00 	        Outstanding\n\n");
    printf("75 to less than 80            A 	 3.75           Excellent\n\n");
    printf("70 to less than 75            A- 	 3.50 	        Very Good\n\n");
    printf("65 to less than 70            B+ 	 3.25 	        Good\n\n");
    printf("60 to less than 65            B 	 3.00 	        Satisfactory\n\n");
    printf("55 to less than 60            B- 	 2.75           Above Average\n\n");
    printf("50 to less than 55            C+ 	 2.50 	        Average\n\n");
    printf("45 to less than 50            C 	 2.25 	        Below Average\n\n");
    printf("40 to less than 45            D 	 2.00 	        Pass\n\n");
    printf("Less than 40                  F          0.00 	        Fail\n\n");
    system("pause");

}
void about()
{
    int choice,c;
    while(c)
    {
        system("cls");
        system("color 7");
        printf("                           !!!!!!ABOUT US!!!!!!\n\n\n");
        printf("\n\t\t\t1. About Developer.\n");
        printf("\n\t\t\t0. Main Menu.\n\n");
        printf("\t\tEnter 1/0 what do you want: ");
        scanf("%d",&choice);
        switch(choice)
        {
        case 0:
            return;
        case 1:
            system("cls");
            system("color A");
            printf("                           !!!!!!ABOUT DEVELOPER!!!!!!\n\n\n");
            printf("Md. Mansurul Hakim Shakib\n\nID: 191-35-2723\nDept. of Software Engineering\n");
            printf("Daffodil International University\n\n\n");
            system("pause");
            break;
        default:
            system("cls");
            system("color 4");
            printf("\n\nWrong choice!\nPlease Enter a valid no.\n\n\n");
            printf("Press 1 to continue, 0 to main menu....");
            scanf("%d",&c);
        }
    }

}
void add_course()
{
    FILE *fp;
    system("cls");
    printf("                           !!!!!!ADD COURSE!!!!!!\n\n\n");
    getchar();
    printf("\n\nSubject code:");
    scanf("%s",c.code);
    printf("\n\nSubject name:");
    scanf("%s",c.name);
    printf("\n\nGPA:");
    scanf("%f",&c.gpa);
    fp=fopen("course.txt","a");
    	if(fp == NULL)
	{
		printf("File not Found\n");
		system("pause");
		return;
	}
	else
	{
		fprintf(fp,"%s %s %s %.2f\n",si.username,c.code,c.name,c.gpa);
		printf("\n\nCourse added successfull!\n\n");
	}
		printf("\n");
    fclose(fp);

}
void show_courses()
{
    	FILE *fp;

	char ch[10],line[80];
	fp = fopen("course.txt","r");
	if(fp == NULL)
	{
		printf("file does not found !");
		return;

	}
	else
	{
	    printf("Hey %s, your courses are here!\n\n ",si.nickname);
		while((fgets(line,80,fp)) != NULL)
		{

			sscanf(line,"%s %s %s %f",ch,c.code,c.name,&c.gpa);
			if(strcmp(ch,si.username) == 0)
			{
				printf("\n%s\t%s\t%.2f\n",c.code,c.name,c.gpa);

			}
		}
		if(strcmp(ch,si.username) != 0)
        {
            printf("\nSorry! you have no added courses\n\n");
            system("pause");
            return;
        }

	}

	fclose(fp);
}
void record()
{
    int choice,c=1;
    while(c)
    {
        system("cls");
        system("color 7");
        printf("                           !!!!!!RECORD!!!!!!\n\n\n");
        printf("\n\t\t\t1. Add courses.\n");
        printf("\n\t\t\t2. Show all previous courses.\n");
        printf("\n\t\t\t0. Cancel.\n\n\n");
        printf("\t\tEnter 1/2/0 what do you want: ");
        scanf("%d",&choice);
        switch(choice)
        {
        case 0:
            return;
        case 1:
            system("cls");
            add_course();
            system("pause");
            break;
        case 2:
            system("cls");
            show_courses();
            printf("\n\n");
            system("pause");
            break;
        default:
            system("cls");
            system("color 4");
            printf("\n\nWrong choice!\nPlease Enter a valid no.\n\n\n");
            printf("Press 1 to continue, 0 to back....");
            scanf("%d",&c);
        }
    }
}
void login()
{
	int a=0,i=0;
    char line[80];
    char username[10],password[10],c;
    do
{
	FILE *fp;
	system("cls");
	printf("                           !!!!!!LOGIN GATEWAY!!!!!!\n\n\n");
	getchar();
	printf("Username :");
	gets(username);

	fp = fopen("registration.txt","r");
	if(fp == NULL)
	{
		printf("\nPlease registration first!\n\n\n");
		return;

	}
	else
	{
		while((fgets(line,80,fp)) != NULL)
		{
			sscanf(line,"%s %s %s %s %d %s",si.nickname,si.id,si.username,si.password,&si.contactnum,si.email);
			if(strcmp(si.username,username) == 0)
			{
            printf("Password: ");
            while(i<10)
            {
                password[i]=getch();
                c=password[i];
                if(c==13) break;
                else printf("*");
                i++;
            }
                password[i]='\0';
                i=0;
                if(strcmp(username,si.username)==0 && strcmp(password,si.password)==0)
                    {

                    printf("\n\n\n\n\t\tLOADING");
                        for(i=0;i<=6;i++)
                            {
                                fordelay(100000000);
                                printf(". ");
                            }
                    printf("\n");

                printf("  \n\n\nLOGIN IS SUCCESSFUL!!!\n");
                system("pause");
                record();
                return;
                    }
            else
            {
                printf("\n\n\n       SORRY !!!!LOGIN IS UNSUCESSFUL..WRONG USERNAME/PASSWORD..PLEASE TRY AGAIN.");
                a++;
                getch();
            }
			}
		}
		if(strcmp(si.username,username) != 0)
        {
            printf("\n\n\nUsername is not found\nPlease registration first!\n\n");
            system("pause");
        }

	}

	fclose(fp);

}while(a<=2);
	if (a>2)
        {
		printf("\nSORRY YOU HAVE ENTERED WRONG USERNAME/PASSWORD FOR THREE TIMES.\nPLEASE TRY AGAIN LATER!!");
		getch();
		return;
		}

}
void registration()

{
    system("cls");
    FILE *reg;
    printf("                           !!!!!!REGISTRATION GATEWAY!!!!!!\n\n\n");
    printf("\n\t\t\tPlease fill all the information carefully.\n");
    getchar();
    printf("Nick Name: ");
    scanf("%s",si.nickname);
    getchar();
    printf("Student ID: ");
    gets(si.id);
    getchar();
    printf("Username : ");
    scanf("%s",si.username);
    getchar();
    printf("Password: ");
    gets(si.password);
    getchar();
    printf("Contact Number: ");
    scanf("%d",&si.contactnum);
    getchar();
    printf("Email: ");
    gets(si.email);

	reg=fopen("registration.txt","a");

	if(reg == NULL)
	{
		printf("File not Found\n");
		system("pause");
		return;
	}
	else
	{
		fprintf(reg,"%s %s %s %s %d %s \n",si.nickname,si.id,si.username,si.password,si.contactnum,si.email);
		printf("Recorded Successfully");
	}
		printf("\n");
	fclose(reg);
	return;
}
void gateway()
{
    int choice,c=1;
    while(c)
    {
        system("cls");
        system("color 7");
        printf("                           !!!!!!LOGIN & REGISTRATION!!!!!!\n\n\n");
        printf("\n\t\t\t1. Login.\n");
        printf("\n\t\t\t2. Registration.\n");
        printf("\n\t\t\t0. Cancel.\n");
        printf("\n\n\n\t\tIf you don't regester yet,\n\t\tPlease regester first!\n\n\n");
        printf("\t\tEnter 1/2/0 what do you want: ");
        scanf("%d",&choice);
        switch(choice)
        {
        case 0:
            return;
        case 1:
            system("cls");
            login();
            system("pause");
            break;
        case 2:
            system("cls");
            registration();
            system("pause");
            break;
        default:
            system("cls");
            system("color 4");
            printf("\n\nWrong choice!\nPlease Enter a valid no.\n\n\n");
            printf("Press 1 to continue, 0 to main menu....");
            scanf("%d",&c);
        }
    }
}
