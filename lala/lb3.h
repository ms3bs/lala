#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<math.h>
struct Timeline {
	int year;
	int day;
	int second;
};
struct Timeline subtr(struct Timeline a, struct Timeline b)
{
	struct Timeline c;
	int d = 0;;
	c.second = a.second - b.second;
	if (c.second < 0)
	{
		c.second += 86400;
		d = 1;
	}
	c.day = a.day - b.day - d;
	d = 0;
	if (c.day < 0)
	{
		c.day += 365;
		d = 1;
	}
	c.year = a.year - b.year - d;
	return c;
}