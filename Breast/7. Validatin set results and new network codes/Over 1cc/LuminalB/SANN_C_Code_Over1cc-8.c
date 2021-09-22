//Analysis Type - Classification 
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>


double Over1cc_8_MLP_21_8_2_input_hidden_weights[8][21]=
{
 {1.01404640811850e+000, 3.12499339281966e-001, 3.48988412973241e-001, -6.85648311756767e-001, -4.50717130134118e-001, -4.71537423674655e-002, 3.14839980789096e-001, -2.69853929716943e-001, -1.26550092727282e+000, -7.74448798818899e-002, 1.00179557632510e+000, -3.40227501822155e-001, 9.00650595513148e-001, 8.15486742443940e-001, -2.04800475921017e+000, -1.33495010903762e+000, 1.43668778018746e-001, 1.23083897569071e+000, -5.79759431207959e-001, 4.74844610252542e-001, -2.08795724616983e+000 },
 {9.24741314792754e-001, 2.57616025773673e+000, -7.16124016325962e-001, -9.89505004925910e-001, -5.81269501861721e-001, 4.05430239475525e-001, 2.74018792660736e+000, -9.60081528641326e-001, -3.78438025622731e+000, 1.19072662821031e-001, 3.02755900049620e+000, 1.09283709833846e+000, 7.94415724904386e-002, 2.33722516515528e+000, -4.90416114482986e+000, -3.64785626337976e-001, -5.05433771719663e-001, 8.84249171819487e-001, 1.05559847081091e+000, 3.27737970676497e+000, -3.79751869132489e+000 },
 {-2.74417788945341e+000, 3.07787360367867e+000, 1.35836619396037e+000, -2.92990688748053e-001, -2.15929454133378e+000, 1.06892982025556e-001, 2.15557799864630e+000, -3.57295067491428e+000, -3.68130312425438e+000, -2.42966914764440e-001, 4.55604670445262e+000, -5.14230614253683e-001, 2.21199744067825e-001, 3.75846871543255e+000, -3.31303617381368e+000, -1.12709160633884e+000, 1.21469714283119e+000, 6.27096618211038e-001, 4.43133245341415e-001, 2.96037657463304e+000, -3.94482946368852e+000 },
 {-2.88544038063186e-001, 1.71073520885531e+000, -1.94785906585077e-001, 7.57828098051012e-001, -5.31635374213108e-001, 1.10214795045490e+000, 1.12086099839691e+000, -5.37960146494708e-001, -1.40693258594112e+000, -5.53312519536502e-001, 4.87046054463382e-001, -7.63345767625164e-001, -5.46644067648401e-001, 1.37293139107103e+000, -5.72918589213510e-001, 1.13241178414873e-002, 4.16722132469476e-001, -9.00987905376527e-001, 1.05515407380132e+000, 4.49898289858954e-001, -8.80113418090519e-001 },
 {-4.22818096538748e-001, 5.44501447423046e-001, -3.71638845043675e-001, 1.66627649022492e-001, -4.79449946483330e-001, 3.59815129892192e-001, 3.15300733598163e-001, -4.14331601286979e-001, -6.95854877039086e-001, -4.02775505448907e-001, 5.09557167580205e-002, -5.82677392721568e-001, -4.26193491550361e-001, 3.96187647789489e-001, -1.33366751059249e-001, -7.74108087864905e-002, 3.45865549696236e-002, -5.78252586184359e-001, 4.24323949723202e-001, -1.27863088673730e-001, -4.62029508894736e-001 },
 {1.40428214587670e+000, -5.49760095918266e-001, 1.00895141303954e+000, -9.82529385244082e-001, 1.76110308262989e-001, -4.27337504782275e-001, -4.20335473875239e-001, 5.31272192396784e-001, 4.87793768628212e-001, 4.96244075182870e-001, 5.56899290685224e-001, 7.32954023138748e-003, 1.66671825698779e+000, 5.33588286543650e-002, -8.57475178706390e-001, -1.23598152490072e+000, 4.22513136160967e-001, 2.13473104774484e+000, -1.27856108385958e+000, -3.70735321698103e-001, -7.65874607807805e-001 },
 {2.68807899248277e+000, 1.05000182111635e+000, 4.47899858750513e-001, -2.28061114129263e+000, 1.02077821127862e-001, 2.18790536434087e-001, 1.11149937442802e+000, -3.67518973376031e-001, -1.96640262029303e+000, 6.44744245308773e-001, 1.91197621771388e+000, -1.37279802781921e-001, 1.75656040210672e+000, 1.27240337815560e+000, -3.98031730889267e+000, -1.73464194341800e+000, -2.11630051389781e-002, 2.90210206772193e+000, -1.16209717460491e+000, 1.31322799339515e+000, -3.45192362711749e+000 },
 {7.68552115350158e-001, -1.56912045385948e+000, 1.01803532829060e+000, -6.84318822291776e-001, 3.17801148163542e-001, -9.19358879552924e-001, -1.38368694820863e+000, 5.81656095766526e-001, 1.65947313174055e+000, 4.81425368619480e-001, -1.64297845808107e-001, 5.79127991586100e-001, 1.26351633144174e+000, -1.18331972410977e+000, 2.06548444860471e-001, -5.77595677090515e-001, 1.04806866400851e-002, 1.52407759376645e+000, -1.36163179314470e+000, -4.93056104976583e-001, 6.42475433739428e-001 } 
};

