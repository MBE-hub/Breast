//Analysis Type - Classification 
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>


double Over2cc_5_MLP_22_9_2_input_hidden_weights[9][22]=
{
 {5.73739008225923e+000, 5.28912990481255e+000, 2.37313899229570e+001, 2.01450663908314e+001, 2.10663834906099e+001, -2.12841737010947e+001, -2.04844940611040e+001, -3.09406317482675e+001, -1.04918247041903e+001, -2.19582330730648e+001, -1.29550250370171e-001, -3.17706099548298e+001, 6.07510842881920e+000, -1.66230110413957e+001, 3.35341566983177e+001, -5.24753210081777e+000, 1.35704308645369e+001, 1.24593001878888e+001, -1.02013670741259e+001, -1.78488930371736e+001, -1.34966999519478e+001, -3.95470267639763e+000 },
 {2.25875253373880e+000, 2.54088508742481e+000, 1.27783907110915e+001, 9.53457385005766e+000, 8.40812188086904e+000, -9.45576155969066e+000, -8.57817809160777e+000, -1.82060205380752e+001, -6.68751016045528e+000, -1.18279946858034e+001, -2.01189082952432e+000, -1.91460851881510e+001, -8.64293242402466e-002, -7.88501502418900e+000, 1.24783681266453e+001, -5.15938505335544e+000, 3.25160803518162e+000, 5.19884323232461e+000, -4.62827809295221e+000, -5.63656612025458e+000, -7.61543989373211e+000, -3.76966343513099e+000 },
 {6.82672495462488e+000, 5.47252398300417e+000, 2.77117495308951e+001, 2.15395429937425e+001, 2.13775431297637e+001, -2.02092133109385e+001, -1.92465991646640e+001, -3.49104980614514e+001, -1.19891983595412e+001, -2.38666369589337e+001, -1.49702124641906e+000, -3.67778600874783e+001, 4.07591044296508e+000, -1.72388553835133e+001, 3.26399345747723e+001, -7.36315283533122e+000, 1.18033935452414e+001, 1.34818690993742e+001, -1.01195404837401e+001, -1.44095565346759e+001, -1.49200750089098e+001, -5.27986255709904e+000 },
 {4.31021605891492e+000, 4.09514877798047e+000, 1.87456626405654e+001, 1.52999712120465e+001, 1.54709924450506e+001, -1.54794759872403e+001, -1.47530322227555e+001, -2.43041674457789e+001, -8.40862124263205e+000, -1.67417971428786e+001, -6.23877449128739e-001, -2.53040839592939e+001, 3.58364856256665e+000, -1.24784704442096e+001, 2.40141723333455e+001, -4.62903421240958e+000, 9.18632623342340e+000, 9.12499118012039e+000, -7.50061831738130e+000, -1.19561959367696e+001, -1.05933878964259e+001, -3.65134467560868e+000 },
 {4.74042590592584e+000, 5.03104524424724e+000, 2.33699232977141e+001, 1.80133237769489e+001, 1.67564059689668e+001, -1.73775815346959e+001, -1.61416699847343e+001, -3.17544748438958e+001, -1.14196206156104e+001, -2.08734174579429e+001, -2.51651931338624e+000, -3.33092888650678e+001, 1.50863936957410e+000, -1.45569854262392e+001, 2.50763369187273e+001, -7.84147638835013e+000, 7.87126726247116e+000, 1.02454599320145e+001, -8.56776962587009e+000, -1.11924060635178e+001, -1.33904540589154e+001, -5.77616389495040e+000 },
 {4.73062593513144e+000, 4.97113155524506e+000, 2.37632381396369e+001, 1.82725130269919e+001, 1.70366542865783e+001, -1.80020337839942e+001, -1.66410212839529e+001, -3.24902654746412e+001, -1.17443640381929e+001, -2.14682946616264e+001, -2.68371120467796e+000, -3.41167107003744e+001, 1.46485874462213e+000, -1.49695134439814e+001, 2.55585231090267e+001, -8.09984717031720e+000, 7.96702252763338e+000, 1.02953131853841e+001, -8.86275799547306e+000, -1.17375391055176e+001, -1.38073441905307e+001, -6.07333751664491e+000 },
 {6.22836047632619e+000, 6.08287133589807e+000, 2.62874689358471e+001, 2.04341633978677e+001, 1.92386044523203e+001, -1.78914126485515e+001, -1.70454340134350e+001, -3.35916882587794e+001, -1.15441412063526e+001, -2.21104976482563e+001, -1.83685371397036e+000, -3.52817338027462e+001, 2.57541963674476e+000, -1.58535251917497e+001, 2.83447715920890e+001, -7.54007333037566e+000, 9.48941086020859e+000, 1.20910554772976e+001, -9.23154831011744e+000, -1.15802409840666e+001, -1.39368813280460e+001, -5.28113960012347e+000 },
 {2.50704511123588e+000, -5.15586571285412e-001, 1.40284264904991e+001, 2.27391492806341e+001, 1.73337552980205e+001, -1.03508734069959e+001, -2.80671392167943e+001, -2.19255513565194e+001, -1.69877867023769e+001, -1.67765229751334e+001, 7.58889223740464e+000, -1.77041421508999e+001, 2.71326845240181e-001, -9.91573645446553e+000, 2.24435499826504e+001, 6.13736873939310e+000, 2.31680011240996e+001, 2.43137440107314e+000, -8.44041909865564e-001, -7.76370681649895e+000, -1.30795419067457e+001, 1.56833982976385e+001 },
 {3.41963872262202e+000, 3.50804366045565e+000, 1.38814988915522e+001, 1.21509295949353e+001, 1.25972977292665e+001, -1.19201788934595e+001, -1.16563825481640e+001, -1.66932804514168e+001, -5.61840358504206e+000, -1.19867106735728e+001, 5.75201554804291e-001, -1.74201173870787e+001, 4.17264925211957e+000, -9.55934139709347e+000, 1.94115508183330e+001, -1.99872134463565e+000, 8.46756624683444e+000, 6.94960337652081e+000, -5.83259744104004e+000, -1.01463304942721e+001, -7.45671665083689e+000, -2.25619977101652e+000 } 
};

