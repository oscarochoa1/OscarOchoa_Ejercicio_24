#include <iostream>
#include <random>
#include <stdlib.h>
#include <cmath>
		
int main(){

	int i;
	float r;
	float propuesta;
	float delta = 1.0;
	float sigma=1.0;
	float alpha=drand48();
	int N = 10000;
		float pi = 2.0*asin(1.0);
	
	 srand48(8);
	drand48();
  for (i=0;i<10000;i++){
	  
  propuesta = N + drand48();
	  r = ( ((exp((-propuesta*propuesta)/(2.0*sigma*sigma))/sqrt(2.0*pi*sigma*sigma)))/(exp((-drand48()*drand48())/(2.0*sigma*sigma))/sqrt(2.0*pi*sigma*sigma)));
	  
		  std::cout << i << r << std::endl;
	  
  }
		return 0;		
			}
	
