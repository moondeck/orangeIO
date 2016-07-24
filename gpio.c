#include <stdio.h>
#include "gpio.h"

int OutPin(char *state,char *pin){
	FILE *fp;
	fp = fopen(pin,"w+");
	fputs(state,fp);
	fclose(fp);
	fp = 0;
	fp = fopen(pin,"w+");
	if(fgetc(fp) == "1"){
		return 0;
	} else{
		return -1;
	}
}
