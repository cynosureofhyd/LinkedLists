
/**
 * File: narcissism.cpp
 * --------------------
 * This file defines a program that prints out
 * the first 25 narcissistic numbers.
 */

#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <stdlib.h>
#include "genlib.h"
#include "strutils.h"

static const int kNumToPrint = 25;

void introduce() {
	cout << "Here's a great little program that prints out the first "
		 << kNumToPrint << " narcissistic numbers." << endl << endl;
}

/**
 * Simple little function to quickly compute
 * base to the exp power.  Assumes base and
 * exp are small and positive.
 */

int pow(int base, int exp) {
	int ans = 1;
	for (int i = 0; i < exp; i++) {
		ans *= base;
	}
	
	return ans;
}

/**
 * Predicate function that returns true if and only
 * if the supplied number is narcissistic.
 */

bool isNarcissistic(int n) {
	int original = n;
	int sum = 0;
	int numDigits = IntegerToString(n).size();
	
	while (n > 0) {
		sum += pow(n % 10, numDigits);
		n /= 10;
	} 
	return sum == original;
}

/**
 * As expected, printNarcisstisticNumbers prints
 * out the first kNumToPrint narcissistic numbers,
 * in sequence, as it discovers them.
 */

void printNarcisstisticNumbers() {
	int numFound = 0;
	int n = 1;
	
	while (numFound < kNumToPrint) {
		if (isNarcissistic(n)) {
			numFound++;
			cout << setw(2) << numFound << ".) " << n << endl;
		}
		n++;
	}
}

/**
 * Serves as the entry point to the entire program, as
 * all main functions do.  This one just passes the buck
 * to two helper functions.
 */
//











































































































































































































































































































































































































