//Analysis Type - Classification 
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>


double Over2cc_2_MLP_21_15_2_input_hidden_weights[15][21]=
{
 {-3.00136166427233e+000, 5.88858976034081e+000, 8.14342920424561e+000, -4.62571327620669e+000, 6.52673507957950e+000, -3.60099178018259e+000, 2.36144662372849e+000, 6.63269596091260e+000, -1.83923673367100e+000, 6.22767325737075e+000, -4.32610502046613e+000, 1.85923291289771e+000, -1.91583224083538e+000, -4.21739591402302e+000, -2.59606611035170e-001, -8.47321339774153e+000, 1.73129850310402e+000, 2.98814903771744e+000, 6.50175642355302e+000, -4.22897391165408e+000, -2.96886207998696e-001 },
 {-1.73158221933265e+000, 2.28183377619137e+000, 2.83539005100544e+000, -1.23120381450404e+000, 3.53335865300925e-001, 3.92037778136815e-001, 5.80474678499849e-001, 2.37127963482631e-001, 2.36259938136965e-001, 3.29488991877345e+000, -6.45936881641152e-001, 1.63359001968613e+000, -9.16808659763377e-001, -1.49741430305133e-001, 9.55303858494275e-001, -3.14906001365953e-001, -7.73623975787877e-001, 1.30307273225836e+000, 3.23835030968808e+000, -3.20303620914865e-001, -3.80793697909924e-001 },
 {9.08627715690385e+000, -8.36148903817213e+000, -8.16361376230598e+000, 5.44463801805183e+000, 7.22699852256968e-001, -8.28073195120967e-001, -4.59922567011416e-001, 3.84280718369151e+000, 3.91636066547610e-001, -1.09056806184254e+001, 2.89590559591424e+000, -7.48582175782393e+000, 6.48371861429936e+000, 1.07169552246778e+000, -3.31848687687241e+000, 1.58160155892610e-001, 6.64279588133580e+000, -5.47665721452679e+000, -1.12096481584799e+001, 2.14112977324545e+000, 4.73177062236343e+000 },
 {-7.17459799167752e+000, 6.47402529295683e+000, 7.75053886951462e+000, -5.74952015504849e+000, 7.40045577464353e-001, -7.22695483546049e-001, 4.66530769052286e-001, -1.30338021022666e-001, -1.71696484533751e+000, 8.98392199668852e+000, -3.53443815719708e+000, 4.60697185203483e+000, -5.01214289871558e+000, -2.32845098832540e+000, 2.18880962515989e+000, -2.90554929068039e+000, -4.15424558513799e+000, 2.78736226276006e+000, 8.51775908990610e+000, -3.13351765040898e+000, -3.40215259101321e+000 },
 {5.34795454334708e+000, 7.82002251241169e-001, -2.31504594040077e+000, 3.07516134553181e+000, 1.31704373886684e+000, -1.72140069969452e+000, 6.70557506094121e-001, 4.88156195688199e+000, 3.45075075722947e-001, -5.06021288253056e+000, 3.64763414635126e-001, -3.13385372141738e+000, 8.66399363653050e-001, 1.60059353236364e+000, -9.95906428914612e-001, -1.37561247132260e+000, 4.72806758181885e+000, 1.02123110621702e-001, -4.85170646374042e+000, -2.24036687555211e+000, 1.12638874046906e+000 },
 {-1.27147333088053e+001, 1.25978375242782e+001, 1.43594285886968e+001, -9.28815563430459e+000, 3.98570977178787e-001, -7.98751336386792e-001, 1.05699602160433e+000, -4.98593654073912e-001, -2.21732187103908e+000, 1.65396611272037e+001, -5.84190388606319e+000, 9.00394710906003e+000, -9.87900874901844e+000, -4.05484934029229e+000, 3.49243282073258e+000, -3.78203801742055e+000, -8.27499539292268e+000, 5.61582401143372e+000, 1.60917596623344e+001, -4.63381380998762e+000, -6.46110835064163e+000 },
 {-6.86712728391913e-001, 2.23610205432661e+000, 1.37540488193161e+000, -8.76304142170259e-001, 8.55552327554445e-001, -4.51862777785368e-001, 7.21126819884856e-001, 1.01700748512586e+000, -1.67069156899098e-001, 1.62777886410284e+000, -8.16974576625812e-001, 7.00015834767251e-001, -1.12794681837852e+000, -8.60605905692508e-002, 7.77152009799006e-001, -1.53976338278375e+000, -5.40124255097610e-001, 1.53624531992933e+000, 1.52114366506140e+000, -1.25239703295382e+000, -1.11623534461931e+000 },
 {-1.43988454301720e+000, -3.05497051061339e+000, 1.85923365217796e-001, 1.10829695702731e-001, -4.08128204141796e+000, 2.79453318512333e+000, -1.12286899148088e+000, -4.47224184153182e+000, 1.55786784546255e-001, 1.55876123252404e-001, 1.22070004585873e+000, 2.96190792826899e-001, 1.58968270775802e+000, 1.41062091007308e+000, 5.85434054749444e-001, 5.75879052618074e+000, 2.13462122477546e-001, -3.53041452443178e+000, 6.12691472844165e-001, 2.39765497372787e+000, 2.04709714517123e+000 },
 {8.91001270965235e+000, -9.61755648806765e+000, -1.08693326679096e+001, 5.76390088702286e+000, 6.87872561499084e-001, -1.10333690175183e+000, -8.35100863325752e-001, 1.46492011732637e+000, 6.43903945620963e-001, -1.37048509715470e+001, 3.85115706278273e+000, -6.76753546682176e+000, 6.90769804092178e+000, 1.68761137136090e+000, -3.81128120341777e+000, 5.75994031272557e-001, 7.09317032102346e+000, -5.26833331588433e+000, -1.13964571884809e+001, 2.30696871931932e+000, 5.47867016051408e+000 },
 {-6.82705418678516e+000, 6.72956660340248e+000, 8.37463549945594e+000, -4.16761000039661e+000, -1.07395028568188e+000, 1.50258818965827e+000, 4.28620855460944e-001, -1.53538031526376e+000, -3.50627874849565e-001, 1.05829502202809e+001, -2.22617840880682e+000, 5.08798808387600e+000, -4.74661889745406e+000, -7.45120724158170e-001, 2.95169177614203e+000, 3.04719678267651e-002, -4.68724542186614e+000, 2.51644389687524e+000, 8.29813437343317e+000, -8.07061250262233e-001, -3.04786720008546e+000 },
 {9.65019081486254e+000, -1.04057432562009e+001, -1.19679838073075e+001, 6.38307783720452e+000, 8.02953254944473e-003, -6.35475229943922e-001, -1.22092319874978e+000, 8.61233066492528e-001, 9.49062245120488e-001, -1.44287086840188e+001, 3.99640515773428e+000, -7.21811629411161e+000, 7.47294170748354e+000, 2.68135087560551e+000, -3.32597440833663e+000, 9.36974404246109e-001, 7.56783035058189e+000, -5.08349076538866e+000, -1.34726100203560e+001, 3.00695322216925e+000, 5.45681263678396e+000 },
 {-4.99672183137636e+000, 3.79547301369524e+000, 4.49808178448162e+000, -3.74304852336401e+000, -1.32790882590725e-001, -1.52615858811358e-001, -2.53239870873705e-001, -1.15080417374749e+000, -1.15522155892729e+000, 5.54219704067959e+000, -1.81742133130812e+000, 3.12522185286604e+000, -3.44082719845705e+000, -1.47805537425093e+000, 1.35727429959903e+000, -1.19974603422050e+000, -3.80272586022918e+000, 1.74090818133752e+000, 5.98538509819057e+000, -1.92753912708052e+000, -2.63809377401170e+000 },
 {3.78436124910927e+000, -4.40569585557497e+000, -4.89685895579565e+000, 3.50560937918609e+000, -2.09467219648384e+000, 9.68011352528520e-001, -9.39838859460200e-001, -1.15704712408551e+000, 1.29861902200920e+000, -5.14265099503748e+000, 2.20915459934479e+000, -2.37439247527235e+000, 3.12149612159723e+000, 1.46142347004254e+000, -1.60473337580511e+000, 3.11442110821533e+000, 1.35505748575080e+000, -2.23716792770885e+000, -4.14026001029567e+000, 2.85047027722714e+000, 1.92239525604260e+000 },
 {1.61607140911308e-001, -1.00525989615485e+000, 1.97953272079777e-001, 7.01098809686205e-001, -8.09941069737616e-001, 1.96032146908926e+000, 5.50751855295924e-001, -1.49521486724903e+000, 1.30195756421449e+000, 7.30816271816707e-001, 1.19803057759719e+000, 4.14365417138239e-001, 1.28493559468811e+000, 1.02606035340816e+000, 6.25116397490603e-001, 2.33851412247048e+000, 1.43449592990396e-001, 1.13960486538400e-001, 1.06541456358571e+000, 2.10628034349234e+000, 1.08702770503247e+000 },
 {-8.12895040970053e+000, 6.79890945750920e+000, 7.55013112393168e+000, -5.04468219899219e+000, -5.74248730452748e-001, 8.73251065935515e-001, 3.73827821913604e-001, -3.43340275032140e+000, -5.79268631000442e-001, 9.88105533437585e+000, -2.45713818164252e+000, 6.38344179768681e+000, -5.29045860610525e+000, -8.84152464975609e-001, 3.05715546527134e+000, 4.20693023098318e-002, -5.81684151258246e+000, 4.15817078424105e+000, 9.97505124374854e+000, -2.03021382948894e+000, -3.83648554732438e+000 } 
};

