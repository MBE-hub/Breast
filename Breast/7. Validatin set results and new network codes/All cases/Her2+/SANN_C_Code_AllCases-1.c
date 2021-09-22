//Analysis Type - Classification 
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>


double AllCases_1_MLP_21_9_2_input_hidden_weights[9][21]=
{
 {-8.79190851897163e-001, -9.09233058011711e-002, -7.36994073310701e-001, 2.14469318276190e-001, 1.93834465586488e-001, -1.55237127979611e-002, 4.98335088652106e-001, 2.19553320640925e-001, 5.49649737392117e-002, 9.50120768088049e-001, -4.58662549662815e-002, -6.55772904566869e-002, -1.12891192010177e-001, -9.66957061017746e-002, 6.46963741041088e-002, -7.40150209463870e-003, -1.76675476481615e-001, 1.58372676848421e-001, -7.23249365054918e-002, 1.02278503684030e-002, -3.16246621348975e-001 },
 {-4.14532623107788e-001, -1.65584731615351e-001, -5.66770666750104e-001, -3.52389820239127e-001, 1.55475903780148e-003, 3.56190151332157e-001, -1.68006461051985e-001, -1.21317169857528e+000, -4.43561822165825e-001, 2.07540562702115e-002, 5.14703076890667e-001, 4.06253179445764e-001, 7.16660396652585e-001, 1.23880466797020e+000, 4.40167884650563e-001, 6.61046378730740e-002, 1.18703768702427e+000, -5.53782251086173e-001, 6.43726424118364e-001, 6.36698482851529e-001, 8.29746872646299e-002 },
 {-4.70696764464802e-001, 1.37488667532297e-001, -2.32054600301915e-001, 5.68474553867376e-001, 3.44672720517772e-001, -1.03428137188632e-001, 7.38286369594908e-001, 1.03340557354010e+000, 2.56005558034771e-001, 8.71350802812987e-001, -4.46771178083155e-001, -1.76041849603286e-001, -6.58676808768565e-001, -8.56541921771561e-001, -3.49023229238037e-001, -2.84550213732275e-001, -7.41552990184712e-001, 3.96600989523507e-001, -6.17610152711756e-001, -4.79411221876755e-001, -4.07383813329493e-001 },
 {-1.60627663266585e+000, 1.42322618720123e-002, -1.35427415838173e+000, 7.16722441682844e-001, 6.55823578156225e-001, 2.30832855506925e-001, 1.31870971756218e+000, 6.20125748718738e-001, 1.14167252834119e-001, 2.09540177490266e+000, -1.18837045795535e-001, 1.85189283827091e-001, -2.07069159109539e-001, -1.67113887440243e-001, 8.48024599509145e-003, -2.58473853459522e-001, -3.21429026346085e-001, 3.05110522174531e-001, -2.53274865265864e-001, -7.60803097835197e-002, -6.87443734170227e-001 },
 {-3.55376407841410e+000, -5.45208155375416e-001, -3.20746555329861e+000, 3.34742163352980e-001, 6.29431680878700e-001, 4.41554406885695e-001, 1.51090940106624e+000, -6.40782536321530e-001, -3.61420079781379e-001, 3.17034141039113e+000, 3.41104756200999e-001, 3.65071156244233e-001, 5.13216522965616e-001, 1.13872751023697e+000, 6.76639154359961e-001, 1.66661501600944e-002, 6.91239413950909e-001, 1.03993195315594e-002, 4.81851935604546e-001, 7.54364038079107e-001, -1.05984046771515e+000 },
 {-3.08601468740679e+000, 9.08744241123873e-002, -2.34134105664252e+000, 1.74224908982223e+000, 1.27555036125845e+000, 7.02415438140595e-002, 2.82592347818678e+000, 2.34683536998655e+000, 5.85817846232182e-001, 4.22322181739369e+000, -7.87727943896648e-001, -1.54395914606959e-001, -1.31353903185184e+000, -1.50850713019194e+000, -3.83732968493423e-001, -5.68067221779211e-001, -1.72473482140542e+000, 1.09234273801546e+000, -1.10199392656493e+000, -8.07364936749019e-001, -1.58978949448574e+000 },
 {1.53525511991609e+000, 4.33680430046559e-001, 1.52450174840779e+000, 3.48677344208995e-001, -1.06996399470507e-001, -4.29367569673701e-001, -1.83600785439941e-001, 1.41959422717189e+000, 6.83635971543263e-001, -8.10158534343415e-001, -4.89459843822690e-001, -3.69339863541497e-001, -7.99214227063913e-001, -1.50201229660572e+000, -5.93170852078661e-001, 3.36761499867830e-002, -1.36816397135256e+000, 5.87357109713933e-001, -7.05037074296493e-001, -8.19408221305698e-001, 2.55165177861474e-001 },
 {1.73967655960303e+000, 4.84101952128481e-002, 1.36540894710215e+000, -8.67747748012595e-001, -6.63948360774220e-001, -8.79280598339953e-002, -1.48851601146946e+000, -9.83221699864640e-001, -1.56380296845721e-001, -2.24084902981028e+000, 4.07968340483315e-001, 8.00724258982838e-002, 6.48349445771660e-001, 6.76522120389654e-001, 1.69632262044912e-001, 4.30544719302638e-001, 6.09451999017821e-001, -4.30302099593111e-001, 6.37543860048247e-001, 3.75713111407060e-001, 8.17301667491487e-001 },
 {-1.83831959724503e+000, -7.66774575635353e-002, -1.45637493486252e+000, 7.28612576637218e-001, 6.41423634213256e-001, 1.96768231363759e-001, 1.41853361426753e+000, 6.33367310347870e-001, -8.35167672380867e-002, 2.11302840581889e+000, -3.18041541827125e-001, -4.61931232027396e-003, -4.84761430621944e-001, -2.93363275525899e-001, -1.24288078652780e-001, -5.05309748346909e-001, -2.74437135443656e-001, 2.12338280128569e-001, -4.32920004608560e-001, -2.78052385638267e-001, -8.20014439279476e-001 } 
};

