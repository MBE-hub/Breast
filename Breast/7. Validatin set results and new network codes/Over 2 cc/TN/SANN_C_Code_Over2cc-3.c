//Analysis Type - Classification 
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>


double Over2cc_3_MLP_11_14_2_input_hidden_weights[14][11]=
{
 {-1.80647386178885e-001, -2.94685739067131e-001, -4.16595943864159e-001, -7.50293030945799e-002, 5.71246109933524e-001, 5.56091427110720e-001, 3.09420983554752e-001, -5.23776926640856e-001, 4.44391058052435e-001, -6.09269846419615e-002, -7.04545070376991e-002 },
 {-7.12217541813294e-001, -7.22395711557521e-001, -1.19583667772588e+000, -1.32666938212716e-001, 5.55352132287567e-001, 4.34456245582687e-001, 3.68561661174682e-001, -1.25973272057450e+000, 7.67625610000617e-001, -5.15544641615137e-001, -4.42275503771312e-001 },
 {2.10951935477201e-001, 2.89865708260178e-001, 8.17831485232020e-002, 1.07378139539174e+000, 3.25005265758324e-002, -1.62026766228522e-001, 4.08445714606065e-001, -3.59005254206101e-001, 9.62285434642700e-001, 6.98630843086530e-002, -1.50286993024337e-001 },
 {1.83413750247107e-002, 1.09768719031059e-001, 6.70383526559835e-001, -3.98283146613910e-001, -1.32261019079440e+000, -1.27003354733799e+000, -9.37671339344413e-001, 1.15700788603872e+000, -1.50724867532790e+000, -1.85617569210215e-001, -9.78020396652553e-002 },
 {-1.32533380088948e-001, -4.79949045948773e-001, -7.45987662067515e-001, -8.04687078388827e-001, 1.70930370033964e+000, 1.94994836226295e+000, 6.32785143852434e-001, -5.58483424415018e-001, 4.95942965396546e-001, 3.60047489139698e-001, 4.77877615967409e-001 },
 {-1.87700584356334e-002, -2.15949375595328e-002, -4.04102172454459e-001, 5.47725608740651e-001, 8.16996365739369e-001, 6.42635851510063e-001, 7.44835792719512e-001, -8.33725154695210e-001, 1.22764284437185e+000, 4.77359298795613e-002, -7.25606634057737e-002 },
 {-1.07649004690757e-001, -2.18944734764356e-001, -1.40682186813072e-001, -4.41107008621940e-001, 2.79085728103008e-003, 6.95809104789845e-002, -1.79290650327112e-001, 1.52571105423165e-001, -4.31457557642674e-001, -5.91173907913145e-002, 4.27617897635362e-003 },
 {2.49365379428994e-001, 1.04532527845882e-001, -4.96667000216940e-001, 8.98815913970265e-001, 1.72629590745641e+000, 1.60764438103315e+000, 1.40397602385217e+000, -1.16558820900650e+000, 2.02478668025871e+000, 3.88990385958023e-001, 2.46382591736240e-001 },
 {2.70704687853484e-002, -1.68515975655803e-001, -4.92203542083867e-001, -4.31674376238178e-002, 1.17004215589752e+000, 1.17650379853402e+000, 6.36456338977376e-001, -5.79744370135478e-001, 7.72763690269987e-001, 2.26985495495857e-001, 2.30257496138458e-001 },
 {-6.71199419341900e-002, -5.01174098375787e-001, -7.00279491489431e-001, -1.15501836029355e+000, 2.04051197798261e+000, 2.35800214709674e+000, 7.05515999548072e-001, -3.53543857874657e-001, 3.00909780028697e-001, 5.53537301801046e-001, 8.04780801733959e-001 },
 {-7.74776981321628e-002, 7.36356498415396e-004, -3.78392053700891e-001, 8.88445708881186e-001, 3.16846541754409e-001, 9.55333506975839e-002, 5.71304446227937e-001, -8.79917846238826e-001, 1.30469726384409e+000, -1.33465474682648e-001, -2.99386472176799e-001 },
 {-4.57567943083376e-001, -6.18719095898239e-001, -1.27798722301878e+000, 3.10514705721682e-003, 1.63073016416768e+000, 1.49898701260650e+000, 1.01903837581334e+000, -1.65066812426317e+000, 1.56258765594521e+000, -5.89745166654130e-002, -9.00200138814588e-002 },
 {-1.15451349563672e-001, -3.43469722527107e-001, -4.44881398193387e-001, -7.20826170232317e-001, 1.10784189910243e+000, 1.38376356494952e+000, 3.90728040819940e-001, -1.98764766016974e-001, 5.72614045980994e-002, 3.28761344220779e-001, 4.60659669264617e-001 },
 {7.18475630720191e-002, -2.09553952985741e-001, -6.94809269654629e-001, -9.26508833187484e-002, 2.01721144733017e+000, 2.04300946004657e+000, 1.08287242635796e+000, -9.38223538765990e-001, 1.32155435011699e+000, 5.32411439228265e-001, 5.10956061624528e-001 } 
};

