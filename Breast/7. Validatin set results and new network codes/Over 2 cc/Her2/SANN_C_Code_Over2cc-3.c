//Analysis Type - Classification 
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>


double Over2cc_3_MLP_21_9_2_input_hidden_weights[9][21]=
{
 {-9.21214110801454e+000, 7.76139521529138e+000, 8.99586668558701e+000, -5.02627876835088e+000, -3.75954751774272e+000, 3.18752073297634e+000, -1.85741246132926e+000, -5.26317398110075e+000, -1.53372760921857e-001, 1.21316685228521e+001, 1.38359477509051e-001, 6.78091127441404e+000, -6.44551766937698e+000, -8.55635355991791e-001, 2.88710825875102e+000, 3.54737997890926e+000, -1.19121320184749e+001, 3.77271863497631e+000, 1.67635740002836e+001, -2.18780237514275e+000, -5.88172629870992e+000 },
 {-7.60905227704653e+000, 6.34499688953153e+000, 7.38387873509209e+000, -4.65238518439914e+000, -2.70694681514341e+000, 2.15716234841770e+000, -1.51687174656373e+000, -3.76175608215261e+000, -3.46814041472490e-001, 9.99215282369554e+000, -5.42331092787176e-001, 5.35601035325821e+000, -5.03874753774628e+000, -1.02448985808210e+000, 2.30918030746914e+000, 1.84538600960947e+000, -9.07487910684390e+000, 3.05983123421718e+000, 1.33034639601501e+001, -1.96563370824119e+000, -4.65695811449106e+000 },
 {-7.09780530805693e+000, 6.55377378772151e+000, 7.84961275544776e+000, -4.92621463581459e+000, -6.32804418886631e-001, 7.85711338753564e-001, -2.52847393356279e-001, -1.56546027838104e+000, -1.04868575987089e+000, 9.65425525134477e+000, -1.85399372290702e+000, 4.70382685514721e+000, -4.94261530329767e+000, -1.77851580369484e+000, 2.40579475380980e+000, -5.18193301786354e-001, -6.42563299299724e+000, 2.83326807882676e+000, 1.08162111400717e+001, -2.59164272529098e+000, -4.02365827289262e+000 },
 {-7.29818085388297e+000, 5.51711602490728e+000, 6.55538458474910e+000, -4.14545779428419e+000, -3.44643783220196e+000, 2.58837662641816e+000, -2.01970288684946e+000, -4.54459069603592e+000, -4.79649665138414e-002, 9.20748610559110e+000, 1.88351288997748e-001, 5.23208023195933e+000, -4.52615016527253e+000, -6.20211134011151e-001, 2.13621020404831e+000, 2.75699257098056e+000, -9.58453744507982e+000, 2.78329027276497e+000, 1.36231389896468e+001, -1.46796841602011e+000, -4.54561248312880e+000 },
 {-6.98349052051657e+000, 7.02403047850569e+000, 8.47025795045555e+000, -5.11484404346252e+000, 3.21526071049384e-001, 2.86099612454909e-001, 4.45249799149688e-001, -3.55637226067080e-001, -1.21941375795621e+000, 1.00025108831931e+001, -2.48505880182129e+000, 4.54204736569910e+000, -4.88991336029771e+000, -1.96454093775411e+000, 2.53038780224357e+000, -1.66701773027049e+000, -5.23849238561327e+000, 2.87888693561965e+000, 1.01515568852107e+001, -2.86829946541570e+000, -3.70883159537438e+000 },
 {-8.88844858826346e+000, 7.64835100626488e+000, 8.85770128852680e+000, -5.13784329627304e+000, -2.93796784085770e+000, 2.52638123306598e+000, -1.46842095235843e+000, -4.31786160637567e+000, -4.35222626486325e-001, 1.16575714641029e+001, -4.53797053135365e-001, 6.35217319916065e+000, -6.15649814418541e+000, -1.18344704261768e+000, 2.77775976839661e+000, 2.43100398608968e+000, -1.06226453784504e+001, 3.59387576215097e+000, 1.53812064462584e+001, -2.41017678596154e+000, -5.55122987327560e+000 },
 {-7.52802925783919e+000, 7.38461511935578e+000, 8.92893570291971e+000, -5.58792496320576e+000, 1.03747996560028e-001, 2.65163792200281e-001, 3.46664639133887e-001, -5.63857314715422e-001, -1.39300214943360e+000, 1.05797370499575e+001, -2.70825196463769e+000, 4.84243136731702e+000, -5.31074077805345e+000, -2.12730949009547e+000, 2.62763989400615e+000, -1.65750286823917e+000, -5.79534358577972e+000, 2.96531781432601e+000, 1.07413853300123e+001, -3.21086698896635e+000, -4.05810462196515e+000 },
 {-8.81931954119888e+000, 8.16221700638561e+000, 9.70801631206750e+000, -6.19151267339454e+000, -5.64307420042062e-001, 7.56391235702338e-001, -8.07123100087751e-002, -1.71650776461747e+000, -1.53098742831246e+000, 1.18428317062617e+001, -2.42340934176111e+000, 5.70813024745191e+000, -6.31804577694075e+000, -2.17431116285734e+000, 2.93533790235401e+000, -8.72312067703870e-001, -7.70532247347071e+000, 3.29066156902604e+000, 1.29476404793387e+001, -3.60870782797143e+000, -4.93135545193455e+000 },
 {-6.90099488037080e+000, 6.17567382874963e+000, 7.37061485252028e+000, -4.68323621280956e+000, -1.07869300238071e+000, 8.85100554989845e-001, -5.25844156037014e-001, -1.82186917100599e+000, -8.64497711623065e-001, 9.23835292445318e+000, -1.71724655832876e+000, 4.59328772818028e+000, -4.63031776096771e+000, -1.56593444471050e+000, 2.22906561859158e+000, -1.95302378623614e-001, -6.48169629741970e+000, 2.64157931696987e+000, 1.06359420141425e+001, -2.34247264615027e+000, -3.92218475874028e+000 } 
};

