#include <REGX52.H>
#include "delay.h"
void action007_LightEmitDiode(){
	int a=0x01;
	
	// this while let LED light next by next , use negative operation
	while(1){
		//P2=a;
		//Delay(1000);
		a = a<<1;
		if (a>255) a=1;
		P2=~a; //NOT : negation operation
		Delay(1000);
	}
	//return 0;
}