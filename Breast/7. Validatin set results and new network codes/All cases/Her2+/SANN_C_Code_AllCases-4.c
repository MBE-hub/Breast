//Analysis Type - Classification 
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>


double AllCases_4_MLP_21_12_2_input_hidden_weights[12][21]=
{
 {-2.00378619820786e+000, -3.57138483262136e-001, -1.86123410256791e+000, 8.66220895088006e-001, 1.88472635193204e-001, -4.87556739985911e-001, 1.22784879127149e+000, 2.07461212918807e+000, 4.52087277718161e-001, 2.49027847182678e+000, -2.88905567184448e-002, -5.73257298582624e-001, -5.94797754278469e-001, -1.01469791696158e+000, -1.56470545958211e-001, 2.59596928965783e-001, -1.82225234207817e+000, 1.00731218783846e+000, 1.83618776295140e-001, -3.46151416669473e-001, -1.36368563115325e+000 },
 {-1.10619361896850e+000, 9.66295186202659e-002, -1.03967626078520e+000, 1.06243306786686e+000, 4.00300980538778e-001, -1.80180282134623e-001, 1.17509033670233e+000, 1.63208806978673e+000, 7.01458161584857e-001, 2.17066175654784e+000, -1.40185658757434e-002, -3.49166680911907e-001, -5.24385925957880e-001, -8.91788263534196e-001, -3.09272783311680e-001, -1.08600283578840e-001, -1.09012765887353e+000, 3.40422650813300e-001, -4.65072584819058e-001, -5.80639453915167e-001, -6.86494164670712e-001 },
 {-5.77513870182033e-001, 2.08681017989455e-001, -3.94476770998857e-001, 9.04326979391735e-001, 4.50343269997963e-001, -1.24099522117980e-001, 1.03918324366148e+000, 1.79418228480031e+000, 6.19291445491737e-001, 1.47925044233284e+000, -2.07059321673547e-001, -8.87222948038326e-002, -6.90298661216079e-001, -1.04180450890316e+000, -3.35280743127370e-001, -3.48647687095750e-002, -1.35340863999749e+000, 8.51445025802660e-001, -2.70997513240830e-001, -5.31947660961507e-001, -6.34186229891737e-001 },
 {-1.94203637303622e+000, -4.40528285406339e-002, -2.19610990941312e+000, 1.29331367167187e+000, 2.76108992922734e-001, 5.20807809534218e-002, 1.45792790455914e+000, 1.09502602828433e+000, 8.63423247489914e-001, 3.64627588828006e+000, 5.73535599853971e-001, 5.15375187013375e-001, -5.10518190401077e-002, -3.79956336106600e-001, -4.75468738840027e-004, -4.73653785937332e-002, -1.03399965332699e+000, -1.45786177132503e-001, -2.79780534682673e-001, -1.38264150751010e-001, -1.13773275802381e+000 },
 {-7.19965581728889e-001, 1.84949741033888e-001, -2.78538789195480e-001, 1.10870373134080e+000, 5.72197349112856e-001, -4.83476645009031e-001, 1.30644317382571e+000, 2.27035308607904e+000, 6.65695311799352e-001, 1.63883397116709e+000, -9.72035227274544e-001, -7.49096378428644e-001, -1.51459912651303e+000, -2.14920173987098e+000, -6.78105389805971e-001, -3.71169700725015e-001, -1.76976381288522e+000, 7.99000287831766e-001, -1.46932517273501e+000, -1.10310680781616e+000, -6.28265319597456e-001 },
 {-2.14624975391695e+000, -5.69624360942531e-001, -2.00759705973744e+000, 8.33631279482994e-001, 9.99472868095854e-002, -5.88989954640613e-001, 1.31763183339080e+000, 2.36493180927788e+000, 3.30844694353041e-001, 2.42180175022207e+000, -2.01316373920185e-001, -6.58367215742530e-001, -6.92504113536587e-001, -1.22314911117907e+000, -3.03015174307528e-001, 2.55944906492622e-001, -2.23544752774750e+000, 1.28171787458730e+000, 3.32833476191808e-001, -4.45552056325692e-001, -1.62635169681167e+000 },
 {1.34634437297439e+000, 1.93426052818908e-001, 1.53593661049961e+000, 9.15123532307773e-003, 2.23614051828217e-002, -1.99358696457499e-002, -1.38748698086322e-001, 5.99387951587033e-001, -3.92753062392149e-001, -1.60542353802080e+000, -3.33304547049822e-001, 2.06581030117193e-001, -6.97348825724788e-001, -6.34899872751831e-001, -5.31958977180160e-001, -3.02402768099365e-001, -8.22881319663867e-001, 6.97860733430715e-001, -6.30761048265254e-002, -4.61083475404362e-001, -2.15233990211939e-001 },
 {-1.95402682492417e+000, 1.14423483932849e-001, -1.92884185430835e+000, 1.19550410265152e+000, 3.58683291936610e-001, -2.59293540557600e-001, 1.25528439609564e+000, 1.02649966504644e+000, 1.09063197964317e+000, 3.54343933666856e+000, 2.91654331730580e-001, 8.12850867273528e-002, -3.86344505120459e-001, -8.03198704453274e-001, -1.93706154208593e-001, -3.52472624297783e-001, -4.71712957866160e-001, -8.10739649455419e-001, -4.09287079813261e-001, -5.44739985308591e-001, -5.71020607568159e-001 },
 {1.46207005401710e+000, 7.51917507318574e-001, 2.09188471588485e+000, 1.77117999143073e-001, 6.30571403188694e-001, -4.37436396837990e-001, -8.41740359709040e-003, 3.82034861429678e-001, 3.42849306768588e-001, -9.94663993415850e-001, -1.79785368679582e+000, 5.93701446887904e-001, -1.80667439269103e+000, -2.30720809236893e+000, -4.14373311607633e-001, -8.18965529363834e-001, -2.32105807375018e-001, -2.94274153215530e-001, -1.17749790873307e+000, -5.74871663687414e-001, 1.09471540168359e+000 },
 {-4.34413585348745e-001, 2.90088164615577e-001, 9.10050235902998e-002, 9.64106780346483e-001, 6.12977473532037e-001, -3.12455224767940e-001, 1.01027054575687e+000, 2.04079210093251e+000, 7.71516411401100e-001, 1.34415737877441e+000, -1.00893660162057e+000, -2.04214584969914e-001, -1.32632707573687e+000, -1.90770207603178e+000, -1.59216804493774e-001, 1.25087377063743e-001, -1.50741472818401e+000, 1.20027715375387e+000, -7.59982200523920e-001, -6.07706905073036e-001, -1.60763758348572e-001 },
 {-9.11997160696128e-001, 1.37769717123331e-001, -8.55224368315774e-001, 1.31377454197847e+000, 5.74112207307851e-001, -1.92205853702783e-001, 1.52201360801780e+000, 2.34931244719241e+000, 6.41294713591153e-001, 2.21748381514992e+000, 3.56833157566364e-002, -6.06869752863484e-001, -7.98761504059241e-001, -1.13327058494333e+000, -5.21096223586748e-001, -2.11998604945524e-001, -1.64956832629230e+000, 8.20541006931174e-001, -7.25810234162947e-001, -8.71366721203986e-001, -1.12290841088970e+000 },
 {-3.38108269169503e-001, -1.13062799205364e-001, 6.90138236496590e-002, 3.10348769909449e-001, 1.13626437748636e-001, -2.86967766117144e-001, 5.46901375783894e-001, 1.39698033816176e+000, 6.83752753851178e-002, 1.89345896357529e-001, -7.36639811276367e-001, -3.26657379372266e-001, -9.46466600025142e-001, -1.22456563471316e+000, -1.43360829744365e-001, 2.26988680540295e-001, -1.55164863774585e+000, 1.34999460688614e+000, -3.59047505525024e-001, -3.72620309321753e-001, -5.33223463047376e-001 } 
};

