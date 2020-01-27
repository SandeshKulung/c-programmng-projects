#include<stdio.h>
#include<string.h>
int main(){
	int a[10][2],noofseats,h,origin[30];
	int i,j,k=20,seatnumber,totalprice,seatss,actual[20];
	char originplace[100],destination[100];
	char password[]="cproject",username[100],password1[100];
	printf("enter your user name or mobile number\n");
	gets(username);
	printf("enter your password\n");
	gets(password1);
	if(strcmp(password1,password)==0){
		printf("..logged in successfully..\n");
	origin[0]=0;
    printf("enter your origin place\n");
    scanf("%s",&originplace);
    printf("enter your destination place\n");
    scanf("%s",&destination);
    printf("....%s to %s...\n",originplace,destination);
	printf("......seats.....\n");
	for(i=0;i<10;i++){
		for(j=0;j<2;j++){
			a[i][j]=k;
			if(k<10){
				printf("  | %d|",a[i][j]);
			}
			else{
			printf("  |%d|",a[i][j]);
			
		}
		k-=1;
		}
		printf("\n");
	}
	printf("the ticket price per seat is:Rs1000\n ");
	printf("how many seats do you want\n");
	scanf("%d",&noofseats);
	totalprice=noofseats*1000;
	for(h=1;h<=noofseats;h++){
		printf("choose your seat numbers\n");
		scanf("%d",&seatnumber);
		origin[h]=seatnumber;
		actual[h]=seatnumber;	
		for(j=0;j<h;j++){
			if(origin[h]==origin[j]){
				while(origin[h]==origin[j]){
				printf("seat already booked\n");
				printf("choose seat nubmer again\n");
				scanf("%d",&origin[j]);
				seatnumber=origin[j];
				actual[h]=seatnumber;
			}
		}
		}
		switch(seatnumber){
			case 1:
				printf("seat booked\n");
				break;
				case 2:
				printf("seat booked\n");
				break;
				case 3:
				printf("seat booked\n");
				break;
				case 4:
				printf("seat booked\n");
				break;
				case 5:
				printf("seat booked\n");
				break;
				case 6:
				printf("seat booked\n");
				break;
				case 7:
				printf("seat booked\n");
				break;
				case 8:
				printf("seat booked\n");
				break;
				case 9:
				printf("seat booked\n");
				break;
				case 10:
				printf("seat booked\n");
				break;
				case 11:
				printf("seat booked\n");
				break;
				case 12:
				printf("seat booked\n");
				break;
				case 13:
				printf("seat booked\n");
				break;
				case 14:
				printf("seat booked\n");
				break;
				case 15:
				printf("seat booked\n");
				break;
				case 16:
				printf("seat booked\n");
				break;
				case 17:
				printf("seat booked\n");
				break;
				case 18:
				printf("seat booked\n");
				break;
				case 19:
				printf("seat booked\n");
				break;
				case 20:
				printf("seat booked\n");
				break;
				default:
					printf("invalid seat number\n");
		}
	}
	seatss=totalprice/1000;
	
	printf("you have booked %d seats\n",seatss);
	printf("your confirmed seat booked are:\n");
	for(h=1;h<=noofseats;h++){
		printf("\t%d",actual[h]);
	}
	
	printf("\nthe total price you need to pay is:Rs%d\n",totalprice);
	
}
else{
	printf("incorrect password/username\nplease try again\n");
}
	return 0;
}
