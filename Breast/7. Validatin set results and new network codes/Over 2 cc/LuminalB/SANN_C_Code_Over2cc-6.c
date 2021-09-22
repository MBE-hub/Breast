//Analysis Type - Classification 
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>


double Over2cc_6_MLP_22_6_2_input_hidden_weights[6][22]=
{
 {-2.44865739605500e+000, -3.36467641250885e+000, 1.08612089750619e+001, 9.87129391415744e+000, 6.15030638944471e+000, -8.71371609345879e+000, -8.45746953550608e+000, -2.43963276801410e+000, -2.36333306853331e+000, -8.71113282827753e+000, 3.67560859462758e+000, -5.70894777985247e+000, 4.33983866932488e+000, -3.66278749576159e+000, 1.10156731393293e+001, 3.77241596036926e-001, 8.57457423849897e+000, 3.51933785652630e+000, 1.51389645925851e+000, -7.80799529442921e+000, -8.20661618317268e+000, -2.03107500377262e+000 },
 {3.47001098595058e+000, 6.49140610578693e+000, -6.35882455352305e+000, -1.10521062101641e+001, -4.18652885147852e+000, 5.89363983734711e+000, 7.89987761900732e+000, -3.50678766647149e-001, 2.22643468541597e+000, 8.46587033929223e+000, -3.81479659006074e+000, 1.34138046259171e+000, -2.18343836575572e+000, 2.46661622342390e+000, -8.56064323878995e+000, 1.15789175624655e+000, -7.97616907365947e+000, -1.85061720418830e+000, -3.75167455064237e+000, 5.09706131739487e+000, 9.16225459331540e+000, -1.22663851584601e+000 },
 {1.36125513147912e+000, 1.47688155849901e+000, 1.01004872243244e+001, 7.67008947115104e+000, 7.50641370010015e+000, -9.56464167640175e+000, -7.83829706242203e+000, -1.47069305175208e+001, -5.80398936807933e+000, -9.78947657968350e+000, -1.46480006938945e+000, -1.51165220631246e+001, 6.53419652034194e-001, -7.11132627218790e+000, 1.16776910872938e+001, -3.75073782780688e+000, 3.61405698525778e+000, 3.69940961758212e+000, -4.34698822926195e+000, -6.64642397099040e+000, -6.81981438466736e+000, -3.64446189871127e+000 },
 {-1.24916811929872e+000, -1.15523588125985e-001, 6.86095353418948e+000, 4.78658534610284e+000, 4.14935694070122e+000, -1.02289139665208e+001, -8.26843937264178e+000, -1.47529238579291e+001, -6.84976929731471e+000, -9.72023461697527e+000, -2.87319540645976e+000, -1.46632354180655e+001, -1.25276973146102e+000, -5.71020954543145e+000, 7.76141585760563e+000, -5.10421857478439e+000, 1.19048353244667e+000, 1.13586373463990e+000, -3.52782789124534e+000, -7.11890131019877e+000, -7.27095668605623e+000, -4.87949686768827e+000 },
 {-3.76099263471235e-001, -2.23694222709037e+000, -4.22688504909808e+000, -7.05920708374958e+000, -5.31415200588597e+000, 1.49738790016346e+000, 8.71632666290956e+000, 1.15114234480441e+001, 7.77774745984230e+000, 5.64501802504865e+000, -2.60385405310373e+000, 5.66163405094362e+000, -1.50071746011290e+000, 4.02734667370559e+000, -4.92215438729831e+000, 2.56030497978668e+000, -8.25363918805247e+000, 5.13833726259866e-001, 8.24421046694565e-002, 6.11894645031926e-002, 2.89199639114717e-001, -8.57393828587629e+000 },
 {-2.14764947737154e+000, -2.43408986465053e+000, -1.41942042001857e+001, -1.07010237119935e+001, -1.07294037750955e+001, 1.30159258341615e+001, 9.53915609188637e+000, 1.93702922571025e+001, 7.59750364178235e+000, 1.22660962178504e+001, 1.34000396359217e+000, 1.95283479270366e+001, -1.30331933245145e+000, 1.00004939440693e+001, -1.54734954207487e+001, 4.26060947426740e+000, -5.14159314107978e+000, -4.54969502251557e+000, 6.29633572566687e+000, 9.14477956082872e+000, 8.95317764950260e+000, 5.24941274190253e+000 } 
};

double Over2cc_6_MLP_22_6_2_hidden_bias[6]={ 7.65208964906583e-001, -2.29733276701083e+000, -1.91395974113187e+000, -3.87127544437351e+000, -1.69673534636163e+000, 2.60963465226586e+000 };

