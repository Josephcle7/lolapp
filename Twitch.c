#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int twoad(char *Boots, char *Special, char *Wards, char *Counter);

int Twitch(void){

	printf("\nWhat champion do you need to counter? (If none type 'None')\n\n");
	
	char cChamp[20];
	scanf("%s", cChamp);
		
	char Boots[100] = "Berserker's Greaves";
	char Special[100] = "The Last Whisperer";
	char Wards[100] = "Wards";
	

		

	return 0;
}

int TwitchCounter(char *Boots, char *Special, char *Wards){

	char Counter[100] = "Twich Counter";
	twoad(Boots, Special, Wards, Counter);

return 0;
}
