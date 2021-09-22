//Analysis Type - Classification 
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>


double Over2cc_8_MLP_11_8_2_input_hidden_weights[8][11]=
{
 {-4.06936624950901e-002, 5.26886707804091e-002, 6.23819110787099e-002, 1.06535059537181e-001, -2.33920621591756e-002, -3.90763264372937e-003, 1.81521836422034e-002, -7.31308138670927e-002, 2.16773222518707e-001, -1.25702356503027e-002, -1.36024053496070e-002 },
 {8.33158331949107e-002, -1.61991578545770e-001, -2.83170959569077e-001, 1.79636118958673e-002, 5.72770274196454e-001, 4.89716401732376e-001, 2.86052980748930e-001, -2.85933869735214e-001, 1.87147546402870e-001, 1.02030384620308e-001, 9.61991069577336e-002 },
 {-2.17453519893595e-001, 2.25436307579540e-001, 2.84033660912456e-001, 1.11631354733992e-001, -4.14834242621138e-001, -3.33635258058246e-001, -1.52482295950119e-001, 8.15920143284261e-002, 1.72021047356562e-001, -1.00472748460613e-001, -1.53618676600860e-001 },
 {1.06737652583266e-003, -1.05839585926126e-001, -4.86590828245277e-001, 2.21970606987705e-001, 1.03671198347138e+000, 1.01218847103819e+000, 6.95097154144754e-001, -6.71021201737455e-001, 9.27072148467834e-001, 2.30007970851852e-001, 1.43882931647182e-001 },
 {-2.40146436816296e-002, 2.06920004370006e-002, -1.01427680789374e-001, 8.47877805904152e-002, 3.76351665148665e-001, 3.82909043346989e-001, 2.66085515842153e-001, -2.82573737848477e-001, 3.88596813497958e-001, 1.08527307987691e-001, 7.02851190230030e-002 },
 {-8.62969995714613e-002, 1.62939561072219e-001, 2.66616898273277e-001, -3.57843809951173e-002, -5.68696013147969e-001, -5.40648070162259e-001, -2.83892652809560e-001, 3.18153800138171e-001, -3.65618970331048e-001, -1.36215637745687e-001, -8.10718784035140e-002 },
 {1.07620194718113e-001, -2.26249945586552e-001, -3.53511357300430e-001, -3.88451462218394e-002, 4.49336781420850e-001, 3.67944153590172e-001, 2.14024122000440e-001, -2.26990915581917e-001, 6.60315097710486e-002, 1.87149979667414e-002, 1.29628406241146e-001 },
 {-2.56621745747003e-001, -3.47495474577979e-002, -2.56631523916014e-001, 1.62775771661546e-001, 3.85349862196964e-001, 4.49721446798699e-001, 3.00301447601143e-001, -5.09914475504850e-001, 7.45562041145452e-001, -2.82061335795041e-002, -4.81437315726596e-002 } 
};

double Over2cc_8_MLP_11_8_2_hidden_bias[8]={ 1.78473155161956e-001, 2.16220727496877e-001, 2.48684898906074e-001, -2.67685151415824e-001, 2.98474326900192e-002, 1.72343739152049e-001, -2.31667652314877e-001, -1.33646326470258e-001 };

double Over2cc_8_MLP_11_8_2_hidden_output_wts[2][8]=
{
 {2.85044575544490e-001, 4.88827998391386e-002, 6.08770142578400e-001, -1.28183178807880e-001, 5.15056427905130e-002, 2.25076164851878e-001, -3.89172143556000e-001, 3.09101608170710e-001 },
 {-8.60959451688066e-002, 5.64760137425747e-001, -4.81902021766922e-001, -2.55171579479107e-002, -2.43373780166124e-002, -1.18958793869642e-001, 3.09839497440368e-001, -3.58194891557728e-001 }
};

double Over2cc_8_MLP_11_8_2_output_bias[2]={ 9.97035417234060e-001, -2.97990462110563e-001 };

double Over2cc_8_MLP_11_8_2_max_input[11]={ 9.99958329432000e-001, 9.94505657234667e-001, 9.81000941145667e-001, 9.77249757356000e-001, 7.56346456271333e+000, 6.80611365125667e+000, 6.08511856610667e+000, 9.76903355877333e-001, 7.09083526106000e+000, 4.97958375536000e-001, 8.06335210109333e-001 };

double Over2cc_8_MLP_11_8_2_min_input[11]={ 9.07570890327000e-001, 9.44650005130667e-001, 8.06267137025000e-001, 8.22841769254000e-001, 5.86068628775333e+000, 5.13742515665000e+000, 4.01210318245333e+000, 7.31203984050667e-001, 4.93424538709667e+000, 3.13060595095333e-001, 3.12766281606667e-001 };

double Over2cc_8_MLP_11_8_2_input[11];
double Over2cc_8_MLP_11_8_2_hidden[8];
double Over2cc_8_MLP_11_8_2_output[2];