double Over2cc_3_MLP_11_14_2_hidden_bias[14]={ -3.07779660606167e-001, -9.07017146818631e-001, 6.10645499717601e-001, 1.36221085018828e-001, -8.08815891340946e-001, 7.20812763221463e-002, -3.17716221746644e-001, 2.21165954908010e-001, -2.48645145921238e-001, -9.63109141898612e-001, 1.88395665784079e-001, -7.93151949631377e-001, -5.98864022418288e-001, -3.81675249832027e-001 };

double Over2cc_3_MLP_11_14_2_hidden_output_wts[2][14]=
{
 {-4.62484689939317e-002, 3.16734818479672e-001, 8.88505131953904e-001, -2.12103619427782e-001, -1.13418530649456e+000, 5.07396385347554e-001, -4.03303264374676e-001, 4.56750049485002e-001, -2.98541815647552e-001, -1.68234529385256e+000, 9.74812701615485e-001, 7.42757451027721e-002, -1.04951714441951e+000, -5.34676690565497e-001 },
 {4.14590551101160e-002, -2.70215769216419e-001, -9.11364477503330e-001, 2.53037117602085e-001, 1.14125816997482e+000, -4.67503704726074e-001, 4.03628475519692e-001, -3.91926881586173e-001, 2.66943600764409e-001, 1.65308806206441e+000, -9.99602123186770e-001, -6.80306401517514e-002, 1.03808769276366e+000, 6.25308685962831e-001 }
};

double Over2cc_3_MLP_11_14_2_output_bias[2]={ 1.87195646522970e+000, -1.79180530347414e+000 };

double Over2cc_3_MLP_11_14_2_max_input[11]={ 9.99958329432000e-001, 9.94505657234667e-001, 9.81000941145667e-001, 9.77249757356000e-001, 7.56346456271333e+000, 6.80611365125667e+000, 6.08511856610667e+000, 9.76903355877333e-001, 7.09083526106000e+000, 4.97958375536000e-001, 8.06335210109333e-001 };

double Over2cc_3_MLP_11_14_2_min_input[11]={ 9.07570890327000e-001, 9.44650005130667e-001, 8.06267137025000e-001, 8.22841769254000e-001, 5.86068628775333e+000, 5.13742515665000e+000, 4.01210318245333e+000, 7.31203984050667e-001, 4.93424538709667e+000, 3.13060595095333e-001, 3.12766281606667e-001 };

double Over2cc_3_MLP_11_14_2_input[11];
double Over2cc_3_MLP_11_14_2_hidden[14];
double Over2cc_3_MLP_11_14_2_output[2];

double Over2cc_3_MLP_11_14_2_MeanInputs[11]={ 9.95162114251585e-001, 9.73127748552063e-001, 9.40878102187135e-001, 9.25104787935739e-001, 6.80160489106444e+000, 6.13033404751014e+000, 5.15109253864092e+000, 8.47882026592947e-001, 6.21245045143614e+000, 4.40009626845691e-001, 6.49807676291053e-001 };

void Over2cc_3_MLP_11_14_2_FindMax(double* vec, double* max, long* maxIndex,int len)
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

void Over2cc_3_MLP_11_14_2_ScaleInputs(double* input, double minimum, double maximum, int size)
{
 double delta;
 long i;
 for(i=0; i<size; i++)
 {
	delta = (maximum-minimum)/(Over2cc_3_MLP_11_14_2_max_input[i]-Over2cc_3_MLP_11_14_2_min_input[i]);
	input[i] = minimum - delta*Over2cc_3_MLP_11_14_2_min_input[i]+ delta*input[i];
 }
}

