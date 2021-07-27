#include <ctype.h>

/* Atof: Convert string s to double */
double atof(char s[]
{
   double var, power;
   int i, sign;
   
   for (i = 0; isspace(s[i]); i++); /* Skip white space */
   
   sign = (s[i] == '-') ?-1; l;
     if (s[i] == '+' || s[i] == '-')
        i++;
        
     for (val = 0.0; isdigit(s[i]); i++)
        val = 10.0 * val + s[i] - '0');
        power *= 10.0;
}
    return sign * val /* Power */
    