double AllCases_4_MLP_21_12_2_hidden_bias[12]={ -1.37104495471174e-001, 1.94116964740872e-001, 3.55624362068874e-001, -1.66095233489498e-002, 4.45921053683486e-001, 6.05805749585636e-002, 7.25246165105967e-001, -3.36218753724245e-001, 8.45746953208232e-001, 2.95275618067668e-001, 5.14406815549513e-001, 1.04667421827069e-001 };

double AllCases_4_MLP_21_12_2_hidden_output_wts[2][12]=
{
 {2.69735648901068e-001, 1.23088270219470e-001, -1.84537783375178e-001, 2.88928968760177e-001, 1.49376302558748e-001, 7.57701396735888e-001, -2.59284294752979e-001, 1.78182302403490e-001, -4.09349237964962e-002, -2.77641440007832e-001, 4.82466787908617e-001, -3.74750254931960e-002 },
 {-2.87477293863078e-001, -1.53512143383465e-001, 1.30997335131519e-001, -3.07851027954328e-001, -1.88507844572673e-001, -7.60269272612864e-001, 3.42194691096337e-001, -1.64813891282682e-001, 1.08209273872371e-002, 2.76893950944494e-001, -4.26183139627739e-001, 1.03246810284934e-001 }
};

double AllCases_4_MLP_21_12_2_output_bias[2]={ -3.70558519815988e-001, 3.94364866857984e-001 };

