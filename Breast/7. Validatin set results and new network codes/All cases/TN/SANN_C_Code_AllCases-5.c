//Analysis Type - Classification 
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>


double AllCases_5_MLP_21_7_2_input_hidden_weights[7][21]=
{
 {2.07283545653315e+000, -3.15668250127781e-002, 1.52697808579935e+000, 6.29664370824832e+000, -4.54941367486985e-001, 1.67992580432305e+000, 1.69809424637320e+000, 3.65193406034952e+000, -2.17062521274893e-001, 8.46666563950737e+000, -2.03702659573651e-001, -1.43170790284445e+000, 7.06609151675405e+000, 3.43217273879814e+000, -2.86794435593685e+000, -7.71179062714107e+000, -1.71272741499629e+001, 1.35429552128809e+001, 2.26834128082151e+000, 4.62326466200594e+000, 1.46325227684715e+000 },
 {1.18650843340613e+000, 1.51191437026162e+000, 1.80962023383380e+000, 4.21165763450229e+000, -5.47444654051831e-001, -7.66041794671395e-002, 5.83644407649949e-002, 9.44764896828409e-002, 7.90764946870897e-002, 1.96888167583722e+000, -8.83615443816554e+000, -4.07926787321657e+000, -1.66644218040542e+000, 3.46291907668653e-001, 1.78278511548176e+000, -3.47434825888095e+000, -1.22615519384280e+001, 8.70762602213154e+000, -1.38179636146404e+000, 6.35541959434651e+000, 2.15335377801377e+000 },
 {1.12668852580843e+000, 9.23589506038255e-001, 5.75826457782606e-001, 1.16474422186648e+000, 1.32017838307798e-001, 1.33939280658076e+000, 5.61520347281219e-001, 4.28836144147139e-001, 4.84279376688884e-002, 1.43729576986205e+000, 1.34941035250221e+000, 7.31439364022726e-001, 2.56846807867173e+000, 1.28584603782956e+000, -4.38423285302865e-001, 1.05544562902805e+000, -6.77942044595865e-001, 1.95202765277350e+000, 5.32358014441063e-001, 1.26296955872023e+000, -5.24288670333328e-001 },
 {8.99102662277923e-001, 8.17297785501940e-001, -3.65908545233618e-001, 4.68805941391369e+000, -1.75259888931698e+000, 2.15393907450267e+000, 3.37060528556868e+000, -7.97766921201319e-001, -2.85729366597417e+000, 5.08725240085690e+000, 3.47925883901540e+000, -2.12529489833852e+000, 6.73419847144310e+000, -5.64011531257517e-001, -3.89049408245496e+000, -9.62858797262647e+000, -1.27555817732056e+001, 9.13105155707171e+000, 1.21696577533337e+000, 2.70427028306853e+000, -5.01061741388552e+000 },
 {-9.07235423692155e-001, -1.10986154995685e+000, -1.17802068293660e+000, -6.99542095365772e-001, -1.39683860334547e+000, -6.61492891114424e-001, -4.75535527108905e-001, -1.09998776008302e+000, -1.33068087021556e+000, -4.48976389352316e-001, -6.90008350796868e-001, -1.02853784344580e+000, 3.24157918148799e-001, -3.57022887518472e-001, -7.55267707956806e-001, -1.00640895129641e+000, -1.86662861026395e+000, 3.95497524719012e-001, -6.63103703736432e-001, -2.51038158917955e-001, -1.40146940541359e+000 },
 {-7.59008418766618e-001, -1.89226369781797e+000, -1.26401568165626e-001, 5.73919005377636e+000, -2.45297156804644e+000, 1.74302108604943e+000, -1.56902385596131e+000, 4.61787824227000e+000, -5.37020575411786e+000, 9.04023484326976e+000, -2.43848666327346e-002, 5.47159132084372e-001, -4.52797017856586e+000, 3.75925445873322e+000, -4.32112304271537e+000, 3.08989515061980e+000, -6.74341361550181e+000, 4.16106877844420e+000, -2.25853414661984e+000, -1.67726563007716e-001, -2.22386876021610e-001 },
 {-1.44877454157217e+000, -1.58389252102223e+000, -1.40441882999256e+000, -1.12794597606075e+000, -1.45894823013549e+000, -1.21616224199691e+000, -7.52786684361097e-001, -1.17657781051423e+000, -1.29770198514430e+000, -9.47644331645760e-001, -1.33008160144078e+000, -1.51424777305559e+000, -7.34492106367949e-001, -1.06781308829618e+000, -6.51162184717632e-001, -1.80177143653848e+000, -1.72343522087093e+000, -2.30528569362602e-001, -6.51325661094165e-001, -9.71025956509256e-001, -8.81844477397130e-001 } 
};

double AllCases_5_MLP_21_7_2_hidden_bias[7]={ -2.49989709938562e+000, 1.61079746288014e+000, -6.90579830579232e-001, -3.99292764895173e+000, -1.75271894619594e+000, -4.93884498452634e+000, -2.27791170764152e+000 };

