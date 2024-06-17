#include "stdio.h"

int bdiv( int dividend , int divisor )
{
  int remainder = dividend ;
  int quotient  = 0 ;

  int i ;
  for( i = 0 ; i < 17 ; i++ )
    {
      remainder = remainder - divisor ;
      if( (remainder < 0)  )
        {
          remainder = remainder + divisor ;
          quotient  = quotient << 1 ;
        }
      else
        quotient = (( quotient >> 1 ) | 0x1) ;

      divisor = divisor >> 1 ;
    }
  return quotient ;
}

int main()
{
  int a = 1100 ;
  int b = 10 ;

  printf( "%d\n" , bdiv(a,b) ) ;

}
