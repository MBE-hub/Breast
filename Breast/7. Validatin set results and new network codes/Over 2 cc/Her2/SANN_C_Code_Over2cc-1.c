//Analysis Type - Classification 
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>


double Over2cc_1_MLP_21_6_2_input_hidden_weights[6][21]=
{
 {-6.58035075781807e+000, 4.74434599534202e+000, 9.80873489722194e+000, -6.48965326756141e+000, 5.52554102607033e+000, -2.25958833298000e+000, 2.32615777925408e+000, 4.47190802289569e+000, -1.28131784827282e+000, 6.72382869585865e+000, -4.19978045998400e-002, -2.44316591082451e-001, -5.80388818800344e+000, -1.34827358134911e+000, 1.33518599199237e+000, -2.52672702203253e+000, 9.80570262956043e-002, 3.15325890837502e+000, 2.51343961926101e+000, -1.37009676719167e+000, -1.94106876903247e+000 },
 {-4.04214383153205e+000, -6.72615596199994e+000, -5.05270414012546e+000, -2.35174645571879e+000, -8.14229150236399e+000, 3.56420613892762e+000, 6.49073204894861e+000, -4.26658781695268e+000, 6.05909335417635e+000, -4.90607755397110e+000, 4.51973688262108e+000, -3.73720924960519e+000, -3.82457414636666e+000, 4.91779471480924e+000, 2.38423494922298e+000, 4.97000390752560e+000, 3.77382049069815e-001, -6.08788907515063e-001, -5.17860080497764e+000, 4.03689134859895e+000, -2.24682650886042e+000 },
 {-3.65202777398623e+000, 4.19472553091850e+000, 9.52483653955021e+000, -9.77468073950113e+000, -1.27184174469559e+000, 3.12374893713334e+000, -1.45954777817584e+001, -2.01355903139587e+000, 9.20720459592799e+000, 1.47954882877329e+001, -8.33594587962341e+000, -5.89721782269364e-001, 3.41257355983997e+000, -3.69431891855665e+000, 7.09745277712508e+000, -3.37999433611926e+000, -1.32493895909211e+000, -8.46933028408111e+000, 2.87933105827218e+000, -3.26559159093747e+000, 3.79907684999096e+000 },
 {-1.14047961208847e+001, -3.35742593335231e+000, 6.52451434905236e+000, 1.59806616295118e+000, 6.88167410860303e+000, 5.45133733091939e+000, 3.11874591520645e-001, -1.52687978757582e+001, 6.97449051872317e+000, 4.22922309704503e+000, -7.63927466884277e-001, 9.11543903071226e+000, -2.84285538852366e+000, -1.29595673531694e+001, -2.64999369701867e+000, 2.70699775673428e+000, -3.33987968307759e+000, 9.58943473714203e+000, 1.24289807611874e+001, -1.12911351826088e+001, -4.10520764294226e-001 },
 {2.11379537964506e+000, -5.83082330401920e+000, -1.02662175454414e+001, 6.44522613158253e+000, 1.04024751407294e+000, 4.49599685057491e-001, -1.00533480311528e+000, 1.77810384468022e+000, 2.88866427013845e+000, -1.49635128441109e+001, 6.53376095366932e+000, -1.62151362013987e+000, -3.36874363584292e+000, -2.80428969034700e+000, 9.79225402935052e-002, 8.60629722813925e+000, -2.60006921723314e+000, -2.56838302612907e-001, -9.38407031051135e+000, 2.41056340350820e+000, 2.80530657322382e+000 },
 {5.60494883907005e+000, 3.82114471705430e+000, -6.73783039929101e-001, -2.76232398815049e-001, 1.08151657907999e+000, -4.94689229630311e-002, -1.73963741708519e+000, 1.05472671777427e+000, -2.50175448939811e+000, -4.49462696717090e+000, 4.24025672609429e+000, -3.95986002144888e+000, -9.14678602082923e-001, 5.17661061391345e+000, -2.64807592430796e+000, 1.41656248721972e+000, -6.39069083806007e+000, -8.37849818261570e-001, 2.04113366084654e+000, 1.48802645959901e+000, -4.12593343343806e+000 } 
};

double Over2cc_1_MLP_21_6_2_hidden_bias[6]={ -1.18175861207003e+000, 2.94063792845890e+000, 7.87534019910699e+000, 8.08896072959165e+000, 3.58261356218939e+000, -4.18395143963874e+000 };

