//Analysis Type - Classification 
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>


double Over2cc_10_MLP_21_7_2_input_hidden_weights[7][21]=
{
 {-1.13593938446443e+002, 9.46225430681765e+001, 1.08494464002899e+002, -6.08600215784236e+001, -4.93391576762427e+001, 4.15542609232684e+001, -2.23833256737720e+001, -6.97225858334321e+001, -2.75135850273218e+000, 1.49320865245713e+002, 3.12198193900834e+000, 8.39519628375426e+001, -8.02029651549974e+001, -7.25757808245164e+000, 3.62421511487217e+001, 5.02323126427893e+001, -1.48982344939167e+002, 4.66500998331466e+001, 2.04392559153185e+002, -2.93288918987519e+001, -7.31387567909775e+001 },
 {-1.10950909264583e+002, 8.51936788710299e+001, 1.00771603626148e+002, -5.85613299269577e+001, -5.73231817610372e+001, 4.45377357603383e+001, -2.61324308657448e+001, -7.41118297689432e+001, -2.27923416769492e+000, 1.43742958745151e+002, 6.60218550250574e+000, 8.18393957932888e+001, -7.57764858210608e+001, -3.44186778725144e+000, 3.44567559238524e+001, 5.52685399993653e+001, -1.50175101263629e+002, 4.46629854669426e+001, 2.01203028375698e+002, -2.61590496873762e+001, -7.09968209036178e+001 },
 {-1.09465650613121e+002, 9.16965342789557e+001, 1.05127127398849e+002, -6.65837967161672e+001, -2.98561745021692e+001, 2.41874629380913e+001, -1.55257487756110e+001, -5.04880949992602e+001, -1.19519584419721e+001, 1.37489922873570e+002, -9.00512758412633e+000, 7.55078226617910e+001, -8.02666448666357e+001, -1.69730913519649e+001, 3.28592239829559e+001, 2.25457277235317e+001, -1.23652117027396e+002, 4.01005787058654e+001, 1.78844845537946e+002, -3.63630279743567e+001, -6.62646400794867e+001 },
 {-1.10144098608311e+002, 8.78961031535851e+001, 1.00498055798410e+002, -6.20839677703073e+001, -4.34127962580443e+001, 3.22709600437472e+001, -2.38762488351020e+001, -6.28046231138142e+001, -6.28400768383715e+000, 1.36847470592231e+002, -7.92950018788088e-001, 7.86833036166012e+001, -7.86435999447033e+001, -1.23872298844448e+001, 3.06356338861065e+001, 3.79531715271704e+001, -1.38468696789756e+002, 3.97029036110960e+001, 1.90559563463371e+002, -2.96426223204611e+001, -6.86164480803655e+001 },
 {-7.83904058626994e+001, 7.53100034318717e+001, 8.89882592990943e+001, -5.52664477874920e+001, -2.38781769149068e+000, 7.43101169971447e+000, -1.77240695686339e+000, -1.22426803979025e+001, -1.00356661966070e+001, 1.07585321030117e+002, -1.81782510953855e+001, 5.31409596379952e+001, -5.27389678055357e+001, -1.99609038625285e+001, 2.47872298817308e+001, -9.17593038590827e+000, -6.83182817193823e+001, 3.04650354254160e+001, 1.29032788438589e+002, -2.97063934289688e+001, -3.98577494037143e+001 },
 {-1.05909563852130e+002, 9.08423985268558e+001, 1.05303739369603e+002, -6.44998803504790e+001, -2.79688349466223e+001, 2.32015319405945e+001, -1.36708291680284e+001, -4.58415312209167e+001, -1.01184205651144e+001, 1.37243259175152e+002, -1.17440465200708e+001, 7.37509161669595e+001, -7.61267296226044e+001, -1.74239039064446e+001, 3.17681033471046e+001, 2.06980512473966e+001, -1.18591164258099e+002, 4.06161445523458e+001, 1.72758445391722e+002, -3.37632523839629e+001, -6.43547754455358e+001 },
 {-1.15886870198296e+002, 9.17033763325317e+001, 1.11513067346866e+002, -6.03674189367106e+001, -5.83889634606078e+001, 4.75627219261980e+001, -2.19398669616808e+001, -7.42522463418087e+001, -2.59221031807267e+000, 1.56034806009802e+002, 3.57785785602162e+000, 8.58690493882567e+001, -7.98174513982823e+001, -2.43964827714639e+000, 3.86063803716993e+001, 5.83683253730985e+001, -1.53496445942630e+002, 4.89015084120663e+001, 2.05175868396536e+002, -2.72562385319332e+001, -7.37220736053513e+001 } 
};

double Over2cc_10_MLP_21_7_2_hidden_bias[7]={ 1.32002534800618e+001, 1.19423627041188e+001, 4.92326538122881e+000, 8.40834930085130e+000, 2.59079834634955e+000, 6.06668386468402e+000, 1.36303575280743e+001 };

