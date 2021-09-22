//Analysis Type - Classification 
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>


double AllCases_1_MLP_21_8_2_input_hidden_weights[8][21]=
{
 {-1.26492952864730e-002, 2.74436621032890e-002, -2.19786672163817e-002, -3.35180271681529e-003, -1.04172134414627e-002, -2.86775422462388e-003, 5.54177708925103e-003, -3.97695118555113e-002, 2.70490433215194e-002, 3.54101133322936e-003, 3.28700022742989e-003, -1.93778099454119e-002, -5.61775460469062e-003, -1.35002600242227e-002, 1.12229385915186e-002, -2.27144168914470e-002, -3.08289293362606e-002, 2.40717251964038e-002, -3.71580662325465e-002, -1.52007832797417e-002, 1.20111803389516e-002 },
 {9.57530628594115e-003, -9.71749709422118e-003, -1.94643028141077e-002, -1.58143517394904e-002, -5.31958715265067e-003, -8.82058316021016e-003, 4.06870653674608e-002, -1.69048802777715e-002, -1.79889502018131e-003, -1.37189461345436e-002, -4.83453885505077e-005, -6.04750574241377e-004, 1.04318737267070e-002, -1.34442525365133e-002, 2.66718625414008e-002, -3.44533754672991e-002, -2.34026356602401e-003, -1.92900191120140e-002, 9.99036557920823e-003, 2.11846868587423e-002, 1.60680053205033e-003 },
 {-1.23141462892827e-003, 3.39374969257888e-002, -1.22243745386125e-002, -1.74118939207870e-002, 1.85303877532075e-002, -2.22541199363081e-002, -1.51701473800273e-002, 1.91582995898736e-002, -8.99010115718315e-003, 2.48570421645149e-003, 4.86745494939240e-003, -1.42158644486540e-004, 1.45566120191879e-002, -1.92147005180958e-002, 1.08447535198691e-002, -2.73195863401496e-003, 4.23311118972666e-002, -4.25508959623020e-002, -2.22151473570465e-002, -8.73881261249400e-003, 3.92486961443423e-002 },
 {3.00432686289082e-002, -3.26609518592491e-002, 9.77578483007651e-003, 6.65554350803702e-003, -1.41160216282902e-002, -3.91239939187139e-003, -9.11435932624214e-003, -9.59120065884255e-003, 4.76580998654254e-003, -3.63445381055164e-003, -4.04887432954606e-002, -8.47752523642843e-003, -2.33067450953947e-002, 3.90844817152999e-002, 4.31010142757839e-003, -2.06624282744804e-002, 1.61856627826852e-002, 3.12279390847335e-002, 1.79061629038646e-002, 1.26953419887357e-003, 2.56234151847932e-004 },
 {-2.33738037350497e-002, 1.99904136480697e-002, -1.31042412659062e-002, -5.03582644685256e-002, -1.29856161052414e-002, 1.12293864575868e-002, -2.88761008973584e-002, -7.60585453484015e-003, 2.35254318087898e-003, 1.90340961423393e-002, 2.83799895913457e-003, -1.07857599476334e-002, 2.63539529222236e-002, -2.51023531237394e-002, -2.12754434194474e-002, -4.02940318579357e-002, 4.07779257392401e-002, 4.48702320058966e-003, 2.33933404873460e-002, 1.31671471150346e-002, 3.65121024948225e-002 },
 {-1.89188687000115e-003, 4.28558063944580e-002, 1.23517840837362e-003, 5.49695740075044e-003, -3.37225096298943e-002, -8.27487302002332e-003, -9.00825953800015e-003, -9.78632004192519e-003, -5.10778290892254e-003, -6.56306085989231e-005, -1.14497395457079e-002, 1.86695096699595e-002, -2.67557427789502e-002, 6.04022691436310e-003, 3.33098563849893e-002, -5.35597749984375e-003, 1.57855541327610e-003, -2.66730660820776e-002, 3.60051450032576e-003, -1.49175195800157e-003, 1.14256271507095e-002 },
 {-2.88829165219819e-002, -2.08894461406304e-002, -3.04814905523382e-003, 2.12389916484454e-002, -8.04384149759796e-003, 8.35610430613650e-003, 1.55307386685385e-002, 3.13247347556709e-002, -4.79692705423529e-003, 1.67983813852025e-002, 6.02678581826005e-003, 2.38578841779165e-003, 2.37340738075546e-002, -2.39365657034398e-002, -1.01073162201735e-002, -1.34659039152595e-002, 9.95514938608789e-003, 2.84479176284613e-002, 2.51283433118838e-002, 1.34064562038734e-002, -1.85918873691975e-002 },
 {-3.07863117600237e-002, -3.40973013019314e-002, -2.64629576811529e-003, -1.99527720417019e-002, -1.93644563814125e-002, -4.83035040511106e-002, 2.58080894772060e-002, -3.52756750150627e-002, -9.35658633326890e-003, 1.63761450056096e-002, 1.38591026645038e-002, -2.34899255305389e-002, 3.19215601810542e-002, -4.48517346677368e-002, 9.54070380859711e-003, -3.12215182577253e-002, -1.37146834908232e-002, -5.69749903603585e-002, -1.69995230602338e-002, 2.51737178098334e-002, 7.03813185651256e-003 } 
};

