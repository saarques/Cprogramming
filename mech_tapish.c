#include <stdio.h>
#include <math.h>


int main() { 
	int D, D1, d, d0, a, b, d1, x, Z;
	float P, W, X;
	printf(" Enter the value of axial tensile force (in kN) :  ");
	scanf("%lF", P);
	printf("\nMaterial selected : 30C8 (Syt = 400 N/mm2 \n\nFactor of safety is taken as 5 ");

	X = 4000*P/(3.14*80);
	D = pow(X, 0.5);

	if (D%5!=0)
		D= D+(5-(D% 5));

	D1 = 1.1*D;
	if (D1%5!=0)
		D1=D1+(5-(D1%5));

	a = 0.75*D; 
	if (a%5!=0)
		a=a+(5-(a%5));

	b=1.25*D;
	if (b%5!=0)
		b=b+(5-(b%5));

	W=(32/(3.14*80))*(P*500)*((b/4)+(a/3));
	Z= pow(W, 0.3333);
	Z= Z+(5-(Z%5));
	if (D>Z) 
		d = D;
	else 
		d =Z;


	d0 = 2*d;   
	d1=1.5*d; 

	if (d1%5!=0)
 		d1=d1+(5-(d1%5));


	printf(" \n\n Diameter of each rod (mm) : %d", D) ;
	printf(" \n\n Enlarged diameter of each rod (mm) : %d", D1) ;
	printf(" \n\n Diameter of knuckle pin (mm) : %d", d);
	printf(" \n\n Outside diameter of eye or fork (mm) : %d", d0) ;
	printf(" \n\n Diameter of pin head (mm) : %d", d1);
	printf(" \n\n Thickness of each eye of fork(mm) : %d", a) ;
	printf(" \n\n Thickness of eye end of rod-B (mm) : %d", b);

	return 0;
}
