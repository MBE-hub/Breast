//Analysis Type - Classification 
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>


double Over2cc_4_MLP_11_13_2_input_hidden_weights[13][11]=
{
 {-9.67867903968820e-002, 2.28154076519568e-002, -3.35649498859578e-001, 8.82781714945963e-001, 1.94553961494178e-001, -4.61565134225324e-002, 4.88407887548488e-001, -9.31214040252408e-001, 1.14424515716986e+000, -1.84595730732621e-001, -3.75231786183182e-001 },
 {1.66271615162039e-001, 2.64954873646668e-001, 3.92980852616769e-001, 6.27572580440418e-001, -8.08955792700495e-001, -9.55041390832084e-001, -1.70315292741017e-001, 2.15984563889653e-001, 9.32424251597168e-002, -2.01711233478376e-001, -2.68195816756215e-001 },
 {-6.30099184021619e-003, 1.94998003965565e-002, 2.06256551096899e-001, -5.07394999807542e-001, 1.40927411366937e-001, 2.87102079901997e-001, -1.59948554535672e-001, 4.93299918428781e-001, -5.74311647405604e-001, 1.61536252793922e-001, 2.84603663365472e-001 },
 {8.44132904607911e-002, -2.52541805646652e-001, 9.52440630981046e-002, -1.17011553435049e+000, 2.54123328838749e-001, 6.80770019523083e-001, -2.55656793255264e-001, 6.80183143370680e-001, -9.51364484214951e-001, 2.82655216534816e-001, 5.41714934121285e-001 },
 {1.47420504307694e-001, -3.43639832278234e-002, 7.34579561811838e-002, -3.41084980400859e-001, 1.77820432198388e-001, 3.26998382489788e-001, -6.33621447901245e-002, 2.71948969862459e-001, -2.59125992239993e-001, 1.67026123716960e-001, 2.25681124130396e-001 },
 {-1.60744451387658e-001, -3.25300772445751e-001, -4.40623304828700e-001, -6.44627832648388e-001, 6.20894832242376e-001, 7.43573334086263e-001, 1.82464683800834e-001, -2.72383858088025e-001, 3.03708526594419e-002, 1.19229715254509e-001, 1.95870247902179e-001 },
 {2.73286017175570e-001, -4.41295857440923e-002, 5.97444380891210e-001, -1.22244980500120e+000, -4.73092127338219e-001, -8.58963693468753e-002, -7.18821200937463e-001, 1.43571813882818e+000, -1.63432903828336e+000, 2.81556136447676e-001, 5.48144241980626e-001 },
 {-2.44604620027941e-001, -4.97878566479165e-001, -9.08795668629212e-001, -8.04177696928492e-001, 1.61028648232061e+000, 1.79950774828542e+000, 6.26999847191384e-001, -7.03682393946966e-001, 4.67491383089904e-001, 2.71070314825808e-001, 4.05125798555463e-001 },
 {-2.03412797947353e-001, -4.67789969385351e-002, -5.04471338599511e-002, -1.32827785125894e-001, -4.09909164506496e-001, -4.13079901529023e-001, -2.72813612272471e-001, 1.20000069605353e-001, -3.20854749772209e-001, -1.57921212641138e-001, -1.84057809110329e-001 },
 {7.02031384469346e-002, 7.01187385383518e-002, 8.18772589053893e-001, -1.04730488293168e+000, -1.21957897960460e+000, -9.08254329136147e-001, -1.10021822189795e+000, 1.64207040415048e+000, -2.03884854514198e+000, -3.99193068829748e-002, 1.77915331612420e-001 },
 {-4.22814098607677e-001, -9.44037518472167e-001, -1.55594101184943e+000, -1.92887248648048e+000, 3.75177886154107e+000, 4.21696208944436e+000, 1.30880932603757e+000, -1.17425160841063e+000, 8.07552036084885e-001, 8.38231472005350e-001, 1.16900784045272e+000 },
 {-5.42658156775986e-002, 2.86365049467600e-001, 2.97779817142973e-002, 7.77779159781973e-001, 5.25155937518373e-002, -2.56379162710775e-001, 2.77901665638560e-001, -3.56021069686073e-001, 6.03173959321456e-001, -7.18920806528739e-002, -2.49396450634258e-001 },
 {-2.92534647195035e-002, -1.32152385821060e-001, -2.74841546796472e-001, -1.76364381776382e-001, 1.06690785090322e+000, 1.08815944050225e+000, 4.79003751662889e-001, -3.80011408387743e-001, 4.39043673917140e-001, 2.89267472275678e-001, 3.38641454393625e-001 } 
};

