//Analysis Type - Classification 
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>


double Over2cc_8_MLP_22_6_2_input_hidden_weights[6][22]=
{
 {3.96178360499340e+000, 3.16164837292131e+000, 1.42402884839962e+001, 1.12855447929618e+001, 1.04752940853834e+001, -8.32863198337502e+000, -9.06959364773064e+000, -1.74764501351115e+001, -6.00226538362109e+000, -1.16598521008708e+001, -7.65457908474690e-001, -1.81243462242034e+001, 1.30980606008465e+000, -8.15172925532322e+000, 1.51536298194600e+001, -3.48298868139940e+000, 5.61251764244928e+000, 6.91301946827843e+000, -4.37739274758317e+000, -5.25132995961063e+000, -7.13097701562838e+000, -1.63888588994517e+000 },
 {-4.76464320056212e-001, -2.60782496425124e-002, -2.29163799279711e+000, -4.37855057818498e+000, -3.04789085949645e+000, 8.34367157722359e-001, 4.13128444011444e+000, 3.34642769007736e+000, 2.96250904732502e+000, 2.91741130943199e+000, -8.60303900454218e-001, 1.91241731193886e+000, -1.20460755324365e-001, 1.31434060834673e+000, -3.53676514984811e+000, -5.98011033666123e-001, -4.55003500303670e+000, -5.93889482189971e-001, -8.40773988601005e-001, 1.18523988154164e+000, 1.38269689879566e+000, -2.32353848388098e+000 },
 {1.38958631972726e+000, 2.61397767918994e-001, 8.52064182543514e+000, 1.28775570189933e+001, 9.45732374510274e+000, -5.01747672127762e+000, -1.27013750643307e+001, -1.33288187996382e+001, -9.39605429525058e+000, -1.04500789599969e+001, 1.22161991315589e+000, -9.77815358905772e+000, 1.72981505636263e-001, -5.32464771873341e+000, 1.17128508134360e+001, -2.97148458839108e-001, 1.21383419713097e+001, 2.51084858258380e+000, 8.11769722373274e-001, -5.03130251698930e+000, -5.42166457415197e+000, 4.30094622083331e+000 },
 {7.27638303573541e-001, 2.33793109287484e-001, 4.55617652209789e+000, 5.80439766452402e+000, 4.43879506583597e+000, -3.12824940316777e+000, -5.85478908453421e+000, -7.22073801951444e+000, -4.37980600193515e+000, -5.39677909950310e+000, 4.57858383855891e-003, -5.92492760213250e+000, 5.45893094189822e-002, -2.93441438116373e+000, 5.86815760873257e+000, -9.12909284541276e-001, 4.99980137923411e+000, 1.50352096328129e+000, -1.75246926449053e-001, -2.75218929301074e+000, -2.89829566034494e+000, 1.02625478510410e+000 },
 {5.20921913303043e+000, 4.59111870101290e+000, 1.63908337113534e+001, 1.02455530070830e+001, 1.06769094283218e+001, -9.26233164218271e+000, -6.88580377937776e+000, -1.84000526468030e+001, -3.99613490773405e+000, -1.15954042927284e+001, -1.42135175041071e+000, -2.10946318371827e+001, 1.88432865860478e+000, -9.06170442435181e+000, 1.61853442977032e+001, -4.58085375796708e+000, 2.40675196127059e+000, 8.88070697557631e+000, -6.52752405439982e+000, -4.88102251108691e+000, -7.54436479685455e+000, -4.18123421764837e+000 },
 {2.54082976873620e+000, 2.22200396371676e+000, 8.45921766281440e+000, 5.75313712857845e+000, 5.76117336585700e+000, -4.94188249605175e+000, -4.16541382357739e+000, -9.86095808728105e+000, -2.55689624364682e+000, -6.29747108940133e+000, -6.87078740960731e-001, -1.09636247882426e+001, 9.06160447889498e-001, -4.78057558862216e+000, 8.58370154865934e+000, -2.36934254102000e+000, 1.85084612368129e+000, 4.40801234303324e+000, -3.14650001380080e+000, -2.79527918491675e+000, -4.05760097179397e+000, -1.88877045757918e+000 } 
};

