#include "main.h"
/**
 * _isalpha - checks if the alphabetic letter is lower or uppercase
 * @c: letter to be checked
 * Return: 1 is a letter lower or uppercase 0 otherwise
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
