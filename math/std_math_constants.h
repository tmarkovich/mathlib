
/*
 * Will clean this up later; should be using namespaces, etc.
 * 
 */


#define ml_pi 3.141592653589793238462643383279502884197169399375105820974944





#define ml_iu   (complex<double>(0.0,1.0))
#define ml_2pi    6.2831853071795865
#define ml_2pi    6.2831853071795865*2.0
#define ml_4pi2   3.9478417604357434e+1
#define ml_pi2     9.8696044010893586
#define ml_sq2pi   2.5066282746310005
#define ml_sqrt2pi 2.5066282746310005
#define ml_sqrt2   1.414213562373095
#define ml_sqrtpi  1.772453850905516
#define ml_log2   6.931471805599453e-1
#define ml_logsqrtpi   0.572364942924700081938738
#define ml_logpi   1.144729885849400174143427

/*
#include "boost/math/constants/constants.hpp"

#ifndef iu
    #define iu      (complex<double>(0.0,1.0))
#endif
#ifndef pi
    #define pi      3.141592653589793238463
#endif
#ifndef _2pi
    #define _2pi    6.2831853071795865
#endif
#ifndef _4pi2
    #define _4pi2   3.9478417604357434e+1
#endif
#ifndef pi2
    #define pi2     9.8696044010893586
#endif
#ifndef sq2pi
    #define sq2pi   2.5066282746310005
#endif
#ifndef sqrt2pi
    #define sqrt2pi 2.5066282746310005
#endif
#ifndef sqrt2
    #define sqrt2   1.414213562373095
#endif
#ifndef sqrtpi
    #define sqrtpi  1.772453850905516
#endif
#ifndef _log2
    #define _log2   6.931471805599453e-1
#endif
#ifndef logsqrtpi
    #define logsqrtpi   0.572364942924700081938738
#endif
#ifndef logpi
    #define logpi   1.144729885849400174143427
#endif
*/

/*
const complex<double> iu(0.0,1.0);
const double pi = 3.141592653589793238463;
const double _2pi = 6.2831853071795865;
const double _4pi2 = 3.9478417604357434e+1;
const double pi2 = 9.8696044010893586;
const double sq2pi = 2.5066282746310005;
const double sqrt2pi = 2.5066282746310005;
const double sqrt2 = 1.414213562373095;
const double sqrtpi = 1.772453850905516;
const double _log2 =  +6.931471805599453e-1;
const double logsqrtpi = 0.572364942924700081938738;
const double logpi = 1.144729885849400174143427;
*/












