#include<stdio.h>

int main() {
	
	int Language, English, Hindi, Gujarati;
	
	printf("Menu-drive program for Telecom call service conversation.\n\n");
	printf("Press 1 for English\n");
	printf("Press 2 for Hindi\n");
	printf("Press 3 for Gujarati\n\n");
	printf("\nEnter your choice :- ");
	scanf("%d", &Language);
	
	switch (Language) {
		case 1 : printf("\nPress 1 for Internet Recharge\n");
				 printf("\nPress 2 for Top-up Recharge\n");
				 printf("\nPress 3 for Special Recharge\n");
				 printf("\nEnter your choice :- ");
				 scanf("%d", &English);
				 switch (English) {
				 	case 1 : printf("\nYou have successfully done Internet Recharge");
				 			 break;
				 	case 2 : printf("\nYou have successfully done Top-up Recharge");
				 			 break;
				 	case 3 : printf("\nYou have successfully done Special Recharge");
				 			 break;
				 	default : printf("\nSorry, You have entered invalid number.\n\n");
				 			  printf("\nPlese, enter the number from the following numbers.");
				 }
				 printf("\n\nThank you.");
				 break;
		case 2 : printf("\nInternet Recharge ke liye 1 dabaiye\n");
				 printf("\nTop-up Recharge ke liye 2 dabaiye\n");
				 printf("\nSpecial Recharge ke liye 3 dabaiye\n");
				 printf("\nApni pasand daliye :- ");
				 scanf("%d", &Hindi);
				 switch (Hindi) {
				 	case 1 : printf("\nAapne safaltapurvak Internet Recharge kar liya he.");
				 			 break;
				 	case 2 : printf("\nAapne safaltapurvak Top-up Recharge kar liya he.");
				 			 break;
				 	case 3 : printf("\nAapne safaltapurvak Special Recharge kar liya he.");
				 			 break;
				 	default : printf("\nkshama karen, aapane amaany nambar darj kiya hai.\n\n");
				 			  printf("\nkrpaya, nimnalikhit sankhyaon mein se sankhya darj karen.");
				 }
				 printf("\n\nDhanyavaad.");
				 break;
		case 3 : printf("\nInternet Recharge mate 1 dabavo\n");
				 printf("\nTop-up Recharge mate 2 dabavo\n");
				 printf("\nSpecial Recharge mate 3 dabavo\n");
				 printf("\nTamai pasand nakho :- ");
				 scanf("%d", &Gujarati);
				 switch (Gujarati) {
				 	case 1 : printf("\nTame safaltapurvak Internet Recharge kar karyu chhe.");
				 			 break;
				 	case 2 : printf("\nTame safaltapurvak Top-up Recharge karyu chhe.");
				 			 break;
				 	case 3 : printf("\nTame safaltapurvak Special Recharge karyu chhe.");
				 			 break;
				 	default : printf("\nMapha karaso, tame amanya nambara dakhala karyo che.\n\n");
				 			  printf("\nKrupa karine, nicena nambaromanthi nambara dakhala karo.");
				 }
				 printf("\n\nAbhara.");
				 break;
		default : printf("\nSorry, You have entered invalid number.\n\n");
				  printf("\nPlese, enter the number from the following numbers.\n\n");
	}
	
}