double Over1cc_8_MLP_21_8_2_hidden_bias[8]={ -1.36501723711902e-001, 6.22506488393160e-001, 4.78424940120598e-001, 5.96907262133764e-001, -1.64674747254900e-002, -4.12655190532366e-001, 7.63922556940412e-001, -8.38161033117093e-001 };

double Over1cc_8_MLP_21_8_2_hidden_output_wts[2][8]=
{
 {-7.76979239409586e-001, 1.97661105217809e+000, 2.66809629442896e+000, 1.19864246886383e+000, 3.72581483897706e-001, -1.29921725372820e+000, -1.62813851680436e+000, -1.62613280377665e+000 },
 {8.09453444471705e-002, -1.59649606852314e+000, -9.74397037337945e-001, -6.36027077711095e-001, -5.11758162075729e-001, -1.22018552422838e-001, 1.61753998612339e+000, 5.43421888009487e-001 }
};

double Over1cc_8_MLP_21_8_2_output_bias[2]={ 3.85418200194029e-001, 1.30132164507839e+000 };

double Over1cc_8_MLP_21_8_2_max_input[21]={ 9.98205853844333e-001, 9.97911037399333e-001, 9.95518567193667e-001, 9.94625520306000e-001, 9.99979798185333e-001, 9.52733284084000e-001, 9.69573341435000e-001, 9.78343830095000e-001, 9.93833381471000e-001, 9.99563234728667e-001, 8.81938425504667e-001, 9.99316191677333e-001, 6.62255613583333e+000, 6.07940450162667e+000, 9.57964581975667e-001, 9.99999999999667e-001, 6.62788681583333e+000, 4.89730399246000e+000, 8.60739480852333e-001, 8.17330004459667e-001, 9.99712242127000e-001 };

double Over1cc_8_MLP_21_8_2_min_input[21]={ 9.48498348134000e-001, 9.09532311788000e-001, 9.01584368638667e-001, 9.22866729721667e-001, 8.14424454238667e-001, 8.08604996355667e-001, 8.12308146372000e-001, 8.29696857826667e-001, 8.04547320835333e-001, 7.18191906262000e-001, 5.74665956678667e-001, 6.35162254726333e-001, 4.08859126770667e+000, 3.25406740473667e+000, 5.97804191274333e-001, 6.17261118161667e-001, 3.73193238854667e+000, 2.54125830975333e+000, 3.66051471635667e-001, 3.12766281606667e-001, 5.40999113597333e-001 };

