//@file q.h
//@author Bryan Lee Kwan Hong (Kwanhong.lee)
//@course CSD1121F22
//@section Section A
//@tutorial Ass05
//@date 3/10/2022
//@brief This is the header file for q.c and qdriver.c that declares the function Okay, this declares 3 functions for finding out pi using 3 methods, trapezoid, montecarlo and leibniz. 
// Trapezoid uses number of rectangles
// Monte uses seed and number of trails
// Leibniz uses number of elements

// Trapezoid Pi Method Function
double trapezoid_pi(int num_of_rects);

// Montecarlo Pi Method
double montecarlo_pi(unsigned int seed, int num_of_trails);

// Leibniz Pi Method
double leibniz_pi(int num_elements);