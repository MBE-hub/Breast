//Analysis Type - Classification 
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>


double Over2cc_7_MLP_11_8_2_input_hidden_weights[8][11]=
{
 {4.35937240059176e-001, 3.31040860284438e-001, 6.55354011159505e-001, -3.00362344108078e-001, -3.04926026835842e-001, -8.60278999268087e-002, -3.01679016436966e-001, 9.08823279500396e-001, -6.74270035441013e-001, 3.14331291666428e-001, 3.77879873363686e-001 },
 {-1.88960423386711e-001, 6.35886224778890e-002, 1.01829520571010e+000, -1.35991027983198e+000, -2.42990051760878e+000, -2.08840271970016e+000, -1.96256213776045e+000, 2.11948011846125e+000, -3.13630858305760e+000, -3.36613198269388e-001, -1.44599490075757e-001 },
 {2.40454820291925e-001, 3.93227608848613e-001, 5.44664685437344e-001, 4.89318481610946e-001, -9.13419686168101e-001, -9.57680135523919e-001, -2.71715267086242e-001, 4.53602919839328e-001, -2.02392615222118e-001, -4.30592477595649e-002, -1.52482265310733e-001 },
 {-1.30867419948335e-001, -2.17559299938853e-001, -4.91800794419425e-001, 1.84663382266212e-001, 8.50422496479009e-001, 7.66226268010877e-001, 5.74431569742110e-001, -7.53342273437477e-001, 8.33039608805116e-001, 4.58918937940848e-002, 3.00684724919416e-002 },
 {-6.06325663106140e-001, -4.18550141261987e-001, -4.55976312766189e-001, -8.16191763704940e-001, -9.15897950523777e-002, -7.69279618812944e-002, -3.21915270099338e-001, -1.49598390205760e-001, -6.21729727141202e-001, -3.53100874794785e-001, -2.07106787562217e-001 },
 {-8.59673249647878e-002, 2.91882282940917e-001, 2.95384641804054e-001, 1.06799262018961e+000, -1.22148848006922e+000, -1.54292078898541e+000, -2.69437390581438e-001, -1.55941924911437e-001, 2.95236096934618e-001, -4.91997228282268e-001, -7.23496151527041e-001 },
 {-5.00464971715745e-001, -1.97799322183766e-001, -2.97520469841681e-001, 1.70015236595507e-001, -6.60129138188295e-001, -9.12355045207968e-001, -2.82861241126842e-001, -3.31750258759874e-001, -5.58596291246631e-002, -4.97533843882637e-001, -5.61738336653238e-001 },
 {1.54440466906196e-001, 7.44595186072692e-001, 1.08009833761223e+000, 1.43365643797627e+000, -2.82560660436388e+000, -3.18901196903140e+000, -1.01518811706687e+000, 7.37939004019185e-001, -5.83128151251674e-001, -6.91621473568765e-001, -9.39223956370204e-001 } 
};

double Over2cc_7_MLP_11_8_2_hidden_bias[8]={ 2.93490411877385e-001, -2.02660535890667e-001, 6.03368346285777e-001, -2.63630994363398e-001, -8.08416878406270e-001, 6.38379061651115e-001, -2.47507094447115e-001, 1.35725064835430e+000 };

double Over2cc_7_MLP_11_8_2_hidden_output_wts[2][8]=
{
 {-3.81197484403182e-001, -8.38348584404584e-001, 6.19392152064842e-001, 4.05870442306722e-002, -5.25947339936125e-001, 1.38405160040959e+000, 5.30513982891385e-001, 1.97546083392306e+000 },
 {4.56940252401967e-001, 8.19949448454745e-001, -5.33123210677384e-001, -6.22659174555230e-002, 5.03657949103352e-001, -1.39859317741029e+000, -5.35131161713899e-001, -2.01830646623930e+000 }
};

double Over2cc_7_MLP_11_8_2_output_bias[2]={ 1.66561462380948e+000, -1.67535190283145e+000 };

double Over2cc_7_MLP_11_8_2_max_input[11]={ 9.99958329432000e-001, 9.94505657234667e-001, 9.81000941145667e-001, 9.77249757356000e-001, 7.56346456271333e+000, 6.80611365125667e+000, 6.08511856610667e+000, 9.76903355877333e-001, 7.09083526106000e+000, 4.97958375536000e-001, 8.06335210109333e-001 };

double Over2cc_7_MLP_11_8_2_min_input[11]={ 9.07570890327000e-001, 9.44650005130667e-001, 8.06267137025000e-001, 8.22841769254000e-001, 5.86068628775333e+000, 5.13742515665000e+000, 4.01210318245333e+000, 7.31203984050667e-001, 4.93424538709667e+000, 3.13060595095333e-001, 3.12766281606667e-001 };

double Over2cc_7_MLP_11_8_2_input[11];
double Over2cc_7_MLP_11_8_2_hidden[8];
double Over2cc_7_MLP_11_8_2_output[2];

double Over2cc_7_MLP_11_8_2_MeanInputs[11]={ 9.95162114251585e-001, 9.73127748552063e-001, 9.40878102187135e-001, 9.25104787935739e-001, 6.80160489106444e+000, 6.13033404751014e+000, 5.15109253864092e+000, 8.47882026592947e-001, 6.21245045143614e+000, 4.40009626845691e-001, 6.49807676291053e-001 };

void Over2cc_7_MLP_11_8_2_FindMax(double* vec, double* max, long* maxIndex,int len)
{
  long i;
  *max = vec[0];
  *maxIndex = 0;
  for(i=1; i<len; i++)
  {
    if(vec[i]>*max)
    {
      *max = vec[i];
      *maxIndex = i;
    }
  }
}