double Over2cc_4_MLP_11_13_2_hidden_bias[13]={ 2.42061009241182e-001, 6.16831750187704e-001, -1.94487399294405e-001, -5.04099388890979e-001, -1.23026725439603e-001, -5.66069407371531e-001, -2.77858109864515e-001, -9.71868722305965e-001, -9.85641884419669e-002, -1.60714003463540e-001, -1.96723391879714e+000, 4.47939435130446e-001, -2.51088628577679e-001 };

double Over2cc_4_MLP_11_13_2_hidden_output_wts[2][13]=
{
 {5.07999874388486e-001, 4.06829337671686e-001, -3.73294840791012e-001, -5.82936207624282e-001, -2.60518108896384e-001, -2.74334938329029e-001, -6.46923080031427e-001, -5.23763457619744e-001, -1.44883107464308e-002, -5.08952812346454e-001, -1.35324101901744e+000, 3.28828699580307e-001, -2.63455871830801e-001 },
 {-5.18842878505847e-001, -3.93272954061246e-001, 3.63151197782563e-001, 5.83825260760174e-001, 2.23473248261096e-001, 2.37781198600273e-001, 6.27284477221628e-001, 4.98399028082651e-001, -1.37192400213981e-002, 4.87605052954803e-001, 1.38233724567618e+000, -2.79880065218099e-001, 2.14500337923896e-001 }
};

double Over2cc_4_MLP_11_13_2_output_bias[2]={ 1.27698660852480e+000, -1.25263380158147e+000 };

double Over2cc_4_MLP_11_13_2_max_input[11]={ 9.99958329432000e-001, 9.94505657234667e-001, 9.81000941145667e-001, 9.77249757356000e-001, 7.56346456271333e+000, 6.80611365125667e+000, 6.08511856610667e+000, 9.76903355877333e-001, 7.09083526106000e+000, 4.97958375536000e-001, 8.06335210109333e-001 };

double Over2cc_4_MLP_11_13_2_min_input[11]={ 9.07570890327000e-001, 9.44650005130667e-001, 8.06267137025000e-001, 8.22841769254000e-001, 5.86068628775333e+000, 5.13742515665000e+000, 4.01210318245333e+000, 7.31203984050667e-001, 4.93424538709667e+000, 3.13060595095333e-001, 3.12766281606667e-001 };

double Over2cc_4_MLP_11_13_2_input[11];
double Over2cc_4_MLP_11_13_2_hidden[13];
double Over2cc_4_MLP_11_13_2_output[2];

double Over2cc_4_MLP_11_13_2_MeanInputs[11]={ 9.95162114251585e-001, 9.73127748552063e-001, 9.40878102187135e-001, 9.25104787935739e-001, 6.80160489106444e+000, 6.13033404751014e+000, 5.15109253864092e+000, 8.47882026592947e-001, 6.21245045143614e+000, 4.40009626845691e-001, 6.49807676291053e-001 };

void Over2cc_4_MLP_11_13_2_FindMax(double* vec, double* max, long* maxIndex,int len)
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

void Over2cc_4_MLP_11_13_2_ScaleInputs(double* input, double minimum, double maximum, int size)
{
 double delta;
 long i;
 for(i=0; i<size; i++)
 {
	delta = (maximum-minimum)/(Over2cc_4_MLP_11_13_2_max_input[i]-Over2cc_4_MLP_11_13_2_min_input[i]);
	input[i] = minimum - delta*Over2cc_4_MLP_11_13_2_min_input[i]+ delta*input[i];
 }
}

