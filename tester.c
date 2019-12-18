/*
  VerLib
  Copyright © 2019 Daniel Strayker Nowak
  
  Tester for VerLib development
*/

#include <stdio.h>
#include <string.h>
#include "verlib.h"

int main()
{
	printf(" - VerLib Tester - \n");
	printf(" - For version 1.0.0 -\n\n");
	
	// Set version value for "1.0.0" Build 1 with SetVersionString function:
	printf("Version '1.0.0' Build 1 with SetVersionString function:\n");
	char version[] = { '1', '.', '0', '.', '0', '.', '1', '\0' };
	
	SetVersionString(version);

	ConsoleLogVersion();
	printf("\n\n");
	
	// Set version value for "3.0.0" Build 1 with SetVersionMajor function:
	printf("Version '3.0.0' Build 1 with SetVersionMajor function:\n");
	
	SetVersionMajor(3);
	
	ConsoleLogVersion();
	printf("\n\n");
	
	// Set version value for "3.1.0" Build 1 with SetVersionMinor function:
	printf("Version '3.1.0' Build 1 with SetVersionMinor function:\n");
	
	SetVersionMinor(1);
	
	ConsoleLogVersion();
	printf("\n\n");
	
	// Set version value for "3.1.2" Build 1 with SetVersionRelease function:
	printf("Version '3.1.2' Build 1 with SetVersionRelease function:\n");
	
	SetVersionRelease(2);
	
	ConsoleLogVersion();
	printf("\n\n");
	
	// Set version value for "3.2.1" Build 50 with SetVersionBuild function:
	printf("Version '3.1.2' Build 50 with SetVersionBuild function:\n");
	
	SetVersionBuild(50);
	
	ConsoleLogVersion();
	printf("\n\n");
	
	// Get full version value with GetVersionFull function:
	printf("Get full version value with GetVersionFull function:\n");
	
	printf("Full version, without dots: %i", GetVersionFull());
	
	printf("\n\n");
	
	// Get version Major value with GetVersionMajor function:
	printf("Getting version Major value with SetVersionBuild function:\n");
	
	printf("Version Major number: %i", GetVersionMajor());

	printf("\n\n");
	
	// Get version Minor value with GetVersionMinor function:
	printf("Getting version Minor value with GetVersionMinor function:\n");
	
	printf("Version Minor number: %i", GetVersionMinor());

	printf("\n\n");
	
	// Get version Release value with GetVersionRelease function:
	printf("Getting version Release value with GetVersionRelease function:\n");
	
	printf("Version Release number: %i", GetVersionRelease());

	printf("\n\n");
	
	// Get version Build value with GetVersionBuild function:
	printf("Getting version Build value with GetVersionBuild function:\n");
	
	printf("Version Build number: %i", GetVersionBuild());

	printf("\n\n");
	
	// Increment Major version value with IncrementMajor function:
	printf("Incrementing Major version value with IncrementMajor function:\n");
	
	IncrementMajor();
	ConsoleLogVersion();
	
	printf("\n\n");
	
	// Increment Minor version value with IncrementMinor function:
	printf("Incrementing Minor version value with IncrementMinor function:\n");
	
	IncrementMinor();
	ConsoleLogVersion();
	
	printf("\n\n");
	
	// Increment Release version value with IncrementRelease function:
	printf("Incrementing Minor version value with IncrementRelease function:\n");
	
	IncrementRelease();
	ConsoleLogVersion();
	
	printf("\n\n");
	
	// Increment Build version value with IncrementBuild function:
	printf("Incrementing Minor version value with IncrementBuild function:\n");
	
	IncrementBuild();
	ConsoleLogVersion();
	
	printf("\n\n");
	
	// Decrement Major version value with DecrementMajor function:
	printf("Decrementing Major version value with DecrementMajor function:\n");
	
	DecrementMajor();
	ConsoleLogVersion();
	
	printf("\n\n");
	
	// Decrement Minor version value with DecrementMinor function:
	printf("Decrementing Major version value with DecrementMinor function:\n");
	
	DecrementMinor();
	ConsoleLogVersion();
	
	printf("\n\n");
	
	// Decrement Release version value with DecrementRelease function:
	printf("Decrementing Major version value with DecrementRelease function:\n");
	
	DecrementRelease();
	ConsoleLogVersion();
	
	printf("\n\n");
	
	// Decrement Build version value with DecrementBuild function:
	printf("Decrementing Major version value with DecrementBuild function:\n");
	
	DecrementBuild();
	ConsoleLogVersion();
	
	printf("\n\n");
	
	// Log version number with LogVersionString function:
	
	// TODO: This function has to be repaired!
	
	// Compare version "1.2.4 Build 122" with "2.0.5 Build 108". This comparison should throw false output:
	printf("Comparing version '1.2.4 Build 122'' with '2.0.5 Build 108''. This comparison should throw false output:\n");
	
	Version version1;
	version1.Major = 1;
	version1.Minor = 2;
	version1.Release = 4;
	version1.Build = 122;
	
	Version version2;
	version2.Major = 2;
	version2.Minor = 0;
	version2.Release = 5;
	version2.Build = 108;
	
	bool cmpvar = CompareVersions(version1, version2); // Here's false,
	printf("First comparison result: %i\n", cmpvar);
	
	version2.Major = 1;
	version2.Minor = 2;
	version2.Release = 4;
	version2.Build = 122;
	
	cmpvar = CompareVersions(version1, version2); // Here's true,
	printf("Second comparison result: %i\n", cmpvar);
	
	printf("\n");
	
	printf("Press Enter to exit!");
	getchar();
	return 0;
}