double AllCases_1_MLP_21_9_2_hidden_bias[9]={ 2.14838153322457e-002, -6.20151488263802e-002, 3.74507087081482e-001, 5.71347509838813e-001, 1.08050044235906e-001, 1.02553335857212e+000, 1.49700879062370e-001, -5.89083944518611e-001, 5.55326100042944e-001 };

double AllCases_1_MLP_21_9_2_hidden_output_wts[2][9]=
{
 {2.29108097650927e-001, 2.56581076517609e-001, 9.46911906758232e-002, 4.61880059138782e-001, 9.78147317936265e-001, 7.33226740835480e-001, -6.05719300682135e-001, -4.38838033560795e-001, 5.99896184094885e-001 },
 {-1.70752831965590e-001, -3.07320253804202e-001, -4.10911824820985e-002, -3.79750905938826e-001, -1.01267358864221e+000, -7.21886386556212e-001, 5.38359621918549e-001, 4.59477184324444e-001, -6.26619511752409e-001 }
};

double AllCases_1_MLP_21_9_2_output_bias[2]={ 8.10796868534618e-001, -7.98996254523466e-001 };

double AllCases_1_MLP_21_9_2_max_input[21]={ 1.00000000000000e+000, 9.96754273526000e-001, 9.96496746661667e-001, 9.94259912350667e-001, 9.95170697016667e-001, 9.91759014152667e-001, 1.40417965636667e+000, 9.86949090259667e-001, 9.63523508705667e-001, 9.76060123067333e-001, 9.73612353747333e-001, 1.00000000000000e+000, 9.98520710059333e-001, 9.91759014152667e-001, 5.10890428384333e+000, 5.48591962498333e+000, 7.03128040914000e+000, 9.53722447143333e-001, 9.99712242127000e-001, 4.98455292063667e+000, 6.87179713731667e+000 };