double Over2cc_2_MLP_21_15_2_hidden_bias[15]={ -3.38913469689418e-001, 6.27592630500222e-001, -1.49192649180617e+000, -2.62549380826366e-001, 2.84250122927945e-001, 6.70316877395570e-001, 3.04445237269443e-001, -6.22374634939955e-001, -1.28480409069952e+000, 9.48745794726852e-001, -1.37556169980277e+000, -2.71346207567107e-001, 2.29573631244224e-001, 9.47131539713987e-001, 1.01096163923184e+000 };

double Over2cc_2_MLP_21_15_2_hidden_output_wts[2][15]=
{
 {-7.12758497883966e+000, -1.09999221319671e+000, -2.21056102398189e+000, 2.18542851585854e-001, -2.20855150895286e+000, 2.77016087757153e+000, -7.90937069778567e-001, 5.99609963400074e+000, -3.54026429303436e+000, 3.51177226692150e+000, -3.42695231693760e+000, -8.15202129984901e-001, 1.42988210704799e+000, 2.28963968318701e+000, 1.33906335214093e+000 },
 {5.87718514374133e+000, 1.92298624027437e-001, 2.38589379992011e+000, -1.41821228301263e-001, 1.61525974786125e+000, -2.08002665036229e+000, 7.99394946672773e-001, -5.04134515893221e+000, 2.69119255157435e+000, -3.10245702396764e+000, 1.22122572639748e+000, 3.76692696181921e-001, -1.32455896835953e+000, -1.69316741456860e+000, -2.19212569199829e+000 }
};