/*
  BOOST_DEFINE_MATH_CONSTANT(pi, 3.141592653589793238462643383279502884197169399375105820974944, 59230781640628620899862803482534211706798214808651328230664709384460955058223172535940812848111745028410270193852110555964462294895493038196, 0)
  BOOST_DEFINE_MATH_CONSTANT(root_pi, 1.7724538509055160272981674833411451827975, 0, 0)
  BOOST_DEFINE_MATH_CONSTANT(root_half_pi, 1.253314137315500251207882642405522626503, 0, 0)
  BOOST_DEFINE_MATH_CONSTANT(root_two_pi, 2.506628274631000502415765284811045253007, 0, 0)
  BOOST_DEFINE_MATH_CONSTANT(root_ln_four, 1.1774100225154746910115693264596996377473856893858205385225257565000, 2658854698492680841813836877081, 0)
  BOOST_DEFINE_MATH_CONSTANT(e, 2.7182818284590452353602874713526624977572470936999595749669676, 27724076630353547594571382178525166427427466391932003059921817413596629043572900334295260595630738132328627943490763233829880753195251019011, 0)
  BOOST_DEFINE_MATH_CONSTANT(half, 0.5, 0, 0)
  BOOST_DEFINE_MATH_CONSTANT(euler,    0.577215664901532860606512090082402431042159335939923598805, 76723488486, 0)
  BOOST_DEFINE_MATH_CONSTANT(root_two, 1.414213562373095048801688724209698078569671875376948073, 17667973799073247846210703885038753432764157273501384623091229702492483605585073721264412149709993583141322266592750559275579995050115278206, 0)
  BOOST_DEFINE_MATH_CONSTANT(ln_two,   0.693147180559945309417232121458176568075500134360255254, 120680009493393621969694715605863326996418687, 0)
  BOOST_DEFINE_MATH_CONSTANT(ln_ln_two,  -0.36651292058166432701243915823266946945426344783710526305367771367056, 16153193527385494558228566989083583025230453648347655663425171940646634, 0)
  BOOST_DEFINE_MATH_CONSTANT(third, 0.3333333333333333333333333333333333333333333333333333333333333333333333, 3333333333333333333333333333333333333333333333333333333333333333333333333, 0)
  BOOST_DEFINE_MATH_CONSTANT(twothirds, 0.66666666666666666666666666666666666666666666666666666666666666666666, 66666666666666666666666666666666666666666666666666666666666666666666667, 0)
  BOOST_DEFINE_MATH_CONSTANT(pi_minus_three, 0.141592653589793238462643383279502884197169399375105820974944, 59230781640628620899862803482534211706798214808651328230664709384460955058223172535940812848111745028410270193852110555964462294895493038196, 0)
  BOOST_DEFINE_MATH_CONSTANT(four_minus_pi, 0.85840734641020676153735661672049711580283060062489417902505540769218359, 0, 0)
  BOOST_DEFINE_MATH_CONSTANT(pow23_four_minus_pi, 0.79531676737159754434839533505680658072763917332771320544530223438582161, 0, 0)
  BOOST_DEFINE_MATH_CONSTANT(exp_minus_half, 0.6065306597126334236037995349911804534419181354871869556828921587350565194137, 484239986476115079894560, 0)

*/





struct dlognfact
{
    /*
     * this isn't bad, could do with some cleaning up.
     * 
     * makes available log(n!) for 0 <= n <= nmax, loads from file;
     * if file is not available, it computes the data automatically and saves the file for future use.
     * 
     */
    
public:
	
	int nmax;
	double * data;
	
	dlognfact(int nmax):nmax(nmax),data(0) {
		load();				
	}
	
	dlognfact(const dlognfact & rhs):nmax(rhs.nmax),data(0) {
		load();
	}
	
	~dlognfact() { if (data) delete [] data; }
	
	void operator= (const dlognfact & rhs) {
		nmax = rhs.nmax;
		load();
	}
	
	inline const double operator() (const int & n) const {return data[n];}
	
	void load()
	{
		std::ifstream in;
		sprintf(fname,"%s/dlognfact_%d.dat",ML_DATA_DIR,nmax);
		in.open(fname,std::ios::binary);
		
		if ( !(in.good() && in.is_open()))
		{
			dlognfact::generate(nmax);
			
			sprintf(fname,"%s/dlognfact_%d.dat",ML_DATA_DIR,nmax);
			in.open(fname,std::ios::binary);
			assert(in.good() && in.is_open());
		}
		
		if (data) delete [] data;
		data = new double [nmax+1];
		in.read((char *)data,(nmax+1)*8);
		in.close();
	}
	
	static void generate(int N, bool disp=0)
	{		
		mp::mp_init(200);
		
		std::ofstream out;
		sprintf(fname,"%s/dlognfact_%d.dat",ML_DATA_DIR,N);
		out.open(fname, std::fstream::binary);
		assert(out.good() && out.is_open());
		
		double * data_ = new double [N+1];
		mp_real s1 = 0.0;
		mp_real s2 = 0.0;
		
		if (disp) std::cout << "Generating " << N << " dlognfact data.\n";
		for (int n = 0;n<=N;n+=10)
		{
			std::cout << n << " ";
			s1 = (log(gamma( (mp_real)(n+1) )));
			data_[n] = dble(s1);
			for (int np = 1;np<=9 and n+np<=N;np++)
			{
				s2 = s1+log((mp_real)(n+np));
				data_[n+np] = dble(s2);
				s1 = s2;
			}
		}
		std::cout << std::endl;
		
		out.write((char *)(data_),8*(N+1));
		out.close();
		delete [] data_;
	}
	
	
	
};




