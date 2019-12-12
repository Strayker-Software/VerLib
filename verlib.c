/*
  VerLib
  Copyright © 2019 Daniel Strayker Nowak
*/

#include "verlib.h"
#include <stdio.h>

// Version data:
struct Version
{
	int Major;
	int Minor;
	int Release;
	int Build;
};
typedef struct Version Version;

// Default version in VerLib is "0.0.0 0"
Version ver;

// Set version data:

// - by string,
void SetVersionString(char* version)
{
	// "version" string data is given in sequence: "Major.Minor.Release.Build", seven characters in string only,
	
	ver.Major = version[0] - '0';
	ver.Minor = version[2] - '0';
	ver.Release = version[4] - '0';
	ver.Build = version[6] - '0';
}

// - by individual integer,
void SetVersionMajor(int value)
{
	ver.Major = value;
}

void SetVersionMinor(int value)
{
	ver.Minor = value;
}

void SetVersionRelease(int value)
{
	ver.Release = value;
}

void SetVersionBuild(int value)
{
	ver.Build = value;
}

// Write in console full version of app:
void ConsoleLogVersion()
{
	printf("%i.%i.%i %i", ver.Major, ver.Minor, ver.Release, ver.Build);
}