double Over2cc_8_MLP_22_6_2_hidden_bias[6]={ 1.33482815603226e+000, -1.84979860639409e+000, 3.88201972104844e+000, 1.27899048795770e+000, 2.88155782684523e-001, 2.58806959855541e-001 };

double Over2cc_8_MLP_22_6_2_hidden_output_wts[2][6]=
{
 {1.23642960122627e+000, -3.65501170182254e+000, 1.19841992078882e+001, 5.92420215638206e+000, -4.11509537500087e+000, -1.05412179813309e+000 },
 {-1.83458496000035e+000, 4.22741509704535e+000, -1.33421802254345e+001, -5.69314343821917e+000, 4.62037265571752e+000, 1.24076462293533e+000 }
};

double Over2cc_8_MLP_22_6_2_output_bias[2]={ 1.05992462815085e+000, -9.88218543578253e-002 };

double Over2cc_8_MLP_22_6_2_max_input[22]={ 9.94225622500000e-001, 9.96754273526000e-001, 9.97102711270667e-001, 9.95170697016667e-001, 9.97911037399333e-001, 9.99977398435000e-001, 9.78343830095000e-001, 9.91579149548667e-001, 9.51627339487000e-001, 6.77785077092000e+000, 6.81794634845333e+000, 6.09698918942000e+000, 7.05260550610667e+000, 1.91273776273333e+000, 8.65563457626667e-001, 6.42679814845667e+000, 6.07940450162667e+000, 9.96854540307667e-001, 2.12815921118000e+000, 4.99555750214000e-001, 4.87575136096667e+000, 7.77973268702667e-001 };

double Over2cc_8_MLP_22_6_2_min_input[22]={ 9.51458841268667e-001, 9.57705102447333e-001, 9.38441273251000e-001, 9.33755227989000e-001, 9.57500458124000e-001, 8.14424454238667e-001, 8.66181001041000e-001, 8.57150687641000e-001, 7.33377997593000e-001, 5.36721515213000e+000, 5.21295757638667e+000, 4.52158193725667e+000, 5.46910956128333e+000, 1.01570920883333e+000, 5.96739362359667e-001, 4.23179759442333e+000, 3.90952828744333e+000, 6.35162254726333e-001, 1.04925532510333e+000, 2.44262934234000e-001, 3.00348783322667e+000, 3.12766281606667e-001 };

double Over2cc_8_MLP_22_6_2_input[22];
double Over2cc_8_MLP_22_6_2_hidden[6];
double Over2cc_8_MLP_22_6_2_output[2];

double Over2cc_8_MLP_22_6_2_MeanInputs[22]={ 9.86215974880607e-001, 9.79769865419318e-001, 9.77174969672753e-001, 9.72810897712386e-001, 9.83610133938442e-001, 9.91240682825940e-001, 9.24927041841446e-001, 9.38665182996753e-001, 8.66940461142569e-001, 5.95974044334588e+000, 6.07191804257450e+000, 5.28713197315846e+000, 6.21968357680817e+000, 1.06412944461019e+000, 7.31393955181164e-001, 5.55638946377131e+000, 4.93827896731921e+000, 8.93468219422401e-001, 1.17054459403813e+000, 4.40861350465457e-001, 3.91359149242479e+000, 6.50102625908682e-001 };

void Over2cc_8_MLP_22_6_2_ScaleInputs(double* input, double minimum, double maximum, int size)
{
 double delta;
 long i;
 for(i=0; i<size; i++)
 {
	delta = (maximum-minimum)/(Over2cc_8_MLP_22_6_2_max_input[i]-Over2cc_8_MLP_22_6_2_min_input[i]);
	input[i] = minimum - delta*Over2cc_8_MLP_22_6_2_min_input[i]+ delta*input[i];
 }
}

