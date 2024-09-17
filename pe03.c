#include <stdio.h>
#include <stdlib.h>

#include "answer03.h"

int main(int argc, char **argv)
{
   // fill in the correct statements to complete the main function
   //
   // we expect four arguments:
   //
   // the first argument is from the sets {"-m", "-t"}
   // -m: run mid_point_numerical_integration
   // -t: run trapezoidal_numerical_integration
   // otherwise: return EXIT_FAILURE
     
   // to run any of the two integration functions, expect the next 
   // three arguments to be the lower limit of the integration (double), 
   // the upper limit of the integration (double), and the number of 
   // intervals for the integration (int)
   //
   // use strtod to convert an argument to a double 
   // use strtol to convert an argument to a long (and then to an int)
   // check that the arguments are of the correct format and within range

   double integrand = 0.0;

   fprintf(stdout, "%.10e\n", integrand);
   return EXIT_SUCCESS;
}
