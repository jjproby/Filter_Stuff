#include <stdio.h>
#include <stdlib.h>

int main( int argc, char** argv) {
  int offset = atoi( argv[1] ) ;
  printf( "the letter that is %d places after 'a' is '%c'.\n", offset, 'a' + offset );
} //main(int, char**)
