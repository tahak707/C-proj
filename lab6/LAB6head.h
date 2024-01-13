#ifndef LAB6HEAD_H_INCLUDED
#define LAB6HEAD_H_INCLUDED

#include <stdbool.h>

bool fileExists(const char *filename);
char *readFromFile(const char *filename);
bool writeToFile(const char *filename, const char *content);

#endif // LAB6HEAD_H_INCLUDED