double Over2cc_8_MLP_22_6_2_logistic(double x)
{
  if(x > 100.0) x = 1.0;
  else if (x < -100.0) x = 0.0;
  else x = 1.0/(1.0+exp(-x));
  return x;
}

void Over2cc_8_MLP_22_6_2_Normalise(double out[],long length)
{
  long i, j;
  double sum = 0.0;
  for(i=0; i<length; i++)
  {
   if(out[i]>100)
   {
    out[i] = 1.0;
    j = i;
    for(i=0; i<length; i++)
    {
     if(i!=j) out[i] = 0.0;
    }
    break;
   }
   else out[i] = exp(out[i]);
  }
  for(i=0; i<length; i++)
  {
   sum += out[i];
  }
  for(i=0; i<length; i++)
  {
   out[i] = out[i]/sum;
  }
}

void Over2cc_8_MLP_22_6_2_ComputeFeedForwardSignals(double* MAT_INOUT,double* V_IN,double* V_OUT, double* V_BIAS,int size1,int size2,int layer)
{
  int row,col;
  for(row=0;row < size2; row++) 
    {
      V_OUT[row]=0.0;
      for(col=0;col<size1;col++)V_OUT[row]+=(*(MAT_INOUT+(row*size1)+col)*V_IN[col]);
      V_OUT[row]+=V_BIAS[row];
      if(layer==1) V_OUT[row] = Over2cc_8_MLP_22_6_2_logistic(V_OUT[row]);
   }
}

void Over2cc_8_MLP_22_6_2_RunNeuralNet_Classification () 
{
  Over2cc_8_MLP_22_6_2_ComputeFeedForwardSignals((double*)Over2cc_8_MLP_22_6_2_input_hidden_weights,Over2cc_8_MLP_22_6_2_input,Over2cc_8_MLP_22_6_2_hidden,Over2cc_8_MLP_22_6_2_hidden_bias,22, 6,0);
  Over2cc_8_MLP_22_6_2_ComputeFeedForwardSignals((double*)Over2cc_8_MLP_22_6_2_hidden_output_wts,Over2cc_8_MLP_22_6_2_hidden,Over2cc_8_MLP_22_6_2_output,Over2cc_8_MLP_22_6_2_output_bias,6, 2,1);
}