double AllCases_5_MLP_21_7_2_hidden_output_wts[2][7]=
{
 {6.54908822244373e-001, 3.88643727249932e+000, -2.38193281872574e+000, -3.96480053835431e+000, -3.10558247680585e+000, -3.83908856686976e+000, 2.36723169230615e+000 },
 {-6.34937866976365e-001, -3.86005558682716e+000, 2.37819764474049e+000, 3.97423385766354e+000, 3.08295458391278e+000, 3.88602493030813e+000, -2.38914584960674e+000 }
};

double AllCases_5_MLP_21_7_2_output_bias[2]={ 4.53682275291418e+000, -4.52641325407367e+000 };

double AllCases_5_MLP_21_7_2_max_input[21]={ 9.96816294342667e-001, 9.99979798185333e-001, 9.97805001621000e-001, 9.94259912350667e-001, 9.95170697016667e-001, 1.00000000000000e+000, 1.40417965636667e+000, 9.86949090259667e-001, 9.63523508705667e-001, 9.76060123067333e-001, 9.93238304093333e-001, 9.98520710059333e-001, 9.73612353747333e-001, 1.00000000000000e+000, 1.91273776273333e+000, 1.00000000000000e+000, 9.91759014152667e-001, 5.10890428384333e+000, 5.48591962498333e+000, 9.53722447143333e-001, 6.87179713731667e+000 };

double AllCases_5_MLP_21_7_2_min_input[21]={ 6.56682539682667e-001, 6.53839680357333e-001, 6.39102238316667e-001, 6.45877037209000e-001, 6.28152633660333e-001, 6.37131800065667e-001, 6.81172839506667e-001, 6.44827956739000e-001, 5.60026336363667e-001, 5.47665803838333e-001, 6.07743007629667e-001, 4.76396650867333e-001, 6.23316498316333e-001, 6.15666450404333e-001, 6.98564143853333e-001, 6.00000000000000e-001, 5.40743607384333e-001, 2.31263859634667e+000, 2.20680752570333e+000, 1.57423810395910e-001, 2.49992751346667e+000 };

double AllCases_5_MLP_21_7_2_input[21];
double AllCases_5_MLP_21_7_2_hidden[7];
double AllCases_5_MLP_21_7_2_output[2];

double AllCases_5_MLP_21_7_2_MeanInputs[21]={ 9.80250878848783e-001, 9.92644601955275e-001, 9.67147365965730e-001, 9.60851594373479e-001, 9.55835633423741e-001, 9.36915701035893e-001, 1.05385645241019e+000, 9.33596196888181e-001, 8.89310791280151e-001, 9.07804480645762e-001, 9.28264040611745e-001, 9.35792318981751e-001, 8.77433025347167e-001, 8.71428127373364e-001, 1.06003245957123e+000, 9.38632247260580e-001, 8.19193452266381e-001, 3.94675980446453e+000, 4.00812379732173e+000, 7.02402154241995e-001, 5.41968270299649e+000 };

void AllCases_5_MLP_21_7_2_FindMax(double* vec, double* max, long* maxIndex,int len)
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

void AllCases_5_MLP_21_7_2_ScaleInputs(double* input, double minimum, double maximum, int size)
{
 double delta;
 long i;
 for(i=0; i<size; i++)
 {
	delta = (maximum-minimum)/(AllCases_5_MLP_21_7_2_max_input[i]-AllCases_5_MLP_21_7_2_min_input[i]);
	input[i] = minimum - delta*AllCases_5_MLP_21_7_2_min_input[i]+ delta*input[i];
 }
}

