/*
  VerLib
  Copyright © 2019 Daniel Strayker Nowak
  
  Tester for VerLib development
*/

#include <stdio.h>
#include <string.h>
#include "verlib.h"

// printf("");

int main()
{
	printf(" - VerLib Tester - \n");
	
	// Set version value for "1.0.0" Build 1 with SetVersionString function:
	printf("Version '1.0.0'' Build 1 with SetVersionString function:\n");
	char version[] = { '1', '.', '0', '.', '0', '.', '1' };
	SetVersionString(version);

	ConsoleLogVersion();
	printf("\n");
	
	// Set version value for "3.0.0" Build 1 with SetVersionMajor function:
	
	
	
	// Set version value for "3.1.0" Build 1 with SetVersionMinor functions:
	
	
	
	// Set version value for "3.1.2" Build 1 with SetVersionRelease function:
	
	
	
	// Set version value for "3.2.1" Build 50 with SetVersionBuild functions:
	
	
	getchar();
	return 0;
}
