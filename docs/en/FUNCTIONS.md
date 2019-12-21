# VerLib Functions

Here is the description of all VerLib functions and examples on how to use them!

### Version Structure

This struct is core of VerLib. It is defined with four pools of type integer. For easier use of struct, there is defined type called Version to create variables. The pools in struct are: Major, Minor, Release and Build.

## Setting version in library

### void SetVersionString(char *version)

This function takes string argument and splits it in the main VerLib variable. The data provided for this function must cover all versioning numbers. String should be defined like: `char version[] = { '1', '.', '0', '.', '0', '.', '1', '\0' };`, which fits in the patern: "Major.Minor.Release.Build\0".

Example:

```c
// Set version in VerLib:
char version[] = { '1', '.', '0', '.', '0', '.', '1', '\0' };
SetVersionString();
// Here version is set in library
```

### void SetVersionMajor(int value)

This function sets the Major value in main VerLib variable. It can be any integer, that have max three digits.

Example: 

```c
SetVersionMajor(2); // Sets Major to 2
```

### void SetVersionMinor(int value)

Same as above, but sets Minor value. Integer with max three digits.

Example: 

```c
SetVersionMinor(5); // Sets Minor to 5
```

### void SetVersionRelease(int value)

Same as above, but sets Release value. Integer with max four digits.

Example: 

```c
SetVersionRelease(12); // Sets Release to 12
```

### void SetVersionBuild(int value)

Same as above, but sets Build value. Integer with max one hundred digits.

Example: 

```c
SetVersionBuild(56); // Sets Build to 56
```

## Getting version numbers from library

### int GetVersionFull()

This function returns integer representing version of active library settings without any chars, eg. if version is set to "1.0.0 Build 10" the output will be 10010:

Example:

```c
// Set version in VerLib:
char version[] = { '1', '.', '0', '.', '0', '.', '1', '\0' };
SetVersionString(version);
printf("%i", GetVersionFull()); // Prints 1001
```

### int GetVersionMajor()

This function returns Major value from main VerLib variable.

Example:

```c
// Set version in VerLib:
char version[] = { '1', '.', '0', '.', '0', '.', '1', '\0' };
SetVersionString(version);
int major = GetVersionMajor(); // Returns 1
```

### int GetVersionMinor()

This function returns Minor value from main VerLib variable.

Example:

```c
// Set version in VerLib:
char version[] = { '1', '.', '0', '.', '0', '.', '1', '\0' };
SetVersionString(version);
int major = GetVersionMinor(); // Returns 0
```

### int GetVersionRelease()

This function returns Minor value from main VerLib variable.

Example:

```c
// Set version in VerLib:
char version[] = { '1', '.', '0', '.', '0', '.', '1', '\0' };
SetVersionString(version);
int major = GetVersionRelease(); // Returns 0
```

### int GetVersionBuild()

This function returns Minor value from main VerLib variable.

Example:

```c
// Set version in VerLib:
char version[] = { '1', '.', '0', '.', '0', '.', '1', '\0' };
SetVersionString(version);
int major = GetVersionBuild(); // Returns 1
```

## Incrementing or decrementing version numbers

### void IncrementMajor()

This function increments Major value in main VerLib variable.

Example:

```c
// Set version in VerLib:
char version[] = { '1', '.', '0', '.', '0', '.', '1', '\0' };
IncrementMajor();
// Here major has value 2
```

### void IncrementMinor()

This function increments Minor value in main VerLib variable.

Example:

```c
// Set version in VerLib:
char version[] = { '1', '.', '0', '.', '0', '.', '1', '\0' };
IncrementMinor();
// Here minor has value 1
```

### void IncrementRelease()

This function increments Release value in main VerLib variable.

Example:

```c
// Set version in VerLib:
char version[] = { '1', '.', '0', '.', '0', '.', '1', '\0' };
IncrementRelease();
// Here release has value 1
```

### void IncrementBuild()

This function increments Build value in main VerLib variable.

Example:

```c
// Set version in VerLib:
char version[] = { '1', '.', '0', '.', '0', '.', '1', '\0' };
IncrementBuild();
// Here build has value 2
```

### void DecrementMajor()

This function decrements Major value in main VerLib variable.

Example:

```c
// Set version in VerLib:
char version[] = { '1', '.', '0', '.', '0', '.', '1', '\0' };
DecrementMajor();
// Here major has value 0
```

### void DecrementMinor()

This function decrements Minor value in main VerLib variable.

Example:

```c
// Set version in VerLib:
char version[] = { '1', '.', '1', '.', '0', '.', '1', '\0' };
DecrementMinor();
// Here minor has value 0
```

### void DecrementRelease()

This function decrements Minor value in main VerLib variable.

Example:

```c
// Set version in VerLib:
char version[] = { '1', '.', '0', '.', '1', '.', '1', '\0' };
DecrementRelease();
// Here release has value 0
```

### void DecrementBuild()

This function decrements Minor value in main VerLib variable.

Example:

```c
// Set version in VerLib:
char version[] = { '1', '.', '0', '.', '0', '.', '10', '\0' };
DecrementBuild();
// Here build has value 9
```

## Writting version data

### void ConsoleLogVersion()

This function writes version from VerLib to console. Patern is "Major.Minor.Release Build"

Example:

```c
// Set version in VerLib:
char version[] = { '1', '.', '0', '.', '0', '.', '1', '\0' };
ConsoleLogVersion();
// Console will show: "1.0.0 1"
```

### char *LogVersionString()

This function returns the string, NULL terminated, to the caller. The version in this string is identical as from ConsoleLogVersion function, but without dots.

Example:

```c
// Set version in VerLib:
char version[] = { '1', '.', '0', '.', '0', '.', '1', '\0' };
char *version = LogVersionString();
// Var will have pointer to value: "1001\0"
```

## Additional functions

### bool CompareVersions(Version x, Version y)

This function compares two given versions checking, if they are the same.

Example:

```
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

bool cmpvar = CompareVersions(version1, version2);
// "cmpvar" will have false value, cos the versions are not the same
```
