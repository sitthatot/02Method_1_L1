#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main() {
	double w,h,bmi;
	printf("Enter your weight in Kilogram : ");
	scanf("%lf", &w);
	printf("Enter your weight in Meter : ");
	scanf("%lf", &h);
	bmi = w / (h * h);
	if (bmi >= 30) {
		printf("Obese");
	}
	else if (bmi >= 25 && bmi < 30) {
		printf("Overweight");
	}
	else if (bmi >= 18.5 && bmi < 25) {
		printf("Normal");
	}
	else {
		printf("Underweight");
	}
	return 0;
}