//Analysis Type - Classification 
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>


double Over2cc_9_MLP_11_10_2_input_hidden_weights[10][11]=
{
 {1.64335970073142e-003, 2.86507536782084e-001, 3.60555388113700e-001, 1.42572190634223e+000, -1.90374133840283e+000, -2.32475802964427e+000, -4.51304224573279e-001, -1.79134017882452e-001, 3.10611074779877e-001, -8.09209372576031e-001, -9.39189003370023e-001 },
 {1.02043655053640e-001, 5.60315767691566e-001, 4.46827520536261e-001, 1.77290237977584e+000, -1.46328391924485e+000, -1.97123521078338e+000, -1.58443979114260e-001, -2.97817644608059e-001, 7.02362826582000e-001, -5.14766670323836e-001, -8.39134644172467e-001 },
 {-5.29599452659457e-002, -1.61365540099280e-001, -4.87776128888496e-001, 1.96358737208732e-001, 9.01182480263452e-001, 8.27839669311838e-001, 5.87503807928268e-001, -7.50799936622944e-001, 7.95470389921165e-001, 5.62070744274646e-002, 3.71964124584962e-002 },
 {1.73515348385663e-001, 5.02811792403574e-001, 3.08126152605876e-001, 1.69070960424540e+000, -7.57363513621922e-001, -1.13798820720947e+000, 2.73678371660610e-001, -5.18207886709640e-001, 1.10424211787428e+000, -2.46286736706474e-001, -6.52047273252721e-001 },
 {1.36556208480974e-001, 2.59208195824256e-001, -9.67559676050731e-002, 8.66493795369306e-001, 3.85110066164963e-001, 2.09062932756476e-001, 5.28036995128170e-001, -5.50569788185907e-001, 9.98831418451686e-001, 7.79282547998362e-002, -1.15371037505551e-001 },
 {-4.45399191773319e-002, 8.05237668265685e-002, 1.46909481274795e-001, 5.66742143098881e-001, -8.29143127743776e-001, -1.06417541437802e+000, -2.00443841107655e-001, -6.55572998852887e-002, 6.67514669072799e-002, -3.46835299526858e-001, -4.72560481970787e-001 },
 {7.60986279602690e-002, 5.56060697120795e-001, 1.19951230398685e+000, 1.99682597660521e-001, -2.36118850119843e+000, -2.43524003196064e+000, -1.35254665040291e+000, 1.46055475838133e+000, -1.64499195865822e+000, -3.34489528178708e-001, -4.83396528907458e-001 },
 {4.77597058140720e-002, 3.68149535555878e-002, -4.54234814765412e-001, 1.08591874030961e+000, 7.17507369829749e-001, 3.67107844151219e-001, 7.98299053132103e-001, -1.13293332300447e+000, 1.53597076486048e+000, -2.94329760551837e-002, -1.84299817138570e-001 },
 {-1.18174555135792e-001, -3.71086375530350e-001, -4.00902382705211e-001, -8.31708313197642e-001, 9.00036407000954e-001, 1.17451153703725e+000, 1.90979754555976e-001, -1.51614679464353e-001, -8.31042591743689e-002, 1.93833115737231e-001, 4.06558366872462e-001 },
 {2.76527137234205e-001, 6.11784477544773e-001, 1.41225316291103e+000, 1.49450193417001e-001, -2.62591994226805e+000, -2.54064964557424e+000, -1.49220265547445e+000, 1.72994353659794e+000, -1.94387053471787e+000, -3.17996304363412e-001, -4.27652709080360e-001 } 
};

double Over2cc_9_MLP_11_10_2_hidden_bias[10]={ 9.46351085226262e-001, 1.23696829819777e+000, -1.50696303294116e-001, 1.02145479840111e+000, 4.47631858526986e-001, 3.70626785258476e-001, 7.50027573637515e-001, 3.21760582636328e-001, -6.20315098254320e-001, 8.90408460463481e-001 };

double Over2cc_9_MLP_11_10_2_hidden_output_wts[2][10]=
{
 {1.03956062430174e+000, 1.04379091718254e+000, -1.38096297760043e-002, 9.44075588423940e-001, 3.19236846181968e-001, 4.21993916257271e-001, 3.08830378688359e-001, 4.48942634336262e-001, -5.03923292195387e-001, 2.50332595915069e-001 },
 {-1.00519725413128e+000, -1.10374241678184e+000, -3.36029465693673e-002, -8.85250543880546e-001, -3.73510418206507e-001, -4.13240715231345e-001, -3.00214004598234e-001, -4.96167902854482e-001, 4.57148233134863e-001, -2.66841961607611e-001 }
};

double Over2cc_9_MLP_11_10_2_output_bias[2]={ 1.35485501505593e+000, -1.36454823879031e+000 };

double Over2cc_9_MLP_11_10_2_max_input[11]={ 9.99958329432000e-001, 9.94505657234667e-001, 9.81000941145667e-001, 9.77249757356000e-001, 7.56346456271333e+000, 6.80611365125667e+000, 6.08511856610667e+000, 9.76903355877333e-001, 7.09083526106000e+000, 4.97958375536000e-001, 8.06335210109333e-001 };

double Over2cc_9_MLP_11_10_2_min_input[11]={ 9.07570890327000e-001, 9.44650005130667e-001, 8.06267137025000e-001, 8.22841769254000e-001, 5.86068628775333e+000, 5.13742515665000e+000, 4.01210318245333e+000, 7.31203984050667e-001, 4.93424538709667e+000, 3.13060595095333e-001, 3.12766281606667e-001 };