void AllCases_5_MLP_21_7_2_softmax(double* vec,int len)
{

  long i, j;
  double sum=0.0;
  for(i=0; i<len; i++)
  {
    if(vec[i]>200)
    {
      double max;
      long maxIndex;
      AllCases_5_MLP_21_7_2_FindMax(vec, &max, &maxIndex,len);
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

void AllCases_5_MLP_21_7_2_ComputeFeedForwardSignals(double* MAT_INOUT,double* V_IN,double* V_OUT, double* V_BIAS,int size1,int size2,int layer)
{
  int row,col;
  for(row=0;row < size2; row++) 
    {
      V_OUT[row]=0.0;
      for(col=0;col<size1;col++)V_OUT[row]+=(*(MAT_INOUT+(row*size1)+col)*V_IN[col]);
      V_OUT[row]+=V_BIAS[row];
      if(layer==0) V_OUT[row] = tanh(V_OUT[row]);
   }
}

void AllCases_5_MLP_21_7_2_RunNeuralNet_Classification () 
{
  AllCases_5_MLP_21_7_2_ComputeFeedForwardSignals((double*)AllCases_5_MLP_21_7_2_input_hidden_weights,AllCases_5_MLP_21_7_2_input,AllCases_5_MLP_21_7_2_hidden,AllCases_5_MLP_21_7_2_hidden_bias,21, 7,0);
  AllCases_5_MLP_21_7_2_ComputeFeedForwardSignals((double*)AllCases_5_MLP_21_7_2_hidden_output_wts,AllCases_5_MLP_21_7_2_hidden,AllCases_5_MLP_21_7_2_output,AllCases_5_MLP_21_7_2_output_bias,7, 2,1);
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
	printf("%s","Cont. Input-0(wavelet-LLHglrlmRunPercentage): ");
	scanf("%lg",&AllCases_5_MLP_21_7_2_input[0]);
	printf("%s","Cont. Input-1(wavelet-LLHglcmImc2): ");
	scanf("%lg",&AllCases_5_MLP_21_7_2_input[1]);
	printf("%s","Cont. Input-2(wavelet-HHHglcmIdmn): ");
	scanf("%lg",&AllCases_5_MLP_21_7_2_input[2]);
	printf("%s","Cont. Input-3(wavelet-LLLglcmIdmn): ");
	scanf("%lg",&AllCases_5_MLP_21_7_2_input[3]);
	printf("%s","Cont. Input-4(wavelet-LHHglcmIdmn): ");
	scanf("%lg",&AllCases_5_MLP_21_7_2_input[4]);
	printf("%s","Cont. Input-5(wavelet-LHLglrlmShortRunEmphasis): ");
	scanf("%lg",&AllCases_5_MLP_21_7_2_input[5]);
	printf("%s","Cont. Input-6(wavelet-LLLglrlmLongRunEmphasis): ");
	scanf("%lg",&AllCases_5_MLP_21_7_2_input[6]);
	printf("%s","Cont. Input-7(wavelet-LLHglcmIdmn): ");
	scanf("%lg",&AllCases_5_MLP_21_7_2_input[7]);
	printf("%s","Cont. Input-8(wavelet-LHLglcmIdn): ");
	scanf("%lg",&AllCases_5_MLP_21_7_2_input[8]);
	printf("%s","Cont. Input-9(wavelet-HHLglcmIdn): ");
	scanf("%lg",&AllCases_5_MLP_21_7_2_input[9]);
	printf("%s","Cont. Input-10(wavelet-HLLglrlmShortRunEmphasis): ");
	scanf("%lg",&AllCases_5_MLP_21_7_2_input[10]);
	printf("%s","Cont. Input-11(wavelet-HLHglrlmShortRunEmphasis): ");
	scanf("%lg",&AllCases_5_MLP_21_7_2_input[11]);
	printf("%s","Cont. Input-12(wavelet-LLHglszmSmallAreaEmphasis): ");
	scanf("%lg",&AllCases_5_MLP_21_7_2_input[12]);
	printf("%s","Cont. Input-13(wavelet-LLLglszmSmallAreaEmphasis): ");
	scanf("%lg",&AllCases_5_MLP_21_7_2_input[13]);
	printf("%s","Cont. Input-14(wavelet-LLHglrlmLongRunEmphasis): ");
	scanf("%lg",&AllCases_5_MLP_21_7_2_input[14]);
	printf("%s","Cont. Input-15(wavelet-LLLglcmMCC): ");
	scanf("%lg",&AllCases_5_MLP_21_7_2_input[15]);
	printf("%s","Cont. Input-16(wavelet-HHLglrlmShortRunEmphasis): ");
	scanf("%lg",&AllCases_5_MLP_21_7_2_input[16]);
	printf("%s","Cont. Input-17(wavelet-LHLglrlmRunEntropy): ");
	scanf("%lg",&AllCases_5_MLP_21_7_2_input[17]);
	printf("%s","Cont. Input-18(wavelet-LHHglrlmRunEntropy): ");
	scanf("%lg",&AllCases_5_MLP_21_7_2_input[18]);
	printf("%s","Cont. Input-19(wavelet-LHHglszmSmallAreaEmphasis): ");
	scanf("%lg",&AllCases_5_MLP_21_7_2_input[19]);
	printf("%s","Cont. Input-20(wavelet-LHLgldmDependenceEntropy): ");
	scanf("%lg",&AllCases_5_MLP_21_7_2_input[20]);
	for(cont_inps=0;cont_inps<21;cont_inps++)
	{
     //Substitution of missing continuous variables
     if(AllCases_5_MLP_21_7_2_input[cont_inps] == -9999)
	  AllCases_5_MLP_21_7_2_input[cont_inps]=AllCases_5_MLP_21_7_2_MeanInputs[cont_inps];
	}
    AllCases_5_MLP_21_7_2_ScaleInputs(AllCases_5_MLP_21_7_2_input,0,1,21);
	AllCases_5_MLP_21_7_2_RunNeuralNet_Classification();
   //Output Activation is Softmax;
	AllCases_5_MLP_21_7_2_softmax(AllCases_5_MLP_21_7_2_output, 2);
	for(i=0;i<2;i++)
	{
      if(max<AllCases_5_MLP_21_7_2_output[i])
      {
        max=AllCases_5_MLP_21_7_2_output[i];
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

