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

int main (int argc, char** argv ) {
	char c;
	
	while( scanf("%c", &c ) != EOF ) {
		if (isUppercaseLetter(c)) {
			c = moveUppercaseLetter(c);
		}
		printf( "%c", c );
	}
}