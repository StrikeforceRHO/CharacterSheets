#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdint.h>
#include <inttypes.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/time.h>
#include <time.h>
#include <errno.h>
#include <math.h>
#include <string.h>

int git_commit(char *pdf) {

	FILE *f;
	f = fopen(pdf, "a");	
	if(f == NULL) {
		printf("File %s could not be opened. Please check that file exists at the specified location.\n", pdf);
		return 1;
	}
	fclose(f);
	char commit[4096];
	sprintf(commit, "git add -u ; git commit -m \"Modifies %s character sheet after last session\" ; git push origin master", pdf);
	int result = system(commit);
	if(!result) {
		printf("Changes to %s committed successfully.\n", pdf);
	}
	else {
		printf("Problem encountered while committing changes to %s.\n", pdf);
	}
	return 0;
}

int main(int argc, char *argv[]) {

	if(argc < 2) { printf("Must provide PDF filename.\n"); exit(1); }
	
	char *pdf = argv[1];

	git_commit(pdf);

	return 0;
}