double AllCases_4_MLP_21_12_2_max_input[21]={ 1.00000000000000e+000, 9.96754273526000e-001, 9.96496746661667e-001, 9.94259912350667e-001, 9.95170697016667e-001, 9.91759014152667e-001, 1.40417965636667e+000, 9.86949090259667e-001, 9.63523508705667e-001, 9.76060123067333e-001, 9.73612353747333e-001, 1.00000000000000e+000, 9.98520710059333e-001, 9.91759014152667e-001, 5.10890428384333e+000, 5.48591962498333e+000, 7.03128040914000e+000, 9.53722447143333e-001, 9.99712242127000e-001, 4.98455292063667e+000, 6.87179713731667e+000 };

double AllCases_4_MLP_21_12_2_min_input[21]={ 6.63040123456667e-001, 6.29844600410667e-001, 6.29765554143667e-001, 6.45877037209000e-001, 6.28152633660333e-001, 6.22852030775000e-001, 6.81172839506667e-001, 6.44827956739000e-001, 5.60026336363667e-001, 5.47665803838333e-001, 6.23316498316333e-001, 6.00000000000000e-001, 4.62825497869000e-001, 5.40743607384333e-001, 2.31263859634667e+000, 2.20680752570333e+000, 2.88102976749000e+000, 1.57423810395910e-001, 4.15107119795333e-001, 1.81602018986333e+000, 2.49992751346667e+000 };

double AllCases_4_MLP_21_12_2_input[21];
double AllCases_4_MLP_21_12_2_hidden[12];
double AllCases_4_MLP_21_12_2_output[2];

double AllCases_4_MLP_21_12_2_MeanInputs[21]={ 9.84939075942792e-001, 9.66739246426214e-001, 9.60995020680608e-001, 9.60851594373479e-001, 9.55835633423741e-001, 9.45299925394236e-001, 1.05385645241019e+000, 9.33596196888181e-001, 8.89310791280151e-001, 9.07804480645762e-001, 8.77433025347167e-001, 9.38632247260580e-001, 8.49899779290703e-001, 8.19193452266381e-001, 3.94675980446453e+000, 4.00812379732173e+000, 5.67530205194894e+000, 7.02402154241995e-001, 8.71386826795786e-001, 3.59136358450307e+000, 5.41968270299649e+000 };

void AllCases_4_MLP_21_12_2_FindMax(double* vec, double* max, long* maxIndex,int len)
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

void AllCases_4_MLP_21_12_2_ScaleInputs(double* input, double minimum, double maximum, int size)
{
 double delta;
 long i;
 for(i=0; i<size; i++)
 {
	delta = (maximum-minimum)/(AllCases_4_MLP_21_12_2_max_input[i]-AllCases_4_MLP_21_12_2_min_input[i]);
	input[i] = minimum - delta*AllCases_4_MLP_21_12_2_min_input[i]+ delta*input[i];
 }
}