double AllCases_1_MLP_21_9_2_min_input[21]={ 6.63040123456667e-001, 6.29844600410667e-001, 6.29765554143667e-001, 6.45877037209000e-001, 6.28152633660333e-001, 6.22852030775000e-001, 6.81172839506667e-001, 6.44827956739000e-001, 5.60026336363667e-001, 5.47665803838333e-001, 6.23316498316333e-001, 6.00000000000000e-001, 4.62825497869000e-001, 5.40743607384333e-001, 2.31263859634667e+000, 2.20680752570333e+000, 2.88102976749000e+000, 1.57423810395910e-001, 4.15107119795333e-001, 1.81602018986333e+000, 2.49992751346667e+000 };

double AllCases_1_MLP_21_9_2_input[21];
double AllCases_1_MLP_21_9_2_hidden[9];
double AllCases_1_MLP_21_9_2_output[2];

double AllCases_1_MLP_21_9_2_MeanInputs[21]={ 9.84939075942792e-001, 9.66739246426214e-001, 9.60995020680608e-001, 9.60851594373479e-001, 9.55835633423741e-001, 9.45299925394236e-001, 1.05385645241019e+000, 9.33596196888181e-001, 8.89310791280151e-001, 9.07804480645762e-001, 8.77433025347167e-001, 9.38632247260580e-001, 8.49899779290703e-001, 8.19193452266381e-001, 3.94675980446453e+000, 4.00812379732173e+000, 5.67530205194894e+000, 7.02402154241995e-001, 8.71386826795786e-001, 3.59136358450307e+000, 5.41968270299649e+000 };

void AllCases_1_MLP_21_9_2_FindMax(double* vec, double* max, long* maxIndex,int len)
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

void AllCases_1_MLP_21_9_2_ScaleInputs(double* input, double minimum, double maximum, int size)
{
 double delta;
 long i;
 for(i=0; i<size; i++)
 {
	delta = (maximum-minimum)/(AllCases_1_MLP_21_9_2_max_input[i]-AllCases_1_MLP_21_9_2_min_input[i]);
	input[i] = minimum - delta*AllCases_1_MLP_21_9_2_min_input[i]+ delta*input[i];
 }
}