double Over2cc_2_MLP_21_15_2_output_bias[2]={ 2.75178538057831e+000, -1.74619564934107e+000 };

double Over2cc_2_MLP_21_15_2_max_input[21]={ 9.94225622500000e-001, 9.98205853844333e-001, 9.96754273526000e-001, 9.99958012914333e-001, 9.94505657234667e-001, 9.87686168724000e-001, 9.98278127930000e-001, 9.95170697016667e-001, 9.99977398435000e-001, 9.76060123067333e-001, 9.81017347897333e-001, 1.40417965636667e+000, 9.51627339487000e-001, 8.65563457626667e-001, 6.46031687483333e+000, 9.96854540307667e-001, 6.71294571244000e+000, 4.99555750214000e-001, 8.21654401930000e-001, 7.77973268702667e-001, 8.87391385084667e-001 };

double Over2cc_2_MLP_21_15_2_min_input[21]={ 9.51458841268667e-001, 9.52721802638333e-001, 9.57705102447333e-001, 9.07570890327000e-001, 9.43359485176000e-001, 9.10429029488667e-001, 9.43173352577333e-001, 9.33755227989000e-001, 8.14424454238667e-001, 8.71982414223667e-001, 8.56874668825000e-001, 1.02462806683000e+000, 7.33377997593000e-001, 5.96739362359667e-001, 4.45016599139000e+000, 6.35162254726333e-001, 4.48663980817333e+000, 2.44262934234000e-001, 4.33984373328333e-001, 3.12766281606667e-001, 4.64379424052333e-001 };

