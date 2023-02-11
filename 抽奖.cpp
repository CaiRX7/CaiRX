#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void menu() {
	printf("***************************************\n");
	printf("****   1.play           0.exit   ******\n");
	printf("***************************************\n");

}

void game() {
	int a = rand() % 20 + 1;
	if (a == 1) {
		printf("1st prize\n");
	} else if (a >= 2 && a < 4) {
		printf("2nd prize\n");
	} else if (a >= 4 && a < 7) {
		printf("3rd prize\n");
	} else if (a >= 7 && a < 11) {
		printf("4th prize\n");
	} else if (a >= 11 && a < 16) {
		printf("5th prize\n");
	} else {
		printf("6th prize\n");
	}
}

int main() {
	int input;
	srand((unsigned int)time(0));
	for (;;) {
		menu();
		printf("ÇëÑ¡Ôñ\n");
		scanf("%d", &input);
		if (input == 1) {
			game();
		} else {
			break;
		}
	}
	printf("½áÊø");
}