double dfactorial[] = {
1.0000000000000000000000000e+00,
1.0000000000000000000000000e+00,
2.0000000000000000000000000e+00,
6.0000000000000000000000000e+00,
2.4000000000000000000000000e+01,
1.2000000000000000000000000e+02,
7.2000000000000000000000000e+02,
5.0400000000000000000000000e+03,
4.0320000000000000000000000e+04,
3.6288000000000000000000000e+05,
3.6288000000000000000000000e+06,
3.9916800000000000000000000e+07,
4.7900160000000000000000000e+08,
6.2270208000000000000000000e+09,
8.7178291200000000000000000e+10,
1.3076743680000000000000000e+12,
2.0922789888000000000000000e+13,
3.5568742809600000000000000e+14,
6.4023737057280000000000000e+15,
1.2164510040883200000000000e+17,
2.4329020081766400000000000e+18,
5.1090942171709440000000000e+19,
1.1240007277776076800000000e+21,
2.5852016738884978212864000e+22,
6.2044840173323940999987200e+23,
1.5511210043330986055303168e+25,
4.0329146112660565032278426e+26,
1.0888869450418351940239884e+28,
3.0488834461171387191890280e+29,
8.8417619937397018986200884e+30,
2.6525285981219106821760172e+32,
8.2228386541779224301985099e+33,
2.6313083693369351776635232e+35,
8.6833176188118859387156739e+36,
2.9523279903960415733408153e+38,
1.0333147966386145431134990e+40,
3.7199332678990125486367275e+41,
1.3763753091226345578872115e+43,
5.2302261746660111714185989e+44,
2.0397882081197444123129673e+46,
8.1591528324789768379554852e+47,
3.3452526613163807956284472e+49,
1.4050061177528799549331353e+51,
6.0415263063373834074440829e+52,
2.6582715747884488694165799e+54,
1.1962222086548018857499272e+56,
5.5026221598120891535672379e+57,
2.5862324151116817767349101e+59,
1.2413915592536072528327568e+61,
6.0828186403426752248860161e+62,
3.0414093201713375576366966e+64,
1.5511187532873821894707546e+66,
8.0658175170943876845634592e+67,
4.2748832840600254847912548e+69,
2.3084369733924137924371884e+71,
1.2696403353658276446882824e+73,
7.1099858780486348102543814e+74,
4.0526919504877214099803980e+76,
2.3505613312828784949216570e+78,
1.3868311854568983860514827e+80,
8.3209871127413898950597294e+81,
5.0758021387722483583354016e+83,
3.1469973260387939390320343e+85,
1.9826083154044400849657328e+87,
1.2688693218588416543780690e+89,
8.2476505920824715167353803e+90,
5.4434493907744306944549606e+92,
3.6471110918188683221214362e+94,
2.4800355424368305479709012e+96,
1.7112245242814129737573543e+98,
1.1978571669969892212594747e+100,
8.5047858856786230047017360e+101,
6.1234458376886084639206026e+103,
4.4701154615126843855485063e+105,
3.3078854415193862416022970e+107,
2.4809140811395399745349034e+109,
1.8854947016660503806465265e+111,
1.4518309202828587210082630e+113,
1.1324281178206296793535919e+115,
8.9461821307829757136262888e+116,
7.1569457046263805709010310e+118,
5.7971260207473678413578236e+120,
4.7536433370128420198081801e+122,
3.9455239697206587883704426e+124,
3.3142401345653531943477652e+126,
2.8171041143805501310238342e+128,
2.4227095383672734128129665e+130,
2.1077572983795278543715285e+132,
1.8548264225739843605432413e+134,
1.6507955160908460243967687e+136,
1.4857159644817615149180874e+138,
1.3520015276784029157751425e+140,
1.2438414054641308178973935e+142,
1.1567725070816415658755923e+144,
1.0873661566567430753888939e+146,
1.0329978488239059304919922e+148,
9.9167793487094964784489225e+149,
9.6192759682482120383696575e+151,
9.4268904488832479836729778e+153,
9.3326215443944153252083631e+155,
9.3326215443944150965646705e+157,
9.4259477598383598816354915e+159,
9.6144667150351270792682013e+161,
9.9029007164861804720832422e+163,
1.0299016745145628100140398e+166,
1.0813967582402909767018666e+168,
1.1462805637347083682649390e+170,
1.2265202031961380049931548e+172,
1.3246418194518290179334166e+174,
1.4438595832024936624984529e+176,
1.5882455415227430287482981e+178,
1.7629525510902445873527557e+180,
1.9745068572210740115452900e+182,
2.2311927486598137657245442e+184,
2.5435597334721876551863561e+186,
2.9250936934930159966911857e+188,
3.3931086844518980862340126e+190,
3.9699371608087210616475630e+192,
4.6845258497542909236586970e+194,
5.5745857612076058231040010e+196,
6.6895029134491271205092994e+198,
8.0942985252734440920080086e+200,
9.8750442008336010580046092e+202,
1.2146304367025329301345669e+205,
1.5061417415111409313880481e+207,
1.8826771768889261129076032e+209,
2.3721732428800468511642451e+211,
3.0126600184576594308995034e+213,
3.8562048236258040715513644e+215,
4.9745042224772874589728998e+217,
6.4668554892204741473620343e+219,
8.4715806908788206313986139e+221,
1.1182486511960043297656814e+224,
1.4872707060906857133840633e+226,
1.9929427461615187928130140e+228,
2.6904727073180504073289257e+230,
3.6590428819525488642227787e+232,
5.0128887482749919605321636e+234,
6.9177864726194885807727806e+236,
9.6157231969410893531952817e+238,
1.3462012475717525742234420e+241,
1.8981437590761708897983991e+243,
2.6953641378881628530300954e+245,
3.8543707171800730787494170e+247,
5.5502938327393044385098973e+249,
8.0479260574719917061017006e+251,
1.1749972043909107097291042e+254,
1.7272458904546389230256097e+256,
2.5563239178728653927014406e+258,
3.8089226376305697893300731e+260,
5.7133839564458546839951097e+262,
8.6272097742332399855113439e+264,
1.3113358856834524491588203e+267,
2.0063439050956822953263537e+269,
3.0897696138473507758593174e+271,
4.7891429014633940779577834e+273,
7.4710629262828942234753358e+275,
1.1729568794264144742677105e+278,
1.8532718694937349890004525e+280,
2.9467022724950384027683772e+282,
4.7147236359920616095214446e+284,
7.5907050539472189932190766e+286,
1.2296942187394494177325029e+289,
2.0044015765453026266402837e+291,
3.2872185855342959088410496e+293,
5.4239106661315886750266820e+295,
9.0036917057784375454334676e+297,
1.5036165148649991455999665e+300,
2.5260757449731984218543205e+302,
4.2690680090047051083347677e+304,
7.2574156153079990350004096e+306};