void Over2cc_4_MLP_11_13_2_softmax(double* vec,int len)
{

  long i, j;
  double sum=0.0;
  for(i=0; i<len; i++)
  {
    if(vec[i]>200)
    {
      double max;
      long maxIndex;
      Over2cc_4_MLP_11_13_2_FindMax(vec, &max, &maxIndex,len);
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

void Over2cc_4_MLP_11_13_2_ComputeFeedForwardSignals(double* MAT_INOUT,double* V_IN,double* V_OUT, double* V_BIAS,int size1,int size2,int layer)
{
  int row,col;
  for(row=0;row < size2; row++) 
    {
      V_OUT[row]=0.0;
      for(col=0;col<size1;col++)V_OUT[row]+=(*(MAT_INOUT+(row*size1)+col)*V_IN[col]);
      V_OUT[row]+=V_BIAS[row];
   }
}

void Over2cc_4_MLP_11_13_2_RunNeuralNet_Classification () 
{
  Over2cc_4_MLP_11_13_2_ComputeFeedForwardSignals((double*)Over2cc_4_MLP_11_13_2_input_hidden_weights,Over2cc_4_MLP_11_13_2_input,Over2cc_4_MLP_11_13_2_hidden,Over2cc_4_MLP_11_13_2_hidden_bias,11, 13,0);
  Over2cc_4_MLP_11_13_2_ComputeFeedForwardSignals((double*)Over2cc_4_MLP_11_13_2_hidden_output_wts,Over2cc_4_MLP_11_13_2_hidden,Over2cc_4_MLP_11_13_2_output,Over2cc_4_MLP_11_13_2_output_bias,13, 2,1);
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
	scanf("%lg",&Over2cc_4_MLP_11_13_2_input[0]);
	printf("%s","Cont. Input-1(originalglcmIdmn): ");
	scanf("%lg",&Over2cc_4_MLP_11_13_2_input[1]);
	printf("%s","Cont. Input-2(wavelet-LHHglrlmShortRunEmphasis): ");
	scanf("%lg",&Over2cc_4_MLP_11_13_2_input[2]);
	printf("%s","Cont. Input-3(wavelet-HHHglcmIdn): ");
	scanf("%lg",&Over2cc_4_MLP_11_13_2_input[3]);
	printf("%s","Cont. Input-4(wavelet-LLHglszmZoneEntropy): ");
	scanf("%lg",&Over2cc_4_MLP_11_13_2_input[4]);
	printf("%s","Cont. Input-5(wavelet-HLLgldmDependenceEntropy): ");
	scanf("%lg",&Over2cc_4_MLP_11_13_2_input[5]);
	printf("%s","Cont. Input-6(originalglrlmRunEntropy): ");
	scanf("%lg",&Over2cc_4_MLP_11_13_2_input[6]);
	printf("%s","Cont. Input-7(wavelet-HHHglrlmShortRunEmphasis): ");
	scanf("%lg",&Over2cc_4_MLP_11_13_2_input[7]);
	printf("%s","Cont. Input-8(wavelet-LLHglcmSumEntropy): ");
	scanf("%lg",&Over2cc_4_MLP_11_13_2_input[8]);
	printf("%s","Cont. Input-9(wavelet-HHLglcmInverseVariance): ");
	scanf("%lg",&Over2cc_4_MLP_11_13_2_input[9]);
	printf("%s","Cont. Input-10(originalshapeSphericity): ");
	scanf("%lg",&Over2cc_4_MLP_11_13_2_input[10]);
	for(cont_inps=0;cont_inps<11;cont_inps++)
	{
     //Substitution of missing continuous variables
     if(Over2cc_4_MLP_11_13_2_input[cont_inps] == -9999)
	  Over2cc_4_MLP_11_13_2_input[cont_inps]=Over2cc_4_MLP_11_13_2_MeanInputs[cont_inps];
	}
    Over2cc_4_MLP_11_13_2_ScaleInputs(Over2cc_4_MLP_11_13_2_input,0,1,11);
	Over2cc_4_MLP_11_13_2_RunNeuralNet_Classification();
   //Output Activation is Softmax;
	Over2cc_4_MLP_11_13_2_softmax(Over2cc_4_MLP_11_13_2_output, 2);
	for(i=0;i<2;i++)
	{
      if(max<Over2cc_4_MLP_11_13_2_output[i])
      {
        max=Over2cc_4_MLP_11_13_2_output[i];
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

