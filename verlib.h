/*
  VerLib
  Copyright © 2019 Daniel Strayker Nowak
*/

#ifndef _VERLIB_
#define _VERLIB_

extern void SetVersionString(char* version);
extern void SetVersionMajor(int value);
extern void SetVersionMinor(int value);
extern void SetVersionRelease(int value);
extern void SetVersionBuild(int value);

extern int GetVersionFull();
extern int GetVersionMajor();
extern int GetVersionMinor();
extern int GetVersionRelease();
extern int GetVersionBuild();

extern void ConsoleLogVersion();
extern char* LogVersionString();

#endif
