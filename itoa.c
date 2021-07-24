/* Itoa: Convert n to characters in s */
void itoa(int n, char s[])
{
  int i, sign;
  
  if ((sign = n) < 0) /* Record sign variable */
    n = -n; /* Make n positive */
  