double Over1cc_8_MLP_21_8_2_input[21];
double Over1cc_8_MLP_21_8_2_hidden[8];
double Over1cc_8_MLP_21_8_2_output[2];

double Over1cc_8_MLP_21_8_2_MeanInputs[21]={ 9.79333317538617e-001, 9.80375557705598e-001, 9.69678093991658e-001, 9.69222906772574e-001, 9.94278751264160e-001, 8.89621788765664e-001, 9.24420687006509e-001, 9.18008198620678e-001, 9.44973226961989e-001, 9.58778121500706e-001, 7.45768215849598e-001, 9.13848970072862e-001, 5.41553637086195e+000, 4.87708558509270e+000, 7.77466723707209e-001, 9.01085490020479e-001, 5.48401283038331e+000, 3.88662450625160e+000, 6.49165393152752e-001, 6.63848435078030e-001, 8.59865258103331e-001 };

void Over1cc_8_MLP_21_8_2_ScaleInputs(double* input, double minimum, double maximum, int size)
{
 double delta;
 long i;
 for(i=0; i<size; i++)
 {
	delta = (maximum-minimum)/(Over1cc_8_MLP_21_8_2_max_input[i]-Over1cc_8_MLP_21_8_2_min_input[i]);
	input[i] = minimum - delta*Over1cc_8_MLP_21_8_2_min_input[i]+ delta*input[i];
 }
}

double Over1cc_8_MLP_21_8_2_logistic(double x)
{
  if(x > 100.0) x = 1.0;
  else if (x < -100.0) x = 0.0;
  else x = 1.0/(1.0+exp(-x));
  return x;
}

void Over1cc_8_MLP_21_8_2_Normalise(double out[],long length)
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

void Over1cc_8_MLP_21_8_2_ComputeFeedForwardSignals(double* MAT_INOUT,double* V_IN,double* V_OUT, double* V_BIAS,int size1,int size2,int layer)
{
  int row,col;
  for(row=0;row < size2; row++) 
    {
      V_OUT[row]=0.0;
      for(col=0;col<size1;col++)V_OUT[row]+=(*(MAT_INOUT+(row*size1)+col)*V_IN[col]);
      V_OUT[row]+=V_BIAS[row];
      if(layer==0) V_OUT[row] = Over1cc_8_MLP_21_8_2_logistic(V_OUT[row]);
      if(layer==1) V_OUT[row] = tanh(V_OUT[row]);
   }
}