double dfact2n_n[] = {
1.00000000000000000e+00,
2.00000000000000000e+00,
1.20000000000000000e+01,
1.20000000000000000e+02,
1.68000000000000000e+03,
3.02400000000000000e+04,
6.65280000000000000e+05,
1.72972800000000000e+07,
5.18918400000000000e+08,
1.76432256000000000e+10,
6.70442572800000000e+11,
2.81585880576000000e+13,
1.29529505064960000e+15,
6.47647525324800000e+16,
3.49729663675392000e+18,
2.02843204931727360e+20,
1.25762787057670963e+22,
8.30034394580628315e+23,
5.81024076206439815e+25,
4.29957816392765506e+27,
3.35367096786357062e+29,
2.75001019364812789e+31,
2.36500876653739015e+33,
2.12850788988365094e+35,
2.00079741649063214e+37,
1.96078146816081937e+39,
1.99999709752403570e+41,
2.11999692337547784e+43,
2.33199661571302576e+45,
2.65847614191284922e+47,
3.13700184745716245e+49,
3.82714225389773817e+51,
4.82219923991114956e+53,
6.26885901188449474e+55,
8.40027107592522268e+57,
1.15923740847768078e+60,
1.64611712003830671e+62,
2.40333099525592771e+64,
3.60499649288389138e+66,
5.55169459904119318e+68,
8.77167746648508515e+70,
1.42101174957058379e+73,
2.35887950428716913e+75,
4.01009515728818761e+77,
6.97756557368144678e+79,
1.24200667211529748e+82,
2.26045214324984122e+84,
4.20444098644470500e+86,
7.98843787424493892e+88,
1.54975694760351825e+91,
3.06851875625496600e+93,
6.19840788763503091e+95,
1.27687202485281646e+98,
2.68143125219091447e+100,
5.73826287968855695e+102,
1.25094130777210545e+105,
2.77708970325407407e+107,
6.27622272935420716e+109,
1.44353122775146774e+112,
3.37786307293843433e+114,
8.03931411359347354e+116,
1.94551401548962065e+119,
4.78596447810446741e+121,
1.19649111952611670e+124,
3.03908744359633666e+126,
7.84084560447854908e+128,
2.05430154837337957e+131,
5.46444211867319012e+133,
1.47539937204176127e+136,
4.04259427939442613e+138,
1.12384120967165048e+141,
3.16923221127405421e+143,
9.06400412424379507e+145,
2.62856119603070044e+148,
7.72796991633025964e+150,
2.30293503506641723e+153,
6.95486380590058008e+155,
2.12818832460557753e+158,
6.59738380627729037e+160,
2.07157851517106933e+163,
6.58761967824400042e+165,
2.12121353639456785e+168,
6.91515612864629195e+170,
2.28200152245327623e+173,
7.62188508499394289e+175,
2.57619715872795261e+178,
8.81059428284959729e+180,
3.04846562186596080e+183,
1.06696296765308628e+186,
3.77704890549192590e+188,
1.35218350816610930e+191,
4.89490429956131594e+193,
1.79153497363944154e+196,
6.62867940246593403e+198,
2.47912609652225957e+201,
9.37109664485413968e+203,
3.57975891833428122e+206,
1.38178694247703275e+209,
5.38896907566042748e+211,
2.12325381581020847e+214,
8.45055018692462898e+216,
3.39712117514370092e+219,
1.37923119710834260e+222,
5.65484790814420513e+224,
2.34110703397170090e+227,
9.78582740200171028e+229,
4.12961916364472145e+232,
1.75921776371265140e+235,
7.56463638396440116e+237,
3.28305219064054980e+240,
1.43797685950056091e+243,
6.35585771899247925e+245,
2.83471254267064539e+248,
1.27562064420179044e+251,
5.79131772467612861e+253,
2.65242351790166696e+256,
1.22541966527057018e+259,
5.71045564016085715e+261,
2.68391415087560278e+264,
1.27217530751503574e+267,
6.08099796992187121e+269,
2.93104102150234151e+272,
1.42448593645013810e+275,
6.97998108860567650e+277,
3.44811065777120400e+280,
1.71715910757005973e+283,
8.62013872000169958e+285,
4.36179019232086022e+288,
2.22451299808363870e+291,
1.14339968101499025e+294,
5.92281034765764946e+296,
3.09170700147729303e+299,
1.62623788277705620e+302,
8.61906077871839770e+304,
4.60257845583562455e+307};