double Over2cc_1_MLP_21_6_2_hidden_output_wts[2][6]=
{
 {5.04175672765227e+000, 4.92646657965900e+000, 2.26064035948363e+000, 4.97689607800976e+000, 5.20401965181021e+000, -6.02155827745143e-001 },
 {-1.23963379885728e+000, -1.32576131491073e+000, -1.31147417026763e+000, -1.30147222521187e+000, -1.26586834251169e+000, 4.59921944338039e-002 }
};

double Over2cc_1_MLP_21_6_2_output_bias[2]={ 1.24914850859211e+000, 1.30029569303119e+000 };

double Over2cc_1_MLP_21_6_2_max_input[21]={ 9.94225622500000e-001, 9.98205853844333e-001, 9.96754273526000e-001, 9.99958012914333e-001, 9.94505657234667e-001, 9.87686168724000e-001, 9.98278127930000e-001, 9.95170697016667e-001, 9.99977398435000e-001, 9.76060123067333e-001, 9.81017347897333e-001, 1.40417965636667e+000, 9.51627339487000e-001, 8.65563457626667e-001, 6.46031687483333e+000, 9.96854540307667e-001, 6.71294571244000e+000, 4.99555750214000e-001, 8.21654401930000e-001, 7.77973268702667e-001, 8.87391385084667e-001 };

double Over2cc_1_MLP_21_6_2_min_input[21]={ 9.51458841268667e-001, 9.52721802638333e-001, 9.57705102447333e-001, 9.07570890327000e-001, 9.43359485176000e-001, 9.10429029488667e-001, 9.43173352577333e-001, 9.33755227989000e-001, 8.14424454238667e-001, 8.71982414223667e-001, 8.56874668825000e-001, 1.02462806683000e+000, 7.33377997593000e-001, 5.96739362359667e-001, 4.45016599139000e+000, 6.35162254726333e-001, 4.48663980817333e+000, 2.44262934234000e-001, 4.33984373328333e-001, 3.12766281606667e-001, 4.64379424052333e-001 };

double Over2cc_1_MLP_21_6_2_input[21];
double Over2cc_1_MLP_21_6_2_hidden[6];
double Over2cc_1_MLP_21_6_2_output[2];

double Over2cc_1_MLP_21_6_2_MeanInputs[21]={ 9.86215974880607e-001, 9.82580240878453e-001, 9.79769865419318e-001, 9.94294379312090e-001, 9.73150089825902e-001, 9.66227464441086e-001, 9.81998966214847e-001, 9.72810897712386e-001, 9.91240682825940e-001, 9.29932763713648e-001, 9.33069803359037e-001, 1.06187684347659e+000, 8.66940461142569e-001, 7.31393955181164e-001, 5.13171062654525e+000, 8.93468219422401e-001, 5.66245517208056e+000, 4.40861350465457e-001, 6.49529047198333e-001, 6.50102625908682e-001, 6.44693150319109e-001 };

void Over2cc_1_MLP_21_6_2_ScaleInputs(double* input, double minimum, double maximum, int size)
{
 double delta;
 long i;
 for(i=0; i<size; i++)
 {
	delta = (maximum-minimum)/(Over2cc_1_MLP_21_6_2_max_input[i]-Over2cc_1_MLP_21_6_2_min_input[i]);
	input[i] = minimum - delta*Over2cc_1_MLP_21_6_2_min_input[i]+ delta*input[i];
 }
}

void Over2cc_1_MLP_21_6_2_Normalise(double out[],long length)
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

void Over2cc_1_MLP_21_6_2_ComputeFeedForwardSignals(double* MAT_INOUT,double* V_IN,double* V_OUT, double* V_BIAS,int size1,int size2,int layer)
{
  int row,col;
  for(row=0;row < size2; row++) 
    {
      V_OUT[row]=0.0;
      for(col=0;col<size1;col++)V_OUT[row]+=(*(MAT_INOUT+(row*size1)+col)*V_IN[col]);
      V_OUT[row]+=V_BIAS[row];
      if(layer==0) V_OUT[row] = tanh(V_OUT[row]);
      if(layer==1) V_OUT[row] = tanh(V_OUT[row]);
   }
}

