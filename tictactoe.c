# include<stdio.h>
# include<string.h>
int main(){
	int i,j,n=1,win,h;
	char tic_toc[9],grid[3][3],choose;
	char name1[100],name2[100],player[100];
	int player1,player2,first_choose;
	printf("enter the name of first player\n");
	gets(name1);
	
	printf("enter the name of second player\n");
	
	gets(name2);
	printf("choose 1 as head or 0 as tail\n");
scanf("%d",&player1);
printf("another choose\n");
scanf("%d",&player2);
first_choose=rand()%2;
printf("%d\n",first_choose);
if(first_choose==player1){
	printf("%s will start first\n",name1);
	strcpy(player,name1);
	printf("choose either o or x\n");
	getchar();
	scanf("%c",&tic_toc[n]);
	}
else{
	printf("%s will start first\n",name2);
	strcpy(player,name2);
		printf("choose either o or x\n");
		getchar();
	scanf("%c",&tic_toc[n]);
}
	printf("Grid\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			getchar();
			scanf("%c",&grid[i][j]);
		}
	}
	for(i=0;i<3;i++){
	      for(j=0;j<3;j++){
	printf("%c\t",grid[i][j]);
}
printf("\n");
}	
while(n<=9){
	printf("choose number %s\n",player);
	getchar();
scanf("%c",&choose);
	switch(choose){
		case '1':grid[0][0]=tic_toc[n];
		for(i=0;i<3;i++){
	      for(j=0;j<3;j++){
	printf("%c\t",grid[i][j]);
}
printf("\n");
}
		break;
		case '2': grid[0][1]=tic_toc[n];
		for(i=0;i<3;i++){
	      for(j=0;j<3;j++){
	printf("%c\t",grid[i][j]);
}
printf("\n");
}
		break;
		case '3': grid[0][2]=tic_toc[n];
		for(i=0;i<3;i++){
	      for(j=0;j<3;j++){
	printf("%c\t",grid[i][j]);
}
printf("\n");
}
		break;
		case '4':grid[1][0]=tic_toc[n];
		for(i=0;i<3;i++){
	      for(j=0;j<3;j++){
	printf("%c\t",grid[i][j]);
}
printf("\n");
}
		break;
		case '5': grid[1][1]=tic_toc[n];
		for(i=0;i<3;i++){
	      for(j=0;j<3;j++){
	printf("%c\t",grid[i][j]);
}
printf("\n");
}
		break;
		case '6': grid[1][2]=tic_toc[n];
		for(i=0;i<3;i++){
	      for(j=0;j<3;j++){
	printf("%c\t",grid[i][j]);
}
printf("\n");
}
		break;
		case '7':grid[2][0]=tic_toc[n];
		for(i=0;i<3;i++){
	      for(j=0;j<3;j++){
	printf("%c\t",grid[i][j]);
}
printf("\n");
}
		break;
		case '8': grid[2][1]=tic_toc[n];
		for(i=0;i<3;i++){
	      for(j=0;j<3;j++){
	printf("%c\t",grid[i][j]);
}
printf("\n");
}
		break;
		case '9': grid[2][2]=tic_toc[n];
		for(i=0;i<3;i++){
	      for(j=0;j<3;j++){
	printf("%c\t",grid[i][j]);
}
printf("\n");
}
		break;
		default:
			printf("invalid\n");
			break;
	}
	
	n++;
	if(tic_toc[n-1]=='x'){
		tic_toc[n]='o';
	}
	else{
		tic_toc[n]='x';
	}
	if(grid[0][0]==grid[0][1]&&grid[0][2]==grid[0][0]){
		printf("winner is %s\n",player);
		win=1;
		break;
	}
	if(grid[0][0]==grid[1][1]&&grid[2][2]==grid[0][0]){
		printf("winner is %s\n",player);
		win=1;
		break;
	}
	if(grid[0][0]==grid[1][0]&&grid[2][0]==grid[0][0]){
		printf("winner is %s\n",player);
		win=1;
		break;
	}
		if(grid[1][0]==grid[1][1]&&grid[1][2]==grid[1][0]){
		printf("winner is %s\n",player);
		win=1;
		break;
	}
	if(grid[2][0]==grid[2][1]&&grid[2][2]==grid[2][0]){
		printf("winner is %s\n",player);
		win=1;
		break;
	}
	if(grid[0][1]==grid[1][1]&&grid[2][1]==grid[0][1]){
		printf("winner is %s\n",player);
		win=1;
		break;
	}
		if(grid[0][2]==grid[1][2]&&grid[2][2]==grid[0][2]){
		printf("winner is %s\n",player);
		win=1;
		break;
	}
	if(grid[0][2]==grid[1][1]&&grid[2][0]==grid[0][2]){
		printf("winner is %s\n",player);
		win=1;
		break;
	}
	if(strcmp(player,name1)==0){
		strcpy(player,name2);
	}
	else{
		strcpy(player,name1);
	}
	

	}
	if(win!=1){
		printf("match draw\n");
	}
	return 0;
}
