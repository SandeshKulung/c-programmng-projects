#include<stdio.h>
#include<stdlib.h>
#include<windows.h>//for beep sound
#include<dos.h>
#include<conio.h>
#include<time.h>//to show current time and date
void calendar();
void seereminder();
void dateandtime();
void storebirthdate();
int startingweekday(int year){
	int day;
	day=(((year-1)*365)+((year-1)/4)-((year-1)/100)+((year)/400)+1)%7;//calculates the starting week day of each month
	return day;
}
int main(){
	int choose;
	char loop='n',screen;
	while(loop=='n'){
	printf("press\n1:Display year calendar\n2:current date and time\n3:Store birth date\n4:see reminder\n5:exit\n");
	scanf("%d",&choose);
	switch(choose){
		case 1:
			calendar();
			break;
			case 2:
				dateandtime();
				break;
				case 3:
					storebirthdate();
					break;
					case 4:
						seereminder();
						break;
					case 5:
						getchar();
						printf("Do you really want to exit y/n\n");
						
						scanf("%c",&loop);
						system("cls");
						break;
						
							
						default:
							printf("please enter the valid number\n");
							break;
	}
	
		
}
}
void calendar(){
	system("cls");
	system("color 3F");
	char screen;
	char contin='y';
	int year,month,day,daysinmonth,weekday=0,startingday;
	char *months[]={"January","Feburary","March","April","May","June","July","August","September","October","November","December"};
	int monthday[]={31,28,31,30,31,30,31,31,30,31,30,31};
	printf("enter the year");
	scanf("%d",&year);
	if((year%4==0&&year%100!=0)||year%400==0){//calculates the leap year 
	monthday[1]=29;
	}
	startingday=startingweekday(year);
		
	system("cls");
	for(month=0;month<12;month++){
		printf("...................%s..........................\n",months[month]);
		printf("\n   Sun  Mond  Tue Wed  Thur  Fri Sat\n");
		daysinmonth=monthday[month];
		
		for(weekday=0;weekday<startingday;weekday++)
		printf("     ");//to display the number of dates in order
		
		for(day=1;day<=daysinmonth;day++){
			printf("%5d",day);
			if(++weekday>6){
				printf("\n");
				weekday=0;
			}
			startingday=weekday;
		}
	printf("\n");
	getch();
	
	system("cls");

	}
	


}
void dateandtime(){
	system("cls");//clears the screen 
	system("color 0F");//gives color to the terminal
	int day,month,year;
	time_t td;
	time(&td);
	struct tm *local=localtime(&td);//to calculate to show the standard date 
	day=local->tm_mday;
	month=local->tm_mon+1;
	year=local->tm_year+1900;
	printf("\n\n\n.......................................Current date is:...........................................................\n");
	printf("\t\t\t\t\t%d/%d/%d\n\n",day,month,year);
	printf(".......................................Date and time is:.............................................................\n");
	printf("\t\t\t\t%s\n",ctime(&td));
	getch();
	system("cls");
}
struct reminder{
		char name[100];
		int day,month,year;
	};
void storebirthdate(){
	system("cls");
	
	FILE *fp;
	struct reminder a[50];
	char choose;
	int count,i;
	fp=fopen("data.txt","w");
		getchar();
	printf("want to store friends birthdate y/n\n");
	scanf("%c",&choose);

	while(choose=='y'){
		//fprintf(fp,"Name\t\tdate of birth\n");
		printf("how many data do you want to store\n");
		scanf("%d",&count);
		fprintf(fp,"%d\n",count);
		for(i=0;i<count;i++){
		printf("enter the name of your friend\n");
		gets(a[i].name);
		gets(a[i].name);
		fprintf(fp,"%s",a[i].name);
		printf("enter dd/mm/yy of the birth date\n");
		scanf("%d%d%d",&a[i].day,&a[i].month,&a[i].year);
		fprintf(fp,"\t\t%d/%d/%d\n",a[i].day,a[i].month,a[i].year);
		fprintf(fp,"\n\t\t%d\t%d\n",a[i].day,a[i].month);
	}

	getchar();
	printf("do you want to store again y/n\n");
	scanf("%c",&choose);
	
	}
	
	fclose(fp);
	system("cls");
	
}
struct name{
	char name[100];
	char name1[100];
};
void seereminder(){
	system("cls");
	FILE *fp;
	struct name a[5];
	int day,month,year;
	int i,count,comparevalue[20],count1;
	int comparevalue1[20];
	time_t bd;
	time(&bd);
	struct tm *local=localtime(&bd);
	day=local->tm_mday;
	month=local->tm_mon+1;
	year=local->tm_year+1900;
	printf("%d/%d",day,month);
	fp=fopen("data.txt","r");
	printf("the data of birthday are:\n");
	//scanf("%d",&count);
	fscanf(fp,"%d",&count1);
	count=count1;
	for(i=0;i<count;i++){
		fscanf(fp,"%s",&a[i].name);
		printf("%s",a[i].name);
		fscanf(fp,"%s",&a[i].name1);
		printf("\t%s\n",a[i].name1);
		fscanf(fp,"%d%d",&comparevalue[i],&comparevalue1[i]);
		printf("day=%d\tmonth=%d\n",comparevalue[i],comparevalue1[i]);//prints day and month of the birthdate respectively
		getch();
	if(comparevalue[i]==day&&comparevalue1[i]==month){
		Beep(2000,500);
		printf("HAPPY BIRTHDAY %s\n",a[i].name);
	}
	getch();
}
	fclose(fp);
	getch();
	system("cls");
}