double Over2cc_2_MLP_21_15_2_input[21];
double Over2cc_2_MLP_21_15_2_hidden[15];
double Over2cc_2_MLP_21_15_2_output[2];

double Over2cc_2_MLP_21_15_2_MeanInputs[21]={ 9.86215974880607e-001, 9.82580240878453e-001, 9.79769865419318e-001, 9.94294379312090e-001, 9.73150089825902e-001, 9.66227464441086e-001, 9.81998966214847e-001, 9.72810897712386e-001, 9.91240682825940e-001, 9.29932763713648e-001, 9.33069803359037e-001, 1.06187684347659e+000, 8.66940461142569e-001, 7.31393955181164e-001, 5.13171062654525e+000, 8.93468219422401e-001, 5.66245517208056e+000, 4.40861350465457e-001, 6.49529047198333e-001, 6.50102625908682e-001, 6.44693150319109e-001 };

void Over2cc_2_MLP_21_15_2_ScaleInputs(double* input, double minimum, double maximum, int size)
{
 double delta;
 long i;
 for(i=0; i<size; i++)
 {
	delta = (maximum-minimum)/(Over2cc_2_MLP_21_15_2_max_input[i]-Over2cc_2_MLP_21_15_2_min_input[i]);
	input[i] = minimum - delta*Over2cc_2_MLP_21_15_2_min_input[i]+ delta*input[i];
 }
}

double Over2cc_2_MLP_21_15_2_logistic(double x)
{
  if(x > 100.0) x = 1.0;
  else if (x < -100.0) x = 0.0;
  else x = 1.0/(1.0+exp(-x));
  return x;
}

void Over2cc_2_MLP_21_15_2_Normalise(double out[],long length)
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

void Over2cc_2_MLP_21_15_2_ComputeFeedForwardSignals(double* MAT_INOUT,double* V_IN,double* V_OUT, double* V_BIAS,int size1,int size2,int layer)
{
  int row,col;
  for(row=0;row < size2; row++) 
    {
      V_OUT[row]=0.0;
      for(col=0;col<size1;col++)V_OUT[row]+=(*(MAT_INOUT+(row*size1)+col)*V_IN[col]);
      V_OUT[row]+=V_BIAS[row];
      if(layer==0) V_OUT[row] = tanh(V_OUT[row]);
      if(layer==1) V_OUT[row] = Over2cc_2_MLP_21_15_2_logistic(V_OUT[row]);
   }
}

