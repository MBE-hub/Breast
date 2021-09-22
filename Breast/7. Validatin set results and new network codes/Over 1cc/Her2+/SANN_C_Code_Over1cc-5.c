//Analysis Type - Classification 
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>


double Over1cc_5_MLP_22_18_2_input_hidden_weights[18][22]=
{
 {3.43635010737359e+000, 3.87971293256239e+000, -8.58101471988493e+000, -4.17155025717046e+000, 1.99569546124613e-001, 4.56765325550145e+000, -1.35321293151454e+000, -3.57624083910199e+000, 3.20408036487480e-001, -3.49154221575317e+000, -2.87245341518769e+000, -2.20945707041023e+000, 3.65814973694631e-001, 5.23510141389180e+000, -3.40198474741604e+000, -2.33152440002124e+000, 1.16300890276730e+000, 2.21536866237856e+000, 2.08168819129745e+000, -3.76071849130240e-001, 3.93827781390858e+000, -2.89862713352290e+000 },
 {1.54924278067227e+000, 4.89604168768359e+000, -4.65631596109400e+000, 5.62314633446664e-001, -1.59739290465697e+000, 2.33260961333501e+000, -2.91008098670329e-001, -2.93077700606850e+000, -4.14372964834270e-002, -7.28910884304000e-001, -2.49844354135484e+000, 3.96938889261254e-001, 1.11908694619665e+000, 1.63892808410003e+000, -1.57801492832586e+000, -4.43662128021419e+000, 5.01540256557769e-001, 3.60976559208952e+000, 1.60529433603316e+000, 3.02043024718996e+000, -1.17922459740950e+000, -6.03884497276831e+000 },
 {2.70786955723730e-001, 2.10646280512525e+000, -1.46207663084946e+000, 4.90460953682153e-001, -6.86625024420854e-001, 1.04707903502310e+000, 4.53791875157189e-001, -6.41901149598909e-001, 4.50135568987840e-002, -1.15957534087377e-001, -9.98752342304808e-001, -1.69607203634600e-001, -3.88789129829505e-001, 7.97053800412744e-001, -7.18752484198868e-001, -1.19257618063471e+000, -8.83631144745574e-002, 1.00831481377113e+000, -4.95202785693781e-001, 8.04505592201445e-001, -7.56185125828620e-001, -3.14301711876969e+000 },
 {8.04858339531887e-001, 3.33635771625287e+000, -1.69680191871389e+000, 1.28810528028943e+000, -8.63208184873326e-001, 2.35807528759861e+000, 1.55339910716879e+000, -4.35582185511521e-002, 2.50594024823829e-001, 6.40356032885224e-001, -1.12501041787210e+000, -1.13836498528231e-001, -1.12779330239577e+000, 9.02372581813809e-001, -3.53678176660091e-001, -2.38411430102869e-002, -1.18925023049402e+000, 9.48456001372055e-001, -1.43963884134868e+000, 6.14166729877269e-001, -1.19657707693146e+000, -4.74029877489903e+000 },
 {1.62005206341362e+000, 4.95284124455863e+000, -5.20874115365880e+000, 5.35461022229881e-001, -1.16020320658809e+000, 2.13467055396085e+000, -2.82726251318734e-001, -2.75799724966475e+000, -1.69688680079639e-001, -8.43785120681730e-001, -2.71878063653024e+000, 2.17515342725502e-001, 1.25039994774563e+000, 2.08263832678182e+000, -1.47891763981452e+000, -4.97018907598890e+000, 9.02111021269653e-001, 4.10808621552162e+000, 1.81917591766126e+000, 3.22194830482437e+000, -8.43207389451883e-001, -5.46598697109879e+000 },
 {1.43130600476510e+000, 2.33924777712492e+000, -4.54890697240967e+000, -2.56296342351834e+000, -1.10575842839024e+000, 2.63106157856230e+000, -6.51176951618315e-001, -1.70157854832032e+000, 4.46870046705497e-001, -1.35704699924788e+000, -1.27736120318708e+000, -9.61985434805599e-001, 7.84339459955676e-001, 3.00878691703609e+000, -1.34356961425749e+000, -1.89706150937807e+000, 1.70533814370015e-001, 2.58687909745708e+000, 1.45303785151336e+000, 1.08602892723651e+000, 1.72345348021360e+000, -3.81406910068433e+000 },
 {-9.45070328172874e-001, 1.51120551507565e+000, 8.00358518863088e-001, 2.71982378672688e+000, -4.61753031862880e-001, 1.04297132153633e+000, 4.06488750258468e+000, 2.98891965002981e+000, -4.16189723231171e-001, 1.25534813183628e+000, -1.59786081687599e+000, -1.63001172498317e+000, -3.69700849245333e+000, 4.03261838333465e-001, 2.67223847356122e-001, 1.08533627523470e+000, -5.66973466877923e-001, -1.11830376987002e+000, -4.50507751506680e+000, -7.06182780620611e-001, -1.61903791436105e+000, -4.16368658965477e+000 },
 {5.92957203567534e-001, 4.79948310589951e+000, -3.83007007878366e+000, 1.34721277565707e+000, -2.48111019226122e+000, 2.83482486606023e+000, 1.58261255592850e+000, -1.59045248738558e+000, -4.51987745838074e-001, 4.21681739323811e-001, -2.54224884370780e+000, 5.33745352331859e-002, -4.78013380932553e-001, 1.19877047227623e+000, -8.46501915118103e-001, -2.15714251591318e+000, -1.73802578616980e+000, 2.35463971296676e+000, -6.58763279247853e-001, 1.52153427166470e+000, -2.16714661381153e+000, -7.88877814453228e+000 },
 {1.13073289721464e+000, 5.50811604465549e+000, -4.07589907788838e+000, 1.85029448427940e+000, -1.96549018080339e+000, 2.91938581938100e+000, 1.46854810065175e+000, -2.09706667586148e+000, -4.12874084000875e-001, 2.18041689641981e-001, -2.70037144671655e+000, 2.95743180888170e-001, -2.72050325406941e-001, 1.11051606659814e+000, -1.12474085480964e+000, -2.68253232421072e+000, -1.19229985474264e+000, 2.65488008578805e+000, -2.74619037282949e-001, 1.89328976963294e+000, -2.30009563808697e+000, -7.38617542452438e+000 },
 {3.17520499288782e-001, 1.80184966404578e+000, -1.31760914809781e+000, 8.48388199745662e-001, -5.73152965549651e-001, 9.39410560888982e-001, 8.13563796903574e-001, -4.88241177330029e-001, -3.34260638132672e-001, 1.30066481507354e-001, -1.06707135458389e+000, -4.67716335759048e-002, -4.01247488340300e-001, 3.66552178159211e-001, -4.19025616657023e-001, -7.97917265642225e-001, -4.02523344935209e-001, 7.65300801212206e-001, -4.71521382968366e-001, 5.59372136168172e-001, -8.73738365077851e-001, -2.60656495736046e+000 },
 {8.79325240777043e-001, 4.52000594248554e+000, -3.26961792383292e+000, 1.34925297501777e+000, -1.75462589753316e+000, 2.55197601335524e+000, 1.39609416582327e+000, -1.35908609016076e+000, -1.78156583278184e-001, 3.06920373558376e-001, -2.04614335325617e+000, 1.30281993771730e-001, -4.18312816738909e-001, 1.24890908087707e+000, -8.16171097710776e-001, -1.98261317298541e+000, -1.19753369674113e+000, 2.18563885725581e+000, -4.81326720400478e-001, 1.49919024559106e+000, -1.83470649605723e+000, -6.58937578081396e+000 },
 {1.25307885979606e+000, 3.62554764706374e+000, -2.21802915213030e+000, 1.36466203854979e+000, -9.38204668160289e-001, 2.52496020165320e+000, 1.47289697478855e+000, -5.21199877468484e-001, 1.27406037018428e-001, 6.76730371914979e-001, -1.11445534745558e+000, 9.52842744064671e-002, -9.80636713930390e-001, 6.53695564896657e-001, -4.36700611766923e-001, -1.36343796638480e-001, -1.45340810612391e+000, 9.55555631325126e-001, -1.28029562065874e+000, 6.66027179183835e-001, -1.18542468034508e+000, -4.71232328945339e+000 },
 {1.03025132314661e+000, 5.15205300363627e+000, -3.89912874602178e+000, 1.57966662977451e+000, -1.68215201183709e+000, 2.61335241760439e+000, 1.17966278692014e+000, -2.05084994512826e+000, -3.38741925272333e-001, 1.41988909367363e-002, -2.55531591935963e+000, 1.89873906487761e-001, -2.83832181523846e-001, 1.07928488268280e+000, -1.25081230104698e+000, -2.63011847094223e+000, -1.03761878643728e+000, 2.43906631103653e+000, -2.44639468966442e-001, 1.77557989751573e+000, -2.13239772922937e+000, -6.82815536968733e+000 },
 {5.53651643222542e-001, 6.49028334812454e+000, -3.47627427649705e+000, 4.69632062752337e+000, -1.56259450152600e+000, 2.51341317917311e+000, 6.24837633122107e-001, -3.61576077415918e+000, -2.88739095562170e-001, -3.60452411369696e-001, -4.48792198308556e+000, 8.52530387963225e-001, 1.97890797502688e+000, -1.47922185633566e+000, -1.03531959088633e+000, -6.74713083596022e+000, 1.82432084380599e+000, 4.67833710946724e+000, 2.87577644240474e+000, 3.82391730770311e+000, -3.72904977033532e+000, -7.19281895163499e+000 },
 {3.16563159367140e+000, 2.63508435901449e+000, -4.77362335008684e+000, -3.46017907698864e+000, -2.39104237626577e+000, 3.31157163692622e+000, 1.67456471805405e+000, -2.06610991882836e+000, -1.28365148455684e+000, -1.08490681266605e+000, -3.12687656070048e+000, -8.18068196229304e-001, 2.35808157796741e+000, 3.61672388965434e+000, -6.76428279012517e-001, -3.05683651551969e+000, 1.75060852434076e+000, 5.18791789544349e+000, 3.23451430930251e+000, 3.23770545273805e+000, 1.77162712398711e+000, -5.95690054681197e+000 },
 {1.91444151057024e+000, 3.85911424730116e+000, -1.33520634316412e+000, 1.70946005196097e+000, 2.89684245878306e-001, 2.93655325047378e+000, 2.70223849395395e+000, 5.67887184595913e-001, 4.36060161198576e-001, 9.61478768328938e-001, -9.91684324062695e-001, -7.56518437341734e-001, -3.70723958433392e+000, -7.56155994045748e-001, -8.55297783465697e-001, 2.44394690110977e+000, -2.34894214265739e+000, -1.25634449986238e+000, -4.40784729730151e+000, -4.66774541285074e-001, -1.53386325128781e+000, -4.46973681564264e+000 },
 {-8.14805033027510e-001, 2.96271825726468e-001, -1.08010424103236e+000, -8.82224544500245e-001, -6.45184823344320e-001, -5.64391240105923e-002, -6.90411512679401e-001, -5.26299250965518e-001, 1.10262422810223e-002, -9.93838428660947e-001, -5.86212605708452e-001, -9.00633066004771e-001, -6.02342404303108e-001, 9.06154690588152e-001, -1.23987243571882e+000, -1.26398440427053e+000, 4.07905785606225e-001, 4.26342297952873e-001, -6.46510446419523e-001, 2.40967094494835e-001, 1.98087739343504e-001, -1.78348937306855e+000 },
 {8.55168049239302e-001, 3.60172414206454e+000, -2.19738812853412e+000, 1.27038393693962e+000, -1.11884480997991e+000, 2.29623558332886e+000, 1.44716474655220e+000, -5.98181779116232e-001, 3.57329895205493e-002, 5.32870720897832e-001, -1.39205153991064e+000, 6.63864325004685e-002, -6.64515944184548e-001, 9.49272469586124e-001, -4.58776654193970e-001, -7.33528342337020e-001, -1.03321389862221e+000, 1.49250680623713e+000, -8.17552518953747e-001, 9.97180890352212e-001, -1.17792858455878e+000, -5.04308199386180e+000 } 
};

