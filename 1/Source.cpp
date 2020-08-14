#include<stdio.h>
int main() {
	float Score;

	printf("Input Score = ");
	scanf_s("%f", &Score);

	if (Score > 100) {
		printf("Error");


	}
	else if (Score >= 80 && Score <= 90) {
		printf("Your grade is 4");


	}
	else if (Score >= 75 && Score <= 79) {
		printf("Your grade is 3.5");


	}
	else if (Score >= 70 && Score <= 74) {
		printf("Your grade is 3");

	}
	else if (Score >= 65 && Score <= 69) {
		printf("Your grade is 2.5");


	}
	else if (Score >= 60 && Score <= 64) {
		printf("Your grade is 2");


	}
	else if (Score >= 55 && Score <= 59) {
		printf("Your grade is 1.5");


	}
	else if (Score >= 50 && Score <= 54) {
		printf("Your grade is 1");

	}
	else if (Score >= 0 && Score <= 49) {
		printf("Your grade is 0");

	}
	else {
		printf("--------------Enter the wrong number----------------");

	}
	return 0;
}