/*
  VerLib
  Copyright © 2019 Daniel Strayker Nowak
*/

#include "verlib.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Default version format in VerLib is: "Major.Minor.Release Build",

// Default version in VerLib is "0.0.0 0"
Version ver;

/*
	Major and Minor numbers can't have more than 3 digits,
	Release can't have more than 4 digits
	and Build can't have more than 100 digits!
*/

// Set version data:

// - by string,
void SetVersionString(const char *version)
{
	// "version" string data is given in sequence: "Major.Minor.Release.Build\0",
	// Example: 20.11.121.1014\0
	
	char MajorChar[3];
	char MinorChar[3];
	char ReleaseChar[4];
	char BuildChar[100];
	
	int MajorLen = 0;
	int MinorLen = 0;
	int ReleaseLen = 0;
	int BuildLen = 0;
	
	int i = 0;
	for(; version[i] != '.'; i++) // For Major,
	{
		MajorChar[MajorLen] = version[i];
		MajorLen++;
	}
	MajorChar[MajorLen] = '\0';
	i++; // Skipping dot,
	
	for(; version[i] != '.'; i++); // For Minor,
	{
		MinorChar[MinorLen] = version[i];
		MinorLen++;
	}
	MinorChar[MinorLen] = '\0';
	i++; // Skipping dot,
	
	for(; version[i] != '.'; i++); // For Release,
	{
		ReleaseChar[ReleaseLen] = version[i];
		ReleaseLen++;
	}
	ReleaseChar[ReleaseLen] = '\0';
	i++; // Skipping dot,
	
	for(; version[i] != '\0'; i++); // For Build,
	{
		BuildChar[BuildLen] = version[i];
		BuildLen++;
	}
	BuildChar[BuildLen] = '\0';
	i = 0;
	
	ver.Major = atoi((const char *)MajorChar);
	ver.Minor = atoi((const char *)MinorChar);
	ver.Release = atoi((const char *)ReleaseChar);
	ver.Build = atoi((const char *)BuildChar);
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

// Get version number:

int GetVersionFull()
{ // This function returns integer representing version of active library settings, eg. if version is set to "1.0.0 Build 10" the output will be 10010:
	int len = 0;
	len = len + CountDigits(ver.Build);
    len = len + CountDigits(ver.Major);
    len = len + CountDigits(ver.Minor);
	len = len + CountDigits(ver.Release);
	char version[len];
	
	char buffer[CountDigits(ver.Major)];
	itoa(ver.Major, (const char *)buffer, 10);
	memcpy(version, buffer, CountDigits(ver.Major));
	*buffer = malloc(CountDigits(ver.Minor) * sizeof(int));
	
	itoa(ver.Minor, (const char *)buffer, 10);
	memcpy(version, buffer, CountDigits(ver.Minor));
	*buffer = malloc(CountDigits(ver.Release) * sizeof(int));
	
	itoa(ver.Release, (const char *)buffer, 10);
	memcpy(version, buffer, CountDigits(ver.Release));
	*buffer = malloc(CountDigits(ver.Build) * sizeof(int));
	
	itoa(ver.Build, (const char *)buffer, 10);
	memcpy(version, buffer, CountDigits(ver.Build));
	
	int verint = atoi(version);
	
	return verint;
}

int GetVersionMajor() { return ver.Major; }

int GetVersionMinor() { return ver.Minor; }

int GetVersionRelease() { return ver.Release; }

int GetVersionBuild() { return ver.Build; }

// Increment or decrement given version number:

void IncrementMajor() { ver.Major++; }

void IncrementMinor() { ver.Minor++; }

void IncrementRelease() { ver.Release++; }

void IncrementBuild() { ver.Build++; }

void DecrementMajor() { ver.Major--; }

void DecrementMinor() { ver.Minor--; }

void DecrementRelease() { ver.Release--; }

void DecrementBuild() { ver.Build--; }

// Write in console full version of app:
void ConsoleLogVersion()
{
	printf("%i.%i.%i %i", ver.Major, ver.Minor, ver.Release, ver.Build);
}

// Return string same as console's:
char* LogVersionString()
{
	int len = 0;
	len = len + CountDigits(ver.Build);
    len = len + CountDigits(ver.Major);
    len = len + CountDigits(ver.Minor);
	len = len + CountDigits(ver.Release);
	char version[len];
	
	char buffer[CountDigits(ver.Major)];
	itoa(ver.Major, (const char *)buffer, 10);
	memcpy(version, buffer, CountDigits(ver.Major));
	*buffer = malloc(CountDigits(ver.Minor) * sizeof(int));
	
	memset(version, '.', 1);
	
	itoa(ver.Minor, (const char *)buffer, 10);
	memcpy(version, buffer, CountDigits(ver.Minor));
	*buffer = malloc(CountDigits(ver.Release) * sizeof(int));
	
	memset(version, '.', 1);
	
	itoa(ver.Release, (const char *)buffer, 10);
	memcpy(version, buffer, CountDigits(ver.Release));
	*buffer = malloc(CountDigits(ver.Build) * sizeof(int));
	
	memset(version, ' ', 1);
	
	itoa(ver.Build, (const char *)buffer, 10);
	memcpy(version, buffer, CountDigits(ver.Build));
	
	return version;
}

// Additional functions:

// Comapare, if two given versions are equal:
bool CompareVersions(Version x, Version y)
{
	if(x.Major != y.Major) return false;
	else if(x.Minor != y.Minor) return false;
	else if(x.Release != y.Release) return false;
	else if(x.Build != y.Build) return false;
	
	return true;
}

// Count, how many digits is in number:
int CountDigits(int checking)
{
	int len = 0;
	
	for(; checking > 1; len++)
       checking = checking / 10;
       
    return len;
}