void Over2cc_7_MLP_11_8_2_ScaleInputs(double* input, double minimum, double maximum, int size)
{
 double delta;
 long i;
 for(i=0; i<size; i++)
 {
	delta = (maximum-minimum)/(Over2cc_7_MLP_11_8_2_max_input[i]-Over2cc_7_MLP_11_8_2_min_input[i]);
	input[i] = minimum - delta*Over2cc_7_MLP_11_8_2_min_input[i]+ delta*input[i];
 }
}

void Over2cc_7_MLP_11_8_2_softmax(double* vec,int len)
{

  long i, j;
  double sum=0.0;
  for(i=0; i<len; i++)
  {
    if(vec[i]>200)
    {
      double max;
      long maxIndex;
      Over2cc_7_MLP_11_8_2_FindMax(vec, &max, &maxIndex,len);
      for(j=0; j<len; j++)
      {        if(j==maxIndex) vec[j] = 1.0;
        else vec[j] = 0.0;
      }
      return;
    }
    else
    {
      vec[i] = exp(vec[i]);
    }
    sum += vec[i];
  }
  if(sum==0)
  {
   long a = 1;
  }
  if(sum!=0.0)
  {
    for(i=0; i<len; i++) vec[i] = vec[i]/sum;
  }
  else for(i=0; i<len; i++) vec[i] = 1.0/(double)len;
}

void Over2cc_7_MLP_11_8_2_ComputeFeedForwardSignals(double* MAT_INOUT,double* V_IN,double* V_OUT, double* V_BIAS,int size1,int size2,int layer)
{
  int row,col;
  for(row=0;row < size2; row++) 
    {
      V_OUT[row]=0.0;
      for(col=0;col<size1;col++)V_OUT[row]+=(*(MAT_INOUT+(row*size1)+col)*V_IN[col]);
      V_OUT[row]+=V_BIAS[row];
   }
}

void Over2cc_7_MLP_11_8_2_RunNeuralNet_Classification () 
{
  Over2cc_7_MLP_11_8_2_ComputeFeedForwardSignals((double*)Over2cc_7_MLP_11_8_2_input_hidden_weights,Over2cc_7_MLP_11_8_2_input,Over2cc_7_MLP_11_8_2_hidden,Over2cc_7_MLP_11_8_2_hidden_bias,11, 8,0);
  Over2cc_7_MLP_11_8_2_ComputeFeedForwardSignals((double*)Over2cc_7_MLP_11_8_2_hidden_output_wts,Over2cc_7_MLP_11_8_2_hidden,Over2cc_7_MLP_11_8_2_output,Over2cc_7_MLP_11_8_2_output_bias,8, 2,1);
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
	printf("%s","Cont. Input-0(wavelet-LLLglcmImc2): ");
	scanf("%lg",&Over2cc_7_MLP_11_8_2_input[0]);
	printf("%s","Cont. Input-1(originalglcmIdmn): ");
	scanf("%lg",&Over2cc_7_MLP_11_8_2_input[1]);
	printf("%s","Cont. Input-2(wavelet-LHHglrlmShortRunEmphasis): ");
	scanf("%lg",&Over2cc_7_MLP_11_8_2_input[2]);
	printf("%s","Cont. Input-3(wavelet-HHHglcmIdn): ");
	scanf("%lg",&Over2cc_7_MLP_11_8_2_input[3]);
	printf("%s","Cont. Input-4(wavelet-LLHglszmZoneEntropy): ");
	scanf("%lg",&Over2cc_7_MLP_11_8_2_input[4]);
	printf("%s","Cont. Input-5(wavelet-HLLgldmDependenceEntropy): ");
	scanf("%lg",&Over2cc_7_MLP_11_8_2_input[5]);
	printf("%s","Cont. Input-6(originalglrlmRunEntropy): ");
	scanf("%lg",&Over2cc_7_MLP_11_8_2_input[6]);
	printf("%s","Cont. Input-7(wavelet-HHHglrlmShortRunEmphasis): ");
	scanf("%lg",&Over2cc_7_MLP_11_8_2_input[7]);
	printf("%s","Cont. Input-8(wavelet-LLHglcmSumEntropy): ");
	scanf("%lg",&Over2cc_7_MLP_11_8_2_input[8]);
	printf("%s","Cont. Input-9(wavelet-HHLglcmInverseVariance): ");
	scanf("%lg",&Over2cc_7_MLP_11_8_2_input[9]);
	printf("%s","Cont. Input-10(originalshapeSphericity): ");
	scanf("%lg",&Over2cc_7_MLP_11_8_2_input[10]);
	for(cont_inps=0;cont_inps<11;cont_inps++)
	{
     //Substitution of missing continuous variables
     if(Over2cc_7_MLP_11_8_2_input[cont_inps] == -9999)
	  Over2cc_7_MLP_11_8_2_input[cont_inps]=Over2cc_7_MLP_11_8_2_MeanInputs[cont_inps];
	}
    Over2cc_7_MLP_11_8_2_ScaleInputs(Over2cc_7_MLP_11_8_2_input,0,1,11);
	Over2cc_7_MLP_11_8_2_RunNeuralNet_Classification();
   //Output Activation is Softmax;
	Over2cc_7_MLP_11_8_2_softmax(Over2cc_7_MLP_11_8_2_output, 2);
	for(i=0;i<2;i++)
	{
      if(max<Over2cc_7_MLP_11_8_2_output[i])
      {
        max=Over2cc_7_MLP_11_8_2_output[i];
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

