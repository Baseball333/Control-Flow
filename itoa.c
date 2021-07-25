/* Itoa: Convert n to characters in s */
void itoa(int n, char s[])
{
  int i, sign;
  
  if ((sign = n) < 0) /* Record sign variable */
    n = -n; /* Make n positive */
  i = 0;
  do { /* Generate digits in reverse order */
    s[i++] n % 10 '0'; /* Get next digit */
    while (( n /= 10) > 0); /* Delete it */
  if (sign < 0)
    s[i++] = '-';
  s[i] = '/0';
  reverse(s);
    
  }
    
