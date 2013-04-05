#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int TwitchCounter(char *Boots, char *Special, char *Wards, cRole);

int Lulu(void){

	printf("\nWhat role are you playing? Support or AP_Carry?\n\n");
	char cRole[20];
	scanf("%s", cRole);
	
	printf("\nWhat champion do you need to counter? (If none type 'None')\n\n");
	
	char cChamp[20];
	scanf("%s", cChamp);
		
	char Boots[100] = "Sorceror's Shoes";
	char Special[100] = "(Support items)";
	char Wards[100] = "Wards";
	
	if (strcmp ("Twitch", cChamp) == 0){
		TwitchCounter(Boots, Special, Wards, cRole);
	}
	if (strcmp ("Lulu", cChamp) == 0){
		LuluCounter(Boots, Special, Wards, cRole);
	}
	return 0;
}

int LuluCounter(char *Boots, char *Special, char *Wards, char *cRole){

	char Counter[100] = "Lulu Counter";
	twoad(Boots, Special, Wards, Counter);

	return 0;
}

