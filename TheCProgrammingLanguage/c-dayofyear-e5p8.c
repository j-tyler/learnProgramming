#include <stdio.h>

/* Take the day of year and month day function from the book and add error checking */

int dayOfYear(int year, int month, int day);
void monthDay(int year, int yearday, int *pmonth, int *pday);

static char daytab[2][13] = {
	{0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
	{0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}		
};

void main(void){

	int month, day;

	monthDay(1920, 60, &month, &day);
	printf("The first of March 1918 was the %d th day of that year.\n", dayOfYear(1918, 3, 1));
	printf("The 60th day of March 1920 was %d / %d.\n", month, day); 
}

	/* dayOfYear: set day of year from month and day */
int dayOfYear(int year, int month, int day) {
	int i, leap;

	leap = year%4 == 0 && year%100 != 0 || year%400 == 0;
	for (i = 1; i<month; i++){
		day += daytab[leap][i];
	}
	

	return day;
}

	/* monthDay: set month, day from day of year */
void monthDay(int year, int yearday, int *pmonth, int *pday) {
	int i, leap;

	leap = year%4 == 0 && year%100 != 0 || year%400 == 0;
	for (i = 1; yearday > daytab[leap][i]; i++){
		yearday -= daytab[leap][i];
	}

	/* If we receive an invalid day, we set months to -1 to signal an error */
	if (leap && yearday > 366){
		*pmonth = -1;
	} else if (yearday > 365){
		*pmonth = -1;
	} else if (yearday < 1){
		*pmonth =-1;
	} else {
		*pmonth =i;
	}
	*pday = yearday;
}
