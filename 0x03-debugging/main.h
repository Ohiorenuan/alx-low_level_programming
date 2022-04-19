#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

/**
 * positive_or_negative - Tests function if its positive or negative
 * @i: Integer to be tested
 */
void positive_or_negative(int i);

/**
 * largest_number - Tests for the largest number
 * @a: One of the number being evaluated
 * @b: One of the number being evaluated
 * @c: One of the number being evaluated
 *
 * Return: The largest number
 */
int largest_number(int a, int b, int c);

/**
* convert_day - converts day of month to day of year, without accounting
* for leap year
* @month: month in number format
* @day: day of month
* Return: day of year
*/
int convert_day(int month, int day);

/**
* print_remaining_days - takes a date and prints how many days are
* left in the year, taking leap years into account
* @month: month in number format
* @day: day of month
* @year: year
* Return: void
*/
void print_remaining_days(int month, int day, int year);

#endif