double Over2cc_5_MLP_22_9_2_hidden_bias[9]={ -2.96920153767547e+000, -6.44907062183614e-001, -6.35300391178838e-001, -1.64086314403864e+000, -1.07136291005344e+000, -1.34498616000991e+000, 4.81624301502604e-002, 5.37896369908105e+000, -1.44623814371851e+000 };

double Over2cc_5_MLP_22_9_2_hidden_output_wts[2][9]=
{
 {1.22990403420393e+001, -2.27354793914867e+000, 9.75514209190517e+000, 7.04907571079469e+000, -2.51342885429375e+000, -3.16212224522098e+000, 2.95417599567219e+000, 1.19699742686693e+001, 5.31659173939127e+000 },
 {-1.03210093807960e+001, 4.38644027584557e+000, -6.55980752031798e+000, -5.42798828171290e+000, 6.72633535572109e+000, 7.46123936371301e+000, 1.01935311027120e+000, -1.24146178663451e+001, -5.07487018141548e+000 }
};

double Over2cc_5_MLP_22_9_2_output_bias[2]={ -1.02893375197951e+001, 1.09214186306858e+001 };

double Over2cc_5_MLP_22_9_2_max_input[22]={ 9.94225622500000e-001, 9.96754273526000e-001, 9.97102711270667e-001, 9.95170697016667e-001, 9.97911037399333e-001, 9.99977398435000e-001, 9.78343830095000e-001, 9.91579149548667e-001, 9.51627339487000e-001, 6.77785077092000e+000, 6.81794634845333e+000, 6.09698918942000e+000, 7.05260550610667e+000, 1.91273776273333e+000, 8.65563457626667e-001, 6.42679814845667e+000, 6.07940450162667e+000, 9.96854540307667e-001, 2.12815921118000e+000, 4.99555750214000e-001, 4.87575136096667e+000, 7.77973268702667e-001 };