double Over2cc_3_MLP_21_9_2_hidden_bias[9]={ 1.06459265126962e+000, 4.87301155760744e-001, 1.22786521026489e-001, 5.98229689710848e-001, 6.54671936358589e-002, 7.45019898432055e-001, -6.18447042238099e-002, -5.83352923903717e-002, 8.87682050654798e-002 };

double Over2cc_3_MLP_21_9_2_hidden_output_wts[2][9]=
{
 {2.96582642925632e+000, 2.08729120184028e+000, -7.34018144898153e-001, 2.41941357859783e+000, -1.71950675971972e+000, 2.09170950521882e+000, -1.21903558854110e+000, 5.16684031772923e-002, 7.13701946676627e-001 },
 {-2.82166783428349e+000, -2.31377732515356e+000, 4.98127228215277e-001, -2.61955486216398e+000, 1.66934996401409e+000, -2.18258632298459e+000, 1.16547400410796e+000, 5.78558753780843e-003, -1.04767555097099e+000 }
};

double Over2cc_3_MLP_21_9_2_output_bias[2]={ -1.40045007890337e-002, 2.58892897386357e-002 };

double Over2cc_3_MLP_21_9_2_max_input[21]={ 9.94225622500000e-001, 9.98205853844333e-001, 9.96754273526000e-001, 9.99958012914333e-001, 9.94505657234667e-001, 9.87686168724000e-001, 9.98278127930000e-001, 9.95170697016667e-001, 9.99977398435000e-001, 9.76060123067333e-001, 9.81017347897333e-001, 1.40417965636667e+000, 9.51627339487000e-001, 8.65563457626667e-001, 6.46031687483333e+000, 9.96854540307667e-001, 6.71294571244000e+000, 4.99555750214000e-001, 8.21654401930000e-001, 7.77973268702667e-001, 8.87391385084667e-001 };

