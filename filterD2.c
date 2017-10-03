#include <stdio.h>

#define FALSE 0
#define TRUE 1

int isLowercaseLetter( char c ) {
	if( 'a' <= c && c <= 'z') {
		return TRUE;
	}
	else {
		return FALSE;
	}
}

int isUppercaseLetter( char c ) {
	if( 'A' <= c && c <= 'Z' ) {
		return TRUE;
	}
	else {
		return FALSE;
	}
}

char moveUppercaseLetter( char c ) {
	c = c + 3;
	if ( c > 'Z') {
		c = c - 26;
	}
	return c;
}

char makeUppercase( char c ) {
	return c - 32;
}

int isLetter( char c ) {
  if( isLowercaseLetter(c) || isUppercaseLetter(c) ) {
    return TRUE;
  }
  else {
    return FALSE;
  }
}

int main (int argc, char** argv ) {
	char c;
	int space = 1;

	while( scanf("%c", &c ) != EOF ) {
		if (isLetter(c)) {
			if (space % 5 == 0) {
				printf( "%c ", c);
			}// if
			else {
				printf("%c", c);
			}//else
			space++;
		}//if
	}//while
}//main
