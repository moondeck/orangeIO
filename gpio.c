#include <stdio.h>
#include "gpio.h"

int OutPin(char *state,char *pin){
	FILE *fp;
	fp = fopen(pin,"w+");
	fputs(state,fp);
	fclose(fp);
	return 0;
}