int main()
{
  int cont_inps;
  int index;
  int i=0;
  int keyin=1;
  double max;
  while(1)
  {
	max=3.e-300;
	printf("\n%s\n","Enter values for Continuous inputs (To skip a continuous input please enter -9999)");
	printf("%s","Cont. Input-0(wavelet-LLLglrlmShortRunEmphasis): ");
	scanf("%lg",&Over2cc_8_MLP_22_6_2_input[0]);
	printf("%s","Cont. Input-1(wavelet-LHLglcmIdmn): ");
	scanf("%lg",&Over2cc_8_MLP_22_6_2_input[1]);
	printf("%s","Cont. Input-2(wavelet-HLHglcmIdmn): ");
	scanf("%lg",&Over2cc_8_MLP_22_6_2_input[2]);
	printf("%s","Cont. Input-3(wavelet-LHHglcmIdmn): ");
	scanf("%lg",&Over2cc_8_MLP_22_6_2_input[3]);
	printf("%s","Cont. Input-4(wavelet-HHLglcmIdmn): ");
	scanf("%lg",&Over2cc_8_MLP_22_6_2_input[4]);
	printf("%s","Cont. Input-5(wavelet-LLHglcmImc2): ");
	scanf("%lg",&Over2cc_8_MLP_22_6_2_input[5]);
	printf("%s","Cont. Input-6(wavelet-HHHglcmIdn): ");
	scanf("%lg",&Over2cc_8_MLP_22_6_2_input[6]);
	printf("%s","Cont. Input-7(wavelet-HLHglrlmShortRunEmphasis): ");
	scanf("%lg",&Over2cc_8_MLP_22_6_2_input[7]);
	printf("%s","Cont. Input-8(wavelet-LLHglszmSmallAreaEmphasis): ");
	scanf("%lg",&Over2cc_8_MLP_22_6_2_input[8]);
	printf("%s","Cont. Input-9(wavelet-LHLgldmDependenceEntropy): ");
	scanf("%lg",&Over2cc_8_MLP_22_6_2_input[9]);
	printf("%s","Cont. Input-10(wavelet-HLLgldmDependenceEntropy): ");
	scanf("%lg",&Over2cc_8_MLP_22_6_2_input[10]);
	printf("%s","Cont. Input-11(wavelet-HHLgldmDependenceEntropy): ");
	scanf("%lg",&Over2cc_8_MLP_22_6_2_input[11]);
	printf("%s","Cont. Input-12(wavelet-LLHglrlmRunEntropy): ");
	scanf("%lg",&Over2cc_8_MLP_22_6_2_input[12]);
	printf("%s","Cont. Input-13(wavelet-LLHglrlmLongRunEmphasis): ");
	scanf("%lg",&Over2cc_8_MLP_22_6_2_input[13]);
	printf("%s","Cont. Input-14(originalglszmSmallAreaEmphasis): ");
	scanf("%lg",&Over2cc_8_MLP_22_6_2_input[14]);
	printf("%s","Cont. Input-15(wavelet-LHHglszmZoneEntropy): ");
	scanf("%lg",&Over2cc_8_MLP_22_6_2_input[15]);
	printf("%s","Cont. Input-16(wavelet-LLLglcmDifferenceEntropy): ");
	scanf("%lg",&Over2cc_8_MLP_22_6_2_input[16]);
	printf("%s","Cont. Input-17(wavelet-LLLglcmMCC): ");
	scanf("%lg",&Over2cc_8_MLP_22_6_2_input[17]);
	printf("%s","Cont. Input-18(originalglrlmLongRunEmphasis): ");
	scanf("%lg",&Over2cc_8_MLP_22_6_2_input[18]);
	printf("%s","Cont. Input-19(wavelet-HHLglcmInverseVariance): ");
	scanf("%lg",&Over2cc_8_MLP_22_6_2_input[19]);
	printf("%s","Cont. Input-20(originalglcmDifferenceEntropy): ");
	scanf("%lg",&Over2cc_8_MLP_22_6_2_input[20]);
	printf("%s","Cont. Input-21(originalshapeSphericity): ");
	scanf("%lg",&Over2cc_8_MLP_22_6_2_input[21]);
	for(cont_inps=0;cont_inps<22;cont_inps++)
	{
     //Substitution of missing continuous variables
     if(Over2cc_8_MLP_22_6_2_input[cont_inps] == -9999)
	  Over2cc_8_MLP_22_6_2_input[cont_inps]=Over2cc_8_MLP_22_6_2_MeanInputs[cont_inps];
	}
    Over2cc_8_MLP_22_6_2_ScaleInputs(Over2cc_8_MLP_22_6_2_input,0,1,22);
	Over2cc_8_MLP_22_6_2_RunNeuralNet_Classification();
   //Normalise output if output activation is not Softmax;
 	Over2cc_8_MLP_22_6_2_Normalise(Over2cc_8_MLP_22_6_2_output,2);
	for(i=0;i<2;i++)
	{
      if(max<Over2cc_8_MLP_22_6_2_output[i])
      {
        max=Over2cc_8_MLP_22_6_2_output[i];
        index=i+1;
      }
	}
	printf("\n%s","Predicted category = ");

    switch(index)
    {
        case 1: printf("%s\n","0"); break;
        case 2: printf("%s\n","1"); break;
        default: break;
    }
    printf("\n%s%.14f","Confidence level = ",max);
	printf("\n\n%s\n","Press any key to make another prediction or enter 0 to quit the program.");
	keyin=getch();
	if(keyin==48)break;
  }
	return 0;
}

