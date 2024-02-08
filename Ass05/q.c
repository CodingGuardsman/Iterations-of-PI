//@file q.c
//@author Bryan Lee Kwan Hong (Kwanhong.lee)
//@course CSD1121F22
//@section Section A
//@tutorial Ass05
//@date 3/10/2022
//@brief this file q.c coalculates pi using leibniz montecarlo and trapezoid methods. This function especially loves for loops.

#include <stdio.h>
#include <math.h>
#include <stdlib.h> // srand, rand

// Trapezoid Pi Method Function (1 input: number of rects) Radius is 2 units. Bruh this one was damn hard but i got it.
double trapezoid_pi(int num_of_rects) 
{
    double r = 2.0;
    double x = 0.0; 
    double pi = 0.0;
    double w = 0.0; 
    double h = 0.0; 
    double TotalHeight = 0.0;
        
    w = 2.0/(double)num_of_rects;
    for (int i = 0; i < num_of_rects; i++)
    {
        x = (w + 2*w*i)/2;
        h = sqrt((r*r) - (x*x));
        TotalHeight += h;
        pi = w * TotalHeight;
    }
        return pi;
}

double rand_dbl(double m, double n) {
    return ((double)rand()/(double)RAND_MAX)*(n-m) + m;
}
// Montecarlo Pi Method (2 inputs: seed, and num of trails) 
// Find x & y thru rand with the seed
// distance of x and y must be lesser than 1 (from the center of circle) for it to be in the circle. 
// If its in the circle, add 1+ to n.
double montecarlo_pi(unsigned int seed, int num_of_trails)
{
    int r = 1; double pi; int n=0; double x; double y; srand(seed);
    for (int i = 0; i < num_of_trails; i++)
    {
    x = rand_dbl(0,r);
    y = rand_dbl(0,r);

        if (((x*x) + (y*y)) <= 1)
        {
            n++;
        }
    }
    pi = (double)n/num_of_trails * 4; 
    return pi;
}

// Leibniz Pi Method (1 input: number of elements) The plus and minus signs alternate so must use pow.
double leibniz_pi(int num_elements)
{
    double term; double i; double sum; double pi;
    for (i = 0; i < num_elements; i++)
    {
        term = pow(-1, i)/(2*i+1);
        sum += term;
    }
    pi = 4 * sum;
    return pi;
}