double Over1cc_5_MLP_22_18_2_hidden_bias[18]={ 1.87067665401810e+000, 6.05476263710192e-001, 3.93122483486104e-002, -4.35133216894608e-002, 1.02766110925796e+000, 2.85033686105038e-001, -3.08931369053949e-001, -7.86798011961529e-001, -6.45601255397489e-002, -6.15368323069006e-002, -1.97759292022141e-001, 6.66051032144660e-003, 6.14270396059164e-002, 1.33043811787875e+000, -1.90122826075438e-001, 7.04252499279165e-001, -4.12093041642086e-001, -5.00660506424476e-002 };

double Over1cc_5_MLP_22_18_2_hidden_output_wts[2][18]=
{
 {3.34474146051732e+000, 1.67620814093394e+000, -6.05357411811674e-001, -1.36126760164092e+000, 2.03411268081316e+000, 1.80216506921307e+000, -3.97182376040975e+000, -6.67505127757985e-001, 6.13637182318384e-001, -5.81741564772878e-001, -1.62732965637396e-001, -1.31419689594890e+000, 5.50986582385887e-001, 2.20528712970446e+000, 1.43839539180176e+000, -2.87156865806919e+000, 6.40076245040212e-001, -8.40398534326186e-001 },
 {-3.32422598931679e+000, -1.68134362385987e+000, 5.61391309369464e-001, 1.37391640361770e+000, -2.03261446445215e+000, -1.83059606567717e+000, 3.95464033639010e+000, 5.70655277237529e-001, -5.55547628654001e-001, 5.66263379821718e-001, 1.64212828198936e-001, 1.30705979221869e+000, -5.27143552405420e-001, -2.16617439003659e+000, -1.37707818195876e+000, 2.83035010069128e+000, -6.91942171254688e-001, 8.75138354501006e-001 }
};

