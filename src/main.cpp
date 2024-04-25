#include <sys/stat.h>
#include <string>
#include <fstream>
#include <iostream>
/* #include <git2.h> */

using namespace std;

int validator(char *files[]){
	
	cout << "File: "<< files[1];

/*	#define IS_INDEXABLE(arg) (sizeof(arg[0]))

	#define IS_ARRAY(arg) (IS_INDEXABLE(arg) && (((void *) &arg) == ((void *) arg)))
*/
	return 0;
}


int main(int argc, char** argv) {
	
	validator(argv);


	return 0;
}

