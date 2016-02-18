#pragma once
#include <procolib.h>

struct TransferFunction
{
	double* numerator;
	double* denominator;
	int numerator_order;
	int denominator_order;
};

PROCOLIB_RESULT PROCOLIB_API create_transfer_function(TransferFunction* tf, 
                                                      const double* numerator, 
                                                      const int numerator_count, 
                                                      const double* denominator,
                                                      const int denominator_count)
{
   PROCOLIB_RESULT ret = PROCOLIB_NO_ERROR;
   
   if(numerator == NULL || denominator == NULL)
   {
      ret = PROCOLIB_ERR_INVALID_POINTER_ARGUMENT;
   }
   else if( numerator_count < 0 || denominator_count < 0)
   {
      ret = PROCOLIB_ERR_BAD_ARGUMENT;
   }
   else
   {
      tf->numerator = numerator;
      tf->denominator = denominator;
      tf->numerator_order = numerator_count;
      tf->denominator_order = denominator_count;      
   }
   
   return ret;
}