double Over1cc_5_MLP_22_18_2_output_bias[2]={ -4.55027211839795e-003, 3.02288028260921e-002 };

double Over1cc_5_MLP_22_18_2_max_input[22]={ 9.98205853844333e-001, 9.96754273526000e-001, 9.88273973642000e-001, 9.94484586788000e-001, 9.99979798185333e-001, 9.76060123067333e-001, 9.52733284084000e-001, 9.87684635119000e-001, 9.69573341435000e-001, 6.72263999322000e+000, 8.81938425504667e-001, 8.16193723420333e+000, 6.46031687483333e+000, 9.99252106464333e-001, 6.62255613583333e+000, 6.07940450162667e+000, 9.99999999999667e-001, 8.72043766244000e-001, 7.02255299145000e+000, 8.60739480852333e-001, 9.99345923680333e-001, 8.17330004459667e-001 };

double Over1cc_5_MLP_22_18_2_min_input[22]={ 9.52721802638333e-001, 9.43198268998333e-001, 9.25222052145667e-001, 9.22866729721667e-001, 8.14424454238667e-001, 8.49220519646333e-001, 8.08604996355667e-001, 8.10756773806000e-001, 8.12308146372000e-001, 4.59045323467000e+000, 5.74665956678667e-001, 5.22152556633667e+000, 3.66723035187000e+000, 6.35162254726333e-001, 4.08859126770667e+000, 3.25406740473667e+000, 6.17261118161667e-001, 3.89274609002333e-001, 3.28371146222667e+000, 3.66051471635667e-001, 5.87309286467000e-001, 3.12766281606667e-001 };