double Over2cc_10_MLP_21_7_2_hidden_output_wts[2][7]=
{
 {2.68494234205185e+001, 1.78028105439207e+001, -8.33402563413924e+000, 8.35503133408737e-001, -2.04840536888318e+001, 1.63956982189377e+000, 2.37819842076368e+001 },
 {-2.87794303814325e+001, -1.73118241380564e+001, 6.84228684577480e+000, -2.05828149369437e+000, 2.13385672270342e+001, -2.72501004870580e+000, -2.37620458191563e+001 }
};

double Over2cc_10_MLP_21_7_2_output_bias[2]={ 1.34149742804348e-002, -5.31941386334356e-003 };

double Over2cc_10_MLP_21_7_2_max_input[21]={ 9.94225622500000e-001, 9.98205853844333e-001, 9.96754273526000e-001, 9.99958012914333e-001, 9.94505657234667e-001, 9.87686168724000e-001, 9.98278127930000e-001, 9.95170697016667e-001, 9.99977398435000e-001, 9.76060123067333e-001, 9.81017347897333e-001, 1.40417965636667e+000, 9.51627339487000e-001, 8.65563457626667e-001, 6.46031687483333e+000, 9.96854540307667e-001, 6.71294571244000e+000, 4.99555750214000e-001, 8.21654401930000e-001, 7.77973268702667e-001, 8.87391385084667e-001 };

double Over2cc_10_MLP_21_7_2_min_input[21]={ 9.51458841268667e-001, 9.52721802638333e-001, 9.57705102447333e-001, 9.07570890327000e-001, 9.43359485176000e-001, 9.10429029488667e-001, 9.43173352577333e-001, 9.33755227989000e-001, 8.14424454238667e-001, 8.71982414223667e-001, 8.56874668825000e-001, 1.02462806683000e+000, 7.33377997593000e-001, 5.96739362359667e-001, 4.45016599139000e+000, 6.35162254726333e-001, 4.48663980817333e+000, 2.44262934234000e-001, 4.33984373328333e-001, 3.12766281606667e-001, 4.64379424052333e-001 };

double Over2cc_10_MLP_21_7_2_input[21];
double Over2cc_10_MLP_21_7_2_hidden[7];
double Over2cc_10_MLP_21_7_2_output[2];

double Over2cc_10_MLP_21_7_2_MeanInputs[21]={ 9.86215974880607e-001, 9.82580240878453e-001, 9.79769865419318e-001, 9.94294379312090e-001, 9.73150089825902e-001, 9.66227464441086e-001, 9.81998966214847e-001, 9.72810897712386e-001, 9.91240682825940e-001, 9.29932763713648e-001, 9.33069803359037e-001, 1.06187684347659e+000, 8.66940461142569e-001, 7.31393955181164e-001, 5.13171062654525e+000, 8.93468219422401e-001, 5.66245517208056e+000, 4.40861350465457e-001, 6.49529047198333e-001, 6.50102625908682e-001, 6.44693150319109e-001 };

void Over2cc_10_MLP_21_7_2_ScaleInputs(double* input, double minimum, double maximum, int size)
{
 double delta;
 long i;
 for(i=0; i<size; i++)
 {
	delta = (maximum-minimum)/(Over2cc_10_MLP_21_7_2_max_input[i]-Over2cc_10_MLP_21_7_2_min_input[i]);
	input[i] = minimum - delta*Over2cc_10_MLP_21_7_2_min_input[i]+ delta*input[i];
 }
}

double Over2cc_10_MLP_21_7_2_logistic(double x)
{
  if(x > 100.0) x = 1.0;
  else if (x < -100.0) x = 0.0;
  else x = 1.0/(1.0+exp(-x));
  return x;
}

void Over2cc_10_MLP_21_7_2_Normalise(double out[],long length)
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

void Over2cc_10_MLP_21_7_2_ComputeFeedForwardSignals(double* MAT_INOUT,double* V_IN,double* V_OUT, double* V_BIAS,int size1,int size2,int layer)
{
  int row,col;
  for(row=0;row < size2; row++) 
    {
      V_OUT[row]=0.0;
      for(col=0;col<size1;col++)V_OUT[row]+=(*(MAT_INOUT+(row*size1)+col)*V_IN[col]);
      V_OUT[row]+=V_BIAS[row];
      if(layer==0) V_OUT[row] = Over2cc_10_MLP_21_7_2_logistic(V_OUT[row]);
      if(layer==1) V_OUT[row] = Over2cc_10_MLP_21_7_2_logistic(V_OUT[row]);
   }
}