double Over2cc_5_MLP_22_9_2_min_input[22]={ 9.51458841268667e-001, 9.57705102447333e-001, 9.38441273251000e-001, 9.33755227989000e-001, 9.57500458124000e-001, 8.14424454238667e-001, 8.66181001041000e-001, 8.57150687641000e-001, 7.33377997593000e-001, 5.36721515213000e+000, 5.21295757638667e+000, 4.52158193725667e+000, 5.46910956128333e+000, 1.01570920883333e+000, 5.96739362359667e-001, 4.23179759442333e+000, 3.90952828744333e+000, 6.35162254726333e-001, 1.04925532510333e+000, 2.44262934234000e-001, 3.00348783322667e+000, 3.12766281606667e-001 };

double Over2cc_5_MLP_22_9_2_input[22];
double Over2cc_5_MLP_22_9_2_hidden[9];
double Over2cc_5_MLP_22_9_2_output[2];

double Over2cc_5_MLP_22_9_2_MeanInputs[22]={ 9.86215974880607e-001, 9.79769865419318e-001, 9.77174969672753e-001, 9.72810897712386e-001, 9.83610133938442e-001, 9.91240682825940e-001, 9.24927041841446e-001, 9.38665182996753e-001, 8.66940461142569e-001, 5.95974044334588e+000, 6.07191804257450e+000, 5.28713197315846e+000, 6.21968357680817e+000, 1.06412944461019e+000, 7.31393955181164e-001, 5.55638946377131e+000, 4.93827896731921e+000, 8.93468219422401e-001, 1.17054459403813e+000, 4.40861350465457e-001, 3.91359149242479e+000, 6.50102625908682e-001 };

void Over2cc_5_MLP_22_9_2_ScaleInputs(double* input, double minimum, double maximum, int size)
{
 double delta;
 long i;
 for(i=0; i<size; i++)
 {
	delta = (maximum-minimum)/(Over2cc_5_MLP_22_9_2_max_input[i]-Over2cc_5_MLP_22_9_2_min_input[i]);
	input[i] = minimum - delta*Over2cc_5_MLP_22_9_2_min_input[i]+ delta*input[i];
 }
}

double Over2cc_5_MLP_22_9_2_logistic(double x)
{
  if(x > 100.0) x = 1.0;
  else if (x < -100.0) x = 0.0;
  else x = 1.0/(1.0+exp(-x));
  return x;
}

void Over2cc_5_MLP_22_9_2_Normalise(double out[],long length)
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

void Over2cc_5_MLP_22_9_2_ComputeFeedForwardSignals(double* MAT_INOUT,double* V_IN,double* V_OUT, double* V_BIAS,int size1,int size2,int layer)
{
  int row,col;
  for(row=0;row < size2; row++) 
    {
      V_OUT[row]=0.0;
      for(col=0;col<size1;col++)V_OUT[row]+=(*(MAT_INOUT+(row*size1)+col)*V_IN[col]);
      V_OUT[row]+=V_BIAS[row];
      if(layer==0) V_OUT[row] = Over2cc_5_MLP_22_9_2_logistic(V_OUT[row]);
      if(layer==1) V_OUT[row] = Over2cc_5_MLP_22_9_2_logistic(V_OUT[row]);
   }
}

