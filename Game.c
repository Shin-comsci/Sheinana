#include <stdio.h>
#include "intro.h"

int main(){
	
	int pelaku;
	
	for (int i = 1; i <= 3; i++){
		printf("Tentukan tersangka yang anda curigai: ");
		scanf("%d", &pelaku);
		if (pelaku != 3 && pelaku != 5){
			if (i < 3) printf("\tAnda salah. Tersisa %d kesempatan menebak!\n", 3 - i);
			else if (i == 3) {
				printf("\tAnda salah. Kesempatan habis.\nGame Over!\n");
				return 0;
			}
		}
		
		if (pelaku == 3 || pelaku == 5){
			printf("\tAnda menemukan pelakunya.\n");
			while (i != 3){
				
				printf("Tentukan tersangka lainnya yang anda curigai: ");
				scanf("%d", &pelaku);
				i++;
				if (pelaku == 3 || pelaku == 5){
					printf("\tAnda menemukan kedua pelakunya!\nYou win!\n");
					goto EndLoops;
				}
					
				else {
					if (i != 3) printf("\tAnda salah. Tersisa %d kesempatan menebak!\n", 3-i);
					else printf("\tAnda salah. Kesempatan habis.\n");
				}
			}
			if (i == 3) printf("Anda hanya menemukan salah satu pelaku.\nGame Over!\n");
		}
	}
	
	EndLoops:
	
	
	
	return 0;
}