void AllCases_1_MLP_21_9_2_softmax(double* vec,int len)
{

  long i, j;
  double sum=0.0;
  for(i=0; i<len; i++)
  {
    if(vec[i]>200)
    {
      double max;
      long maxIndex;
      AllCases_1_MLP_21_9_2_FindMax(vec, &max, &maxIndex,len);
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

void AllCases_1_MLP_21_9_2_ComputeFeedForwardSignals(double* MAT_INOUT,double* V_IN,double* V_OUT, double* V_BIAS,int size1,int size2,int layer)
{
  int row,col;
  for(row=0;row < size2; row++) 
    {
      V_OUT[row]=0.0;
      for(col=0;col<size1;col++)V_OUT[row]+=(*(MAT_INOUT+(row*size1)+col)*V_IN[col]);
      V_OUT[row]+=V_BIAS[row];
   }
}

void AllCases_1_MLP_21_9_2_RunNeuralNet_Classification () 
{
  AllCases_1_MLP_21_9_2_ComputeFeedForwardSignals((double*)AllCases_1_MLP_21_9_2_input_hidden_weights,AllCases_1_MLP_21_9_2_input,AllCases_1_MLP_21_9_2_hidden,AllCases_1_MLP_21_9_2_hidden_bias,21, 9,0);
  AllCases_1_MLP_21_9_2_ComputeFeedForwardSignals((double*)AllCases_1_MLP_21_9_2_hidden_output_wts,AllCases_1_MLP_21_9_2_hidden,AllCases_1_MLP_21_9_2_output,AllCases_1_MLP_21_9_2_output_bias,9, 2,1);
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
	scanf("%lg",&AllCases_1_MLP_21_9_2_input[0]);
	printf("%s","Cont. Input-1(wavelet-LHLglcmIdmn): ");
	scanf("%lg",&AllCases_1_MLP_21_9_2_input[1]);
	printf("%s","Cont. Input-2(wavelet-HLHglcmIdmn): ");
	scanf("%lg",&AllCases_1_MLP_21_9_2_input[2]);
	printf("%s","Cont. Input-3(wavelet-LLLglcmIdmn): ");
	scanf("%lg",&AllCases_1_MLP_21_9_2_input[3]);
	printf("%s","Cont. Input-4(wavelet-LHHglcmIdmn): ");
	scanf("%lg",&AllCases_1_MLP_21_9_2_input[4]);
	printf("%s","Cont. Input-5(wavelet-LHHglrlmShortRunEmphasis): ");
	scanf("%lg",&AllCases_1_MLP_21_9_2_input[5]);
	printf("%s","Cont. Input-6(wavelet-LLLglrlmLongRunEmphasis): ");
	scanf("%lg",&AllCases_1_MLP_21_9_2_input[6]);
	printf("%s","Cont. Input-7(wavelet-LLHglcmIdmn): ");
	scanf("%lg",&AllCases_1_MLP_21_9_2_input[7]);
	printf("%s","Cont. Input-8(wavelet-LHLglcmIdn): ");
	scanf("%lg",&AllCases_1_MLP_21_9_2_input[8]);
	printf("%s","Cont. Input-9(wavelet-HHLglcmIdn): ");
	scanf("%lg",&AllCases_1_MLP_21_9_2_input[9]);
	printf("%s","Cont. Input-10(wavelet-LLHglszmSmallAreaEmphasis): ");
	scanf("%lg",&AllCases_1_MLP_21_9_2_input[10]);
	printf("%s","Cont. Input-11(wavelet-LLLglcmMCC): ");
	scanf("%lg",&AllCases_1_MLP_21_9_2_input[11]);
	printf("%s","Cont. Input-12(wavelet-HHHglrlmShortRunEmphasis): ");
	scanf("%lg",&AllCases_1_MLP_21_9_2_input[12]);
	printf("%s","Cont. Input-13(wavelet-HHLglrlmShortRunEmphasis): ");
	scanf("%lg",&AllCases_1_MLP_21_9_2_input[13]);
	printf("%s","Cont. Input-14(wavelet-LHLglrlmRunEntropy): ");
	scanf("%lg",&AllCases_1_MLP_21_9_2_input[14]);
	printf("%s","Cont. Input-15(wavelet-LHHglrlmRunEntropy): ");
	scanf("%lg",&AllCases_1_MLP_21_9_2_input[15]);
	printf("%s","Cont. Input-16(wavelet-LLHfirstorderEntropy): ");
	scanf("%lg",&AllCases_1_MLP_21_9_2_input[16]);
	printf("%s","Cont. Input-17(wavelet-LHHglszmSmallAreaEmphasis): ");
	scanf("%lg",&AllCases_1_MLP_21_9_2_input[17]);
	printf("%s","Cont. Input-18(wavelet-HLHglcmImc2): ");
	scanf("%lg",&AllCases_1_MLP_21_9_2_input[18]);
	printf("%s","Cont. Input-19(wavelet-LHLfirstorderEntropy): ");
	scanf("%lg",&AllCases_1_MLP_21_9_2_input[19]);
	printf("%s","Cont. Input-20(wavelet-LHLgldmDependenceEntropy): ");
	scanf("%lg",&AllCases_1_MLP_21_9_2_input[20]);
	for(cont_inps=0;cont_inps<21;cont_inps++)
	{
     //Substitution of missing continuous variables
     if(AllCases_1_MLP_21_9_2_input[cont_inps] == -9999)
	  AllCases_1_MLP_21_9_2_input[cont_inps]=AllCases_1_MLP_21_9_2_MeanInputs[cont_inps];
	}
    AllCases_1_MLP_21_9_2_ScaleInputs(AllCases_1_MLP_21_9_2_input,0,1,21);
	AllCases_1_MLP_21_9_2_RunNeuralNet_Classification();
   //Output Activation is Softmax;
	AllCases_1_MLP_21_9_2_softmax(AllCases_1_MLP_21_9_2_output, 2);
	for(i=0;i<2;i++)
	{
      if(max<AllCases_1_MLP_21_9_2_output[i])
      {
        max=AllCases_1_MLP_21_9_2_output[i];
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