double AllCases_1_MLP_21_8_2_hidden_bias[8]={ 1.22033206035328e-002, 9.52548811374526e-003, 3.48460256642822e-003, 2.96457896630688e-002, -4.29963228387234e-002, -1.92910574281798e-002, 1.42106881706798e-002, -1.27138034363716e-002 };

double AllCases_1_MLP_21_8_2_hidden_output_wts[2][8]=
{
 {1.56849073389854e-001, 1.67417725087068e-001, 2.00245275171316e-001, 1.98934747193706e-001, 1.66099811165245e-001, 1.73793574382439e-001, 1.92516176455268e-001, 1.40463908647779e-001 },
 {-9.43980710183880e-003, 4.46906825911585e-002, -3.84672011722461e-002, 9.63176419178410e-003, 3.91438087765814e-003, 5.59375228348835e-003, 3.99642252351352e-002, 2.82755085399868e-002 }
};

double AllCases_1_MLP_21_8_2_output_bias[2]={ 1.73820602782281e-001, 3.46898557928049e-002 };

double AllCases_1_MLP_21_8_2_max_input[21]={ 9.96816294342667e-001, 9.99979798185333e-001, 9.97805001621000e-001, 9.94259912350667e-001, 9.95170697016667e-001, 1.00000000000000e+000, 1.40417965636667e+000, 9.86949090259667e-001, 9.63523508705667e-001, 9.76060123067333e-001, 9.93238304093333e-001, 9.98520710059333e-001, 9.73612353747333e-001, 1.00000000000000e+000, 1.91273776273333e+000, 1.00000000000000e+000, 9.91759014152667e-001, 5.10890428384333e+000, 5.48591962498333e+000, 9.53722447143333e-001, 6.87179713731667e+000 };

double AllCases_1_MLP_21_8_2_min_input[21]={ 6.56682539682667e-001, 6.53839680357333e-001, 6.39102238316667e-001, 6.45877037209000e-001, 6.28152633660333e-001, 6.37131800065667e-001, 6.81172839506667e-001, 6.44827956739000e-001, 5.60026336363667e-001, 5.47665803838333e-001, 6.07743007629667e-001, 4.76396650867333e-001, 6.23316498316333e-001, 6.15666450404333e-001, 6.98564143853333e-001, 6.00000000000000e-001, 5.40743607384333e-001, 2.31263859634667e+000, 2.20680752570333e+000, 1.57423810395910e-001, 2.49992751346667e+000 };

double AllCases_1_MLP_21_8_2_input[21];
double AllCases_1_MLP_21_8_2_hidden[8];
double AllCases_1_MLP_21_8_2_output[2];

double AllCases_1_MLP_21_8_2_MeanInputs[21]={ 9.80250878848783e-001, 9.92644601955275e-001, 9.67147365965730e-001, 9.60851594373479e-001, 9.55835633423741e-001, 9.36915701035893e-001, 1.05385645241019e+000, 9.33596196888181e-001, 8.89310791280151e-001, 9.07804480645762e-001, 9.28264040611745e-001, 9.35792318981751e-001, 8.77433025347167e-001, 8.71428127373364e-001, 1.06003245957123e+000, 9.38632247260580e-001, 8.19193452266381e-001, 3.94675980446453e+000, 4.00812379732173e+000, 7.02402154241995e-001, 5.41968270299649e+000 };

void AllCases_1_MLP_21_8_2_ScaleInputs(double* input, double minimum, double maximum, int size)
{
 double delta;
 long i;
 for(i=0; i<size; i++)
 {
	delta = (maximum-minimum)/(AllCases_1_MLP_21_8_2_max_input[i]-AllCases_1_MLP_21_8_2_min_input[i]);
	input[i] = minimum - delta*AllCases_1_MLP_21_8_2_min_input[i]+ delta*input[i];
 }
}

void AllCases_1_MLP_21_8_2_Normalise(double out[],long length)
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

void AllCases_1_MLP_21_8_2_ComputeFeedForwardSignals(double* MAT_INOUT,double* V_IN,double* V_OUT, double* V_BIAS,int size1,int size2,int layer)
{
  int row,col;
  for(row=0;row < size2; row++) 
    {
      V_OUT[row]=0.0;
      for(col=0;col<size1;col++)V_OUT[row]+=(*(MAT_INOUT+(row*size1)+col)*V_IN[col]);
      V_OUT[row]+=V_BIAS[row];
      if(layer==0) V_OUT[row] = exp(V_OUT[row]);
      if(layer==1) V_OUT[row] = tanh(V_OUT[row]);
   }
}