void Over2cc_3_MLP_11_14_2_softmax(double* vec,int len)
{

  long i, j;
  double sum=0.0;
  for(i=0; i<len; i++)
  {
    if(vec[i]>200)
    {
      double max;
      long maxIndex;
      Over2cc_3_MLP_11_14_2_FindMax(vec, &max, &maxIndex,len);
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

void Over2cc_3_MLP_11_14_2_ComputeFeedForwardSignals(double* MAT_INOUT,double* V_IN,double* V_OUT, double* V_BIAS,int size1,int size2,int layer)
{
  int row,col;
  for(row=0;row < size2; row++) 
    {
      V_OUT[row]=0.0;
      for(col=0;col<size1;col++)V_OUT[row]+=(*(MAT_INOUT+(row*size1)+col)*V_IN[col]);
      V_OUT[row]+=V_BIAS[row];
   }
}

void Over2cc_3_MLP_11_14_2_RunNeuralNet_Classification () 
{
  Over2cc_3_MLP_11_14_2_ComputeFeedForwardSignals((double*)Over2cc_3_MLP_11_14_2_input_hidden_weights,Over2cc_3_MLP_11_14_2_input,Over2cc_3_MLP_11_14_2_hidden,Over2cc_3_MLP_11_14_2_hidden_bias,11, 14,0);
  Over2cc_3_MLP_11_14_2_ComputeFeedForwardSignals((double*)Over2cc_3_MLP_11_14_2_hidden_output_wts,Over2cc_3_MLP_11_14_2_hidden,Over2cc_3_MLP_11_14_2_output,Over2cc_3_MLP_11_14_2_output_bias,14, 2,1);
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
	scanf("%lg",&Over2cc_3_MLP_11_14_2_input[0]);
	printf("%s","Cont. Input-1(originalglcmIdmn): ");
	scanf("%lg",&Over2cc_3_MLP_11_14_2_input[1]);
	printf("%s","Cont. Input-2(wavelet-LHHglrlmShortRunEmphasis): ");
	scanf("%lg",&Over2cc_3_MLP_11_14_2_input[2]);
	printf("%s","Cont. Input-3(wavelet-HHHglcmIdn): ");
	scanf("%lg",&Over2cc_3_MLP_11_14_2_input[3]);
	printf("%s","Cont. Input-4(wavelet-LLHglszmZoneEntropy): ");
	scanf("%lg",&Over2cc_3_MLP_11_14_2_input[4]);
	printf("%s","Cont. Input-5(wavelet-HLLgldmDependenceEntropy): ");
	scanf("%lg",&Over2cc_3_MLP_11_14_2_input[5]);
	printf("%s","Cont. Input-6(originalglrlmRunEntropy): ");
	scanf("%lg",&Over2cc_3_MLP_11_14_2_input[6]);
	printf("%s","Cont. Input-7(wavelet-HHHglrlmShortRunEmphasis): ");
	scanf("%lg",&Over2cc_3_MLP_11_14_2_input[7]);
	printf("%s","Cont. Input-8(wavelet-LLHglcmSumEntropy): ");
	scanf("%lg",&Over2cc_3_MLP_11_14_2_input[8]);
	printf("%s","Cont. Input-9(wavelet-HHLglcmInverseVariance): ");
	scanf("%lg",&Over2cc_3_MLP_11_14_2_input[9]);
	printf("%s","Cont. Input-10(originalshapeSphericity): ");
	scanf("%lg",&Over2cc_3_MLP_11_14_2_input[10]);
	for(cont_inps=0;cont_inps<11;cont_inps++)
	{
     //Substitution of missing continuous variables
     if(Over2cc_3_MLP_11_14_2_input[cont_inps] == -9999)
	  Over2cc_3_MLP_11_14_2_input[cont_inps]=Over2cc_3_MLP_11_14_2_MeanInputs[cont_inps];
	}
    Over2cc_3_MLP_11_14_2_ScaleInputs(Over2cc_3_MLP_11_14_2_input,0,1,11);
	Over2cc_3_MLP_11_14_2_RunNeuralNet_Classification();
   //Output Activation is Softmax;
	Over2cc_3_MLP_11_14_2_softmax(Over2cc_3_MLP_11_14_2_output, 2);
	for(i=0;i<2;i++)
	{
      if(max<Over2cc_3_MLP_11_14_2_output[i])
      {
        max=Over2cc_3_MLP_11_14_2_output[i];
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

