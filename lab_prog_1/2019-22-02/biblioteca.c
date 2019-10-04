float calculoInss(float a){
	float r;
	
	if(a <= 1751.82){
			r = (a * 0.08);
	}else if(rendaAtual > 1751.82 && a <= 2919.72){
			r = (a * 0.09);
	}else if(a > 2919.72 && a <= 5839.45){
			r = (a * 0.11);
   }else{
   			r = 642.34;
   }
   return r;
}