void Over2cc_5_MLP_22_9_2_RunNeuralNet_Classification () 
{
  Over2cc_5_MLP_22_9_2_ComputeFeedForwardSignals((double*)Over2cc_5_MLP_22_9_2_input_hidden_weights,Over2cc_5_MLP_22_9_2_input,Over2cc_5_MLP_22_9_2_hidden,Over2cc_5_MLP_22_9_2_hidden_bias,22, 9,0);
  Over2cc_5_MLP_22_9_2_ComputeFeedForwardSignals((double*)Over2cc_5_MLP_22_9_2_hidden_output_wts,Over2cc_5_MLP_22_9_2_hidden,Over2cc_5_MLP_22_9_2_output,Over2cc_5_MLP_22_9_2_output_bias,9, 2,1);
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
	scanf("%lg",&Over2cc_5_MLP_22_9_2_input[0]);
	printf("%s","Cont. Input-1(wavelet-LHLglcmIdmn): ");
	scanf("%lg",&Over2cc_5_MLP_22_9_2_input[1]);
	printf("%s","Cont. Input-2(wavelet-HLHglcmIdmn): ");
	scanf("%lg",&Over2cc_5_MLP_22_9_2_input[2]);
	printf("%s","Cont. Input-3(wavelet-LHHglcmIdmn): ");
	scanf("%lg",&Over2cc_5_MLP_22_9_2_input[3]);
	printf("%s","Cont. Input-4(wavelet-HHLglcmIdmn): ");
	scanf("%lg",&Over2cc_5_MLP_22_9_2_input[4]);
	printf("%s","Cont. Input-5(wavelet-LLHglcmImc2): ");
	scanf("%lg",&Over2cc_5_MLP_22_9_2_input[5]);
	printf("%s","Cont. Input-6(wavelet-HHHglcmIdn): ");
	scanf("%lg",&Over2cc_5_MLP_22_9_2_input[6]);
	printf("%s","Cont. Input-7(wavelet-HLHglrlmShortRunEmphasis): ");
	scanf("%lg",&Over2cc_5_MLP_22_9_2_input[7]);
	printf("%s","Cont. Input-8(wavelet-LLHglszmSmallAreaEmphasis): ");
	scanf("%lg",&Over2cc_5_MLP_22_9_2_input[8]);
	printf("%s","Cont. Input-9(wavelet-LHLgldmDependenceEntropy): ");
	scanf("%lg",&Over2cc_5_MLP_22_9_2_input[9]);
	printf("%s","Cont. Input-10(wavelet-HLLgldmDependenceEntropy): ");
	scanf("%lg",&Over2cc_5_MLP_22_9_2_input[10]);
	printf("%s","Cont. Input-11(wavelet-HHLgldmDependenceEntropy): ");
	scanf("%lg",&Over2cc_5_MLP_22_9_2_input[11]);
	printf("%s","Cont. Input-12(wavelet-LLHglrlmRunEntropy): ");
	scanf("%lg",&Over2cc_5_MLP_22_9_2_input[12]);
	printf("%s","Cont. Input-13(wavelet-LLHglrlmLongRunEmphasis): ");
	scanf("%lg",&Over2cc_5_MLP_22_9_2_input[13]);
	printf("%s","Cont. Input-14(originalglszmSmallAreaEmphasis): ");
	scanf("%lg",&Over2cc_5_MLP_22_9_2_input[14]);
	printf("%s","Cont. Input-15(wavelet-LHHglszmZoneEntropy): ");
	scanf("%lg",&Over2cc_5_MLP_22_9_2_input[15]);
	printf("%s","Cont. Input-16(wavelet-LLLglcmDifferenceEntropy): ");
	scanf("%lg",&Over2cc_5_MLP_22_9_2_input[16]);
	printf("%s","Cont. Input-17(wavelet-LLLglcmMCC): ");
	scanf("%lg",&Over2cc_5_MLP_22_9_2_input[17]);
	printf("%s","Cont. Input-18(originalglrlmLongRunEmphasis): ");
	scanf("%lg",&Over2cc_5_MLP_22_9_2_input[18]);
	printf("%s","Cont. Input-19(wavelet-HHLglcmInverseVariance): ");
	scanf("%lg",&Over2cc_5_MLP_22_9_2_input[19]);
	printf("%s","Cont. Input-20(originalglcmDifferenceEntropy): ");
	scanf("%lg",&Over2cc_5_MLP_22_9_2_input[20]);
	printf("%s","Cont. Input-21(originalshapeSphericity): ");
	scanf("%lg",&Over2cc_5_MLP_22_9_2_input[21]);
	for(cont_inps=0;cont_inps<22;cont_inps++)
	{
     //Substitution of missing continuous variables
     if(Over2cc_5_MLP_22_9_2_input[cont_inps] == -9999)
	  Over2cc_5_MLP_22_9_2_input[cont_inps]=Over2cc_5_MLP_22_9_2_MeanInputs[cont_inps];
	}
    Over2cc_5_MLP_22_9_2_ScaleInputs(Over2cc_5_MLP_22_9_2_input,0,1,22);
	Over2cc_5_MLP_22_9_2_RunNeuralNet_Classification();
   //Normalise output if output activation is not Softmax;
 	Over2cc_5_MLP_22_9_2_Normalise(Over2cc_5_MLP_22_9_2_output,2);
	for(i=0;i<2;i++)
	{
      if(max<Over2cc_5_MLP_22_9_2_output[i])
      {
        max=Over2cc_5_MLP_22_9_2_output[i];
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

