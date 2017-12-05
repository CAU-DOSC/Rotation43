#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int w, n, d;
char *str;
double time1, time2, time3, time4;

int gendata();
void strgen();
void reverse(char *str, int start, int end);
void reversal(char *str);
int countdistance(int d);
void juggling(char *str);
int gcd(int a, int b);
void trivial(char *str);
void swap(char *arr, int start, int end, int d);
void blockswap(char *arr);