void Over2cc_10_MLP_21_7_2_RunNeuralNet_Classification () 
{
  Over2cc_10_MLP_21_7_2_ComputeFeedForwardSignals((double*)Over2cc_10_MLP_21_7_2_input_hidden_weights,Over2cc_10_MLP_21_7_2_input,Over2cc_10_MLP_21_7_2_hidden,Over2cc_10_MLP_21_7_2_hidden_bias,21, 7,0);
  Over2cc_10_MLP_21_7_2_ComputeFeedForwardSignals((double*)Over2cc_10_MLP_21_7_2_hidden_output_wts,Over2cc_10_MLP_21_7_2_hidden,Over2cc_10_MLP_21_7_2_output,Over2cc_10_MLP_21_7_2_output_bias,7, 2,1);
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
	scanf("%lg",&Over2cc_10_MLP_21_7_2_input[0]);
	printf("%s","Cont. Input-1(wavelet-HLLglcmIdmn): ");
	scanf("%lg",&Over2cc_10_MLP_21_7_2_input[1]);
	printf("%s","Cont. Input-2(wavelet-LHLglcmIdmn): ");
	scanf("%lg",&Over2cc_10_MLP_21_7_2_input[2]);
	printf("%s","Cont. Input-3(wavelet-LLLglcmImc2): ");
	scanf("%lg",&Over2cc_10_MLP_21_7_2_input[3]);
	printf("%s","Cont. Input-4(originalglcmIdmn): ");
	scanf("%lg",&Over2cc_10_MLP_21_7_2_input[4]);
	printf("%s","Cont. Input-5(originalglrlmShortRunEmphasis): ");
	scanf("%lg",&Over2cc_10_MLP_21_7_2_input[5]);
	printf("%s","Cont. Input-6(wavelet-HHHglcmIdmn): ");
	scanf("%lg",&Over2cc_10_MLP_21_7_2_input[6]);
	printf("%s","Cont. Input-7(wavelet-LHHglcmIdmn): ");
	scanf("%lg",&Over2cc_10_MLP_21_7_2_input[7]);
	printf("%s","Cont. Input-8(wavelet-LLHglcmImc2): ");
	scanf("%lg",&Over2cc_10_MLP_21_7_2_input[8]);
	printf("%s","Cont. Input-9(wavelet-HHLglcmIdn): ");
	scanf("%lg",&Over2cc_10_MLP_21_7_2_input[9]);
	printf("%s","Cont. Input-10(wavelet-LHLglrlmShortRunEmphasis): ");
	scanf("%lg",&Over2cc_10_MLP_21_7_2_input[10]);
	printf("%s","Cont. Input-11(wavelet-LLLglrlmLongRunEmphasis): ");
	scanf("%lg",&Over2cc_10_MLP_21_7_2_input[11]);
	printf("%s","Cont. Input-12(wavelet-LLHglszmSmallAreaEmphasis): ");
	scanf("%lg",&Over2cc_10_MLP_21_7_2_input[12]);
	printf("%s","Cont. Input-13(originalglszmSmallAreaEmphasis): ");
	scanf("%lg",&Over2cc_10_MLP_21_7_2_input[13]);
	printf("%s","Cont. Input-14(originalglrlmRunEntropy): ");
	scanf("%lg",&Over2cc_10_MLP_21_7_2_input[14]);
	printf("%s","Cont. Input-15(wavelet-LLLglcmMCC): ");
	scanf("%lg",&Over2cc_10_MLP_21_7_2_input[15]);
	printf("%s","Cont. Input-16(wavelet-HLHglszmZoneEntropy): ");
	scanf("%lg",&Over2cc_10_MLP_21_7_2_input[16]);
	printf("%s","Cont. Input-17(wavelet-HHLglcmInverseVariance): ");
	scanf("%lg",&Over2cc_10_MLP_21_7_2_input[17]);
	printf("%s","Cont. Input-18(wavelet-LHLglszmSmallAreaEmphasis): ");
	scanf("%lg",&Over2cc_10_MLP_21_7_2_input[18]);
	printf("%s","Cont. Input-19(originalshapeSphericity): ");
	scanf("%lg",&Over2cc_10_MLP_21_7_2_input[19]);
	printf("%s","Cont. Input-20(wavelet-HLLglszmSmallAreaEmphasis): ");
	scanf("%lg",&Over2cc_10_MLP_21_7_2_input[20]);
	for(cont_inps=0;cont_inps<21;cont_inps++)
	{
     //Substitution of missing continuous variables
     if(Over2cc_10_MLP_21_7_2_input[cont_inps] == -9999)
	  Over2cc_10_MLP_21_7_2_input[cont_inps]=Over2cc_10_MLP_21_7_2_MeanInputs[cont_inps];
	}
    Over2cc_10_MLP_21_7_2_ScaleInputs(Over2cc_10_MLP_21_7_2_input,0,1,21);
	Over2cc_10_MLP_21_7_2_RunNeuralNet_Classification();
   //Normalise output if output activation is not Softmax;
 	Over2cc_10_MLP_21_7_2_Normalise(Over2cc_10_MLP_21_7_2_output,2);
	for(i=0;i<2;i++)
	{
      if(max<Over2cc_10_MLP_21_7_2_output[i])
      {
        max=Over2cc_10_MLP_21_7_2_output[i];
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