void AllCases_4_MLP_21_12_2_softmax(double* vec,int len)
{

  long i, j;
  double sum=0.0;
  for(i=0; i<len; i++)
  {
    if(vec[i]>200)
    {
      double max;
      long maxIndex;
      AllCases_4_MLP_21_12_2_FindMax(vec, &max, &maxIndex,len);
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

void AllCases_4_MLP_21_12_2_ComputeFeedForwardSignals(double* MAT_INOUT,double* V_IN,double* V_OUT, double* V_BIAS,int size1,int size2,int layer)
{
  int row,col;
  for(row=0;row < size2; row++) 
    {
      V_OUT[row]=0.0;
      for(col=0;col<size1;col++)V_OUT[row]+=(*(MAT_INOUT+(row*size1)+col)*V_IN[col]);
      V_OUT[row]+=V_BIAS[row];
      if(layer==0) V_OUT[row] = exp(V_OUT[row]);
   }
}

void AllCases_4_MLP_21_12_2_RunNeuralNet_Classification () 
{
  AllCases_4_MLP_21_12_2_ComputeFeedForwardSignals((double*)AllCases_4_MLP_21_12_2_input_hidden_weights,AllCases_4_MLP_21_12_2_input,AllCases_4_MLP_21_12_2_hidden,AllCases_4_MLP_21_12_2_hidden_bias,21, 12,0);
  AllCases_4_MLP_21_12_2_ComputeFeedForwardSignals((double*)AllCases_4_MLP_21_12_2_hidden_output_wts,AllCases_4_MLP_21_12_2_hidden,AllCases_4_MLP_21_12_2_output,AllCases_4_MLP_21_12_2_output_bias,12, 2,1);
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
	scanf("%lg",&AllCases_4_MLP_21_12_2_input[0]);
	printf("%s","Cont. Input-1(wavelet-LHLglcmIdmn): ");
	scanf("%lg",&AllCases_4_MLP_21_12_2_input[1]);
	printf("%s","Cont. Input-2(wavelet-HLHglcmIdmn): ");
	scanf("%lg",&AllCases_4_MLP_21_12_2_input[2]);
	printf("%s","Cont. Input-3(wavelet-LLLglcmIdmn): ");
	scanf("%lg",&AllCases_4_MLP_21_12_2_input[3]);
	printf("%s","Cont. Input-4(wavelet-LHHglcmIdmn): ");
	scanf("%lg",&AllCases_4_MLP_21_12_2_input[4]);
	printf("%s","Cont. Input-5(wavelet-LHHglrlmShortRunEmphasis): ");
	scanf("%lg",&AllCases_4_MLP_21_12_2_input[5]);
	printf("%s","Cont. Input-6(wavelet-LLLglrlmLongRunEmphasis): ");
	scanf("%lg",&AllCases_4_MLP_21_12_2_input[6]);
	printf("%s","Cont. Input-7(wavelet-LLHglcmIdmn): ");
	scanf("%lg",&AllCases_4_MLP_21_12_2_input[7]);
	printf("%s","Cont. Input-8(wavelet-LHLglcmIdn): ");
	scanf("%lg",&AllCases_4_MLP_21_12_2_input[8]);
	printf("%s","Cont. Input-9(wavelet-HHLglcmIdn): ");
	scanf("%lg",&AllCases_4_MLP_21_12_2_input[9]);
	printf("%s","Cont. Input-10(wavelet-LLHglszmSmallAreaEmphasis): ");
	scanf("%lg",&AllCases_4_MLP_21_12_2_input[10]);
	printf("%s","Cont. Input-11(wavelet-LLLglcmMCC): ");
	scanf("%lg",&AllCases_4_MLP_21_12_2_input[11]);
	printf("%s","Cont. Input-12(wavelet-HHHglrlmShortRunEmphasis): ");
	scanf("%lg",&AllCases_4_MLP_21_12_2_input[12]);
	printf("%s","Cont. Input-13(wavelet-HHLglrlmShortRunEmphasis): ");
	scanf("%lg",&AllCases_4_MLP_21_12_2_input[13]);
	printf("%s","Cont. Input-14(wavelet-LHLglrlmRunEntropy): ");
	scanf("%lg",&AllCases_4_MLP_21_12_2_input[14]);
	printf("%s","Cont. Input-15(wavelet-LHHglrlmRunEntropy): ");
	scanf("%lg",&AllCases_4_MLP_21_12_2_input[15]);
	printf("%s","Cont. Input-16(wavelet-LLHfirstorderEntropy): ");
	scanf("%lg",&AllCases_4_MLP_21_12_2_input[16]);
	printf("%s","Cont. Input-17(wavelet-LHHglszmSmallAreaEmphasis): ");
	scanf("%lg",&AllCases_4_MLP_21_12_2_input[17]);
	printf("%s","Cont. Input-18(wavelet-HLHglcmImc2): ");
	scanf("%lg",&AllCases_4_MLP_21_12_2_input[18]);
	printf("%s","Cont. Input-19(wavelet-LHLfirstorderEntropy): ");
	scanf("%lg",&AllCases_4_MLP_21_12_2_input[19]);
	printf("%s","Cont. Input-20(wavelet-LHLgldmDependenceEntropy): ");
	scanf("%lg",&AllCases_4_MLP_21_12_2_input[20]);
	for(cont_inps=0;cont_inps<21;cont_inps++)
	{
     //Substitution of missing continuous variables
     if(AllCases_4_MLP_21_12_2_input[cont_inps] == -9999)
	  AllCases_4_MLP_21_12_2_input[cont_inps]=AllCases_4_MLP_21_12_2_MeanInputs[cont_inps];
	}
    AllCases_4_MLP_21_12_2_ScaleInputs(AllCases_4_MLP_21_12_2_input,0,1,21);
	AllCases_4_MLP_21_12_2_RunNeuralNet_Classification();
   //Output Activation is Softmax;
	AllCases_4_MLP_21_12_2_softmax(AllCases_4_MLP_21_12_2_output, 2);
	for(i=0;i<2;i++)
	{
      if(max<AllCases_4_MLP_21_12_2_output[i])
      {
        max=AllCases_4_MLP_21_12_2_output[i];
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