double Over2cc_9_MLP_11_10_2_input[11];
double Over2cc_9_MLP_11_10_2_hidden[10];
double Over2cc_9_MLP_11_10_2_output[2];

double Over2cc_9_MLP_11_10_2_MeanInputs[11]={ 9.95162114251585e-001, 9.73127748552063e-001, 9.40878102187135e-001, 9.25104787935739e-001, 6.80160489106444e+000, 6.13033404751014e+000, 5.15109253864092e+000, 8.47882026592947e-001, 6.21245045143614e+000, 4.40009626845691e-001, 6.49807676291053e-001 };

void Over2cc_9_MLP_11_10_2_FindMax(double* vec, double* max, long* maxIndex,int len)
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

void Over2cc_9_MLP_11_10_2_ScaleInputs(double* input, double minimum, double maximum, int size)
{
 double delta;
 long i;
 for(i=0; i<size; i++)
 {
	delta = (maximum-minimum)/(Over2cc_9_MLP_11_10_2_max_input[i]-Over2cc_9_MLP_11_10_2_min_input[i]);
	input[i] = minimum - delta*Over2cc_9_MLP_11_10_2_min_input[i]+ delta*input[i];
 }
}

void Over2cc_9_MLP_11_10_2_softmax(double* vec,int len)
{

  long i, j;
  double sum=0.0;
  for(i=0; i<len; i++)
  {
    if(vec[i]>200)
    {
      double max;
      long maxIndex;
      Over2cc_9_MLP_11_10_2_FindMax(vec, &max, &maxIndex,len);
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

void Over2cc_9_MLP_11_10_2_ComputeFeedForwardSignals(double* MAT_INOUT,double* V_IN,double* V_OUT, double* V_BIAS,int size1,int size2,int layer)
{
  int row,col;
  for(row=0;row < size2; row++) 
    {
      V_OUT[row]=0.0;
      for(col=0;col<size1;col++)V_OUT[row]+=(*(MAT_INOUT+(row*size1)+col)*V_IN[col]);
      V_OUT[row]+=V_BIAS[row];
   }
}

void Over2cc_9_MLP_11_10_2_RunNeuralNet_Classification () 
{
  Over2cc_9_MLP_11_10_2_ComputeFeedForwardSignals((double*)Over2cc_9_MLP_11_10_2_input_hidden_weights,Over2cc_9_MLP_11_10_2_input,Over2cc_9_MLP_11_10_2_hidden,Over2cc_9_MLP_11_10_2_hidden_bias,11, 10,0);
  Over2cc_9_MLP_11_10_2_ComputeFeedForwardSignals((double*)Over2cc_9_MLP_11_10_2_hidden_output_wts,Over2cc_9_MLP_11_10_2_hidden,Over2cc_9_MLP_11_10_2_output,Over2cc_9_MLP_11_10_2_output_bias,10, 2,1);
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
	scanf("%lg",&Over2cc_9_MLP_11_10_2_input[0]);
	printf("%s","Cont. Input-1(originalglcmIdmn): ");
	scanf("%lg",&Over2cc_9_MLP_11_10_2_input[1]);
	printf("%s","Cont. Input-2(wavelet-LHHglrlmShortRunEmphasis): ");
	scanf("%lg",&Over2cc_9_MLP_11_10_2_input[2]);
	printf("%s","Cont. Input-3(wavelet-HHHglcmIdn): ");
	scanf("%lg",&Over2cc_9_MLP_11_10_2_input[3]);
	printf("%s","Cont. Input-4(wavelet-LLHglszmZoneEntropy): ");
	scanf("%lg",&Over2cc_9_MLP_11_10_2_input[4]);
	printf("%s","Cont. Input-5(wavelet-HLLgldmDependenceEntropy): ");
	scanf("%lg",&Over2cc_9_MLP_11_10_2_input[5]);
	printf("%s","Cont. Input-6(originalglrlmRunEntropy): ");
	scanf("%lg",&Over2cc_9_MLP_11_10_2_input[6]);
	printf("%s","Cont. Input-7(wavelet-HHHglrlmShortRunEmphasis): ");
	scanf("%lg",&Over2cc_9_MLP_11_10_2_input[7]);
	printf("%s","Cont. Input-8(wavelet-LLHglcmSumEntropy): ");
	scanf("%lg",&Over2cc_9_MLP_11_10_2_input[8]);
	printf("%s","Cont. Input-9(wavelet-HHLglcmInverseVariance): ");
	scanf("%lg",&Over2cc_9_MLP_11_10_2_input[9]);
	printf("%s","Cont. Input-10(originalshapeSphericity): ");
	scanf("%lg",&Over2cc_9_MLP_11_10_2_input[10]);
	for(cont_inps=0;cont_inps<11;cont_inps++)
	{
     //Substitution of missing continuous variables
     if(Over2cc_9_MLP_11_10_2_input[cont_inps] == -9999)
	  Over2cc_9_MLP_11_10_2_input[cont_inps]=Over2cc_9_MLP_11_10_2_MeanInputs[cont_inps];
	}
    Over2cc_9_MLP_11_10_2_ScaleInputs(Over2cc_9_MLP_11_10_2_input,0,1,11);
	Over2cc_9_MLP_11_10_2_RunNeuralNet_Classification();
   //Output Activation is Softmax;
	Over2cc_9_MLP_11_10_2_softmax(Over2cc_9_MLP_11_10_2_output, 2);
	for(i=0;i<2;i++)
	{
      if(max<Over2cc_9_MLP_11_10_2_output[i])
      {
        max=Over2cc_9_MLP_11_10_2_output[i];
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

