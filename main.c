#include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num=0; int answer=59; int count=0;
	do {
		printf("Guess a number:");
		scanf("%d",&num);
		count++;
		if (num>answer)
			printf("high!\n");
		else if (num<answer)
			printf("low!\n");
		else printf("Congratulation!\n");
		
	}while(num!=answer);
	printf("trials:%d",count);
}
