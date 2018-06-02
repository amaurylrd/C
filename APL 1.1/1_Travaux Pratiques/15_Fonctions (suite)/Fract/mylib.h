#ifndef MYLIB_H
# define MYLIB_H

#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <unistd.h>
#include <string.h>
#include <assert.h>
#include <stdbool.h>

double		split_a(char *str);
double		split_b(char *str);
int			checker_int(char *str);
int			checker_char(char c);
double      ope(double v1, double v2, double v3, double v4, char c);
int         warn_0(double var);
double      conv(double x, int d);

#endif
