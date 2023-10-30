#include<stdio.h>
#include <conio.h>
#include<stdlib.h>
#include <string.h>


int subtraction (int ,int );

struct member{
	char first_name[20];
	char second_name[20];
	int contact;
	char PO_box[30];
	char residence[20];
	
	
}member;
 
	
	

int main(){
	
	FILE *fp;
	fp=fopen("members.txt","a");
	if(fp==NULL){
		printf("File not open");
		exit(1);
	}
	
	int amount_present;
	int service_choice;
	int movie_choice;
	int movie_price=500;
	int movie_bought;
    int ans;
    int balance;
    int i;
 	int boolean;
	
	
	
	printf("\t\t\t\t\t\t========================\n");
	printf("\t\t\t\t\t\t====WELCOME TO IMAX=====\n");
	printf("\t\t\t\t\t\t========================\n");
	printf("\n");
	printf("Please select service to be offered:\n");
	printf("\n");
	printf("[1]:Buy a movie\n");
	printf("[2]:Watch a movie \n");
	printf("[3]:Buy snacks\n");
	printf("[4]:Enroll for IMAX membership\n");
	printf("[5]:Play FIFA\n\n");
	printf("Your choice is \t");
	scanf("%d",&service_choice);
	
	switch(service_choice){
		
			case 1 :
			
			printf("\t\t\t\t\t+++++++++++++++++++++++++++++++++++++++++\n");
			printf("\t\t\t\t\t+++WELCOME TO MOVIE PURCHASING SECTION+++\n");
			printf("\t\t\t\t\t+++++++++++++++++++++++++++++++++++++++++\n\n");
			
			printf("Enter amount you wish to spend today:\n");
			scanf("%d",&amount_present);
			
		
			
				
		
			printf("\n");
			printf("\n");
			if(movie_price > amount_present){
				printf("TOP UP SOME CASH");
				
			}
			else{
			printf("From the below choices,please select the movie you wish to purchase\n");
			printf("[1]:Money Heist \n");
			printf("[2]:Prison break \n");
			printf("[3]:Game of Thrones \n");
			printf("[4]:Locked up \n");
			printf("\n");	
			printf("Your choice:");		
			scanf("%d",&movie_bought);
			
				
					
			switch(movie_bought){
				case 1:
					printf(">><<You have purchased Money Heist>><<");
					break;
				case 2:
					printf(">><<You have purchased Prison Break:>><<");
					break;
				case 3:
					printf(">><<You have purchased Game of Thrones>><<");
					break;
				case 4:
					printf(">><<You have purchased Locked Up>><<");
					break;
				default :
					printf("Invalid purchase:");
					break;
				
			}
				printf("\n");			
				printf("your balance is %d",amount_present-movie_price);
			}
			
			printf("Do you want to watch a movie?");
			printf(" [1]: YES\n");
			printf(" [2]: NO\n");
			scanf("%d",boolean);
			 
			 switch (boolean){
				 case 1:
				 		if(balance<500){
				
				printf("Top up!!!! watching a movie requires more");
				
			}
			else
			{
				printf("\n");
				printf("Money heist is to be watched shortly");
				
				for(i=1;i<100;i++){
					
					printf("Take seat number %d \n",i);
					printf("ENJOY THE MOVIE");
				}
				
			}
				 	
				 	break;
				 
				 case 2:
				 	printf("Thankyou for choosing Imax");
				 	
				 default:
				 	printf("Invalid");
			 }
			break;
			getch();
			
						
			
		
			case 2:
			
			printf("\t\t\t\t\t#################################\n");
			printf("\t\t\t\t\t#####WELCOME TO IMAX MOVIES######\n");
			printf("\t\t\t\t\t###########FEEL AT HOME##########\n");
			printf("\t\t\t\t\t#################################\n");
			
			
			printf("\nPlease enter amount present:");
			scanf("%d",&amount_present);
			
			if(amount_present<500){
				
				printf("\n\n\nTop up!!!! watching a movie requires more");
				
			}
			else
			{
				printf("\n");
				printf("Money heist is to be watched shortly");
				
				for(i=1;i<100;i++){
					
					printf("Take seat number %d \n",i);
					printf("ENJOY THE MOVIE");
				}
				
			}
			getch();
			break;
		
			case 3 :
			
			printf("");
			
			break;
			
		
			case 4 :
			printf("\n");
			printf("\t\t\t\t\t========================================\n");
			printf("\t\t\t\t\t==WELCOME TO IMAX MEMBERSHIP ENROLMENT==\n");
			printf("\t\t\t\t\t========================================\n");
			printf("\n");
			printf("\n");
			
			printf("Please enter your Firstname \n");
			scanf("%s",&member.first_name);
			
			printf("Please enter your Second name\n");
			scanf("%s",&member.second_name);
			
			printf("Please enter your Contact\n");
			scanf("%d",&member.contact);
			
			printf("Please enter your PO box \n");
			scanf("%d",&member.PO_box);
			
			printf("Please enter your residence \n");
			scanf("%s",&member.residence);
			
			printf("\n");
			printf("\t\t\t\t\t++++++++++++++++++++++++++++++\n");
			printf("\t\t\t\t\t+++++Your details +++++++++\n");
			printf("\t\t\t\t\t++++++++++++++++++++++++++++++\n");
			
			printf("%s",member.first_name);
			printf("\t");
			printf("%s",member.second_name);
			printf("\nTel'+254%d",member.contact);
			printf("\n PO Box %d",member.PO_box);
			printf("\n%s",member.residence);
			printf("\n");
			printf("\n");
			printf("\t\t\t\t\t*********MEMBER REGISTRATION SUCCESSFUL**********");
			
			fprintf(fp,"%s",member.first_name);
			fprintf(fp,"\t");
			fprintf(fp,"%s",member.second_name);
			fprintf(fp,"\nTel'+254%d",member.contact);
			fprintf(fp,"\n PO Box %d",member.PO_box);
			fprintf(fp,"\n%s\n\n\n",member.residence);
		
			getch();
			break;
		/*
			case 5:
			
			printf("");
			
			break;
			*/
		
		
			default:
				printf("Invalid choice!");
				break;
		
	}

	ans=subtraction(amount_present,movie_price);
	
	
	
	return 0;
}

int subtraction(int x, int y){
	int balance;
	balance=x-y;
	
	
	return (balance);
	
}