void Over2cc_1_MLP_21_6_2_RunNeuralNet_Classification () 
{
  Over2cc_1_MLP_21_6_2_ComputeFeedForwardSignals((double*)Over2cc_1_MLP_21_6_2_input_hidden_weights,Over2cc_1_MLP_21_6_2_input,Over2cc_1_MLP_21_6_2_hidden,Over2cc_1_MLP_21_6_2_hidden_bias,21, 6,0);
  Over2cc_1_MLP_21_6_2_ComputeFeedForwardSignals((double*)Over2cc_1_MLP_21_6_2_hidden_output_wts,Over2cc_1_MLP_21_6_2_hidden,Over2cc_1_MLP_21_6_2_output,Over2cc_1_MLP_21_6_2_output_bias,6, 2,1);
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
	scanf("%lg",&Over2cc_1_MLP_21_6_2_input[0]);
	printf("%s","Cont. Input-1(wavelet-HLLglcmIdmn): ");
	scanf("%lg",&Over2cc_1_MLP_21_6_2_input[1]);
	printf("%s","Cont. Input-2(wavelet-LHLglcmIdmn): ");
	scanf("%lg",&Over2cc_1_MLP_21_6_2_input[2]);
	printf("%s","Cont. Input-3(wavelet-LLLglcmImc2): ");
	scanf("%lg",&Over2cc_1_MLP_21_6_2_input[3]);
	printf("%s","Cont. Input-4(originalglcmIdmn): ");
	scanf("%lg",&Over2cc_1_MLP_21_6_2_input[4]);
	printf("%s","Cont. Input-5(originalglrlmShortRunEmphasis): ");
	scanf("%lg",&Over2cc_1_MLP_21_6_2_input[5]);
	printf("%s","Cont. Input-6(wavelet-HHHglcmIdmn): ");
	scanf("%lg",&Over2cc_1_MLP_21_6_2_input[6]);
	printf("%s","Cont. Input-7(wavelet-LHHglcmIdmn): ");
	scanf("%lg",&Over2cc_1_MLP_21_6_2_input[7]);
	printf("%s","Cont. Input-8(wavelet-LLHglcmImc2): ");
	scanf("%lg",&Over2cc_1_MLP_21_6_2_input[8]);
	printf("%s","Cont. Input-9(wavelet-HHLglcmIdn): ");
	scanf("%lg",&Over2cc_1_MLP_21_6_2_input[9]);
	printf("%s","Cont. Input-10(wavelet-LHLglrlmShortRunEmphasis): ");
	scanf("%lg",&Over2cc_1_MLP_21_6_2_input[10]);
	printf("%s","Cont. Input-11(wavelet-LLLglrlmLongRunEmphasis): ");
	scanf("%lg",&Over2cc_1_MLP_21_6_2_input[11]);
	printf("%s","Cont. Input-12(wavelet-LLHglszmSmallAreaEmphasis): ");
	scanf("%lg",&Over2cc_1_MLP_21_6_2_input[12]);
	printf("%s","Cont. Input-13(originalglszmSmallAreaEmphasis): ");
	scanf("%lg",&Over2cc_1_MLP_21_6_2_input[13]);
	printf("%s","Cont. Input-14(originalglrlmRunEntropy): ");
	scanf("%lg",&Over2cc_1_MLP_21_6_2_input[14]);
	printf("%s","Cont. Input-15(wavelet-LLLglcmMCC): ");
	scanf("%lg",&Over2cc_1_MLP_21_6_2_input[15]);
	printf("%s","Cont. Input-16(wavelet-HLHglszmZoneEntropy): ");
	scanf("%lg",&Over2cc_1_MLP_21_6_2_input[16]);
	printf("%s","Cont. Input-17(wavelet-HHLglcmInverseVariance): ");
	scanf("%lg",&Over2cc_1_MLP_21_6_2_input[17]);
	printf("%s","Cont. Input-18(wavelet-LHLglszmSmallAreaEmphasis): ");
	scanf("%lg",&Over2cc_1_MLP_21_6_2_input[18]);
	printf("%s","Cont. Input-19(originalshapeSphericity): ");
	scanf("%lg",&Over2cc_1_MLP_21_6_2_input[19]);
	printf("%s","Cont. Input-20(wavelet-HLLglszmSmallAreaEmphasis): ");
	scanf("%lg",&Over2cc_1_MLP_21_6_2_input[20]);
	for(cont_inps=0;cont_inps<21;cont_inps++)
	{
     //Substitution of missing continuous variables
     if(Over2cc_1_MLP_21_6_2_input[cont_inps] == -9999)
	  Over2cc_1_MLP_21_6_2_input[cont_inps]=Over2cc_1_MLP_21_6_2_MeanInputs[cont_inps];
	}
    Over2cc_1_MLP_21_6_2_ScaleInputs(Over2cc_1_MLP_21_6_2_input,0,1,21);
	Over2cc_1_MLP_21_6_2_RunNeuralNet_Classification();
   //Normalise output if output activation is not Softmax;
 	Over2cc_1_MLP_21_6_2_Normalise(Over2cc_1_MLP_21_6_2_output,2);
	for(i=0;i<2;i++)
	{
      if(max<Over2cc_1_MLP_21_6_2_output[i])
      {
        max=Over2cc_1_MLP_21_6_2_output[i];
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