double Over2cc_3_MLP_21_9_2_min_input[21]={ 9.51458841268667e-001, 9.52721802638333e-001, 9.57705102447333e-001, 9.07570890327000e-001, 9.43359485176000e-001, 9.10429029488667e-001, 9.43173352577333e-001, 9.33755227989000e-001, 8.14424454238667e-001, 8.71982414223667e-001, 8.56874668825000e-001, 1.02462806683000e+000, 7.33377997593000e-001, 5.96739362359667e-001, 4.45016599139000e+000, 6.35162254726333e-001, 4.48663980817333e+000, 2.44262934234000e-001, 4.33984373328333e-001, 3.12766281606667e-001, 4.64379424052333e-001 };

double Over2cc_3_MLP_21_9_2_input[21];
double Over2cc_3_MLP_21_9_2_hidden[9];
double Over2cc_3_MLP_21_9_2_output[2];

double Over2cc_3_MLP_21_9_2_MeanInputs[21]={ 9.86215974880607e-001, 9.82580240878453e-001, 9.79769865419318e-001, 9.94294379312090e-001, 9.73150089825902e-001, 9.66227464441086e-001, 9.81998966214847e-001, 9.72810897712386e-001, 9.91240682825940e-001, 9.29932763713648e-001, 9.33069803359037e-001, 1.06187684347659e+000, 8.66940461142569e-001, 7.31393955181164e-001, 5.13171062654525e+000, 8.93468219422401e-001, 5.66245517208056e+000, 4.40861350465457e-001, 6.49529047198333e-001, 6.50102625908682e-001, 6.44693150319109e-001 };

void Over2cc_3_MLP_21_9_2_ScaleInputs(double* input, double minimum, double maximum, int size)
{
 double delta;
 long i;
 for(i=0; i<size; i++)
 {
	delta = (maximum-minimum)/(Over2cc_3_MLP_21_9_2_max_input[i]-Over2cc_3_MLP_21_9_2_min_input[i]);
	input[i] = minimum - delta*Over2cc_3_MLP_21_9_2_min_input[i]+ delta*input[i];
 }
}

double Over2cc_3_MLP_21_9_2_logistic(double x)
{
  if(x > 100.0) x = 1.0;
  else if (x < -100.0) x = 0.0;
  else x = 1.0/(1.0+exp(-x));
  return x;
}

void Over2cc_3_MLP_21_9_2_Normalise(double out[],long length)
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

void Over2cc_3_MLP_21_9_2_ComputeFeedForwardSignals(double* MAT_INOUT,double* V_IN,double* V_OUT, double* V_BIAS,int size1,int size2,int layer)
{
  int row,col;
  for(row=0;row < size2; row++) 
    {
      V_OUT[row]=0.0;
      for(col=0;col<size1;col++)V_OUT[row]+=(*(MAT_INOUT+(row*size1)+col)*V_IN[col]);
      V_OUT[row]+=V_BIAS[row];
      if(layer==0) V_OUT[row] = Over2cc_3_MLP_21_9_2_logistic(V_OUT[row]);
      if(layer==1) V_OUT[row] = Over2cc_3_MLP_21_9_2_logistic(V_OUT[row]);
   }
}