void Over1cc_8_MLP_21_8_2_RunNeuralNet_Classification () 
{
  Over1cc_8_MLP_21_8_2_ComputeFeedForwardSignals((double*)Over1cc_8_MLP_21_8_2_input_hidden_weights,Over1cc_8_MLP_21_8_2_input,Over1cc_8_MLP_21_8_2_hidden,Over1cc_8_MLP_21_8_2_hidden_bias,21, 8,0);
  Over1cc_8_MLP_21_8_2_ComputeFeedForwardSignals((double*)Over1cc_8_MLP_21_8_2_hidden_output_wts,Over1cc_8_MLP_21_8_2_hidden,Over1cc_8_MLP_21_8_2_output,Over1cc_8_MLP_21_8_2_output_bias,8, 2,1);
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
	printf("%s","Cont. Input-0(wavelet-HLLglcmIdmn): ");
	scanf("%lg",&Over1cc_8_MLP_21_8_2_input[0]);
	printf("%s","Cont. Input-1(wavelet-HHLglcmIdmn): ");
	scanf("%lg",&Over1cc_8_MLP_21_8_2_input[1]);
	printf("%s","Cont. Input-2(wavelet-LLLglcmIdmn): ");
	scanf("%lg",&Over1cc_8_MLP_21_8_2_input[2]);
	printf("%s","Cont. Input-3(wavelet-LHHglcmIdmn): ");
	scanf("%lg",&Over1cc_8_MLP_21_8_2_input[3]);
	printf("%s","Cont. Input-4(wavelet-LLHglcmImc2): ");
	scanf("%lg",&Over1cc_8_MLP_21_8_2_input[4]);
	printf("%s","Cont. Input-5(originalglcmIdn): ");
	scanf("%lg",&Over1cc_8_MLP_21_8_2_input[5]);
	printf("%s","Cont. Input-6(originalglrlmRunLengthNonUniformityNormalized): ");
	scanf("%lg",&Over1cc_8_MLP_21_8_2_input[6]);
	printf("%s","Cont. Input-7(wavelet-HHHglcmIdn): ");
	scanf("%lg",&Over1cc_8_MLP_21_8_2_input[7]);
	printf("%s","Cont. Input-8(wavelet-HLHglrlmShortRunEmphasis): ");
	scanf("%lg",&Over1cc_8_MLP_21_8_2_input[8]);
	printf("%s","Cont. Input-9(originalglcmImc2): ");
	scanf("%lg",&Over1cc_8_MLP_21_8_2_input[9]);
	printf("%s","Cont. Input-10(originalglszmSmallAreaEmphasis): ");
	scanf("%lg",&Over1cc_8_MLP_21_8_2_input[10]);
	printf("%s","Cont. Input-11(wavelet-LLLglcmMCC): ");
	scanf("%lg",&Over1cc_8_MLP_21_8_2_input[11]);
	printf("%s","Cont. Input-12(wavelet-LHLglszmZoneEntropy): ");
	scanf("%lg",&Over1cc_8_MLP_21_8_2_input[12]);
	printf("%s","Cont. Input-13(wavelet-LLLglcmDifferenceEntropy): ");
	scanf("%lg",&Over1cc_8_MLP_21_8_2_input[13]);
	printf("%s","Cont. Input-14(wavelet-HHLglrlmRunPercentage): ");
	scanf("%lg",&Over1cc_8_MLP_21_8_2_input[14]);
	printf("%s","Cont. Input-15(wavelet-LLHglcmMCC): ");
	scanf("%lg",&Over1cc_8_MLP_21_8_2_input[15]);
	printf("%s","Cont. Input-16(wavelet-HLLglszmZoneEntropy): ");
	scanf("%lg",&Over1cc_8_MLP_21_8_2_input[16]);
	printf("%s","Cont. Input-17(originalglcmDifferenceEntropy): ");
	scanf("%lg",&Over1cc_8_MLP_21_8_2_input[17]);
	printf("%s","Cont. Input-18(wavelet-LHLglszmSmallAreaEmphasis): ");
	scanf("%lg",&Over1cc_8_MLP_21_8_2_input[18]);
	printf("%s","Cont. Input-19(originalshapeSphericity): ");
	scanf("%lg",&Over1cc_8_MLP_21_8_2_input[19]);
	printf("%s","Cont. Input-20(wavelet-HLHglcmImc2): ");
	scanf("%lg",&Over1cc_8_MLP_21_8_2_input[20]);
	for(cont_inps=0;cont_inps<21;cont_inps++)
	{
     //Substitution of missing continuous variables
     if(Over1cc_8_MLP_21_8_2_input[cont_inps] == -9999)
	  Over1cc_8_MLP_21_8_2_input[cont_inps]=Over1cc_8_MLP_21_8_2_MeanInputs[cont_inps];
	}
    Over1cc_8_MLP_21_8_2_ScaleInputs(Over1cc_8_MLP_21_8_2_input,0,1,21);
	Over1cc_8_MLP_21_8_2_RunNeuralNet_Classification();
   //Normalise output if output activation is not Softmax;
 	Over1cc_8_MLP_21_8_2_Normalise(Over1cc_8_MLP_21_8_2_output,2);
	for(i=0;i<2;i++)
	{
      if(max<Over1cc_8_MLP_21_8_2_output[i])
      {
        max=Over1cc_8_MLP_21_8_2_output[i];
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