double Over1cc_5_MLP_22_18_2_input[22];
double Over1cc_5_MLP_22_18_2_hidden[18];
double Over1cc_5_MLP_22_18_2_output[2];

double Over1cc_5_MLP_22_18_2_MeanInputs[22]={ 9.80081546290821e-001, 9.77345870442747e-001, 9.68445460061317e-001, 9.69594031300026e-001, 9.93469783945517e-001, 9.23805996676869e-001, 8.90373090064010e-001, 9.35958806202452e-001, 9.23526263532740e-001, 5.80275234155330e+000, 7.46144412954567e-001, 6.68959782437721e+000, 5.11767729635330e+000, 9.09573969608779e-001, 5.44660949009885e+000, 4.89997422250522e+000, 8.92540199766663e-001, 6.94392499061394e-001, 5.23787381832914e+000, 6.48195949112430e-001, 8.41600640048571e-001, 6.59646113367811e-001 };

void Over1cc_5_MLP_22_18_2_FindMax(double* vec, double* max, long* maxIndex,int len)
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

void Over1cc_5_MLP_22_18_2_ScaleInputs(double* input, double minimum, double maximum, int size)
{
 double delta;
 long i;
 for(i=0; i<size; i++)
 {
	delta = (maximum-minimum)/(Over1cc_5_MLP_22_18_2_max_input[i]-Over1cc_5_MLP_22_18_2_min_input[i]);
	input[i] = minimum - delta*Over1cc_5_MLP_22_18_2_min_input[i]+ delta*input[i];
 }
}