void Over2cc_2_MLP_21_15_2_RunNeuralNet_Classification () 
{
  Over2cc_2_MLP_21_15_2_ComputeFeedForwardSignals((double*)Over2cc_2_MLP_21_15_2_input_hidden_weights,Over2cc_2_MLP_21_15_2_input,Over2cc_2_MLP_21_15_2_hidden,Over2cc_2_MLP_21_15_2_hidden_bias,21, 15,0);
  Over2cc_2_MLP_21_15_2_ComputeFeedForwardSignals((double*)Over2cc_2_MLP_21_15_2_hidden_output_wts,Over2cc_2_MLP_21_15_2_hidden,Over2cc_2_MLP_21_15_2_output,Over2cc_2_MLP_21_15_2_output_bias,15, 2,1);
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
	scanf("%lg",&Over2cc_2_MLP_21_15_2_input[0]);
	printf("%s","Cont. Input-1(wavelet-HLLglcmIdmn): ");
	scanf("%lg",&Over2cc_2_MLP_21_15_2_input[1]);
	printf("%s","Cont. Input-2(wavelet-LHLglcmIdmn): ");
	scanf("%lg",&Over2cc_2_MLP_21_15_2_input[2]);
	printf("%s","Cont. Input-3(wavelet-LLLglcmImc2): ");
	scanf("%lg",&Over2cc_2_MLP_21_15_2_input[3]);
	printf("%s","Cont. Input-4(originalglcmIdmn): ");
	scanf("%lg",&Over2cc_2_MLP_21_15_2_input[4]);
	printf("%s","Cont. Input-5(originalglrlmShortRunEmphasis): ");
	scanf("%lg",&Over2cc_2_MLP_21_15_2_input[5]);
	printf("%s","Cont. Input-6(wavelet-HHHglcmIdmn): ");
	scanf("%lg",&Over2cc_2_MLP_21_15_2_input[6]);
	printf("%s","Cont. Input-7(wavelet-LHHglcmIdmn): ");
	scanf("%lg",&Over2cc_2_MLP_21_15_2_input[7]);
	printf("%s","Cont. Input-8(wavelet-LLHglcmImc2): ");
	scanf("%lg",&Over2cc_2_MLP_21_15_2_input[8]);
	printf("%s","Cont. Input-9(wavelet-HHLglcmIdn): ");
	scanf("%lg",&Over2cc_2_MLP_21_15_2_input[9]);
	printf("%s","Cont. Input-10(wavelet-LHLglrlmShortRunEmphasis): ");
	scanf("%lg",&Over2cc_2_MLP_21_15_2_input[10]);
	printf("%s","Cont. Input-11(wavelet-LLLglrlmLongRunEmphasis): ");
	scanf("%lg",&Over2cc_2_MLP_21_15_2_input[11]);
	printf("%s","Cont. Input-12(wavelet-LLHglszmSmallAreaEmphasis): ");
	scanf("%lg",&Over2cc_2_MLP_21_15_2_input[12]);
	printf("%s","Cont. Input-13(originalglszmSmallAreaEmphasis): ");
	scanf("%lg",&Over2cc_2_MLP_21_15_2_input[13]);
	printf("%s","Cont. Input-14(originalglrlmRunEntropy): ");
	scanf("%lg",&Over2cc_2_MLP_21_15_2_input[14]);
	printf("%s","Cont. Input-15(wavelet-LLLglcmMCC): ");
	scanf("%lg",&Over2cc_2_MLP_21_15_2_input[15]);
	printf("%s","Cont. Input-16(wavelet-HLHglszmZoneEntropy): ");
	scanf("%lg",&Over2cc_2_MLP_21_15_2_input[16]);
	printf("%s","Cont. Input-17(wavelet-HHLglcmInverseVariance): ");
	scanf("%lg",&Over2cc_2_MLP_21_15_2_input[17]);
	printf("%s","Cont. Input-18(wavelet-LHLglszmSmallAreaEmphasis): ");
	scanf("%lg",&Over2cc_2_MLP_21_15_2_input[18]);
	printf("%s","Cont. Input-19(originalshapeSphericity): ");
	scanf("%lg",&Over2cc_2_MLP_21_15_2_input[19]);
	printf("%s","Cont. Input-20(wavelet-HLLglszmSmallAreaEmphasis): ");
	scanf("%lg",&Over2cc_2_MLP_21_15_2_input[20]);
	for(cont_inps=0;cont_inps<21;cont_inps++)
	{
     //Substitution of missing continuous variables
     if(Over2cc_2_MLP_21_15_2_input[cont_inps] == -9999)
	  Over2cc_2_MLP_21_15_2_input[cont_inps]=Over2cc_2_MLP_21_15_2_MeanInputs[cont_inps];
	}
    Over2cc_2_MLP_21_15_2_ScaleInputs(Over2cc_2_MLP_21_15_2_input,0,1,21);
	Over2cc_2_MLP_21_15_2_RunNeuralNet_Classification();
   //Normalise output if output activation is not Softmax;
 	Over2cc_2_MLP_21_15_2_Normalise(Over2cc_2_MLP_21_15_2_output,2);
	for(i=0;i<2;i++)
	{
      if(max<Over2cc_2_MLP_21_15_2_output[i])
      {
        max=Over2cc_2_MLP_21_15_2_output[i];
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