void Over2cc_3_MLP_21_9_2_RunNeuralNet_Classification () 
{
  Over2cc_3_MLP_21_9_2_ComputeFeedForwardSignals((double*)Over2cc_3_MLP_21_9_2_input_hidden_weights,Over2cc_3_MLP_21_9_2_input,Over2cc_3_MLP_21_9_2_hidden,Over2cc_3_MLP_21_9_2_hidden_bias,21, 9,0);
  Over2cc_3_MLP_21_9_2_ComputeFeedForwardSignals((double*)Over2cc_3_MLP_21_9_2_hidden_output_wts,Over2cc_3_MLP_21_9_2_hidden,Over2cc_3_MLP_21_9_2_output,Over2cc_3_MLP_21_9_2_output_bias,9, 2,1);
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
	scanf("%lg",&Over2cc_3_MLP_21_9_2_input[0]);
	printf("%s","Cont. Input-1(wavelet-HLLglcmIdmn): ");
	scanf("%lg",&Over2cc_3_MLP_21_9_2_input[1]);
	printf("%s","Cont. Input-2(wavelet-LHLglcmIdmn): ");
	scanf("%lg",&Over2cc_3_MLP_21_9_2_input[2]);
	printf("%s","Cont. Input-3(wavelet-LLLglcmImc2): ");
	scanf("%lg",&Over2cc_3_MLP_21_9_2_input[3]);
	printf("%s","Cont. Input-4(originalglcmIdmn): ");
	scanf("%lg",&Over2cc_3_MLP_21_9_2_input[4]);
	printf("%s","Cont. Input-5(originalglrlmShortRunEmphasis): ");
	scanf("%lg",&Over2cc_3_MLP_21_9_2_input[5]);
	printf("%s","Cont. Input-6(wavelet-HHHglcmIdmn): ");
	scanf("%lg",&Over2cc_3_MLP_21_9_2_input[6]);
	printf("%s","Cont. Input-7(wavelet-LHHglcmIdmn): ");
	scanf("%lg",&Over2cc_3_MLP_21_9_2_input[7]);
	printf("%s","Cont. Input-8(wavelet-LLHglcmImc2): ");
	scanf("%lg",&Over2cc_3_MLP_21_9_2_input[8]);
	printf("%s","Cont. Input-9(wavelet-HHLglcmIdn): ");
	scanf("%lg",&Over2cc_3_MLP_21_9_2_input[9]);
	printf("%s","Cont. Input-10(wavelet-LHLglrlmShortRunEmphasis): ");
	scanf("%lg",&Over2cc_3_MLP_21_9_2_input[10]);
	printf("%s","Cont. Input-11(wavelet-LLLglrlmLongRunEmphasis): ");
	scanf("%lg",&Over2cc_3_MLP_21_9_2_input[11]);
	printf("%s","Cont. Input-12(wavelet-LLHglszmSmallAreaEmphasis): ");
	scanf("%lg",&Over2cc_3_MLP_21_9_2_input[12]);
	printf("%s","Cont. Input-13(originalglszmSmallAreaEmphasis): ");
	scanf("%lg",&Over2cc_3_MLP_21_9_2_input[13]);
	printf("%s","Cont. Input-14(originalglrlmRunEntropy): ");
	scanf("%lg",&Over2cc_3_MLP_21_9_2_input[14]);
	printf("%s","Cont. Input-15(wavelet-LLLglcmMCC): ");
	scanf("%lg",&Over2cc_3_MLP_21_9_2_input[15]);
	printf("%s","Cont. Input-16(wavelet-HLHglszmZoneEntropy): ");
	scanf("%lg",&Over2cc_3_MLP_21_9_2_input[16]);
	printf("%s","Cont. Input-17(wavelet-HHLglcmInverseVariance): ");
	scanf("%lg",&Over2cc_3_MLP_21_9_2_input[17]);
	printf("%s","Cont. Input-18(wavelet-LHLglszmSmallAreaEmphasis): ");
	scanf("%lg",&Over2cc_3_MLP_21_9_2_input[18]);
	printf("%s","Cont. Input-19(originalshapeSphericity): ");
	scanf("%lg",&Over2cc_3_MLP_21_9_2_input[19]);
	printf("%s","Cont. Input-20(wavelet-HLLglszmSmallAreaEmphasis): ");
	scanf("%lg",&Over2cc_3_MLP_21_9_2_input[20]);
	for(cont_inps=0;cont_inps<21;cont_inps++)
	{
     //Substitution of missing continuous variables
     if(Over2cc_3_MLP_21_9_2_input[cont_inps] == -9999)
	  Over2cc_3_MLP_21_9_2_input[cont_inps]=Over2cc_3_MLP_21_9_2_MeanInputs[cont_inps];
	}
    Over2cc_3_MLP_21_9_2_ScaleInputs(Over2cc_3_MLP_21_9_2_input,0,1,21);
	Over2cc_3_MLP_21_9_2_RunNeuralNet_Classification();
   //Normalise output if output activation is not Softmax;
 	Over2cc_3_MLP_21_9_2_Normalise(Over2cc_3_MLP_21_9_2_output,2);
	for(i=0;i<2;i++)
	{
      if(max<Over2cc_3_MLP_21_9_2_output[i])
      {
        max=Over2cc_3_MLP_21_9_2_output[i];
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