double Over2cc_8_MLP_11_8_2_MeanInputs[11]={ 9.95162114251585e-001, 9.73127748552063e-001, 9.40878102187135e-001, 9.25104787935739e-001, 6.80160489106444e+000, 6.13033404751014e+000, 5.15109253864092e+000, 8.47882026592947e-001, 6.21245045143614e+000, 4.40009626845691e-001, 6.49807676291053e-001 };

void Over2cc_8_MLP_11_8_2_ScaleInputs(double* input, double minimum, double maximum, int size)
{
 double delta;
 long i;
 for(i=0; i<size; i++)
 {
	delta = (maximum-minimum)/(Over2cc_8_MLP_11_8_2_max_input[i]-Over2cc_8_MLP_11_8_2_min_input[i]);
	input[i] = minimum - delta*Over2cc_8_MLP_11_8_2_min_input[i]+ delta*input[i];
 }
}

void Over2cc_8_MLP_11_8_2_Normalise(double out[],long length)
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

void Over2cc_8_MLP_11_8_2_ComputeFeedForwardSignals(double* MAT_INOUT,double* V_IN,double* V_OUT, double* V_BIAS,int size1,int size2,int layer)
{
  int row,col;
  for(row=0;row < size2; row++) 
    {
      V_OUT[row]=0.0;
      for(col=0;col<size1;col++)V_OUT[row]+=(*(MAT_INOUT+(row*size1)+col)*V_IN[col]);
      V_OUT[row]+=V_BIAS[row];
   }
}

void Over2cc_8_MLP_11_8_2_RunNeuralNet_Classification () 
{
  Over2cc_8_MLP_11_8_2_ComputeFeedForwardSignals((double*)Over2cc_8_MLP_11_8_2_input_hidden_weights,Over2cc_8_MLP_11_8_2_input,Over2cc_8_MLP_11_8_2_hidden,Over2cc_8_MLP_11_8_2_hidden_bias,11, 8,0);
  Over2cc_8_MLP_11_8_2_ComputeFeedForwardSignals((double*)Over2cc_8_MLP_11_8_2_hidden_output_wts,Over2cc_8_MLP_11_8_2_hidden,Over2cc_8_MLP_11_8_2_output,Over2cc_8_MLP_11_8_2_output_bias,8, 2,1);
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
	scanf("%lg",&Over2cc_8_MLP_11_8_2_input[0]);
	printf("%s","Cont. Input-1(originalglcmIdmn): ");
	scanf("%lg",&Over2cc_8_MLP_11_8_2_input[1]);
	printf("%s","Cont. Input-2(wavelet-LHHglrlmShortRunEmphasis): ");
	scanf("%lg",&Over2cc_8_MLP_11_8_2_input[2]);
	printf("%s","Cont. Input-3(wavelet-HHHglcmIdn): ");
	scanf("%lg",&Over2cc_8_MLP_11_8_2_input[3]);
	printf("%s","Cont. Input-4(wavelet-LLHglszmZoneEntropy): ");
	scanf("%lg",&Over2cc_8_MLP_11_8_2_input[4]);
	printf("%s","Cont. Input-5(wavelet-HLLgldmDependenceEntropy): ");
	scanf("%lg",&Over2cc_8_MLP_11_8_2_input[5]);
	printf("%s","Cont. Input-6(originalglrlmRunEntropy): ");
	scanf("%lg",&Over2cc_8_MLP_11_8_2_input[6]);
	printf("%s","Cont. Input-7(wavelet-HHHglrlmShortRunEmphasis): ");
	scanf("%lg",&Over2cc_8_MLP_11_8_2_input[7]);
	printf("%s","Cont. Input-8(wavelet-LLHglcmSumEntropy): ");
	scanf("%lg",&Over2cc_8_MLP_11_8_2_input[8]);
	printf("%s","Cont. Input-9(wavelet-HHLglcmInverseVariance): ");
	scanf("%lg",&Over2cc_8_MLP_11_8_2_input[9]);
	printf("%s","Cont. Input-10(originalshapeSphericity): ");
	scanf("%lg",&Over2cc_8_MLP_11_8_2_input[10]);
	for(cont_inps=0;cont_inps<11;cont_inps++)
	{
     //Substitution of missing continuous variables
     if(Over2cc_8_MLP_11_8_2_input[cont_inps] == -9999)
	  Over2cc_8_MLP_11_8_2_input[cont_inps]=Over2cc_8_MLP_11_8_2_MeanInputs[cont_inps];
	}
    Over2cc_8_MLP_11_8_2_ScaleInputs(Over2cc_8_MLP_11_8_2_input,0,1,11);
	Over2cc_8_MLP_11_8_2_RunNeuralNet_Classification();
   //Normalise output if output activation is not Softmax;
 	Over2cc_8_MLP_11_8_2_Normalise(Over2cc_8_MLP_11_8_2_output,2);
	for(i=0;i<2;i++)
	{
      if(max<Over2cc_8_MLP_11_8_2_output[i])
      {
        max=Over2cc_8_MLP_11_8_2_output[i];
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