void AllCases_1_MLP_21_8_2_RunNeuralNet_Classification () 
{
  AllCases_1_MLP_21_8_2_ComputeFeedForwardSignals((double*)AllCases_1_MLP_21_8_2_input_hidden_weights,AllCases_1_MLP_21_8_2_input,AllCases_1_MLP_21_8_2_hidden,AllCases_1_MLP_21_8_2_hidden_bias,21, 8,0);
  AllCases_1_MLP_21_8_2_ComputeFeedForwardSignals((double*)AllCases_1_MLP_21_8_2_hidden_output_wts,AllCases_1_MLP_21_8_2_hidden,AllCases_1_MLP_21_8_2_output,AllCases_1_MLP_21_8_2_output_bias,8, 2,1);
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
	scanf("%lg",&AllCases_1_MLP_21_8_2_input[0]);
	printf("%s","Cont. Input-1(wavelet-LLHglcmImc2): ");
	scanf("%lg",&AllCases_1_MLP_21_8_2_input[1]);
	printf("%s","Cont. Input-2(wavelet-HHHglcmIdmn): ");
	scanf("%lg",&AllCases_1_MLP_21_8_2_input[2]);
	printf("%s","Cont. Input-3(wavelet-LLLglcmIdmn): ");
	scanf("%lg",&AllCases_1_MLP_21_8_2_input[3]);
	printf("%s","Cont. Input-4(wavelet-LHHglcmIdmn): ");
	scanf("%lg",&AllCases_1_MLP_21_8_2_input[4]);
	printf("%s","Cont. Input-5(wavelet-LHLglrlmShortRunEmphasis): ");
	scanf("%lg",&AllCases_1_MLP_21_8_2_input[5]);
	printf("%s","Cont. Input-6(wavelet-LLLglrlmLongRunEmphasis): ");
	scanf("%lg",&AllCases_1_MLP_21_8_2_input[6]);
	printf("%s","Cont. Input-7(wavelet-LLHglcmIdmn): ");
	scanf("%lg",&AllCases_1_MLP_21_8_2_input[7]);
	printf("%s","Cont. Input-8(wavelet-LHLglcmIdn): ");
	scanf("%lg",&AllCases_1_MLP_21_8_2_input[8]);
	printf("%s","Cont. Input-9(wavelet-HHLglcmIdn): ");
	scanf("%lg",&AllCases_1_MLP_21_8_2_input[9]);
	printf("%s","Cont. Input-10(wavelet-HLLglrlmShortRunEmphasis): ");
	scanf("%lg",&AllCases_1_MLP_21_8_2_input[10]);
	printf("%s","Cont. Input-11(wavelet-HLHglrlmShortRunEmphasis): ");
	scanf("%lg",&AllCases_1_MLP_21_8_2_input[11]);
	printf("%s","Cont. Input-12(wavelet-LLHglszmSmallAreaEmphasis): ");
	scanf("%lg",&AllCases_1_MLP_21_8_2_input[12]);
	printf("%s","Cont. Input-13(wavelet-LLLglszmSmallAreaEmphasis): ");
	scanf("%lg",&AllCases_1_MLP_21_8_2_input[13]);
	printf("%s","Cont. Input-14(wavelet-LLHglrlmLongRunEmphasis): ");
	scanf("%lg",&AllCases_1_MLP_21_8_2_input[14]);
	printf("%s","Cont. Input-15(wavelet-LLLglcmMCC): ");
	scanf("%lg",&AllCases_1_MLP_21_8_2_input[15]);
	printf("%s","Cont. Input-16(wavelet-HHLglrlmShortRunEmphasis): ");
	scanf("%lg",&AllCases_1_MLP_21_8_2_input[16]);
	printf("%s","Cont. Input-17(wavelet-LHLglrlmRunEntropy): ");
	scanf("%lg",&AllCases_1_MLP_21_8_2_input[17]);
	printf("%s","Cont. Input-18(wavelet-LHHglrlmRunEntropy): ");
	scanf("%lg",&AllCases_1_MLP_21_8_2_input[18]);
	printf("%s","Cont. Input-19(wavelet-LHHglszmSmallAreaEmphasis): ");
	scanf("%lg",&AllCases_1_MLP_21_8_2_input[19]);
	printf("%s","Cont. Input-20(wavelet-LHLgldmDependenceEntropy): ");
	scanf("%lg",&AllCases_1_MLP_21_8_2_input[20]);
	for(cont_inps=0;cont_inps<21;cont_inps++)
	{
     //Substitution of missing continuous variables
     if(AllCases_1_MLP_21_8_2_input[cont_inps] == -9999)
	  AllCases_1_MLP_21_8_2_input[cont_inps]=AllCases_1_MLP_21_8_2_MeanInputs[cont_inps];
	}
    AllCases_1_MLP_21_8_2_ScaleInputs(AllCases_1_MLP_21_8_2_input,0,1,21);
	AllCases_1_MLP_21_8_2_RunNeuralNet_Classification();
   //Normalise output if output activation is not Softmax;
 	AllCases_1_MLP_21_8_2_Normalise(AllCases_1_MLP_21_8_2_output,2);
	for(i=0;i<2;i++)
	{
      if(max<AllCases_1_MLP_21_8_2_output[i])
      {
        max=AllCases_1_MLP_21_8_2_output[i];
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