double Over2cc_6_MLP_22_6_2_hidden_output_wts[2][6]=
{
 {2.74486527302447e+000, -5.75319757234592e+000, 2.90354715154292e+000, -3.58962755776830e+000, -4.61074655691573e+000, -1.75396870772466e+000 },
 {-2.71242375740902e+000, 5.66731461153996e+000, -2.90544656098802e+000, 3.59227271898847e+000, 4.67718926423066e+000, 1.72605278778609e+000 }
};

double Over2cc_6_MLP_22_6_2_output_bias[2]={ 5.16751659149755e+000, -5.20847585075969e+000 };

double Over2cc_6_MLP_22_6_2_max_input[22]={ 9.94225622500000e-001, 9.96754273526000e-001, 9.97102711270667e-001, 9.95170697016667e-001, 9.97911037399333e-001, 9.99977398435000e-001, 9.78343830095000e-001, 9.91579149548667e-001, 9.51627339487000e-001, 6.77785077092000e+000, 6.81794634845333e+000, 6.09698918942000e+000, 7.05260550610667e+000, 1.91273776273333e+000, 8.65563457626667e-001, 6.42679814845667e+000, 6.07940450162667e+000, 9.96854540307667e-001, 2.12815921118000e+000, 4.99555750214000e-001, 4.87575136096667e+000, 7.77973268702667e-001 };

double Over2cc_6_MLP_22_6_2_min_input[22]={ 9.51458841268667e-001, 9.57705102447333e-001, 9.38441273251000e-001, 9.33755227989000e-001, 9.57500458124000e-001, 8.14424454238667e-001, 8.66181001041000e-001, 8.57150687641000e-001, 7.33377997593000e-001, 5.36721515213000e+000, 5.21295757638667e+000, 4.52158193725667e+000, 5.46910956128333e+000, 1.01570920883333e+000, 5.96739362359667e-001, 4.23179759442333e+000, 3.90952828744333e+000, 6.35162254726333e-001, 1.04925532510333e+000, 2.44262934234000e-001, 3.00348783322667e+000, 3.12766281606667e-001 };

double Over2cc_6_MLP_22_6_2_input[22];
double Over2cc_6_MLP_22_6_2_hidden[6];
double Over2cc_6_MLP_22_6_2_output[2];

double Over2cc_6_MLP_22_6_2_MeanInputs[22]={ 9.86215974880607e-001, 9.79769865419318e-001, 9.77174969672753e-001, 9.72810897712386e-001, 9.83610133938442e-001, 9.91240682825940e-001, 9.24927041841446e-001, 9.38665182996753e-001, 8.66940461142569e-001, 5.95974044334588e+000, 6.07191804257450e+000, 5.28713197315846e+000, 6.21968357680817e+000, 1.06412944461019e+000, 7.31393955181164e-001, 5.55638946377131e+000, 4.93827896731921e+000, 8.93468219422401e-001, 1.17054459403813e+000, 4.40861350465457e-001, 3.91359149242479e+000, 6.50102625908682e-001 };

void Over2cc_6_MLP_22_6_2_FindMax(double* vec, double* max, long* maxIndex,int len)
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

void Over2cc_6_MLP_22_6_2_ScaleInputs(double* input, double minimum, double maximum, int size)
{
 double delta;
 long i;
 for(i=0; i<size; i++)
 {
	delta = (maximum-minimum)/(Over2cc_6_MLP_22_6_2_max_input[i]-Over2cc_6_MLP_22_6_2_min_input[i]);
	input[i] = minimum - delta*Over2cc_6_MLP_22_6_2_min_input[i]+ delta*input[i];
 }
}

