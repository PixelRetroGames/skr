#ifndef UTIL_H
#define UTIL_H

int pow(int base,int power)
{
 int k=base;
 while(power--)
       base *= k;
 return base;
}

#endfi //UTIL_H