void Over1cc_5_MLP_22_18_2_softmax(double* vec,int len)
{

  long i, j;
  double sum=0.0;
  for(i=0; i<len; i++)
  {
    if(vec[i]>200)
    {
      double max;
      long maxIndex;
      Over1cc_5_MLP_22_18_2_FindMax(vec, &max, &maxIndex,len);
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

void Over1cc_5_MLP_22_18_2_ComputeFeedForwardSignals(double* MAT_INOUT,double* V_IN,double* V_OUT, double* V_BIAS,int size1,int size2,int layer)
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

void Over1cc_5_MLP_22_18_2_RunNeuralNet_Classification () 
{
  Over1cc_5_MLP_22_18_2_ComputeFeedForwardSignals((double*)Over1cc_5_MLP_22_18_2_input_hidden_weights,Over1cc_5_MLP_22_18_2_input,Over1cc_5_MLP_22_18_2_hidden,Over1cc_5_MLP_22_18_2_hidden_bias,22, 18,0);
  Over1cc_5_MLP_22_18_2_ComputeFeedForwardSignals((double*)Over1cc_5_MLP_22_18_2_hidden_output_wts,Over1cc_5_MLP_22_18_2_hidden,Over1cc_5_MLP_22_18_2_output,Over1cc_5_MLP_22_18_2_output_bias,18, 2,1);
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
	printf("%s","Cont. Input-0(wavelet-HLLglcmIdmn): ");
	scanf("%lg",&Over1cc_5_MLP_22_18_2_input[0]);
	printf("%s","Cont. Input-1(wavelet-LHLglcmIdmn): ");
	scanf("%lg",&Over1cc_5_MLP_22_18_2_input[1]);
	printf("%s","Cont. Input-2(wavelet-LLLglrlmRunLengthNonUniformityNormalized): ");
	scanf("%lg",&Over1cc_5_MLP_22_18_2_input[2]);
	printf("%s","Cont. Input-3(wavelet-LHHglcmIdmn): ");
	scanf("%lg",&Over1cc_5_MLP_22_18_2_input[3]);
	printf("%s","Cont. Input-4(wavelet-LLHglcmImc2): ");
	scanf("%lg",&Over1cc_5_MLP_22_18_2_input[4]);
	printf("%s","Cont. Input-5(wavelet-HHLglcmIdn): ");
	scanf("%lg",&Over1cc_5_MLP_22_18_2_input[5]);
	printf("%s","Cont. Input-6(originalglcmIdn): ");
	scanf("%lg",&Over1cc_5_MLP_22_18_2_input[6]);
	printf("%s","Cont. Input-7(wavelet-LHLglrlmShortRunEmphasis): ");
	scanf("%lg",&Over1cc_5_MLP_22_18_2_input[7]);
	printf("%s","Cont. Input-8(originalglrlmRunLengthNonUniformityNormalized): ");
	scanf("%lg",&Over1cc_5_MLP_22_18_2_input[8]);
	printf("%s","Cont. Input-9(wavelet-LHHgldmDependenceEntropy): ");
	scanf("%lg",&Over1cc_5_MLP_22_18_2_input[9]);
	printf("%s","Cont. Input-10(originalglszmSmallAreaEmphasis): ");
	scanf("%lg",&Over1cc_5_MLP_22_18_2_input[10]);
	printf("%s","Cont. Input-11(wavelet-LLLglszmZoneEntropy): ");
	scanf("%lg",&Over1cc_5_MLP_22_18_2_input[11]);
	printf("%s","Cont. Input-12(originalglrlmRunEntropy): ");
	scanf("%lg",&Over1cc_5_MLP_22_18_2_input[12]);
	printf("%s","Cont. Input-13(wavelet-LLLglcmMCC): ");
	scanf("%lg",&Over1cc_5_MLP_22_18_2_input[13]);
	printf("%s","Cont. Input-14(wavelet-LHLglszmZoneEntropy): ");
	scanf("%lg",&Over1cc_5_MLP_22_18_2_input[14]);
	printf("%s","Cont. Input-15(wavelet-LLLglcmDifferenceEntropy): ");
	scanf("%lg",&Over1cc_5_MLP_22_18_2_input[15]);
	printf("%s","Cont. Input-16(wavelet-LLHglcmMCC): ");
	scanf("%lg",&Over1cc_5_MLP_22_18_2_input[16]);
	printf("%s","Cont. Input-17(wavelet-LHHglszmSmallAreaEmphasis): ");
	scanf("%lg",&Over1cc_5_MLP_22_18_2_input[17]);
	printf("%s","Cont. Input-18(originalglcmSumEntropy): ");
	scanf("%lg",&Over1cc_5_MLP_22_18_2_input[18]);
	printf("%s","Cont. Input-19(wavelet-LHLglszmSmallAreaEmphasis): ");
	scanf("%lg",&Over1cc_5_MLP_22_18_2_input[19]);
	printf("%s","Cont. Input-20(wavelet-HLLglcmImc2): ");
	scanf("%lg",&Over1cc_5_MLP_22_18_2_input[20]);
	printf("%s","Cont. Input-21(originalshapeSphericity): ");
	scanf("%lg",&Over1cc_5_MLP_22_18_2_input[21]);
	for(cont_inps=0;cont_inps<22;cont_inps++)
	{
     //Substitution of missing continuous variables
     if(Over1cc_5_MLP_22_18_2_input[cont_inps] == -9999)
	  Over1cc_5_MLP_22_18_2_input[cont_inps]=Over1cc_5_MLP_22_18_2_MeanInputs[cont_inps];
	}
    Over1cc_5_MLP_22_18_2_ScaleInputs(Over1cc_5_MLP_22_18_2_input,0,1,22);
	Over1cc_5_MLP_22_18_2_RunNeuralNet_Classification();
   //Output Activation is Softmax;
	Over1cc_5_MLP_22_18_2_softmax(Over1cc_5_MLP_22_18_2_output, 2);
	for(i=0;i<2;i++)
	{
      if(max<Over1cc_5_MLP_22_18_2_output[i])
      {
        max=Over1cc_5_MLP_22_18_2_output[i];
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