void Over2cc_6_MLP_22_6_2_softmax(double* vec,int len)
{

  long i, j;
  double sum=0.0;
  for(i=0; i<len; i++)
  {
    if(vec[i]>200)
    {
      double max;
      long maxIndex;
      Over2cc_6_MLP_22_6_2_FindMax(vec, &max, &maxIndex,len);
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

void Over2cc_6_MLP_22_6_2_ComputeFeedForwardSignals(double* MAT_INOUT,double* V_IN,double* V_OUT, double* V_BIAS,int size1,int size2,int layer)
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

void Over2cc_6_MLP_22_6_2_RunNeuralNet_Classification () 
{
  Over2cc_6_MLP_22_6_2_ComputeFeedForwardSignals((double*)Over2cc_6_MLP_22_6_2_input_hidden_weights,Over2cc_6_MLP_22_6_2_input,Over2cc_6_MLP_22_6_2_hidden,Over2cc_6_MLP_22_6_2_hidden_bias,22, 6,0);
  Over2cc_6_MLP_22_6_2_ComputeFeedForwardSignals((double*)Over2cc_6_MLP_22_6_2_hidden_output_wts,Over2cc_6_MLP_22_6_2_hidden,Over2cc_6_MLP_22_6_2_output,Over2cc_6_MLP_22_6_2_output_bias,6, 2,1);
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
	scanf("%lg",&Over2cc_6_MLP_22_6_2_input[0]);
	printf("%s","Cont. Input-1(wavelet-LHLglcmIdmn): ");
	scanf("%lg",&Over2cc_6_MLP_22_6_2_input[1]);
	printf("%s","Cont. Input-2(wavelet-HLHglcmIdmn): ");
	scanf("%lg",&Over2cc_6_MLP_22_6_2_input[2]);
	printf("%s","Cont. Input-3(wavelet-LHHglcmIdmn): ");
	scanf("%lg",&Over2cc_6_MLP_22_6_2_input[3]);
	printf("%s","Cont. Input-4(wavelet-HHLglcmIdmn): ");
	scanf("%lg",&Over2cc_6_MLP_22_6_2_input[4]);
	printf("%s","Cont. Input-5(wavelet-LLHglcmImc2): ");
	scanf("%lg",&Over2cc_6_MLP_22_6_2_input[5]);
	printf("%s","Cont. Input-6(wavelet-HHHglcmIdn): ");
	scanf("%lg",&Over2cc_6_MLP_22_6_2_input[6]);
	printf("%s","Cont. Input-7(wavelet-HLHglrlmShortRunEmphasis): ");
	scanf("%lg",&Over2cc_6_MLP_22_6_2_input[7]);
	printf("%s","Cont. Input-8(wavelet-LLHglszmSmallAreaEmphasis): ");
	scanf("%lg",&Over2cc_6_MLP_22_6_2_input[8]);
	printf("%s","Cont. Input-9(wavelet-LHLgldmDependenceEntropy): ");
	scanf("%lg",&Over2cc_6_MLP_22_6_2_input[9]);
	printf("%s","Cont. Input-10(wavelet-HLLgldmDependenceEntropy): ");
	scanf("%lg",&Over2cc_6_MLP_22_6_2_input[10]);
	printf("%s","Cont. Input-11(wavelet-HHLgldmDependenceEntropy): ");
	scanf("%lg",&Over2cc_6_MLP_22_6_2_input[11]);
	printf("%s","Cont. Input-12(wavelet-LLHglrlmRunEntropy): ");
	scanf("%lg",&Over2cc_6_MLP_22_6_2_input[12]);
	printf("%s","Cont. Input-13(wavelet-LLHglrlmLongRunEmphasis): ");
	scanf("%lg",&Over2cc_6_MLP_22_6_2_input[13]);
	printf("%s","Cont. Input-14(originalglszmSmallAreaEmphasis): ");
	scanf("%lg",&Over2cc_6_MLP_22_6_2_input[14]);
	printf("%s","Cont. Input-15(wavelet-LHHglszmZoneEntropy): ");
	scanf("%lg",&Over2cc_6_MLP_22_6_2_input[15]);
	printf("%s","Cont. Input-16(wavelet-LLLglcmDifferenceEntropy): ");
	scanf("%lg",&Over2cc_6_MLP_22_6_2_input[16]);
	printf("%s","Cont. Input-17(wavelet-LLLglcmMCC): ");
	scanf("%lg",&Over2cc_6_MLP_22_6_2_input[17]);
	printf("%s","Cont. Input-18(originalglrlmLongRunEmphasis): ");
	scanf("%lg",&Over2cc_6_MLP_22_6_2_input[18]);
	printf("%s","Cont. Input-19(wavelet-HHLglcmInverseVariance): ");
	scanf("%lg",&Over2cc_6_MLP_22_6_2_input[19]);
	printf("%s","Cont. Input-20(originalglcmDifferenceEntropy): ");
	scanf("%lg",&Over2cc_6_MLP_22_6_2_input[20]);
	printf("%s","Cont. Input-21(originalshapeSphericity): ");
	scanf("%lg",&Over2cc_6_MLP_22_6_2_input[21]);
	for(cont_inps=0;cont_inps<22;cont_inps++)
	{
     //Substitution of missing continuous variables
     if(Over2cc_6_MLP_22_6_2_input[cont_inps] == -9999)
	  Over2cc_6_MLP_22_6_2_input[cont_inps]=Over2cc_6_MLP_22_6_2_MeanInputs[cont_inps];
	}
    Over2cc_6_MLP_22_6_2_ScaleInputs(Over2cc_6_MLP_22_6_2_input,0,1,22);
	Over2cc_6_MLP_22_6_2_RunNeuralNet_Classification();
   //Output Activation is Softmax;
	Over2cc_6_MLP_22_6_2_softmax(Over2cc_6_MLP_22_6_2_output, 2);
	for(i=0;i<2;i++)
	{
      if(max<Over2cc_6_MLP_22_6_2_output[i])
      {
        max=Over2cc_6_MLP_22_6_2_output[i];
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

