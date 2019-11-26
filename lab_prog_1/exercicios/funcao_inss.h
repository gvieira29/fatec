float calc_INSS(float renda){
	float inss;
    
    if(renda <= 1751.82){
		inss = (renda * 0.08);
		}

		else if(renda > 1751.82 && renda <= 2919.72){
		inss = (renda * 0.09);
		}

    else if(renda > 2919.72 && renda <= 5839.45){
		inss = (renda * 0.11);
   	}

    else if (renda < 5839.45){
   		inss = 642.34;
   	}
		else if (renda == 0){
			
		}