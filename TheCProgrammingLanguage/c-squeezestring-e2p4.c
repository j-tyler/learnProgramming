#include <stdio.h>

#define ARRAYSIZE 1000

/* When squeeze is given two arrays, it removes all characters found in
	string2 from string1. */

void squeeze(char s1[], char s2[]); 

int main()
{
	char s1[ARRAYSIZE] = "Hello, mj. Does this program work?\n";
	char s2[ARRAYSIZE] = "ek";	

	squeeze(s1, s2);
	
	printf("%s", s1); // mjs way 

	int i;
	for (i=0; s1[i] != '\0'; i++){  //j-tylers way
		printf("%c", s1[i]);
	}
}

void squeeze(char s1[], char s2[])
{
	int i, j, k;
	for (i=0; s1[i] != '\0'; i++){			//loop through s1
		for (j=0; s2[j] != '\0'; j++){		//loop through s2 inside s1
			if (s1[i] == s2[j]){			//if s1[i] matches any s2
				for (k=i; s1[k] != '\0'; k++){
					s1[k] = s1[k+1];		//shift all of s1 to the left 1
				}
			}
		}
	}
}
