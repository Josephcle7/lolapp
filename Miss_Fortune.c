#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int TwitchCounter(char *Boots, char *Special, char *Wards);

int Miss_Fortune(void){

	printf("\nWhat champion do you need to counter? (If none type 'None')\n\n");
	
	char cChamp[20];
	scanf("%s", cChamp);
		
	char Boots[100] = "Berserker's Greaves";
	char Special[100] = "The Last Whisperer";
	char Wards[100] = "Wards";
	
	if (strcmp ("Twitch", cChamp) == 0){
		TwitchCounter(Boots, Special, Wards);
	}
	return 0;
}
