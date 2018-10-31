/******************************************************************ch02  开始学习c++****************************************************************/
// myfirst.cpp--displays a message

//#include <iostream>                           // a PREPROCESSOR directive
//int main()                                    // function header
//{                                             // start of function body
//    using namespace std;                      // make definitions visible
//    cout << "Come up and C++ me some time.";  // message
//    cout << endl;                             // start a new line
//    cout << "You won't regret it!" << endl;   // more output
//// If the output window closes before you can read it,
//// add the following code:
//    // cout << "Press any key to continue." <<endl;
//	// cin.get();
//    return 0;                                 // terminate main()
//}                                             // end of function body


//#include <iostream>
//     int
//main
//() {   using
//    namespace
//         std; cout
//            <<
//"Come up and C++ me some time."
//;    cout <<
//endl; cout <<
//"You won't regret it!" <<
//endl;/*cin.get();*/return 0; }



// carrots.cpp -- food processing program
// uses and displays a variable

//#include <iostream>
//
//int main()
//{
//    using namespace std;
//
//    int carrots;            // declare an integer variable
//
//    carrots = 25;            // assign a value to the variable
//    cout << "I have ";
//    cout << carrots;        // display the value of the variable
//    cout << " carrots.";
//    cout << endl;
//    carrots = carrots - 1;  // modify the variable
//    cout << "Crunch, crunch. Now I have " << carrots << " carrots." << endl;
//    // cin.get();
//	return 0;
//}


// getinfo.cpp -- input and output

//#include <iostream>
//
//int main()
//{
//    using namespace std;
//
//    int carrots;
//
//    cout << "How many carrots do you have?" << endl;
//    cin >> carrots;                // C++ input
//    cout << "Here are two more. ";
//    carrots = carrots + 2;
//// the next line concatenates output
//    cout << "Now you have " << carrots << " carrots." << endl;
//	// cin.get();
//	// cin.get();
//    return 0;
//}


// sqrt.cpp -- using the sqrt() function

//#include <iostream>
//#include <cmath>    // or math.h
//
//int main()
//{
//    using namespace std;
//
//    double area;
//    cout << "Enter the floor area, in square feet, of your home: ";
//    cin >> area;
//    double side;
//    side = sqrt(area);
//    cout << "That's the equivalent of a square " << side
//         << " feet to the side." << endl;
//    cout << "How fascinating!" << endl;
//	// cin.get();
//	// cin.get();
//    return 0;
//}


// ourfunc.cpp -- defining your own function

//#include <iostream>
//void simon(int);    // function prototype for simon()
//
//int main()
//{
//    using namespace std;
//    simon(3);       // call the simon() function
//    cout << "Pick an integer: ";
//    int count;
//    cin >> count;
//    simon(count);   // call it again
//    cout << "Done!" << endl;
//	// cin.get();
//    // cin.get();
//    return 0;
//}
//
//void simon(int n)   // define the simon() function
//{
//    using namespace std;
//
//    cout << "Simon says touch your toes " << n << " times." << endl;
//}                   // void functions don't need return statements


// convert.cpp -- converts stone to pounds

//#include <iostream>
//int stonetolb(int);     // function prototype
//int main()
//{
//    using namespace std;
//    int stone;
//    cout << "Enter the weight in stone: ";
//    cin >> stone;
//    int pounds = stonetolb(stone);
//    cout << stone << " stone = ";
//    cout << pounds << " pounds." << endl;
//	// cin.get();
//    // cin.get();
//    return 0;
//}
//
//int stonetolb(int sts)
//{
//     return 14 * sts;
//}

////////////////////////////////////////////////////////////////////////////////////////


//#include <iostream>
//
//// practice 1
//void p2_1(void) {
//	std::cout << "xc feng" << std::endl;
//	std::cout << "China, shandong Province, dezhou" << std::endl;
//}
//
//
//// practice 2
//void p2_2(void) {
//	int ilong = 0;
//	int iyards = 0;
//	std::cout << "Input the distance in long:";
//	std::cin >> ilong;
//	iyards = 220 * ilong;
//	std::cout << "the distance in yards is " << iyards << std::endl;
//
//}
//
//
//// practice 3
//void string1(void) {
//	std::cout << "Three blind mice" << std::endl;
//}
//
//void string2(void) {
//	std::cout << "See how they run" << std::endl;
//}
//void p2_3(void) {
//	string1();
//	string1();
//	string2();
//	string2();
//
//}
//
//
//// practice 4
//void p2_4(void) {
//	int years = 0;
//	int months = 0;
//	int days=0;
//	std::cout << "Enter your age:";
//	std::cin >> years;
//
//	months = years * 12;
//	std::cout << years << " years contain " << months << " monthes!" << std::endl;
//	std::cout<<years<<" years contain "<<years*365<<" days!"<<std::endl;
//	std::cout<<"好好珍惜现在的生活！"<<std::endl;
//}
//
//
//// practice 5
//double Celsius2Fahrenheit(double Celsius) {
//	return (1.8 * Celsius + 32.0);
//}
//void p2_5(void) {
//	double Celsius = 0.0;
//	double Fahrenheit = 0.0;
//	std::cout << "Please enter a Celsius value :";
//	std::cin >> Celsius;
//	Fahrenheit = Celsius2Fahrenheit(Celsius);
//
//	std::cout << Celsius << " degrees Celsius is " << Fahrenheit << " defrees Fahrenheit." << std::endl;
//
//}
//
//
//// practice 6
//double LightYears2Astronomical(double LightYears) {
//	return (LightYears * 63240);
//}
//void p2_6(void) {
//	double lightYears = 0;
//	double astronomical = 0;
//
//	std::cout << "Enter the number of light years: ";
//	std::cin >> lightYears;
//
//	astronomical = LightYears2Astronomical(lightYears);
//
//	std::cout << lightYears << " light years = " << astronomical << " astronomical units." << std::endl;
//
//}
//
//
//// practice 7
//void disTime(int hours, int minutes) {
//	std::cout << "Time: " << hours << ":" << minutes << std::endl;
//
//}
//void p2_7(void) {
//	int hours = 0;
//	int minutes = 0;
//	std::cout << "Enter the number of hours: ";
//	std::cin >> hours;
//	std::cout << "Enter the number of minutes: ";
//	std::cin >> minutes;
//	disTime(hours, minutes);
//
//}
//
//
//int main(int argc, char **argv) {
//	p2_7();
//
//	return 0;
//}

/******************************************************************ch03 处理数据****************************************************************/


// limits.cpp -- some integer limits

//#include <iostream>
//#include <climits>              // use limits.h for older systems
//int main() {
//	using namespace std;
//	int n_int = INT_MAX;        // initialize n_int to max int value
//	short n_short = SHRT_MAX;   // symbols defined in climits file
//	long n_long = LONG_MAX;
//	long long n_llong = LLONG_MAX;
//
//	// sizeof operator yields size of type or of variable
//	cout << "int is " << sizeof (int) << " bytes." << endl;
//	cout << "short is " << sizeof n_short << " bytes." << endl;
//	cout << "long is " << sizeof n_long << " bytes." << endl;
//	cout << "long long is " << sizeof n_llong << " bytes." << endl;
//	cout << endl;
//
//	cout << "Maximum values:" << endl;
//	cout << "int: " << n_int << endl;
//	cout << "short: " << n_short << endl;
//	cout << "long: " << n_long << endl;
//	cout << "long long: " << n_llong << endl << endl;
//
//	cout << "Minimum int value = " << INT_MIN << endl;
//	cout << "Bits per byte = " << CHAR_BIT << endl;
//	// cin.get();
//	return 0;
//}


//		c++初始化

//#include<iostream>
//using namespace std;
//int main()
//{
//	int a(2);
//	cout<<a<<endl;
// }


// exceed.cpp -- exceeding some integer limits

//#include <iostream>
//#define ZERO 0      // makes ZERO symbol for 0 value
//#include <climits>  // defines INT_MAX as largest int value
//int main() {
//	using namespace std;
//	short sam = SHRT_MAX;     // initialize a variable to max value
//	unsigned short sue = sam;// okay if variable sam already defined
//
//	cout << "Sam has " << sam << " dollars and Sue has " << sue;
//	cout << " dollars deposited." << endl
//	     << "Add $1 to each account." << endl << "Now ";
//	sam = sam + 1;
//	sue = sue + 1;
//	cout << "Sam has " << sam << " dollars and Sue has " << sue;
//	cout << " dollars deposited.\nPoor Sam!" << endl;
//	sam = ZERO;
//	sue = ZERO;
//	cout << "Sam has " << sam << " dollars and Sue has " << sue;
//	cout << " dollars deposited." << endl;
//	cout << "Take $1 from each account." << endl << "Now ";
//	sam = sam - 1;
//	sue = sue - 1;
//	cout << "Sam has " << sam << " dollars and Sue has " << sue;
//	cout << " dollars deposited." << endl << "Lucky Sue!" << endl;
//	// cin.get();
//	return 0;
//}


// hexoct1.cpp -- shows hex and octal literals

//#include <iostream>
//int main() {
//	using namespace std;
//	int chest = 42;     // decimal integer literal
//	int waist = 0x42;   // hexadecimal integer literal
//	int inseam = 042;   // octal integer literal
//
//	cout << "Monsieur cuts a striking figure!\n";
//	cout << "chest = " << chest << " (42 in decimal)\n";
//	cout << "waist = " << waist << " (0x42 in hex)\n";
//	cout << "inseam = " << inseam << " (042 in octal)\n";
//	// cin.get();
//	return 0;
//}


// hexoct2.cpp -- display values in hex and octal

//#include <iostream>
//using namespace std;
//int main() {
//	using namespace std;
//	int chest = 42;
//	int waist = 42;
//	int inseam = 42;
//
//	cout << "Monsieur cuts a striking figure!"  << endl;
//	cout << "chest = " << chest << " (decimal for 42)" << endl;
//	cout << hex;      // manipulator for changing number base
//	cout << "waist = " << waist << " (hexadecimal for 42)" << endl;
//	cout << oct;      // manipulator for changing number base
//	cout << "inseam = " << inseam << " (octal for 42)" << endl;
//	// cin.get();
//	return 0;
//}


// chartype.cpp -- the char type

//#include <iostream>
//int main( ) {
//	using namespace std;
//	char ch;        // declare a char variable
//
//	cout << "Enter a character: " << endl;
//	cin >> ch;
//	cout << "Hola! ";
//	cout << "Thank you for the " << ch << " character." << endl;
//	// cin.get();
//	// cin.get();
//	return 0;
//}


// morechar.cpp -- the char type and int type contrasted

//#include <iostream>
//int main() {
//	using namespace std;
//	char ch = 'M';       // assign ASCII code for M to ch
//	int i = ch;          // store same code in an int
//	cout << "The ASCII code for " << ch << " is " << i << endl;
//
//	cout << "Add one to the character code:" << endl;
//	ch = ch + 1;          // change character code in ch
//	i = ch;               // save new character code in i
//	cout << "The ASCII code for " << ch << " is " << i << endl;
//
//	// using the cout.put() member function to display a char
//	cout << "Displaying char ch using cout.put(ch): ";
//	cout.put(ch);
//
//	// using cout.put() to display a char constant
//	cout.put('!');
//
//	cout << endl << "Done" << endl;
//	// cin.get();
//	return 0;
//}


// bondini.cpp -- using escape sequences

//#include <iostream>
//int main() {
//	using namespace std;
//	cout << "\aOperation \"HyperHype\" is now activated!\n";
//	cout << "Enter your agent code:________\b\b\b\b\b\b\b\b";
//	long code;
//	cin >> code;
//	cout << "\aYou entered " << code << "...\n";
//	cout << "\aCode verified! Proceed with Plan Z3!\n";
//	// cin.get();
//	// cin.get();
//	return 0;
//}


// floatnum.cpp -- floating-point types

//#include <iostream>
//int main() {
//	using namespace std;
//	cout.setf(ios_base::fixed, ios_base::floatfield); // fixed-point
//	float tub = 10.0 / 3.0;     // good to about 6 places
//	double mint = 10.0 / 3.0;   // good to about 15 places
//	const float million = 1.0e6;
//
//	cout << "tub = " << tub;
//	cout << ", a million tubs = " << million * tub;
//	cout << ",\nand ten million tubs = ";
//	cout << 10 * million * tub << endl;
//
//	cout << "mint = " << mint << " and a million mints = ";
//	cout << million * mint << endl;
//	// cin.get();
//	return 0;
//}


// fltadd.cpp -- precision problems with float

//#include <iostream>
//int main() {
//	using namespace std;
//	float a = 2.34E+22f;
//	float b = a + 1.0f;
//
//	cout << "a = " << a << endl;
//	cout << "b - a = " << b - a << endl;
//	// cin.get();
//	return 0;
//}


// arith.cpp -- some C++ arithmetic
//#include <iostream>
//int main() {
//	using namespace std;
//	float hats, heads;
//
//	cout.setf(ios_base::fixed, ios_base::floatfield); // fixed-point
//	cout << "Enter a number: ";
//	cin >> hats;
//	cout << "Enter another number: ";
//	cin >> heads;
//
//	cout << "hats = " << hats << "; heads = " << heads << endl;
//	cout << "hats + heads = " << hats + heads << endl;
//	cout << "hats - heads = " << hats - heads << endl;
//	cout << "hats * heads = " << hats * heads << endl;
//	cout << "hats / heads = " << hats / heads << endl;
//	// cin.get();
//	// cin.get();
//	return 0;
//}


// divide.cpp -- integer and floating-point division

//#include <iostream>
//int main() {
//	using namespace std;
//	cout.setf(ios_base::fixed, ios_base::floatfield);
//	cout << "Integer division: 9/5 = " << 9 / 5  << endl;
//	cout << "Floating-point division: 9.0/5.0 = ";
//	cout << 9.0 / 5.0 << endl;
//	cout << "Mixed division: 9.0/5 = " << 9.0 / 5  << endl;
//	cout << "double constants: 1e7/9.0 = ";
//	cout << 1.e7 / 9.0 <<  endl;
//	cout << "float constants: 1e7f/9.0f = ";
//	cout << 1.e7f / 9.0f <<  endl;
//	// cin.get();
//	return 0;
//}


// modulus.cpp -- uses % operator to convert lbs to stone

//#include <iostream>
//int main() {
//	using namespace std;
//	const int Lbs_per_stn = 14;
//	int lbs;
//
//	cout << "Enter your weight in pounds: ";
//	cin >> lbs;
//	int stone = lbs / Lbs_per_stn;      // whole stone
//	int pounds = lbs % Lbs_per_stn;     // remainder in pounds
//	cout << lbs << " pounds are " << stone
//	     << " stone, " << pounds << " pound(s).\n";
//	// cin.get();
//	// cin.get();
//	return 0;
//}


// assign.cpp -- type changes on assignment

//#include <iostream>
//int main() {
//	using namespace std;
//	cout.setf(ios_base::fixed, ios_base::floatfield);
//	float tree = 3;     // int converted to float
//	int guess = int(3.9832); // float converted to int
//	int debt = int(7.2E12);  // result not defined in C++
//	cout << "tree = " << tree << endl;
//	cout << "guess = " << guess << endl;
//	cout << "debt = " << debt << endl;
//	// cin.get();
//	return 0;
//}


// typecast.cpp -- forcing type changes

//#include <iostream>
//int main() {
//	using namespace std;
//	int auks, bats, coots;
//
//	// the following statement adds the values as double,
//	// then converts the result to int
//	auks = 19.99 + 11.99;
//
//	// these statements add values as int
//	bats = (int) 19.99 + (int) 11.99;   // old C syntax
//	coots = int (19.99) + int (11.99);  // new C++ syntax
//	cout << "auks = " << auks << ", bats = " << bats;
//	cout << ", coots = " << coots << endl;
//
//	char ch = 'Z';
//	cout << "The code for " << ch << " is ";    // print as char
//	cout << int(ch) << endl;                    // print as int
//	cout << "Yes, the code is ";
//	cout << static_cast<int>(ch) << endl;       // using static_cast
//	// cin.get();
//	return 0;
//}

///////////////////////////////////////////////////////////////////////////////

//#include <iostream>
//
//using std::cout;
//using std::cin;
//using std::endl;
//
//
////practice 1
//const int Foot2Inch = 12;
//void p3_1(void) {
//	int inch_input = 0;
//	int inch_output = 0;
//	int foot = 0;
//
//	cout << "Please input you height in inch:___\b\b\b";
//	cin >> inch_input;
//	foot = inch_input / Foot2Inch;
//	inch_output = inch_input % Foot2Inch;
//
//	cout << "Your height in inch was: " << inch_input << "; Your height in foot and inch was: " << foot << " foot " << inch_output << " inch!" << endl;
//}
//
//
//// practice 2
//const double Inch2Meter = 0.254;
//const double Kilo2Pound = 2.2;
//void p3_2(void) {
//	double height_foot = 0.0;
//	double height_inch = 0.0;
//	double height_meter = 0.0;
//	double weight_pound = 0.0;
//	double weight_kilo = 0.0;
//	double BMI = 0.0;
//
//	cout << "Enter your height in foot and inch" << endl;
//	cout << "First enter the foot: ";
//	cin >> height_foot;
//	cout << "Second enter the inch: ";
//	cin >> height_inch;
//
//	cout << "Enter you weight in pound: ";
//	cin >> weight_pound;
//
//	height_meter = (height_foot * Foot2Inch + height_foot) * Inch2Meter;
//	weight_kilo = weight_pound / Kilo2Pound;
//
//	BMI = weight_kilo / (height_meter * height_meter);
//
//	cout << "Your BIM is " << BMI << endl;
//}
//
//
//// practice 3
//void p3_3(void) {
//	int degrees = 0;
//	int minutes = 0;
//	int seconds = 0;
//	double total = 0.0;
//
//	cout << "Enter a latitude in degrees, minute and seconds:" << endl;
//	cout << "First, enter the degrees: ";
//	cin >> degrees;
//	cout << "Next, enter the minucts of arc: ";
//	cin >> minutes;
//	cout << "Finally, enter the seconds of arc: ";
//	cin >> seconds;
//
//	total = degrees + minutes / 60.0 + seconds / 3600.0;
//	cout << degrees << " degrees, " << minutes << " minutes, " << seconds << " seconds = " << total << " degrees." << endl;
//}
//
//
//// practice 4
//void p3_4(void) {
//	long long total_seconds = 0;
//	int days = 0;
//	int hours = 0;
//	int minutes = 0;
//	int seconds = 0;
//
//	cout << "Enter the number of seconds: ";
//	cin >> total_seconds;
//
//	days = total_seconds / (24 * 60 * 60);
//	hours = ((total_seconds % (24 * 60 * 60)) / (60 * 60));
//	minutes = ((total_seconds % (60 * 60)) / 60);
//	seconds = (total_seconds % 60);
//
//	cout << total_seconds << " seconds = " << days << " days, " << hours << " hours, " << minutes << " minutes, " << seconds << " seconds" << endl;
//}
//
//
//// practice 5
//void p3_5(void) {
//	long long world_population = 0;
//	long long US_population = 0;
//	double rate = 0.0;
//
//	cout << "Enter the world's population :";
//	cin >> world_population;
//
//	cout << "Enter the population of the US: ";
//	cin >> US_population;
//
//	rate = double(US_population) / (world_population);
//	cout << "The population of the US is " << rate * 100 << "% of the world population." << endl;
//}
//
//
//// practice 6
//void p3_6(void) {
//	double mile = 0.0;
//	double gallon = 0.0;
//	double mile_per_gallon = 0.0;
//
//	cout << "Enter the distance in mile you drive: ";
//	cin >> mile;
//	cout << "Enter the comsumption of oil: ";
//	cin >> gallon;
//
//	mile_per_gallon = mile / gallon;
//	cout << "Average fuel comsuption: " << mile_per_gallon << " mile/gallon" << endl;
//}
//
//
//// practice 7
//void p3_7(void) {
//	double fuel_comsuption_eu = 0.0;
//	double fuel_comsuption_us = 0.0;
//
//	cout << "Enter the fuel comsuption in Europ standard: ";
//	cin >> fuel_comsuption_eu;
//
//	fuel_comsuption_us = fuel_comsuption_eu / 19 * 12.41;
//	cout << "the fuel comsuption in US standard is " << fuel_comsuption_us << "/100KM" << endl;
//}
//
//
//int main() {
//	p3_7();
//
//	return 0;
//}


/******************************************************************ch04  复合类型****************************************************************/

// arrayone.cpp -- small arrays of integers

//#include <iostream>
//int main() {
//	using namespace std;
//	int yams[3];    // creates array with three elements
//	yams[0] = 7;    // assign value to first element
//	yams[1] = 8;
//	yams[2] = 6;
//
//	int yamcosts[3] = {20, 30, 5}; // create, initialize array
//// NOTE: If your C++ compiler or translator can't initialize
//// this array, use static int yamcosts[3] instead of
//// int yamcosts[3]
//
//	cout << "Total yams = ";
//	cout << yams[0] + yams[1] + yams[2] << endl;
//	cout << "The package with " << yams[1] << " yams costs ";
//	cout << yamcosts[1] << " cents per yam.\n";
//	int total = yams[0] * yamcosts[0] + yams[1] * yamcosts[1];
//	total = total + yams[2] * yamcosts[2];
//	cout << "The total yam expense is " << total << " cents.\n";
//
//	cout << "\nSize of yams array = " << sizeof yams;
//	cout << " bytes.\n";
//	cout << "Size of one element = " << sizeof yams[0];
//	cout << " bytes.\n";
//	// cin.get();
//	return 0;
//}


// strings.cpp -- storing strings in an array

//#include <iostream>
//#include <cstring>  // for the strlen() function
//int main() {
//	using namespace std;
//	const int Size = 15;
//	char name1[Size];               // empty array
//	char name2[Size] = "C++owboy";  // initialized array
//	// NOTE: some implementations may require the static keyword
//	// to initialize the array name2
//
//	cout << "Howdy! I'm " << name2;
//	cout << "! What's your name?\n";
//	cin >> name1;
//	cout << "Well, " << name1 << ", your name has ";
//	cout << strlen(name1) << " letters and is stored\n";
//	cout << "in an array of " << sizeof name1 << " bytes.\n";
//	cout << "Your initial is " << name1[0] << ".\n";
//	name2[3] = '\0';                // set to null character
//	cout << "Here are the first 3 characters of my name: ";
//	cout << name2 << endl;
//	// cin.get();
//	// cin.get();
//	return 0;
//}


// instr1.cpp -- reading more than one string

//#include <iostream>
//int main() {
//	using namespace std;
//	const int ArSize = 20;
//	char name[ArSize];
//	char dessert[ArSize];
//
//	cout << "Enter your name:\n";
//	cin >> name;
//	cout << "Enter your favorite dessert:\n";
//	cin >> dessert;
//	cout << "I have some delicious " << dessert;
//	cout << " for you, " << name << ".\n";
//	// cin.get();
//	// cin.get();
//	return 0;
//}


// instr2.cpp -- reading more than one word with 			getline

//#include <iostream>
//int main() {
//	using namespace std;
//	const int ArSize = 20;
//	char name[ArSize];
//	char dessert[ArSize];
//
//	cout << "Enter your name:\n";
//	cin.getline(name, ArSize);  // reads through newline
//	cout << "Enter your favorite dessert:\n";
//	cin.getline(dessert, ArSize);
//	cout << "I have some delicious " << dessert;
//	cout << " for you, " << name << ".\n";
//	// cin.get();
//	return 0;
//}


// instr3.cpp -- reading more than one word with 			get() & get()

//#include <iostream>
//int main() {
//	using namespace std;
//	const int ArSize = 20;
//	char name[ArSize];
//	char dessert[ArSize];
//
//	cout << "Enter your name:\n";
//	cin.get(name, ArSize).get();    // read string, newline
//	cout << "Enter your favorite dessert:\n";
//	cin.get(dessert, ArSize).get();
//	cout << "I have some delicious " << dessert;
//	cout << " for you, " << name << ".\n";
//	// cin.get();
//	return 0;
//}


// numstr.cpp -- following number input with line input			,error

//#include <iostream>
//int main() {
//	using namespace std;
//	cout << "What year was your house built?\n";
//	int year;
//	cin >> year;
//	// cin.get();
//	cout << "What is its street address?\n";
//	char address[80];
//	cin.getline(address, 80);
//	cout << "Year built: " << year << endl;
//	cout << "Address: " << address << endl;
//	cout << "Done!\n";
//	// cin.get();
//	return 0;
//}


// strtype1.cpp -- using the C++ string class

//#include <iostream>
//#include <string>               // make string class available
//int main() {
//	using namespace std;
//	char charr1[20];            // create an empty array
//	char charr2[20] = "jaguar"; // create an initialized array
//	string str1;                // create an empty string object
//	string str2 = "panther";    // create an initialized string
//
//	cout << "Enter a kind of feline: ";
//	cin >> charr1;
//	cout << "Enter another kind of feline: ";
//	cin >> str1;                // use cin for input
//	cout << "Here are some felines:\n";
//	cout << charr1 << " " << charr2 << " "
//	     << str1 << " " << str2 // use cout for output
//	     << endl;
//	cout << "The third letter in " << charr2 << " is "
//	     << charr2[2] << endl;
//	cout << "The third letter in " << str2 << " is "
//	     << str2[2] << endl;    // use array notation
//	// cin.get();
//	// cin.get();
//
//	return 0;
//}


// strtype2.cpp �- assigning, adding, and appending

//#include <iostream>
//#include <string>               // make string class available
//int main() {
//	using namespace std;
//	string s1 = "penguin";
//	string s2, s3;
//
//	cout << "You can assign one string object to another: s2 = s1\n";
//	s2 = s1;
//	cout << "s1: " << s1 << ", s2: " << s2 << endl;
//	cout << "You can assign a C-style string to a string object.\n";
//	cout << "s2 = \"buzzard\"\n";
//	s2 = "buzzard";
//	cout << "s2: " << s2 << endl;
//	cout << "You can concatenate strings: s3 = s1 + s2\n";
//	s3 = s1 + s2;
//	cout << "s3: " << s3 << endl;
//	cout << "You can append strings.\n";
//	s1 += s2;
//	cout <<"s1 += s2 yields s1 = " << s1 << endl;
//	s2 += " for a day";
//	cout <<"s2 += \" for a day\" yields s2 = " << s2 << endl;
//
//	//cin.get();
//	return 0;
//}


// strtype3.cpp -- more string class features

//#include <iostream>
//#include <string>               // make string class available
//#include <cstring>              // C-style string library
//int main() {
//	using namespace std;
//	char charr1[20];
//	char charr2[20] = "jaguar";
//	string str1;
//	string str2 = "panther";
//
//	// assignment for string objects and character arrays
//	str1 = str2;                // copy str2 to str1
//	strcpy(charr1, charr2);     // copy charr2 to charr1
//
//	// appending for string objects and character arrays
//	str1 += " paste";           // add paste to end of str1
//	strcat(charr1, " juice");   // add juice to end of charr1
//
//	// finding the length of a string object and a C-style string
//	int len1 = str1.size();     // obtain length of str1
//	int len2 = strlen(charr1);  // obtain length of charr1
//
//	cout << "The string " << str1 << " contains "
//	     << len1 << " characters.\n";
//	cout << "The string " << charr1 << " contains "
//	     << len2 << " characters.\n";
//	// cin.get();
//
//	return 0;
//}


// strtype4.cpp -- line input

//#include <iostream>
//#include <string>               // make string class available
//#include <cstring>              // C-style string library
//int main() {
//	using namespace std;
//	char charr[20];
//	string str;
//
//	cout << "Length of string in charr before input: "
//	     << strlen(charr) << endl;
//	cout << "Length of string in str before input: "
//	     << str.size() << endl;
//	cout << "Enter a line of text:\n";
//	cin.getline(charr, 20);     // indicate maximum length
//	cout << "You entered: " << charr << endl;
//	cout << "Enter another line of text:\n";
//	getline(cin, str);          // cin now an argument; no length specifier
//	cout << "You entered: " << str << endl;
//	cout << "Length of string in charr after input: "
//	     << strlen(charr) << endl;
//	cout << "Length of string in str after input: "
//	     << str.size() << endl;
//	// cin.get();
//
//	return 0;
//}


// structur.cpp -- a simple structure

//#include <iostream>
//struct inflatable { // structure declaration
//	char name[20];
//	float volume;
//	double price;
//};
//
//int main() {
//	using namespace std;
//	inflatable guest = {
//		"Glorious Gloria",  // name value
//		1.88,               // volume value
//		29.99               // price value
//	};  // guest is a structure variable of type inflatable
//// It's initialized to the indicated values
//	inflatable pal = {
//		"Audacious Arthur",
//		3.12,
//		32.99
//	};  // pal is a second variable of type inflatable
//// NOTE: some implementations require using
//// static inflatable guest =
//
//	cout << "Expand your guest list with " << guest.name;
//	cout << " and " << pal.name << "!\n";
//// pal.name is the name member of the pal variable
//	cout << "You can have both for $";
//	cout << guest.price + pal.price << "!\n";
//	// cin.get();
//	return 0;
//}


// assgn_st.cpp -- assigning structures

//#include <iostream>
//struct inflatable {
//	char name[20];
//	float volume;
//	double price;
//};
//int main() {
//	using namespace std;
//	inflatable bouquet = {
//		"sunflowers",
//		0.20,
//		12.49
//	};
//	inflatable choice;
//	cout << "bouquet: " << bouquet.name << " for $";
//	cout << bouquet.price << endl;
//
//	choice = bouquet;  // assign one structure to another
//	cout << "choice: " << choice.name << " for $";
//	cout << choice.price << endl;
//	// cin.get();
//	return 0;
//}


// arrstruc.cpp -- an array of structures

//#include <iostream>
//struct inflatable {
//	char name[20];
//	float volume;
//	double price;
//};
//int main() {
//	using namespace std;
//	inflatable guests[2] = {        // initializing an array of structs
//		{"Bambi", 0.5, 21.99},      // first structure in array
//		{"Godzilla", 2000, 565.99}  // next structure in array
//	};
//
//	cout << "The guests " << guests[0].name << " and " << guests[1].name
//	     << "\nhave a combined volume of "
//	     << guests[0].volume + guests[1].volume << " cubic feet.\n";
//	// cin.get();
//	return 0;
//}


// address.cpp -- using the & operator to find addresses

//#include <iostream>
//int main() {
//	using namespace std;
//	int donuts = 6;
//	double cups = 4.5;
//
//	cout << "donuts value = " << donuts;
//	cout << " and donuts address = " << &donuts << endl;
//// NOTE: you may need to use unsigned (&donuts)
//// and unsigned (&cups)
//	cout << "cups value = " << cups;
//	cout << " and cups address = " << &cups << endl;
//	// cin.get();
//	return 0;
//}


// pointer.cpp -- our first pointer variable

//#include <iostream>
//int main() {
//	using namespace std;
//	int updates = 6;        // declare a variable
//	int * p_updates;        // declare pointer to an int
//
//	p_updates = &updates;   // assign address of int to pointer
//
//// express values two ways
//	cout << "Values: updates = " << updates;
//	cout << ", *p_updates = " << *p_updates << endl;
//
//// express address two ways
//	cout << "Addresses: &updates = " << &updates;
//	cout << ", p_updates = " << p_updates << endl;
//
//// use pointer to change value
//	*p_updates = *p_updates + 1;
//	cout << "Now updates = " << updates << endl;
//	// cin.get();
//	return 0;
//}


// init_ptr.cpp -- initialize a pointer

//#include <iostream>
//int main() {
//	using namespace std;
//	int higgens = 5;
//	int * pt = &higgens;
//
//	cout << "Value of higgens = " << higgens
//	     << "; Address of higgens = " << &higgens << endl;
//	cout << "Value of *pt = " << *pt
//	     << "; Value of pt = " << pt << endl;
//	// cin.get();
//	return 0;
//}


// use_new.cpp -- using the new operator

//#include <iostream>
//int main() {
//	using namespace std;
//	int nights = 1001;
//	int * pt = new int;         // allocate space for an int
//	*pt = 1001;                 // store a value there
//
//	cout << "nights value = ";
//	cout << nights << ": location " << &nights << endl;
//	cout << "int ";
//	cout << "value = " << *pt << ": location = " << pt << endl;
//
//	double * pd = new double;   // allocate space for a double
//	*pd = 10000001.0;           // store a double there
//
//	cout << "double ";
//	cout << "value = " << *pd << ": location = " << pd << endl;
//	cout << "location of pointer pd: " << &pd << endl;
//	cout << "size of pt = " << sizeof(pt);
//	cout << ": size of *pt = " << sizeof(*pt) << endl;
//	cout << "size of pd = " << sizeof pd;
//	cout << ": size of *pd = " << sizeof(*pd) << endl;
//	// cin.get();
//	return 0;
//}


// arraynew.cpp -- using the new operator for arrays

//#include <iostream>
//int main() {
//	using namespace std;
//	double * p3 = new double [3]; // space for 3 doubles
//	p3[0] = 0.2;                  // treat p3 like an array name
//	p3[1] = 0.5;
//	p3[2] = 0.8;
//	cout << "p3[1] is " << p3[1] << ".\n";
//	p3 = p3 + 1;                  // increment the pointer
//	cout << "Now p3[0] is " << p3[0] << " and ";
//	cout << "p3[1] is " << p3[1] << ".\n";
//	p3 = p3 - 1;                  // point back to beginning
//	delete [] p3;                 // free the memory
//	// cin.get();
//	return 0;
//}


// addpntrs.cpp -- pointer addition

//#include <iostream>
//int main()
//{
//    using namespace std;
//    double wages[3] = {10000.0, 20000.0, 30000.0};
//    short stacks[3] = {3, 2, 1};
//
//// Here are two ways to get the address of an array
//    double * pw = wages;     // name of an array = address
//    short * ps = &stacks[0]; // or use address operator
//// with array element
//    cout << "pw = " << pw << ", *pw = " << *pw << endl;
//    pw = pw + 1;
//    cout << "add 1 to the pw pointer:\n";
//    cout << "pw = " << pw << ", *pw = " << *pw << "\n\n";
//
//    cout << "ps = " << ps << ", *ps = " << *ps << endl;
//    ps = ps + 1;
//    cout << "add 1 to the ps pointer:\n";
//    cout << "ps = " << ps << ", *ps = " << *ps << "\n\n";
//
//    cout << "access two elements with array notation\n";
//    cout << "stacks[0] = " << stacks[0]
//         << ", stacks[1] = " << stacks[1] << endl;
//    cout << "access two elements with pointer notation\n";
//    cout << "*stacks = " << *stacks
//         << ", *(stacks + 1) =  " << *(stacks + 1) << endl;
//
//    cout << sizeof(wages) << " = size of wages array\n";
//    cout << sizeof(pw) << " = size of pw pointer\n";
//    // cin.get();
//    return 0;
//}


// ptrstr.cpp -- using pointers to strings

//#include <iostream>
//#include <cstring>              // declare strlen(), strcpy()
//int main()
//{
//    using namespace std;
//
////    char flower [10] = "rose";
////	cout << flower << "s are red\n";	//传递的是第一个字符的地址
//
//    char animal[20] = "bear";   // animal holds bear
//    const char * bird = "wren"; // bird holds address of string
//    char * ps;                  // uninitialized
//
//    cout << animal << " and ";  // display bear
//    cout << bird << "\n";       // display wren
//    // cout << ps << "\n";      //may display garbage, may cause a crash
//
//    cout << "Enter a kind of animal: ";
//    cin >> animal;              // ok if input < 20 chars
//    // cin >> ps; Too horrible a blunder to try; ps doesn't
//    //            point to allocated space
//
//    ps = animal;                // set ps to point to string
//    cout << ps << "!\n";       // ok, same as using animal
//    cout << "Before using strcpy():\n";
//    cout << animal << " at " << (int *) animal << endl;
//    cout << ps << " at " << (int *) ps << endl;
//
//    ps = new char[strlen(animal) + 1];  // get new storage
//    strcpy(ps, animal);         // copy string to new storage
//    cout << "After using strcpy():\n";
//    cout << animal << " at " << (int *) animal << endl;
//    cout << ps << " at " << (int *) ps << endl;
//    delete [] ps;
//    // cin.get();
//    // cin.get();
//    return 0;
//}


// newstrct.cpp -- using new with a structure

//#include <iostream>
//struct inflatable { // structure definition
//	char name[20];
//	float volume;
//	double price;
//};
//int main() {
//	using namespace std;
//	inflatable * ps = new inflatable; // allot memory for structure
//	cout << "Enter name of inflatable item: ";
//	cin.get(ps->name, 20);            // method 1 for member access
//	cout << "Enter volume in cubic feet: ";
//	cin >> (*ps).volume;              // method 2 for member access
//	cout << "Enter price: $";
//	cin >> ps->price;
//	cout << "Name: " << (*ps).name << endl;              // method 2
//	cout << "Volume: " << ps->volume << " cubic feet\n"; // method 1
//	cout << "Price: $" << ps->price << endl;             // method 1
//	delete ps;                        // free memory used by structure
//	// cin.get();
//	// cin.get();
//	return 0;
//}


// delete.cpp -- using the delete operator

//#include <iostream>
//#include <cstring>      // or string.h
//using namespace std;
//char * getname(void);   // function prototype
//int main()
//{
//    char * name;        // create pointer but no storage
//
//    name = getname();   // assign address of string to name
//    cout << name << " at " << (int *) name << "\n";
//    delete [] name;     // memory freed
//
//    name = getname();   // reuse freed memory
//    cout << name << " at " << (int *) name << "\n";
//    delete [] name;     // memory freed again
//    // cin.get();
//    // cin.get();
//    return 0;
//}
//
//char * getname()        // return pointer to new string
//{
//    char temp[80];      // temporary storage
//    cout << "Enter last name: ";
//    cin >> temp;
//    char * pn = new char[strlen(temp) + 1];
//    strcpy(pn, temp);   // copy string into smaller space
//
//    return pn;          // temp lost when function ends
//}


// mixtypes.cpp --some type combinations

//#include <iostream>
//
//struct antarctica_years_end
//{
//    int year;
// /* some really interesting data, etc. */
//};
//
//int main()
//{
//    antarctica_years_end s01, s02, s03;
//    s01.year = 1998;
//    antarctica_years_end * pa = &s02;
//    pa->year = 1999;
//    antarctica_years_end trio[3]; // array of 3 structures
//    trio[0].year = 2003;
//    std::cout << trio->year << std::endl;
//    const antarctica_years_end * arp[3] = {&s01, &s02, &s03};
//    std::cout << arp[1]->year << std::endl;
//    const antarctica_years_end ** ppa = arp;
//   // auto ppb = arp; 	// C++0x automatic type deduction
//// or else use const antarctica_years_end ** ppb = arp;
//    std::cout << (*ppa)->year << std::endl;
//	//std::cout << (*(ppb+1))->year << std::endl;
//    // std::cin.get();
//    return 0;
//}


// choices.cpp -- array variations

//#include <iostream>
//#include <vector>   // STL C++98
////#include <array>    // C++0x
//int main() {
//	using namespace std;
//// C, original C++
//	double a1[4] = {1.2, 2.4, 3.6, 4.8};
//// C++98 STL
//	vector<double> a2(4);   // create vector with 4 elements
//// no simple way to initialize in C98
//	a2[0] = 1.0/3.0;
//	a2[1] = 1.0/5.0;
//	a2[2] = 1.0/7.0;
//	a2[3] = 1.0/9.0;
//// C++0x -- create and initialize array object
////	array<double, 4> a3 = {3.14, 2.72, 1.62, 1.41};
////	array<double, 4> a4;
////	a4 = a3;     // valid for array objects of same size
//// use array notation
//	cout << "a1[2]: " << a1[2] << " at " << &a1[2] << endl;
//	cout << "a2[2]: " << a2[2] << " at " << &a2[2] << endl;
////	cout << "a3[2]: " << a3[2] << " at " << &a3[2] << endl;
////	cout << "a4[2]: " << a4[2] << " at " << &a4[2] << endl;
//// misdeed
//	a1[-2] = 20.2;
//	cout << "a1[-2]: " << a1[-2] <<" at " << &a1[-2] << endl;
////	cout << "a3[2]: " << a3[2] << " at " << &a3[2] << endl;
////	cout << "a4[2]: " << a4[2] << " at " << &a4[2] << endl;
//	//  cin.get();
//	return 0;
//}


///////////////////////////////////////////////////////////////////////////////////////////////


//#include <iostream>
//#include <string>
//#include <array>
//
//using std::cin;
//using std::cout;
//using std::endl;
//using std::string;
//using std::getline;
//
//
//// practice 1
//void p4_1(void) {
//	char first_name[128];
//	char last_name[128];
//	char letter;
//	int age;
//
//	cout << "What is your first name? ";
//	cin.getline(first_name, 128);
//
//	cout << "What is your last name? ";
//	cin.getline(last_name, 128);
//
//	cout << "What letter grade do you deserve? ";
//	cin >> letter;
//
//	cout << "What is your age? ";
//	cin >> age;
//
//	cout << "Name: " << last_name << ", " << first_name << endl;
//	cout << "Grade: " << char(letter + 1) << endl;
//	cout << "Age: " << age << endl;
//
//}
//
//
//// practice 2
//void p4_2(void) {
//	const int ArSize = 20; // 这句可以去掉
//	string name;
//	string dessert;
//
//	cout << "Enter your name:\n";
//	getline(cin, name);
//
//	cout << "Enter your favourite dessert:\n";
//	getline(cin, dessert);
//
//	cout << "I have some delicious " << dessert;
//	cout << " for you, " << name << ".\n";
//
//	return;
//}
//
//
//// practice 3
//void p4_3(void) {
//	char first_name[256];
//	char last_name[256];
//
//	cout << "Enter your fitst name:";
//	cin.getline(first_name, 256);
////  cin.get(first_name, 256);   // cin.get的参数和cin.getline相同，但是getline会读取换行符并保存到第一个参数中，但是cin.get会将换行符留在输入队列中，所以会导致下一个读取的内容是换行符
//
//	cout << "Enter your last name:";
//	cin.getline(last_name, 256);
//
//	cout << "Here's your infomation is a single string: " << last_name << ", " << first_name << endl;
//
//	return;
//}
//
//
//// pracitce 4
//void p4_4(void) {
//	string first_name;
//	string last_name;
//
//	cout << "Enter your first name: ";
////  cin.getline()  // cin.getline不适用于string类
//	getline(cin, first_name);
//
//	cout << "Enter your last name: ";
//	getline(cin, last_name);
//
//	cout << "Here's your infomation is a single string: " << last_name << ", " << first_name << endl;
//}
//
//
//// practice 5
//typedef struct CandyBar {
//	string name;
//	double weight;
//	int calories;
//} ST_CandyBar;
//void p4_5(void) {
//	ST_CandyBar candybar = { "Mocha Munch", 2.3, 350 };
//	cout << "the infomation of CandyBar, Name: " << candybar.name << ", Weight: " << candybar.weight << ", " << " Calories: " << candybar.calories << "." << endl;
//
//	return;
//}
//
//
//// practice 6
//void p4_6(void) {
//	ST_CandyBar candybar[3] = {
//		{"Mocha Munch", 2.3, 350},
//		{"Banana", 3.5, 400},
//		{"HAHAHAHA", 3.0, 370}
//	};
//
//	for (int i = 0; i < 3; i++) {
//		cout << "the infomation of CandyBar, Name: " << candybar[i].name << ", Weight: " << candybar[i].weight << ", " << " Calories: " << candybar[i].calories << "." << endl;
//	}
//}
//
//
//// practice 7
//typedef struct PIZZA_INFO {
//	string name;
//	double size;
//	double weight;
//} ST_PIZZA_INFO;
//void p4_7(void) {
//	ST_PIZZA_INFO pizz_info;
//
//	cout << "Enter the pizza company name: ";
//	getline(cin, pizz_info.name);
//
//	cout << "Enter the pizza size: ";
//	cin >> pizz_info.size;
//
//	cout << "Enter the pizza weight: ";
//	cin >> pizz_info.weight;
//
//	cout << "The company name of pizza is " << pizz_info.name << ", the size of the pizza is " << pizz_info.size << ", the weight of the pizza is " << pizz_info.weight << endl;
//
//	return;
//}
//
//
//// practice 8
//void p4_8(void) {
//	ST_PIZZA_INFO *pizza_info = new ST_PIZZA_INFO;
//
//	cout << "Enter the pizza size: ";
//	cin >> pizza_info->size;
//	cin.get();
//
//	cout << "Enter the pizza company name: ";
//	getline(cin, pizza_info->name);
//
//	cout << "Enter the pizza weight: ";
//	cin >> pizza_info->weight;
//
//	cout << "The company name of pizza is " << pizza_info->name << ", the size of the pizza is " << pizza_info->size << ", the weight of the pizza is " << pizza_info->weight << endl;
//
//	delete pizza_info;
//
//	return;
//}
//
//
//// practice 9
//void p4_9(void) {
//	ST_CandyBar *pcandybar = new ST_CandyBar[3] {
//		{ "Mocha Munch", 2.3, 350 },
//		{ "Banana", 3.5, 400 },
//		{ "HAHAHAHA", 3.0, 370 }
//	};
//
//	for (int i = 0; i < 3; i++) {
//		cout << "the infomation of CandyBar, Name: " << pcandybar[i].name << ", Weight: " << pcandybar[i].weight << ", " << " Calories: " << pcandybar[i].calories << "." << endl;
//	}
//
//	delete[] pcandybar;
//}
//
//
//// practice 10
//void p4_10(void) {
//	std::array<double, 3> time;
//	double avg_time = 0.0;
//
//	printf("Enter three results time of runing 40 meters: ");
//	cin >> time[0];
//	cin >> time[1];
//	cin >> time[2];
//
//	avg_time = (time[0] + time[1] + time[2]) / 3;
//	cout << "Result: " << time[0] << ", " << time[1] << ", " << time[2] << endl;
//	cout << "Average result: " << avg_time;
//
//}
//
//
//int main(int argc, char **argv) {
//	p4_10();
//
//	while (cin.get());
//
//	return 0;
//}




/******************************************************************ch05 循环和关系表达式****************************************************************/

// forloop.cpp -- introducing the for loop

//#include <iostream>
//int main() {
//	using namespace std;
//	int i;  // create a counter
////   initialize; test ; update
//	for (i = 0; i < 5; i++)
//		cout << "C++ knows loops.\n";
//	cout << "C++ knows when to stop.\n";
//	// cin.get();
//	return 0;
//}


// num_test.cpp -- use numeric test in for loop

//#include <iostream>
//int main() {
//	using namespace std;
//	cout << "Enter the starting countdown value: ";
//	int limit;
//	cin >> limit;
//	int i;
//	for (i = limit; i; i--)     // quits when i is 0
//		cout << "i = " << i << "\n";
//	cout << "Done now that i = " << i << "\n";
//	// cin.get();
//	// cin.get();
//	return 0;
//}


// express.cpp -- values of expressions

//#include <iostream>
//int main() {
//	using namespace std;
//	int x;
//
//	cout << "The expression x = 100 has the value ";
//	cout << (x = 100) << endl;
//	cout << "Now x = " << x << endl;
//	cout << "The expression x < 3 has the value ";
//	cout << (x < 3) << endl;
//	cout << "The expression x > 3 has the value ";
//	cout << (x > 3) << endl;
//	cout.setf(ios_base::boolalpha);   //a newer C++ feature
//	cout << "The expression x < 3 has the value ";
//	cout << (x < 3) << endl;
//	cout << "The expression x > 3 has the value ";
//	cout << (x > 3) << endl;
//	/// cin.get();
//	return 0;
//}


// formore.cpp -- more looping with for

//#include <iostream>
//const int ArSize = 16;      // example of external declaration
//int main() {
//	long long factorials[ArSize];
//	factorials[1] = factorials[0] = 1LL;
//	for (int i = 2; i < ArSize; i++)
//		factorials[i] = i * factorials[i-1];
//	for (int i = 0; i < ArSize; i++)
//		std::cout << i << "! = " << factorials[i] << std::endl;
//	// std::cin.get();
//	return 0;
//}


// bigstep.cpp -- count as directed

//#include <iostream>
//int main() {
//	using std::cout;    // a using declaration
//	using std::cin;
//	using std::endl;;
//	cout << "Enter an integer: ";
//	int by;
//	cin >> by;
//	cout << "Counting by " << by << "s:\n";
//	for (int i = 0; i < 100; i = i + by)
//		cout << i << endl;
//	// cin.get();
//	// cin.get();
//	return 0;
//}


// forstr1.cpp -- using for with a string

//#include <iostream>
//#include <string>
//int main() {
//	using namespace std;
//	cout << "Enter a word: ";
//	string word;
//	cin >> word;
//
//	// display letters in reverse order
//	for (int i = word.size() - 1; i >= 0; i--)
//		cout << word[i];
//	cout << "\nBye.\n";
//	// cin.get();
//	// cin.get();
//	return 0;
//}


// plus_one.cpp -- the increment operator

//#include <iostream>
//int main() {
//	using std::cout;
//	int a = 20;
//	int b = 20;
//
//	cout << "a   = " << a << ":   b = " << b << "\n";
//	cout << "a++ = " << a++ << ": ++b = " << ++b << "\n";
//	cout << "a   = " << a << ":   b = " << b << "\n";
//	// std::cin.get();
//	return 0;
//}


// block.cpp -- use a block statement

//#include <iostream>
//int main() {
//	using namespace std;
//	cout << "The Amazing Accounto will sum and average ";
//	cout << "five numbers for you.\n";
//	cout << "Please enter five values:\n";
//	double number;
//	double sum = 0.0;
//	for (int i = 1; i <= 5; i++) {
//		// block starts here
//		cout << "Value " << i << ": ";
//		cin >> number;
//		sum += number;
//	}                                   // block ends here
//	cout << "Five exquisite choices indeed! ";
//	cout << "They sum to " << sum << endl;
//	cout << "and average to " << sum / 5 << ".\n";
//	cout << "The Amazing Accounto bids you adieu!\n";
//	// cin.get();
//	// cin.get();
//	return 0;
//}


// forstr2.cpp -- reversing an array

//#include <iostream>
//#include <string>
//int main() {
//	using namespace std;
//	cout << "Enter a word: ";
//	string word;
//	cin >> word;
//
//	// physically modify string object
//	char temp;
//	int i, j;
//	for (j = 0, i = word.size() - 1; j < i; --i, ++j) {
//		// start block
//		temp = word[i];
//		word[i] = word[j];
//		word[j] = temp;
//	}                       // end block
//	cout << word << "\nDone\n";
//	// cin.get();
//	// cin.get();
//	return 0;
//}


// equal.cpp -- equality vs assignment

//#include <iostream>
//int main() {
//	using namespace std;
//	int quizscores[10] =
//	{ 20, 20, 20, 20, 20, 19, 20, 18, 20, 20};
//
//	cout << "Doing it right:\n";
//	int i;
//	for (i = 0; quizscores[i] == 20; i++)
//		cout << "quiz " << i << " is a 20\n";
//// Warning: you may prefer reading about this program
//// to actually running it.
//	cout << "Doing it dangerously wrong:\n";
//	for (i = 0; quizscores[i] = 20; i++)
//		cout << "quiz " << i << " is a 20\n";
//	// cin.get();
//	return 0;
//}


// compstr1.cpp -- comparing strings using arrays

//#include <iostream>
//#include <cstring>     // prototype for strcmp()
//int main() {
//	using namespace std;
//	char word[5] = "?ate";
//
//	for (char ch = 'a'; strcmp(word, "mate"); ch++) {
//		cout << word << endl;
//		word[0] = ch;
//	}
//	cout << "After loop ends, word is " << word << endl;
//	// cin.get();
//	return 0;
//}


// compstr2.cpp -- comparing strings using arrays

//#include <iostream>
//#include <string>     // string class
//int main() {
//	using namespace std;
//	string word = "?ate";
//
//	for (char ch = 'a'; word != "mate"; ch++) {
//		cout << word << endl;
//		word[0] = ch;
//	}
//	cout << "After loop ends, word is " << word << endl;
//	// cin.get();
//	return 0;
//}


// while.cpp -- introducing the while loop

//#include <iostream>
//const int ArSize = 20;
//int main() {
//	using namespace std;
//	char name[ArSize];
//
//	cout << "Your first name, please: ";
//	cin >> name;
//	cout << "Here is your name, verticalized and ASCIIized:\n";
//	int i = 0;                  // start at beginning of string
//	while (name[i] != '\0') {   // process to end of string
//		cout << name[i] << ": " << int(name[i]) << endl;
//		i++;                    // don't forget this step
//	}
//	// cin.get();
//	// cin.get();
//	return 0;
//}


// waiting.cpp -- using clock() in a time-delay loop		延时程序

//#include <iostream>
//#include <ctime> 	// describes clock() function, clock_t type
//int main() {
//	using namespace std;
//	cout << "Enter the delay time, in seconds: ";
//	float secs;
//	cin >> secs;
//	clock_t delay = secs * CLOCKS_PER_SEC;  // convert to clock ticks
//	cout << "starting\a\n";
//	clock_t start = clock();
//	while (clock() - start < delay )        // wait until time elapses
//		;                                   // note the semicolon
//	cout << "done \a\n";
//	// cin.get();
//	// cin.get();
//	return 0;
//}


// dowhile.cpp -- exit-condition loop

//#include <iostream>
//int main() {
//	using namespace std;
//	int n;
//
//	cout << "Enter numbers in the range 1-10 to find ";
//	cout << "my favorite number\n";
//	do {
//		cin >> n;       // execute body
//	} while (n != 7);   // then test
//	cout << "Yes, 7 is my favorite.\n" ;
//	// cin.get();
//	// cin.get();
//	return 0;
//}


// textin1.cpp -- reading chars with a while loop

//#include <iostream>
//int main() {
//	using namespace std;
//	char ch;
//	int count = 0;      // use basic input
//	cout << "Enter characters; enter # to quit:\n";
//	cin >> ch;          // get a character
//	while (ch != '#') { // test the character
//		cout << ch;     // echo the character
//		++count;        // count the character
//		cin >> ch;      // get the next character
//	}
//	cout << endl << count << " characters read\n";
//// get rid of rest of line
//	// while (cin.get() != '\n')
//	// ;
////cin.get();
//	return 0;
//}


// textin2.cpp -- using cin.get(char)

//#include <iostream>
//int main() {
//	using namespace std;
//	char ch;
//	int count = 0;
//
//	cout << "Enter characters; enter # to quit:\n";
//	cin.get(ch);        // use the cin.get(ch) function
//	while (ch != '#') {
//		cout << ch;
//		++count;
//		cin.get(ch);    // use it again
//	}
//	cout << endl << count << " characters read\n";
//// get rid of rest of line
//	// while (cin.get() != '\n')
//	//    ;
//	//cin.get();
//	return 0;
//}


// textin3.cpp -- reading chars to end of file

//#include <iostream>
//int main() {
//	using namespace std;
//	char ch;
//	int count = 0;
//	cin.get(ch);        // attempt to read a char
//	while (cin.fail() == false) { // test for EOF
//		cout << ch;     // echo character
//		++count;
//		cin.get(ch);    // attempt to read another char
//	}
//	cout << endl << count << " characters read\n";
//	return 0;
//}


// textin4.cpp -- reading chars with cin.get()

//#include <iostream>
//int main(void) {
//	using namespace std;
//	int ch;                         // should be int, not char
//	int count = 0;
//
//	while ((ch = cin.get()) != EOF) { // test for end-of-file
//		cout.put(char(ch));
//		++count;
//	}
//	cout << endl << count << " characters read\n";
//	return 0;
//}


// nested.cpp -- nested loops and 2-D array

//#include <iostream>
//const int Cities = 5;
//const int Years = 4;
//int main() {
//	using namespace std;
//	const char * cities[Cities] = { // array of pointers
//		// to 5 strings
//		"Gribble City",
//		"Gribbletown",
//		"New Gribble",
//		"San Gribble",
//		"Gribble Vista"
//	};
//
//	int maxtemps[Years][Cities] = { // 2-D array
//		{96, 100, 87, 101, 105},   // values for maxtemps[0]
//		{96, 98, 91, 107, 104},   // values for maxtemps[1]
//		{97, 101, 93, 108, 107}, // values for maxtemps[2]
//		{98, 103, 95, 109, 108}   // values for maxtemps[3]
//	};
//
//	cout << "Maximum temperatures for 2008 - 2011\n\n";
//	for (int city = 0; city < Cities; ++city) {
//		cout << cities[city] << ":\t";
//		for (int year = 0; year < Years; ++year)
//			cout << maxtemps[year][city] << "\t";
//		cout << endl;
//	}
//	// cin.get();
//	return 0;
//}


//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


//#include <iostream>
//#include <cstring>
//#include <array>
//
//using std::cin;
//using std::cout;
//using std::endl;
//using std::array;
//using std::string;
//using std::getline;
//
//// practice 1
//void p5_1(void) {
//	int number1 = 0;
//	int number2 = 0;
//	int sum = 0;
//
//	cout << "Enter the first number: ";
//	cin >> number1;
//
//	cout << "Enter the second number: ";
//	cin >> number2;
//
//	for (int i = number1; i <= number2; i++) {
//		sum += i;
//	}
//
//	cout << "The sum of number " << number1 << " to " << number2 << ", sum = " << sum << endl;
//}
//
//// practice 2
//const int ArSize = 100;
//void p5_2(void) {
//	array<long double, ArSize+1> factorials;
//	factorials[0] = factorials[1] = 1.0;
//	for (int i = 2; i <= ArSize; i++) {
//		factorials[i] = i * factorials[i - 1];
//	}
//	for (int i = 0; i <= ArSize; i++) {
//		cout << i << "! = " << factorials[i] << endl;
//	}
//
//	return;
//}
//
//// practice 3
//void p5_3(void) {
//	int sum = 0;
//	int num = 0;
//
//	while (1) {
//		cout << "Enter a number( 0 to exit): ";
//		cin >> num;
//		if (num == 0) {
//			break;
//		}
//		sum += num;
//		cout << "Until now, the sum of the number you inputed is " << sum << endl;
//	}
//
//	cout << "Done." << endl;
//
//	return;
//}
//
//// practice 4
//void p5_4(void) {
//	double Daphne_account = 100;
//	double Cleo_account = 100;
//	int years = 0;
//
//	while (Daphne_account >= Cleo_account) {
//		years++;
//		Cleo_account = Cleo_account + Cleo_account * 0.05;
//		Daphne_account += 10;
//	}
//
//	cout << "After " << years << " years. " << "Cleo account which is " << Cleo_account << " will more than Daphne account which is " << Daphne_account << "." << endl;
//}
//
//// practie 5
//void p5_5(void) {
//	string month[12] = { "January", "February", "March", "April", "May", "June", "July", "August", "Septempber", "October", "November", "December" };
//	int sell[12];
//	int total_sales = 0;
//
//	cout << "Enter the sales of book <C++ for Fools> each month: " << endl;
//	for (int i = 0; i < 12; i++) {
//		cout << month[i] << ": ";
//		cin >> sell[i];
//		total_sales += sell[i];
//	}
//
//	cout << "The total sales is " << total_sales << endl;
//	for (int i = 0; i < 12; i++) {
//		cout << month[i] << ": " << sell[i] << endl;
//	}
//
//	return;
//}
//
//// practice 6
//void p5_6(void) {
//	string month[12] = { "January", "February", "March", "April", "May", "June", "July", "August", "Septempber", "October", "November", "December" };
//	unsigned int sales[3][12] = { 0 };
//	unsigned int total_sales[3] = { 0 };
//
//	for (int i = 0; i < 3; i++) {
//		cout << "Enter " << i + 1 << " year(s) sales of book <C++ for Fools> each month: " << endl;
//		for (int j = 0; j < 12; j++) {
//			cout << month[j] << ": ";
//			cin >> sales[i][j];
//			total_sales[i] += sales[i][j];
//		}
//	}
//
//	for (int i = 0; i < 3; i++) {
//		cout << i + 1 << " year(s) total sales is " << total_sales[i] << endl;
//	}
//
//	cout << "Three years total sales is " << total_sales[0] + total_sales[1] + total_sales[2] << endl;
//}
//
////practice7
//struct car {
//	string company;
//	int pro_year;
//};
//void p5_7(void) {
//	unsigned int size = 0;
//	cout << "How many cars do you wish to catalog? ";
//	cin >> size;
//	cin.get();
//
//	struct car *pcar = new struct car[size];
//	for (unsigned int i = 0; i < size; i++) {
//		cout << "Car #" << i + 1 << ":" << endl;
//		cout << "Please enter the make: ";
//		getline(cin, pcar[i].company);
//
//		cout << "Please enter the year make: ";
//		cin >> pcar[i].pro_year;
//		cin.get();
//	}
//
//	cout << "Here is your collection:" << endl;
//	for (unsigned int i = 0; i < size; i++) {
//		cout << pcar[i].pro_year << " " << pcar[i].company << endl;
//	}
//}
//
//// practice 8
//void p5_8(void) {
//	unsigned int n_word = 0;
//	char input[128];
//
//	cout << "Enter words (to stop, type the word done):" << endl;
//	while (cin >> input) {
//		if (strcmp(input, "done")) {
//			n_word++;
//		} else
//			break;
//	}
//
//	cout << "You entered a total of " << n_word << " words." << endl;
//}
//
//// practice 9
//void p5_9(void) {
//	unsigned int n_word = 0;
//	string input;
//
//	cout << "Enter words (to stop, type the word done):" << endl;
//	while (cin >> input) {
//		if (input != "done") {
//			n_word++;
//		} else
//			break;
//	}
//
//	cout << "You entered a total of " << n_word << " words." << endl;
//}
//
//// practice 10
//void p5_10(void) {
//	unsigned int row = 0;
//
//	cout << "Enter number of rows: ";
//	cin >> row;
//
//	for (unsigned int i = 1; i <= row; i++) {
//		for (unsigned int j = i; j < row; j++) {
//			cout << ".";
//		}
//		for (unsigned int j = 0; j < i; j++) {
//			cout << "*";
//		}
//		cout << endl;
//	}
//}
//
//
//int main(int argc, char **argv) {
//	p5_10();
//
//	return 0;
//}



/******************************************************************ch06 分支语句和逻辑运算符****************************************************************/


// if.cpp -- using the if statement

//#include <iostream>
//int main() {
//	using std::cin;     // using declarations
//	using std::cout;
//	char ch;
//	int spaces = 0;
//	int total = 0;
//	cin.get(ch);
//	while (ch != '.') { // quit at end of sentence
//		if (ch == ' ')  // check if ch is a space
//			++spaces;
//		++total;        // done every time
//		cin.get(ch);
//	}
//	cout << spaces << " spaces, " << total;
//	cout << " characters total in sentence\n";
//	// cin.get();
//	// cin.get();
//	return 0;
//}


// ifelse.cpp -- using the if else statement

//#include <iostream>
//int main() {
//	char ch;
//
//	std::cout << "Type, and I shall repeat.\n";
//	std::cin.get(ch);
//	while (ch != '.') {
//		if (ch == '\n')
//			std::cout << ch;     // done if newline
//		else
//			std::cout << ++ch;   // done otherwise
//		std::cin.get(ch);
//	}
//	// try ch + 1 instead of ++ch for interesting effect
//	std::cout << "\nPlease excuse the slight confusion.\n";
//	// std::cin.get();
//	// std::cin.get();
//	return 0;
//}


// ifelseif.cpp -- using if else if else

//#include <iostream>
//const int Fave = 27;
//int main() {
//	using namespace std;
//	int n;
//
//	cout << "Enter a number in the range 1-100 to find ";
//	cout << "my favorite number: ";
//	do {
//		cin >> n;
//		if (n < Fave)
//			cout << "Too low -- guess again: ";
//		else if (n > Fave)
//			cout << "Too high -- guess again: ";
//		else
//			cout << Fave << " is right!\n";
//	} while (n != Fave);
//	// cin.get();
//	// cin.get();
//	return 0;
//}


// or.cpp -- using the logical OR operator

//#include <iostream>
//int main() {
//	using namespace std;
//	cout << "This program may reformat your hard disk\n"
//	     "and destroy all your data.\n"
//	     "Do you wish to continue? <y/n> ";
//	char ch;
//	cin >> ch;
//	if (ch == 'y' || ch == 'Y')             // y or Y
//		cout << "You were warned!\a\a\n";
//	else if (ch == 'n' || ch == 'N')        // n or N
//		cout << "A wise choice ... bye\n";
//	else
//		cout << "That wasn't a y or n! Apparently you "
//		     "can't follow\ninstructions, so "
//		     "I'll trash your disk anyway.\a\a\a\n";
//	// cin.get();
//	// cin.get();
//	return 0;
//}


// and.cpp -- using the logical AND operator

//#include <iostream>
//const int ArSize = 6;
//int main() {
//	using namespace std;
//	float naaq[ArSize];
//	cout << "Enter the NAAQs (New Age Awareness Quotients) "
//	     << "of\nyour neighbors. Program terminates "
//	     << "when you make\n" << ArSize << " entries "
//	     << "or enter a negative value.\n";
//
//	int i = 0;
//	float temp;
//	cout << "First value: ";
//	cin >> temp;
//	while (i < ArSize && temp >= 0) { // 2 quitting criteria
//		naaq[i] = temp;
//		++i;
//		if (i < ArSize) {           // room left in the array,
//			cout << "Next value: ";
//			cin >> temp;            // so get next value
//		}
//	}
//	if (i == 0)
//		cout << "No data--bye\n";
//	else {
//		cout << "Enter your NAAQ: ";
//		float you;
//		cin >> you;
//		int count = 0;
//		for (int j = 0; j < i; j++)
//			if (naaq[j] > you)
//				++count;
//		cout << count;
//		cout << " of your neighbors have greater awareness of\n"
//		     << "the New Age than you do.\n";
//	}
//	// cin.get();
//	// cin.get();
//	return 0;
//}


// more_and.cpp -- using the logical AND operator

//#include <iostream>
//const char * qualify[4] = {     // an array of pointers*/
//	// to strings
//	"10,000-meter race.\n",
//	"mud tug-of-war.\n",
//	"masters canoe jousting.\n",
//	"pie-throwing festival.\n"
//};
//int main() {
//	using namespace std;
//	int age;
//	cout << "Enter your age in years: ";
//	cin >> age;
//	int index;
//
//	if (age > 17 && age < 35)
//		index = 0;
//	else if (age >= 35 && age < 50)
//		index = 1;
//	else if (age >= 50 && age < 65)
//		index = 2;
//	else
//		index = 3;
//
//	cout << "You qualify for the " << qualify[index];
//	// cin.get();
//	// cin.get();
//	return 0;
//}


// not.cpp -- using the not operator

//#include <iostream>
//#include <climits>
//bool is_int(double);
//int main() {
//	using namespace std;
//	double num;
//
//	cout << "Yo, dude! Enter an integer value: ";
//	cin >> num;
//	while (!is_int(num)) {  // continue while num is not int-able
//		cout << "Out of range -- please try again: ";
//		cin >> num;
//	}
//	int val = int (num);    // type cast
//	cout << "You've entered the integer " << val << "\nBye\n";
//	// cin.get();
//	// cin.get();
//	return 0;
//}
//
//bool is_int(double x) {
//	if (x <= INT_MAX && x >= INT_MIN)   // use climits values
//		return true;
//	else
//		return false;
//}


// cctypes.cpp -- using the ctype.h library

//#include <iostream>
//#include <cctype>              // prototypes for character functions
//int main() {
//	using namespace std;
//	cout << "Enter text for analysis, and type @"
//	     " to terminate input.\n";
//	char ch;
//	int whitespace = 0;
//	int digits = 0;
//	int chars = 0;
//	int punct = 0;
//	int others = 0;
//
//	cin.get(ch);                // get first character
//	while (ch != '@') {          // test for sentinel
//		if(isalpha(ch))         // is it an alphabetic character?
//			chars++;
//		else if(isspace(ch))    // is it a whitespace character?
//			whitespace++;
//		else if(isdigit(ch))    // is it a digit?
//			digits++;
//		else if(ispunct(ch))    // is it punctuation?
//			punct++;
//		else
//			others++;
//		cin.get(ch);            // get next character
//	}
//	cout << chars << " letters, "
//	     << whitespace << " whitespace, "
//	     << digits << " digits, "
//	     << punct << " punctuations, "
//	     << others << " others.\n";
//	// cin.get();
//	// cin.get();
//	return 0;
//}


// condit.cpp -- using the conditional operator

//#include <iostream>
//int main() {
//	using namespace std;
//	int a, b;
//	cout << "Enter two integers: ";
//	cin >> a >> b;
//	cout << "The larger of " << a << " and " << b;
//	int c = a > b ? a : b;   // c = a if a > b, else c = b
//	cout << " is " << c << endl;
//	// cin.get();
//	// cin.get();
//	return 0;
//}


// switch.cpp -- using the switch statement

//#include <iostream>
//using namespace std;
//void showmenu();   // function prototypes
//void report();
//void comfort();
//int main() {
//	showmenu();
//	int choice;
//	cin >> choice;
//	while (choice != 5) {
//		switch(choice) {
//			case 1  :
//				cout << "\a\n";
//				break;
//			case 2  :
//				report();
//				break;
//			case 3  :
//				cout << "The boss was in all day.\n";
//				break;
//			case 4  :
//				comfort();
//				break;
//			default :
//				cout << "That's not a choice.\n";
//		}
//		showmenu();
//		cin >> choice;
//	}
//	cout << "Bye!\n";
//	// cin.get();
//	// cin.get();
//	return 0;
//}
//
//void showmenu() {
//	cout << "Please enter 1, 2, 3, 4, or 5:\n"
//	     "1) alarm           2) report\n"
//	     "3) alibi           4) comfort\n"
//	     "5) quit\n";
//}
//void report() {
//	cout << "It's been an excellent week for business.\n"
//	     "Sales are up 120%. Expenses are down 35%.\n";
//}
//void comfort() {
//	cout << "Your employees think you are the finest CEO\n"
//	     "in the industry. The board of directors think\n"
//	     "you are the finest CEO in the industry.\n";
//}


// enum.cpp -- using enum

//#include <iostream>
//// create named constants for 0 - 6
//enum {red, orange, yellow, green, blue, violet, indigo};
//
//int main() {
//	using namespace std;
//	cout << "Enter color code (0-6): ";
//	int code;
//	cin >> code;
//	while (code >= red && code <= indigo) {
//		switch (code) {
//			case red     :
//				cout << "Her lips were red.\n";
//				break;
//			case orange  :
//				cout << "Her hair was orange.\n";
//				break;
//			case yellow  :
//				cout << "Her shoes were yellow.\n";
//				break;
//			case green   :
//				cout << "Her nails were green.\n";
//				break;
//			case blue    :
//				cout << "Her sweatsuit was blue.\n";
//				break;
//			case violet  :
//				cout << "Her eyes were violet.\n";
//				break;
//			case indigo  :
//				cout << "Her mood was indigo.\n";
//				break;
//		}
//		cout << "Enter color code (0-6): ";
//		cin >> code;
//	}
//	cout << "Bye\n";
//	// cin.get();
//	// cin.get();
//	return 0;
//}


// jump.cpp -- using continue and break

//#include <iostream>
//const int ArSize = 80;
//int main() {
//	using namespace std;
//	char line[ArSize];
//	int spaces = 0;
//
//	cout << "Enter a line of text:\n";
//	cin.get(line, ArSize);
//	cout << "Complete line:\n" << line << endl;
//	cout << "Line through first period:\n";
//	for (int i = 0; line[i] != '\0'; i++) {
//		cout << line[i];    // display character
//		if (line[i] == '.') // quit if it's a period
//			break;
//		if (line[i] != ' ') // skip rest of loop
//			continue;
//		spaces++;
//	}
//	cout << "\n" << spaces << " spaces\n";
//	cout << "Done.\n";
//	// cin.get();
//	// cin.get();
//	return 0;
//}


// cinfish.cpp -- non-numeric input terminates loop

//#include <iostream>
//const int Max = 5;
//int main() {
//	using namespace std;
//// get data
//	double fish[Max];
//	cout << "Please enter the weights of your fish.\n";
//	cout << "You may enter up to " << Max
//	     << " fish <q to terminate>.\n";
//	cout << "fish #1: ";
//	int i = 0;
//	while (i < Max && cin >> fish[i]) {
//		if (++i < Max)
//			cout << "fish #" << i+1 << ": ";
//	}
//// calculate average
//	double total = 0.0;
//	for (int j = 0; j < i; j++)
//		total += fish[j];
//// report results
//	if (i == 0)
//		cout << "No fish\n";
//	else
//		cout << total / i << " = average weight of "
//		     << i << " fish\n";
//	cout << "Done.\n";
//// code to keep VC execution window open if q is entered
////	if (!cin)  // input terminated by non-numeric response
////	{
////	    cin.clear();  // reset input
////	    cin.get();    // read q
////	}
////	cin.get();    // read end of line after last input
////	cin.get();    // wait for user to press <Enter>
//	return 0;
//}


// cingolf.cpp -- non-numeric input skipped

//#include <iostream>
//const int Max = 5;
//int main() {
//	using namespace std;
//// get data
//	int golf[Max];
//	cout << "Please enter your golf scores.\n";
//	cout << "You must enter " << Max << " rounds.\n";
//	int i;
//	for (i = 0; i < Max; i++) {
//		cout << "round #" << i+1 << ": ";
//		while (!(cin >> golf[i])) {
//			cin.clear();     // reset input
//			while (cin.get() != '\n')
//				continue;    // get rid of bad input
//			cout << "Please enter a number: ";
//		}
//	}
//// calculate average
//	double total = 0.0;
//	for (i = 0; i < Max; i++)
//		total += golf[i];
//// report results
//	cout << total / Max << " = average score "
//	     << Max << " rounds\n";
//	// cin.get();
//	// cin.get();
//	return 0;
//}


// outfile.cpp -- writing to a file

//#include <iostream>
//#include <fstream>                  // for file I/O
//
//int main() {
//	using namespace std;
//
//	char automobile[50];
//	int year;
//	double a_price;
//	double d_price;
//
//	ofstream outFile;               // create object for output
//	outFile.open("carinfo.txt");    // associate with a file
//
//	cout << "Enter the make and model of automobile: ";
//	cin.getline(automobile, 50);
//	cout << "Enter the model year: ";
//	cin >> year;
//	cout << "Enter the original asking price: ";
//	cin >> a_price;
//	d_price = 0.913 * a_price;
//
//// display information on screen with cout
//
//	cout << fixed;
//	cout.precision(2);			// 无参数时返回当前精度值，否则cout.precision(val)在输出的时候设定输出值以新的浮点数精度值显示，即小数点后保留val位
//	cout.setf(ios_base::showpoint);
//	cout << "Make and model: " << automobile << endl;
//	cout << "Year: " << year << endl;
//	cout << "Was asking $" << a_price << endl;
//	cout << "Now asking $" << d_price << endl;
//
//// now do exact same things using outFile instead of cout
//
//	outFile << fixed;
//	outFile.precision(2);
//	outFile.setf(ios_base::showpoint);
//	outFile << "Make and model: " << automobile << endl;
//	outFile << "Year: " << year << endl;
//	outFile << "Was asking $" << a_price << endl;
//	outFile << "Now asking $" << d_price << endl;
//
//	outFile.close();                // done with file
//	// cin.get();
//	// cin.get();
//	return 0;
//}


// sumafile.cpp -- functions with an array argument

//#include <iostream>
//#include <fstream>          // file I/O support
//#include <cstdlib>          // support for exit()
//const int SIZE = 60;
//int main() {
//	using namespace std;
//	char filename[SIZE];
//	ifstream inFile;        // object for handling file input
//
//	cout << "Enter name of data file: ";
//	cin.getline(filename, SIZE);
//	inFile.open(filename);  // associate inFile with a file
//	if (!inFile.is_open()) { // failed to open file
//		cout << "Could not open the file " << filename << endl;
//		cout << "Program terminating.\n";
//		// cin.get();    // keep window open
//		exit(EXIT_FAILURE);
//	}
//	double value;
//	double sum = 0.0;
//	int count = 0;          // number of items read
//
//	inFile >> value;        // get first value
//	while (inFile.good()) { // while input good and not at EOF
//		++count;            // one more item read
//		sum += value;       // calculate running total
//		inFile >> value;    // get next value
//	}
//	if (inFile.eof())
//		cout << "End of file reached.\n";
//	else if (inFile.fail())
//		cout << "Input terminated by data mismatch.\n";
//	else
//		cout << "Input terminated for unknown reason.\n";
//	if (count == 0)
//		cout << "No data processed.\n";
//	else {
//		cout << "Items read: " << count << endl;
//		cout << "Sum: " << sum << endl;
//		cout << "Average: " << sum / count << endl;
//	}
//	inFile.close();         // finished with the file
//	// cin.get();
//	return 0;
//}



//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


//#include <iostream>
//#include <cstring>
//#include <cctype>
//#include <array>
//#include <iomanip>
//#include <fstream>
//
//using namespace std;
//
//// practice 1
//void p6_1(void) {
//	char ch = 0;
//	while ((ch = cin.get()) != '@') {
//		if (isdigit(ch)) {
//			continue;
//		} else if (islower(ch)) {
//			cout << (char)toupper(ch);
//		} else if (isupper(ch)) {
//			cout << (char)tolower(ch);
//		}
//	}
//
//	cout << "Done!" << endl;
//}
//
//
//// practice 2
//void p6_2(void) {
//	const unsigned int SIZE = 10;
//	array<double, SIZE> donation;
//	unsigned int enter = 0;
//	double total_value = 0.0;
//	double avg = 0.0;
//	unsigned int large_avg = 0;
//
//	cout << "Please enter up to ten double value, Non-digital to exit: " << endl;
//	while (enter < 10 && (cin >> donation[enter])) {
//		total_value += donation[enter];
//		enter++;
//	}
//
//	avg = total_value / enter;
//	for (unsigned int i = 0; i < enter; i++) {
//		if (donation[i] > avg) {
//			large_avg++;
//		}
//	}
//
//	cout << "The average value is " << avg << ", and there are " << large_avg << " double value large than agerage value!" << endl;
//}
//
//
//// practice 3
//void p6_3(void) {
//	char ch = 0;
//
//	cout << "Please enter one of the following choices: " << endl;
//	cout.flags(ios::left);											//cout<<left<<setw(3)<<x*y
//	cout << setw(20) << "c) carnivore" << "p) pianist" << endl;
//	cout << setw(20) << "t) tree" << "g) game" << endl;
//	bool exit = false;
//
//	while (!exit && cin >> ch) {
//		switch (ch) {
//			case 'c':
//				cout << "Tyrannosaurus rex is a carnivore." << endl;
//				exit = true;
//				break;
//
//			case 'p':
//				cout << "Langlang is a pianist." << endl;
//				exit = true;
//				break;
//
//			case 't':
//				cout << "A maple is a tree." << endl;
//				exit = true;
//				break;
//
//			case 'g':
//				cout << "Dota2 is a game." << endl;
//				exit = true;
//				break;
//
//			default:
//				cout << "Please enter a c, p, t or g: ";
//				break;
//		}
//	}
//}
//
//
//// practice 4
//const unsigned int strsize = 50;
//struct bop {
//	char fullname[strsize];     // real name
//	char title[strsize];        // job title
//	char bopname[strsize];      // secret BOP name
//	int preference;             // 0 = fullname, 1 = title, 2 = bopname
//};
//void display_by_name(const struct bop *bopArray, unsigned int size) {
//	for (size_t i = 0; i < size; i++) {				//size_t == unsigned int
//		cout << bopArray[i].fullname << endl;
//	}
//}
//void display_by_title(const struct bop *bopArray, unsigned int size) {
//	for (size_t i = 0; i < size; i++) {
//		cout << bopArray[i].title << endl;
//	}
//}
//void display_by_bopname(const struct bop *bopArray, unsigned int size) {
//	for (size_t i = 0; i < size; i++) {
//		cout << bopArray[i].bopname << endl;
//	}
//}
//void display_by_preference(const struct bop *bopArray, unsigned int size) {
//	for (size_t i = 0; i < size; i++) {
//		if (bopArray[i].preference == 0) {
//			cout << bopArray[i].fullname << endl;
//		} else if (bopArray[i].preference == 1) {
//			cout << bopArray[i].title << endl;
//		} else if (bopArray[i].preference == 2) {
//			cout << bopArray[i].bopname << endl;
//		}
//	}
//}
//void p6_4(void) {
//	const struct bop bopArray[5] = {
//		{"Wimp Macho", "YYY", "Y----", 0},
//		{"XXXXXXXX", "2XXXX", "3XXXXX", 1},
//		{"AAAAAAAA", "2AAAA", "3AAAAA", 2},
//		{"BBBBBBBB", "2BBBB", "3BBBBB", 0},
//		{"CCCCCCCC", "4CCCC", "3CCCCC", 1}
//	};
//	char choice = 0;
//
//	cout << "Benevolent Order of Proframers Report" << endl;
//	cout << left << setw(30) << "a. display by name" << "b. display by title" << endl;
//	cout << left << setw(30) << "c. display by bopname" << "d. display by preference" << endl;
//	cout << left << setw(30) << "q. quit" << endl;
//	cout << "Enter your choice:";
//
//	while (cin >> choice) {
//		if (choice == 'q') {
//			break;
//		}
//		switch (choice) {
//			case 'a':
//				display_by_name(bopArray, 5);
//				break;
//
//			case 'b':
//				display_by_title(bopArray, 5);
//				break;
//
//			case 'c':
//				display_by_bopname(bopArray, 5);
//				break;
//
//			case 'd':
//				display_by_preference(bopArray, 5);
//				break;
//
//			default:
//				break;
//		}
//		cout << "Next choice:";
//	}
//	cout << "Bye!" << endl;
//	return;
//}
//
//
//// practice 5
//const double RATE1 = 0.1;
//const double RATE2 = 0.15;
//const double RATE3 = 0.2;
//void p6_5(void) {
//	double income = 0.0;
//	double tax = 0.0;
//
//	cout << "Please enter your income:";
//	while ((cin >> income) && (income > 0)) {
//		if (income <= 5000) {
//			tax = 0.0;
//		} else if (5000 < income && income <= 15000) {
//			tax = (income - 5000) * RATE1;
//		} else if (15000 < income && income <= 35000) {
//			tax = (15000 - 5000) * RATE1 + (income - 15000) * RATE2;
//		} else {
//			tax = (15000 - 5000) * RATE1 + (35000 - 15000) * RATE2 + (income - 35000) * RATE3;
//		}
//
//		cout << "income = " << income << ", tax = " << tax << endl;
//	}
//
//	return;
//}
//
//
//// practice 6
//struct pat_info {
//	string name;
//	double amount;
//};
//void p6_6(void) {
//	unsigned int contributors = 0;
//	unsigned int tmp = 0;
//
//	cout << "Enter the number of contributors:";
//	cin >> contributors;
//	cin.get();
//
//	struct pat_info *pContributors = new struct pat_info[contributors];
//
//	for (size_t i = 0; i < contributors; i++) {
//		cout << "Enter the name of " << i + 1 << " contributor: ";
//		getline(cin, pContributors[i].name);
//
//		cout << "Enter the amount of donation: ";
//		cin >> pContributors[i].amount;
//		cin.get();
//	}
//
//	cout << "Grand Pators:" << endl;
//	for (size_t i = 0; i < contributors; i++) {
//		if (pContributors[i].amount > 10000) {
//			cout << "Contributor name: " << pContributors[i].name << endl;
//			cout << "Contrubutor amount: " << pContributors[i].amount << endl;
//			tmp++;
//		}
//	}
//	if (tmp == 0) {
//		cout << "none" << endl;
//	}
//
//	tmp = 0;
//	cout << "Pators:" << endl;
//	for (size_t i = 0; i < contributors; i++) {
//		if (pContributors[i].amount < 10000) {
//			cout << "Contributor name: " << pContributors[i].name << endl;
//			cout << "Contrubutor amount: " << pContributors[i].amount << endl;
//			tmp++;
//		}
//	}
//	if (tmp == 0) {
//		cout << "none" << endl;
//	}
//
//	return;
//}
//
//
//// practice 7
//void p6_7(void) {
//	size_t vowels = 0;
//	unsigned int consonants = 0;
//	unsigned int others = 0;
//	string input;
//
//	cout << "Enter words (q to quit): " << endl;
//
//	while ((cin >> input)) {
//		if (input.length() == 1 && input[0] == 'q') {
//			break;
//		}
//
//		if (isalpha(input[0])) {
//			if (input[0] == 'a' || input[0] == 'e' || input[0] == 'i' || input[0] == 'o' || input[0] == 'u') {
//				vowels++;
//			} else
//				consonants++;
//		} else
//			others++;
//	}
//
//	cout << vowels << " words beginning with vowels" << endl;
//	cout << consonants << " words beginning with consonants" << endl;
//	cout << others << " otners" << endl;
//
//	return;
//}
//
//
//// practice 8
//void p6_8(void) {
//	string FileName;
//	ifstream inFile;
//	unsigned int num = 0;
//	char ch = 0;
//
//	cout << "Enter the file name:";
//	getline(cin, FileName);
//
//	inFile.open(FileName.c_str());
//
//	while ((ch = inFile.get()) != EOF) {
//		num++;
//	}
//
//	cout << "There are " << num << " characters in " << FileName << " file." << endl;
//}
//
//
//// practice 9
//void p6_9(void) {
//	unsigned int contributors = 0;
//	unsigned int tmp = 0;
//	string FileName;
//	ifstream inFile;
//
//	cout << "Enter the file name:";
//	getline(cin, FileName);
//	inFile.open(FileName.c_str());
//	inFile >> contributors;
//	inFile.get();
//
//	struct pat_info *pContributors = new struct pat_info[contributors];
//
//	for (size_t i = 0; i < contributors; i++) {
////      cout << "Enter the name of " << i + 1 << " contributor: ";
//		getline(inFile, pContributors[i].name);
//
////      cout << "Enter the amount of donation: ";
//		inFile >> pContributors[i].amount;
//		inFile.get();
//	}
//
//	cout << "Grand Pators:" << endl;
//	for (size_t i = 0; i < contributors; i++) {
//		if (pContributors[i].amount > 10000) {
//			cout << "Contributor name: " << pContributors[i].name << endl;
//			cout << "Contrubutor amount: " << pContributors[i].amount << endl;
//			tmp++;
//		}
//	}
//	if (tmp == 0) {
//		cout << "none" << endl;
//	}
//
//	tmp = 0;
//	cout << "Pators:" << endl;
//	for (size_t i = 0; i < contributors; i++) {
//		if (pContributors[i].amount < 10000) {
//			cout << "Contributor name: " << pContributors[i].name << endl;
//			cout << "Contrubutor amount: " << pContributors[i].amount << endl;
//			tmp++;
//		}
//	}
//	if (tmp == 0) {
//		cout << "none" << endl;
//	}
//	return;
//}
//
//int main(int argc, char **argv) {
//	p6_9();
//	return 0;
//}


/******************************************************************ch07 函数——c++的编程模块****************************************************************/


// calling.cpp -- defining, prototyping, and calling a function				7-1

//#include <iostream>
//
//void simple();    // function prototype
//
//int main() {
//	using namespace std;
//	cout << "main() will call the simple() function:\n";
//	simple();     // function call
//	cout << "main() is finished with the simple() function.\n";
//	// cin.get();
//	return 0;
//}
//
//// function definition
//void simple() {
//	using namespace std;
//	cout << "I'm but a simple function.\n";
//}


// protos.cpp -- using prototypes and function calls					7-2

//#include <iostream>
//void cheers(int);       // prototype: no return value
//double cube(double x);  // prototype: returns a double
//int main() {
//	using namespace std;
//	cheers(5);          // function call
//	cout << "Give me a number: ";
//	double side;
//	cin >> side;
//	double volume = cube(side);    // function call
//	cout << "A " << side <<"-foot cube has a volume of ";
//	cout << volume << " cubic feet.\n";
//	cheers(cube(2));    // prototype protection at work
//	// cin.get();
//	// cin.get();
//	return 0;
//}
//
//void cheers(int n) {
//	using namespace std;
//	for (int i = 0; i < n; i++)
//		cout << "Cheers! ";
//	cout << endl;
//}
//
//double cube(double x) {
//	return x * x * x;
//}


// twoarg.cpp -- a function with 2 arguments 				7-3

//#include <iostream>
//using namespace std;
//void n_chars(char, int);
//int main() {
//	int times;
//	char ch;
//
//	cout << "Enter a character: ";
//	cin >> ch;
//	while (ch != 'q') {      // q to quit
//		cout << "Enter an integer: ";
//		cin >> times;
//		n_chars(ch, times); // function with two arguments
//		cout << "\nEnter another character or press the"
//		     " q-key to quit: ";
//		cin >> ch;
//	}
//	cout << "The value of times is " << times << ".\n";
//	cout << "Bye\n";
//	// cin.get();
//	// cin.get();
//	return 0;
//}
//
//void n_chars(char c, int n) { // displays c n times
//	while (n-- > 0)         // continue until n reaches 0
//		cout << c;
//}


// lotto.cpp -- probability of winning						7-4

//#include <iostream>
//// Note: some implementations require double instead of long double
//long double probability(unsigned numbers, unsigned picks);
//int main() {
//	using namespace std;
//	double total, choices;
//	cout << "Enter the total number of choices on the game card and\n"
//	     "the number of picks allowed:\n";
//	while ((cin >> total >> choices) && choices <= total) {
//		cout << "You have one chance in ";
//		cout << probability(total, choices);      // compute the odds
//		cout << " of winning.\n";
//		cout << "Next two numbers (q to quit): ";
//	}
//	cout << "bye\n";
//	// cin.get();
//	// cin.get();
//	return 0;
//}
//
//// the following function calculates the probability of picking picks
//// numbers correctly from numbers choices
//long double probability(unsigned numbers, unsigned picks) {
//	long double result = 1.0;  // here come some local variables
//	long double n;
//	unsigned p;
//
//	for (n = numbers, p = picks; p > 0; n--, p--)
//		result = result * n / p ;
//	return result;
//}


// arrfun1.cpp -- functions with an array argument					7-5

//#include <iostream>
//const int ArSize = 8;
//int sum_arr(int arr[], int n);        // prototype
//int main()
//{
//    using namespace std;
//    int cookies[ArSize] = {1,2,4,8,16,32,64,128};
//// some systems require preceding int with static to
//// enable array initialization
//
//    int sum = sum_arr(cookies, ArSize);
//    cout << "Total cookies eaten: " << sum <<  "\n";
//    // cin.get();
//    return 0;
//}
//
//// return the sum of an integer array
//int sum_arr(int arr[], int n)
//{
//    int total = 0;
//
//    for (int i = 0; i < n; i++)
//        total = total + arr[i];
//    return total;
//}


// arrfun2.cpp -- functions with an array argument				7-6

//#include <iostream>
//const int ArSize = 8;
//int sum_arr(int arr[], int n);
//// use std:: instead of using directive
//int main() {
//	int cookies[ArSize] = {1,2,4,8,16,32,64,128};
////  some systems require preceding int with static to
////  enable array initialization
//
//	std::cout << cookies << " = array address, ";
////  some systems require a type cast: unsigned (cookies)
//
//	std::cout << sizeof cookies << " = sizeof cookies\n";
//	int sum = sum_arr(cookies, ArSize);
//	std::cout << "Total cookies eaten: " << sum <<  std::endl;
//	sum = sum_arr(cookies, 3);        // a lie
//	std::cout << "First three eaters ate " << sum << " cookies.\n";
//	sum = sum_arr(cookies + 4, 4);    // another lie
//	std::cout << "Last four eaters ate " << sum << " cookies.\n";
//	// std::cin.get();
//	return 0;
//}
//
//// return the sum of an integer array
//int sum_arr(int arr[], int n) {
//	int total = 0;
//	std::cout << arr << " = arr, ";
//// some systems require a type cast: unsigned (arr)
//
//	std::cout << sizeof arr << " = sizeof arr\n";
//	for (int i = 0; i < n; i++)
//		total = total + arr[i];
//	return total;
//}


// arrfun3.cpp -- array functions and const							7-7
//#include <iostream>
//const int Max = 5;
//
//// function prototypes
//int fill_array(double ar[], int limit);
//void show_array(const double ar[], int n);  // don't change data
//void revalue(double r, double ar[], int n);
//
//int main() {
//	using namespace std;
//	double properties[Max];
//
//	int size = fill_array(properties, Max);
//	show_array(properties, size);
//	if (size > 0) {
//		cout << "Enter revaluation factor: ";
//		double factor;
//		while (!(cin >> factor)) {  // bad input
//			cin.clear();
//			while (cin.get() != '\n')
//				continue;
//			cout << "Bad input; Please enter a number: ";
//		}
//		revalue(factor, properties, size);
//		show_array(properties, size);
//	}
//	cout << "Done.\n";
//	// cin.get();
//	// cin.get();
//	return 0;
//}
//
//int fill_array(double ar[], int limit) {
//	using namespace std;
//	double temp;
//	int i;
//	for (i = 0; i < limit; i++) {
//		cout << "Enter value #" << (i + 1) << ": ";
//		cin >> temp;
//		if (!cin) {  // bad input
//			cin.clear();
//			while (cin.get() != '\n')
//				continue;
//			cout << "Bad input; input process terminated.\n";
//			break;
//		} else if (temp < 0)   // signal to terminate
//			break;
//		ar[i] = temp;
//	}
//	return i;
//}
//
//// the following function can use, but not alter,
//// the array whose address is ar
//void show_array(const double ar[], int n) {
//	using namespace std;
//	for (int i = 0; i < n; i++) {
//		cout << "Property #" << (i + 1) << ": $";
//		cout << ar[i] << endl;
//	}
//}
//
//// multiplies each element of ar[] by r
//void revalue(double r, double ar[], int n) {
//	for (int i = 0; i < n; i++)
//		ar[i] *= r;
//}


// arrfun4.cpp -- functions with an array range			7-8

//#include <iostream>
//const int ArSize = 8;
//int sum_arr(const int * begin, const int * end);
//int main() {
//	using namespace std;
//	int cookies[ArSize] = {1,2,4,8,16,32,64,128};
////  some systems require preceding int with static to
////  enable array initialization
//
//	int sum = sum_arr(cookies, cookies + ArSize);
//	cout << "Total cookies eaten: " << sum <<  endl;
//	sum = sum_arr(cookies, cookies + 3);        // first 3 elements
//	cout << "First three eaters ate " << sum << " cookies.\n";
//	sum = sum_arr(cookies + 4, cookies + 8);    // last 4 elements
//	cout << "Last four eaters ate " << sum << " cookies.\n";
//	// cin.get();
//	return 0;
//}
//
//// return the sum of an integer array
//int sum_arr(const int * begin, const int * end) {
//	const int * pt;
//	int total = 0;
//
//	for (pt = begin; pt != end; pt++)
//		total = total + *pt;
//	return total;
//}


// strgfun.cpp -- functions with a string argument			7-9

//#include <iostream>
//unsigned int c_in_str(const char * str, char ch);
//int main() {
//	using namespace std;
//	char mmm[15] = "minimum";    // string in an array
//// some systems require preceding char with static to
//// enable array initialization
//
////	char *wail = "ululate";												//警告，应加const，
//
//	const char *wail = "ululate";    // wail points to string
//
//	unsigned int ms = c_in_str(mmm, 'm');
//	unsigned int us = c_in_str(wail, 'u');
//	cout << ms << " m characters in " << mmm << endl;
//	cout << us << " u characters in " << wail << endl;
//	// cin.get();
//	return 0;
//}
//
//// this function counts the number of ch characters
//// in the string str
//unsigned int c_in_str(const char * str, char ch) {
//	unsigned int count = 0;
//
//	while (*str) {      // quit when *str is '\0'
//		if (*str == ch)
//			count++;
//		str++;        // move pointer to next char
//	}
//	return count;
//}


// strgback.cpp -- a function that returns a pointer to char			7-10

//#include <iostream>
//char * buildstr(char c, int n);     // prototype
//int main() {
//	using namespace std;
//	int times;
//	char ch;
//
//	cout << "Enter a character: ";
//	cin >> ch;
//	cout << "Enter an integer: ";
//	cin >> times;
//	char *ps = buildstr(ch, times);
//	cout << ps << endl;
//	delete [] ps;                   // free memory
//	ps = buildstr('+', 20);         // reuse pointer		重复使用
//	cout << ps << "-DONE-" << ps << endl;
//	delete [] ps;                   // free memory
//	// cin.get();
//	// cin.get();
//	return 0;
//}
//
//// builds string made of n c characters
//char * buildstr(char c, int n) {
//	char * pstr = new char[n + 1];
//	pstr[n] = '\0';         // terminate string
//	while (n-- > 0)
//		pstr[n] = c;        // fill rest of string
//	return pstr;
//}


// travel.cpp -- using structures with functions			7-11

//#include <iostream>
//struct travel_time {
//	int hours;
//	int mins;
//};
//const int Mins_per_hr = 60;
//
//travel_time sum(travel_time t1, travel_time t2);
//void show_time(travel_time t);
//
//int main() {
//	using namespace std;
//	travel_time day1 = {5, 45};    // 5 hrs, 45 min
//	travel_time day2 = {4, 55};    // 4 hrs, 55 min
//
//	travel_time trip = sum(day1, day2);
//	cout << "Two-day total: ";
//	show_time(trip);
//
//	travel_time day3= {4, 32};
//	cout << "Three-day total: ";
//	show_time(sum(trip, day3));
//	// cin.get();
//
//	return 0;
//}
//
//travel_time sum(travel_time t1, travel_time t2) {
//	travel_time total;
//
//	total.mins = (t1.mins + t2.mins) % Mins_per_hr;
//	total.hours = t1.hours + t2.hours +
//	              (t1.mins + t2.mins) / Mins_per_hr;
//	return total;
//}
//
//void show_time(travel_time t) {
//	using namespace std;
//	cout << t.hours << " hours, "
//	     << t.mins << " minutes\n";
//}


// strctfun.cpp -- functions with a structure argument				7-12

//#include <iostream>
//#include <cmath>
//
//// structure declarations
//struct polar {
//	double distance;      // distance from origin
//	double angle;         // direction from origin
//};
//struct rect {
//	double x;             // horizontal distance from origin
//	double y;             // vertical distance from origin
//};
//
//// prototypes
//polar rect_to_polar(rect xypos);
//void show_polar(polar dapos);
//
//int main() {
//	using namespace std;
//	rect rplace;
//	polar pplace;
//
//	cout << "Enter the x and y values: ";
//	while (cin >> rplace.x >> rplace.y) { // slick use of cin
//		pplace = rect_to_polar(rplace);
//		show_polar(pplace);
//		cout << "Next two numbers (q to quit): ";
//	}
//	cout << "Done.\n";
//	return 0;
//}
//
//// convert rectangular to polar coordinates
//polar rect_to_polar(rect xypos) {
//	using namespace std;
//	polar answer;
//
//	answer.distance =
//	    sqrt( xypos.x * xypos.x + xypos.y * xypos.y);
//	answer.angle = atan2(xypos.y, xypos.x);
//	return answer;      // returns a polar structure
//}
//
//// show polar coordinates, converting angle to degrees
//void show_polar (polar dapos) {
//	using namespace std;
//	const double Rad_to_deg = 57.29577951;
//
//	cout << "distance = " << dapos.distance;
//	cout << ", angle = " << dapos.angle * Rad_to_deg;
//	cout << " degrees\n";
//}


// strctptr.cpp -- functions with pointer to structure arguments			7-13

//#include <iostream>
//#include <cmath>
//
//// structure templates
//struct polar {
//	double distance;      // distance from origin
//	double angle;         // direction from origin
//};
//struct rect {
//	double x;             // horizontal distance from origin
//	double y;             // vertical distance from origin
//};
//
//// prototypes
//void rect_to_polar(const rect * pxy, polar * pda);
//void show_polar (const polar * pda);
//
//int main() {
//	using namespace std;
//	rect rplace;
//	polar pplace;
//
//	cout << "Enter the x and y values: ";
//	while (cin >> rplace.x >> rplace.y) {
//		rect_to_polar(&rplace, &pplace);    // pass addresses
//		show_polar(&pplace);        // pass address
//		cout << "Next two numbers (q to quit): ";
//	}
//	cout << "Done.\n";
//	return 0;
//}
//
//// show polar coordinates, converting angle to degrees
//void show_polar (const polar * pda) {
//	using namespace std;
//	const double Rad_to_deg = 57.29577951;
//
//	cout << "distance = " << pda->distance;
//	cout << ", angle = " << pda->angle * Rad_to_deg;
//	cout << " degrees\n";
//}
//
//// convert rectangular to polar coordinates
//void rect_to_polar(const rect * pxy, polar * pda) {
//	using namespace std;
//	pda->distance =
//	    sqrt(pxy->x * pxy->x + pxy->y * pxy->y);
//	pda->angle = atan2(pxy->y, pxy->x);
//}


// topfive.cpp -- handling an array of string objects					7-14

//#include <iostream>
//#include <string>
//using namespace std;
//const int SIZE = 5;
//void display(const string sa[], int n);
//int main()
//{
//    string list[SIZE];     // an array holding 5 string object
//    cout << "Enter your " << SIZE << " favorite astronomical sights:\n";
//    for (int i = 0; i < SIZE; i++)
//    {
//        cout << i + 1 << ": ";
//        getline(cin,list[i]);
//    }
//
//    cout << "Your list:\n";
//    display(list, SIZE);
//    // cin.get();
//
//	return 0;
//}
//
//void display(const string sa[], int n)
//{
//    for (int i = 0; i < n; i++)
//        cout << i + 1 << ": " << sa[i] << endl;
//}


//arrobj.cpp -- functions with array objects							7-15

//#include <iostream>
//#include <array>
//#include <string>
//const int Seasons = 4;
//const std::array<std::string, Seasons> Snames =
//    {"Spring", "Summer", "Fall", "Winter"};							//存对象的对象
//
//void fill(std::array<double, Seasons> * pa);
//void show(std::array<double, Seasons> da);
//int main()
//{
//    std::array<double, 4> expenses;
//    fill(&expenses);
//    show(expenses);
//    // std::cin.get();
//    // std::cin.get();
//    return 0;
//}
//
//void fill(std::array<double, Seasons> * pa)
//{
//    for (int i = 0; i < Seasons; i++)
//    {
//        std::cout << "Enter " << Snames[i] << " expenses: ";
//        std::cin >> (*pa)[i];
//    }
//}
//
//void show(std::array<double, Seasons> da)
//{
//    double total = 0.0;
//    std::cout << "\nEXPENSES\n";
//    for (int i = 0; i < Seasons; i++)
//    {
//        std::cout << Snames[i] << ": $" << da[i] << '\n';
//        total += da[i];
//    }
//    std::cout << "Total: $" << total << '\n';
//}


// recur.cpp -- using recursion								7-16

//#include <iostream>
//void countdown(int n);
//
//int main() {
//	countdown(4);           // call the recursive function
//	// std::cin.get();
//	return 0;
//}
//
//void countdown(int n) {
//	using namespace std;
//	cout << "Counting down ... " << n << endl;
//	if (n > 0)
//		countdown(n-1);     // function calls itself
//	cout << n << ": Kaboom!\n";
//}


// ruler.cpp -- using recursion to subdivide a ruler					7-17

//#include <iostream>
//const int Len = 66;
//const int Divs = 6;
//void subdivide(char ar[], int low, int high, int level);
//int main() {
//	char ruler[Len];
//	int i;
//	for (i = 1; i < Len - 2; i++)
//		ruler[i] = ' ';
//	ruler[Len - 1] = '\0';
//	int max = Len - 2;
//	int min = 0;
//	ruler[min] = ruler[max] = '|';
//	std::cout << ruler << std::endl;
//	for (i = 1; i <= Divs; i++) {
//		subdivide(ruler,min,max, i);
//		std::cout << ruler << std::endl;
//		for (int j = 1; j < Len - 2; j++)
//			ruler[j] = ' ';  // reset to blank ruler
//	}
//	// std::cin.get();
//
//	return 0;
//}
//
//void subdivide(char ar[], int low, int high, int level) {
//	if (level == 0)
//		return;
//	int mid = (high + low) / 2;
//	ar[mid] = '|';
//	subdivide(ar, low, mid, level - 1);
//	subdivide(ar, mid, high, level - 1);
//}



// fun_ptr.cpp -- pointers to functions					7-18

//#include <iostream>
//double betsy(int);
//double pam(int);
//
//// second argument is pointer to a type double function that
//// takes a type int argument
//void estimate(int lines, double (*pf)(int));
//
//int main() {
//	using namespace std;
//	int code;
//
//	cout << "How many lines of code do you need? ";
//	cin >> code;
//	cout << "Here's Betsy's estimate:\n";
//	estimate(code, betsy);
//	cout << "Here's Pam's estimate:\n";
//	estimate(code, pam);
//	// cin.get();
//	// cin.get();
//	return 0;
//}
//
//double betsy(int lns) {
//	return 0.05 * lns;
//}
//
//double pam(int lns) {
//	return 0.03 * lns + 0.0004 * lns * lns;
//}
//
//void estimate(int lines, double (*pf)(int)) {
//	using namespace std;
//	cout << lines << " lines will take ";
//	cout << (*pf)(lines) << " hour(s)\n";
//}


// arfupt.cpp -- an array of function pointers								7-19

//#include <iostream>
//// various notations, same signatures
//const double * f1(const double ar[], int n);
//const double * f2(const double [], int);
//const double * f3(const double *, int);
//
//int main() {
//	using namespace std;
//	double av[3] = {1112.3, 1542.6, 2227.9};
//
//	// pointer to a function
//	const double *(*p1)(const double *, int) = f1;
//	auto p2 = f2;  // C++0x automatic type deduction
//	// pre-C++0x can use the following code instead
//	// const double *(*p2)(const double *, int) = f2;
//	cout << "Using pointers to functions:\n";
//	cout << " Address  Value\n";
//	cout <<  (*p1)(av,3) << ": " << *(*p1)(av,3) << endl;
//	cout << p2(av,3) << ": " << *p2(av,3) << endl;
//
//	// pa an array of pointers
//	// auto doesn't work with list initialization
//	const double *(*pa[3])(const double *, int) = {f1,f2,f3};
//	// but it does work for initializing to a single value
//	// pb a pointer to first element of pa
//	auto pb = pa;
//	// pre-C++0x can use the following code instead
//	// const double *(**pb)(const double *, int) = pa;
//	cout << "\nUsing an array of pointers to functions:\n";
//	cout << " Address  Value\n";
//	for (int i = 0; i < 3; i++)
//		cout << pa[i](av,3) << ": " << *pa[i](av,3) << endl;
//	cout << "\nUsing a pointer to a pointer to a function:\n";
//	cout << " Address  Value\n";
//	for (int i = 0; i < 3; i++)
//		cout << pb[i](av,3) << ": " << *pb[i](av,3) << endl;
//
//	// what about a pointer to an array of function pointers
//	cout << "\nUsing pointers to an array of pointers:\n";
//	cout << " Address  Value\n";
//	// easy way to declare pc
//	auto pc = &pa;
//	// pre-C++0x can use the following code instead
//	// const double *(*(*pc)[3])(const double *, int) = &pa;
//	cout << (*pc)[0](av,3) << ": " << *(*pc)[0](av,3) << endl;
//	// hard way to declare pd
//	const double *(*(*pd)[3])(const double *, int) = &pa;
//	// store return value in pdb
//	const double * pdb = (*pd)[1](av,3);
//	cout << pdb << ": " << *pdb << endl;
//	// alternative notation
//	cout << (*(*pd)[2])(av,3) << ": " << *(*(*pd)[2])(av,3) << endl;
//	// cin.get();
//	return 0;
//}
//
//// some rather dull functions
//
//const double * f1(const double * ar, int n) {
//	return ar;
//}
//const double * f2(const double ar[], int n) {
//	return ar+1;
//}
//const double * f3(const double ar[], int n) {
//	return ar+2;
//}


// arfupt1.cpp -- an array of function pointers							7-20

//#include <iostream>
//// various notations, same signatures
//const double * f1(const double ar[], int n);
//const double * f2(const double [], int);
//const double * f3(const double *, int);
//
//int main() {
//	using namespace std;
//	double av[3] = {1112.3, 1542.6, 2227.9};
//
//	// pointer to a function
//	typedef const double *(*p_fun)(const double *, int);
//	p_fun p1 = f1;
//	auto p2 = f2;  // C++0x automatic type deduction
//	cout << "Using pointers to functions:\n";
//	cout << " Address  Value\n";
//	cout <<  (*p1)(av,3) << ": " << *(*p1)(av,3) << endl;
//	cout << p2(av,3) << ": " << *p2(av,3) << endl;
//
//	// pa an array of pointers
//	p_fun pa[3] = {f1,f2,f3};
//	// auto doesn't work with list initialization
//	// but it does work for initializing to a single value
//	// pb a pointer to first element of pa
//	auto pb = pa;
//	cout << "\nUsing an array of pointers to functions:\n";
//	cout << " Address  Value\n";
//	for (int i = 0; i < 3; i++)
//		cout << pa[i](av,3) << ": " << *pa[i](av,3) << endl;
//	cout << "\nUsing a pointer to a pointer to a function:\n";
//	cout << " Address  Value\n";
//	for (int i = 0; i < 3; i++)
//		cout << pb[i](av,3) << ": " << *pb[i](av,3) << endl;
//
//	// what about a pointer to an array of function pointers
//	cout << "\nUsing pointers to an array of pointers:\n";
//	cout << " Address  Value\n";
//	// easy way to declare pc
//	auto pc = &pa;
//	cout << (*pc)[0](av,3) << ": " << *(*pc)[0](av,3) << endl;
//	// slightly harder way to declare pd
//	p_fun (*pd)[3] = &pa;
//	// store return value in pdb
//	const double * pdb = (*pd)[1](av,3);
//	cout << pdb << ": " << *pdb << endl;
//	// alternative notation
//	cout << (*(*pd)[2])(av,3) << ": " << *(*(*pd)[2])(av,3) << endl;
//	// cin.get();
//	return 0;
//}
//
//// some rather dull functions
//
//const double * f1(const double * ar, int n) {
//	return ar;
//}
//const double * f2(const double ar[], int n) {
//	return ar+1;
//}
//const double * f3(const double ar[], int n) {
//	return ar+2;
//}


//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


//#include <iostream>
//#include <string>
//#include <cctype>
//using namespace std;
//
//// practice 1
//void p7_1(void) {
//	double x, y;
//	double avg = 0;
//
//	cout << "Enter two numbers: ";
//	cin >> x >> y;
//	while (x != 0 && y != 0) {
//		avg = 2.0 * x * y / (x + y);
//		cout << "The average of " << x << " and " << y << " is " << avg << endl;
//
//		cout << "Enter the next two numbers: ";
//		cin >> x >> y;
//	}
//}
//
//
//// practice 2
//void GetInput(double *grade, unsigned int *number) {
//	cout << "You can enter up to 10 grades( -1 to quit): " << endl;
//	while ((*number<10)&&(cin >> grade[(*number)++])) {
//		if (grade[*number - 1] == -1) {
//			break;
//		}
//	}
////(*number)--;
//}
//void PrintArray(const double *grage, const unsigned int number) {
//	cout << "The grade is: " << endl;
//
//	for (unsigned int i = 0; i < number; i++) {
//		cout << grage[i] << " ";
//	}
//
//	cout << endl;
//}
//void CalAvg(const double *grade, const unsigned int number) {
//	double total = 0.0;
//	cout << "The average is :";
//	for (unsigned int i = 0; i < number; i++) {
//		total += grade[i];
//	}
//	cout << total / number << endl;
//}
//void p7_2(void) {
//	double grade[10];
//	unsigned int enter = 0;
//
//	GetInput(grade, &enter);
//	PrintArray(grade, enter);
//	CalAvg(grade, enter);
//
//	return;
//}
//
//
//// practice 3
//struct box {
//	char maker[40];
//	float height;
//	float width;
//	float length;
//	float volume;
//};
//void PrintBox(struct box mbox) {
//	cout << "Box maker: " << mbox.maker << endl;
//	cout << "Box height: " << mbox.height << endl;
//	cout << "Box width: " << mbox.width << endl;
//	cout << "Box length: " << mbox.length << endl;
//	cout << "Box volume: " << mbox.volume << endl;
//}
//void CalBoxVolume(struct box *pbox) {
//	pbox->volume = pbox->height * pbox->width * pbox->length;
//}
//void p7_3(void) {
//	struct box mbox = { "Jimmy Chen", 0.25, 4.0, 1.0, 0.0 };
//	PrintBox(mbox);
//	CalBoxVolume(&mbox);
//	PrintBox(mbox);
//}
//
//
//// practice 4
//long double probability(unsigned number, unsigned picks) {
//	long double result = 1.0;
//	long double n = 0;
//	unsigned p;
//	for (n = number, p = picks; p > 0; n--, p--) {
//		result = result * n / p;
//	}
//
//	return result;
//}
//void p7_4(void) {
//	unsigned field1 = 47;
//	unsigned field2 = 27;
//
//	cout << "You have on chance in ";
//	cout << probability(47, 5) * probability(27, 1);
//	cout << " of winning.\n" << endl;
//}
//
//
//// practice 5
//long long factorial(unsigned int number) {
//	if (number == 0 || number == 1) {
//		return 1;
//	} else {
//		return number * factorial(number - 1);
//	}
//}
//void p7_5(void) {
//	long long result = 0;
//	unsigned int input = 0;
//
//	cout << "Please enter the number: ";
//	cin >> input;
//
//	while (1) {
//
//		result = factorial(input);
//		cout << "The result of " << input << "! is " << result << "." << endl;
//
//		cout << "Please enter the next number: ";
//		cin >> input;
//
//	}
//}
//
//
//// practice 6
//unsigned int Fill_array(double double_array[], unsigned int length) {
//	unsigned int n_input = 0;
//	cout << "Enter double numbers (non-digital to quit): " << endl;
//	for (size_t i = 0; i < length; i++) {
//		if (cin >> double_array[i]) {
//			n_input++;
//		} else {
//			break;
//		}
//	}
//	return n_input;
//}
//void Show_array(double double_array[], unsigned int length) {
//	cout << "The double array is :" << endl;
//	for (size_t i = 0; i < length; i++) {
//		cout << double_array[i] << " ";
//		if ((i + 1) % 5 == 0) {							//写得妙啊
//			cout << endl;
//		}
//	}
//	if (length % 5 != 0) {
//		cout << endl;
//	}
//}
//void Reverse_array(double double_array[], unsigned int length) {
//	cout << "Revert the array" << endl;
//	for (size_t i = 0; i < length / 2; i++) {
//		double tmp = double_array[i];
//		double_array[i] = double_array[length - 1 - i];
//		double_array[length - 1 - i] = tmp;
//	}
//}
//void p7_6(void) {
//	double double_array[10];
//	unsigned int n_input;
//	n_input = Fill_array(double_array, 10);
//	Show_array(double_array, n_input);
//	Reverse_array(double_array, n_input);
//	Show_array(double_array, n_input);
//}
//
//
//// practice 7
//int fill_array(double *ar_begin, double *ar_end) {
//	double temp = 0.0;
//	int i = 0;
//	double *ar_tmp = nullptr;			//c++11新增，空指针
//	for (ar_tmp = ar_begin; ar_tmp < ar_end; ar_tmp++) {
//		cout << "Enter value #" << (i + 1) << ": ";
//		cin >> temp;
//		if (!cin) {
//			cin.clear();
//			while (cin.get() != '\n')
//				continue;
//			cout << "Bad input; input preocess terminated.\n";
//			break;
//		} else if (temp < 0) {
//			break;
//		}
//		*ar_tmp = temp;
//		i++;
//	}
//
//	return i;
//}
//void show_array(const double *ar_begin, const double *ar_end) {
//	const double *ar_tmp = nullptr;
//	unsigned int i = 0;
//	for (ar_tmp = ar_begin; ar_tmp < ar_end; ar_tmp++) {
//		cout << "Property #" << (i + 1) << ": $";
//		cout << *ar_tmp << endl;
//		i++;
//	}
//}
//void revalue(double *ar_begin, double *ar_end, double r) {
//	for (double * ar = ar_begin; ar < ar_end; ar++) {
//		*ar *= r;
//	}
//}
//void p7_7(void) {
//	double properties[10];
//
//	int size = fill_array(properties, properties + 10);
//	show_array(properties, properties + size);
//	if (size > 0) {
//		cout << "Enter revaluation factor: ";
//		double factor;
//		while (!(cin >> factor)) {
//			cin.clear();
//			while (cin.get() != '\n')
//				continue;
//			cout << "Bad input; Please enter a number: ";
//		}
//		revalue(properties, properties + size, factor);
//		show_array(properties, properties + size);
//	}
//
//	cout << "Done.\n";
//
//	return;
//}
//
//
//// practice 8
//const int Seasons = 4;
//const char *Snames[Seasons] = { "Spring", "Summer", "Fall", "Winter" };
//struct cost {
//	double expenses[Seasons];
//};
//void fill(double *pa) {
//	for (int i = 0; i < Seasons; i++) {
//		cout << "Enter " << Snames[i] << " expenses: ";
//		cin >> pa[i];
//	}
//}
//void show(double *pa) {
//	double total = 0.0;
//	cout << "\nEXPENSES\n";
//	for (int i = 0; i < Seasons; i++) {
//		cout << Snames[i] << ": $" << pa[i] << endl;
//		total += pa[i];
//	}
//	cout << "Total Expenses: $" << total << endl;
//}
//void fill(struct cost *pCost) {
//	for (int i = 0; i < Seasons; i++) {
//		cout << "Enter " << Snames[i] << " expenses: ";
//		cin >> pCost->expenses[i];
//	}
//}
//void show(struct cost *pCost) {
//	double total = 0.0;
//	cout << "\nEXPENSE\n";
//	for (int i = 0; i < Seasons; i++) {
//		cout << Snames[i] << ": $" << pCost->expenses[i] << endl;
//		total += pCost->expenses[i];
//	}
//	cout << "Total Expense: $" << total << endl;
//}
//void p7_8(void) {
//	// situation a
//	cout << "Situation a: " << endl;
//	double pa[Seasons] = { 0 };
//	fill(pa);
//	show(pa);
//
//	// situation b
//	cout << endl << endl;
//	cout << "Situation b: " << endl;
//	struct cost *pCost = new struct cost;
//	fill(pCost);
//	show(pCost);
//	delete pCost;
//}
//
//
//// practice 9
//const int SLEN = 30;
//struct student {
//	char fullname[SLEN];
//	char hobby[SLEN];
//	int ooplevel;
//};
//int getinfo(student pa[], int n) {
//	int enter = 0;
//	for (int i = 0; i < n; i++) {
//		cout << "Enter the infomation of student #" << i+1 << endl;
//		cout << "Enter full name (blank line to quit): ";
//		cin.getline(pa[i].fullname, SLEN);
//		cout << "Enter hobby: ";
//		cin.getline(pa[i].hobby, SLEN);
//		cout << "Enter ooplevel: ";
//		cin >> pa[i].ooplevel;
//		while (cin.get() != '\n')
//			continue;
//		enter++;
//	}
//	return enter;
//}
//void display1(student st) {
//	cout << "Using display1(student st): " << endl;
//	cout << "Full name: " << st.fullname << endl;
//	cout << "Hobby: " << st.hobby << endl;
//	cout << "Ooplevel: " << st.ooplevel << endl;
//}
//void display2(const student *st) {
//	cout << "Using display2(const student *st)" << endl;
//	cout << "Full name: " << st->fullname << endl;
//	cout << "Hobby: " << st->hobby << endl;
//	cout << "Ooplevel: " << st->ooplevel << endl;
//}
//void display3(const student pa[], int n) {
//	cout << "Using display3(const student pa[], int n)" << endl;;
//	for (int i = 0; i < n; i++) {
//		cout << "Infomation of student #" << i + 1 << ": " << endl;
//		cout << "Full name: " << pa[i].fullname << endl;
//		cout << "Hobby: " << pa[i].hobby << endl;
//		cout << "Ooplevel: " << pa[i].ooplevel << endl;
//	}
//}
//void p7_9(void) {
//	cout << "Enter class size: ";
//	int class_size;
//	cin >> class_size;
//	while (cin.get() != '\n')
//		continue;
//
//	student *ptr_stu = new student[class_size];
//	int entered = getinfo(ptr_stu, class_size);
//	for (int i = 0; i < entered; i++) {
//		display1(ptr_stu[i]);
//		display2(&ptr_stu[i]);
//	}
//	display3(ptr_stu, entered);
//
//	delete[] ptr_stu;
//	cout << "Done.\n";
//	return;
//}
//
//
//// practice 10
//double add(double x, double y) {
//	return x + y;
//}
//double mul(double x, double y) {
//	return x * y;
//}
//double calculate(double x, double y, double(*fun)(double, double)) {
//	return fun(x, y);
//}
//void p7_10(void) {
//	double x = 0.0;
//	double y = 0.0;
//
//	cout << "Enter two double number: ";
//	while (cin >> x >> y) {
//		cout << "Call add, the result of " << x << " and " << y << " is " << calculate(x, y, add) << endl;
//		cout << "Call mul, the result of " << x << " abd " << y << " is " << calculate(x, y, mul) << endl;
//
//		cout << "Enter next two double number: ";
//	}
//}
//
//
//int main(int argc, char **argv) {
//	p7_10();
//	return 0;
//}

/******************************************************************ch08 函数探幽****************************************************************/


// inline.cpp -- using an inline function		8-1

//#include <iostream>
//// an inline function definition
//inline double square(double x) {
//	return x * x;
//}
//int main() {
//	using namespace std;
//	double a, b;
//	double c = 13.0;
//
//	a = square(5.0);
//	b = square(4.5 + 7.5);   // can pass expressions
//	cout << "a = " << a << ", b = " << b << "\n";
//	cout << "c = " << c;
//	cout << ", c squared = " << square(c++) << "\n";
//	cout << "Now c = " << c << "\n";
//	// cin.get();
//	return 0;
//}


// firstref.cpp -- defining and using a reference		8-2

//#include <iostream>
//int main() {
//	using namespace std;
//	int rats = 101;
//	int & rodents = rats;   // rodents is a reference
//
//	cout << "rats = " << rats;
//	cout << ", rodents = " << rodents << endl;
//	rodents++;
//	cout << "rats = " << rats;
//	cout << ", rodents = " << rodents << endl;
//
//// some implementations require type casting the following
//// addresses to type unsigned
//	cout << "rats address = " << &rats;
//	cout << ", rodents address = " << &rodents << endl;
//	// cin.get();
//	return 0;
//}


// secref.cpp -- defining and using a reference			8-3

//#include <iostream>
//int main() {
//	using namespace std;
//	int rats = 101;
//	int & rodents = rats;   // rodents is a reference
//
//	cout << "rats = " << rats;
//	cout << ", rodents = " << rodents << endl;
//
//	cout << "rats address = " << &rats;
//	cout << ", rodents address = " << &rodents << endl;
//
//	int bunnies = 50;
//	rodents = bunnies;       // can we change the reference?
//	cout << "bunnies = " << bunnies;
//	cout << ", rats = " << rats;
//	cout << ", rodents = " << rodents << endl;
//
//	cout << "bunnies address = " << &bunnies;
//	cout << ", rodents address = " << &rodents << endl;
//	// cin.get();
//	return 0;
//}


// swaps.cpp -- swapping with references and with pointers			8-4

//#include <iostream>
//void swapr(int & a, int & b);   // a, b are aliases for ints
//void swapp(int * p, int * q);   // p, q are addresses of ints
//void swapv(int a, int b);       // a, b are new variables
//int main() {
//	using namespace std;
//	int wallet1 = 300;
//	int wallet2 = 350;
//
//	cout << "wallet1 = $" << wallet1;
//	cout << " wallet2 = $" << wallet2 << endl;
//
//	cout << "Using references to swap contents:\n";
//	swapr(wallet1, wallet2);   // pass variables
//	cout << "wallet1 = $" << wallet1;
//	cout << " wallet2 = $" << wallet2 << endl;
//
//	cout << "Using pointers to swap contents again:\n";
//	swapp(&wallet1, &wallet2); // pass addresses of variables
//	cout << "wallet1 = $" << wallet1;
//	cout << " wallet2 = $" << wallet2 << endl;
//
//	cout << "Trying to use passing by value:\n";
//	swapv(wallet1, wallet2);   // pass values of variables
//	cout << "wallet1 = $" << wallet1;
//	cout << " wallet2 = $" << wallet2 << endl;
//	// cin.get();
//	return 0;
//}
//
//void swapr(int & a, int & b) {  // use references
//	int temp;
//
//	temp = a;       // use a, b for values of variables
//	a = b;
//	b = temp;
//}
//
//void swapp(int * p, int * q) {  // use pointers
//	int temp;
//
//	temp = *p;      // use *p, *q for values of variables
//	*p = *q;
//	*q = temp;
//}
//
//void swapv(int a, int b) {      // try using values
//	int temp;
//
//	temp = a;      // use a, b for values of variables
//	a = b;
//	b = temp;
//}


// cubes.cpp -- regular and reference arguments			8-5

//#include <iostream>
//double cube(double a);
//double refcube(double &ra);
//int main () {
//	using namespace std;
//	double x = 3.0;
//
//	cout << cube(x);
//	cout << " = cube of " << x << endl;
//	cout << refcube(x);
//	cout << " = cube of " << x << endl;
//	// cin.get();
//	return 0;
//}
//
//double cube(double a) {
//	a *= a * a;
//	return a;
//}
//
//double refcube(double &ra) {
//	ra *= ra * ra;
//	return ra;
//}


//strc_ref.cpp -- using structure references			8-6

//#include <iostream>
//#include <string>
//struct free_throws {
//	std::string name;
//	int made;
//	int attempts;
//	float percent;
//};
//
//void display(const free_throws & ft);
//void set_pc(free_throws & ft);
//free_throws & accumulate(free_throws &target, const free_throws &source);
//
//int main() {
//	free_throws one = {"Ifelsa Branch", 13, 14};
//	free_throws two = {"Andor Knott", 10, 16};
//	free_throws three = {"Minnie Max", 7, 9};
//	free_throws four = {"Whily Looper", 5, 9};
//	free_throws five = {"Long Long", 6, 14};
//	free_throws team = {"Throwgoods", 0, 0};
//	free_throws dup;
//	set_pc(one);
//	display(one);
//	accumulate(team, one);
//	display(team);
//// use return value as argument
//	display(accumulate(team, two));
//	accumulate(accumulate(team, three), four);
//	display(team);
//// use return value in assignment
//	dup = accumulate(team,five);
//	std::cout << "Displaying team:\n";
//	display(team);
//	std::cout << "Displaying dup after assignment:\n";
//	display(dup);
//	set_pc(four);
//// ill-advised assignment
//	accumulate(dup,five) = four;
//	std::cout << "Displaying dup after ill-advised assignment:\n";
//	display(dup);
//	// std::cin.get();
//	return 0;
//}
//
//void display(const free_throws & ft) {
//	using std::cout;
//	cout << "Name: " << ft.name << '\n';
//	cout << "  Made: " << ft.made << '\t';
//	cout << "Attempts: " << ft.attempts << '\t';
//	cout << "Percent: " << ft.percent << '\n';
//}
//void set_pc(free_throws & ft) {
//	if (ft.attempts != 0)
//		ft.percent = 100.0f *float(ft.made)/float(ft.attempts);
//	else
//		ft.percent = 0;
//}
//
//free_throws & accumulate(free_throws & target, const free_throws & source) {
//	target.attempts += source.attempts;
//	target.made += source.made;
//	set_pc(target);
//	return target;
//}


// strquote.cpp  -- different designs		8-7

//#include <iostream>
//#include <string>
//using namespace std;
//string version1(const string & s1, const string & s2);
//const string & version2(string & s1, const string & s2);  // has side effect
//const string & version3(string & s1, const string & s2);  // bad design
//
//int main() {
//	string input;
//	string copy;
//	string result;
//
//	cout << "Enter a string: ";
//	getline(cin, input);
//	copy = input;
//	cout << "Your string as entered: " << input << endl;
//	result = version1(input, "***");
//	cout << "Your string enhanced: " << result << endl;
//	cout << "Your original string: " << input << endl;
//
//	result = version2(input, "###");
//	cout << "Your string enhanced: " << result << endl;
//	cout << "Your original string: " << input << endl;
//
//	cout << "Resetting original string.\n";
//	input = copy;
//	result = version3(input, "@@@");
//	cout << "Your string enhanced: " << result << endl;
//	cout << "Your original string: " << input << endl;
//	// cin.get();
//	// cin.get();
//	return 0;
//}
//
//string version1(const string & s1, const string & s2) {
//	string temp;
//
//	temp = s2 + s1 + s2;
//	return temp;
//}
//
//const string & version2(string & s1, const string & s2) { // has side effect
//	s1 = s2 + s1 + s2;
//// safe to return reference passed to function
//	return s1;
//}
//
//const string & version3(string & s1, const string & s2) { // bad design
//	string temp;
//
//	temp = s2 + s1 + s2;
//// unsafe to return reference to local variable
//	return temp;
//}


//filefunc.cpp -- function with ostream & parameter			8-8

//#include <iostream>
//#include <fstream>
//#include <cstdlib>
//using namespace std;
//
//void file_it(ostream & os, double fo, const double fe[],int n);
//const int LIMIT = 5;
//int main() {
//	ofstream fout;
//	const char * fn = "ep-data.txt";
//	fout.open(fn);
//	if (!fout.is_open()) {
//		cout << "Can't open " << fn << ". Bye.\n";
//		exit(EXIT_FAILURE);
//	}
//	double objective;
//	cout << "Enter the focal length of your "
//	     "telescope objective in mm: ";
//	cin >> objective;
//	double eps[LIMIT];
//	cout << "Enter the focal lengths, in mm, of " << LIMIT
//	     << " eyepieces:\n";
//	for (int i = 0; i < LIMIT; i++) {
//		cout << "Eyepiece #" << i + 1 << ": ";
//		cin >> eps[i];
//	}
//	file_it(fout, objective, eps, LIMIT);
//	file_it(cout, objective, eps, LIMIT);
//	cout << "Done\n";
//	// cin.get();
//	// cin.get();
//	return 0;
//}
//
//void file_it(ostream & os, double fo, const double fe[],int n) {
//	// save initial formatting state
//	ios_base::fmtflags initial;
//	initial = os.setf(ios_base::fixed, ios_base::floatfield);
//	std::streamsize sz = os.precision(0);
//	os << "Focal length of objective: " << fo << " mm\n";
//	os.precision(1);
//	os.width(12);
//	os << "f.l. eyepiece";
//	os.width(15);
//	os << "magnification" << endl;
//	for (int i = 0; i < n; i++) {
//		os.width(12);
//		os << fe[i];
//		os.width(15);
//		os << int (fo/fe[i] + 0.5) << endl;
//	}
//	// restore initial formatting state
//	os.setf(initial, ios_base::floatfield);
//	os.precision(sz);
//}


// left.cpp -- string function with a default argument			8-9

//#include <iostream>
//const int ArSize = 80;
//char * left(const char * str, int n = 1);
//int main() {
//	using namespace std;
//	char sample[ArSize];
//	cout << "Enter a string:\n";
//	cin.get(sample,ArSize);
//	char *ps = left(sample, 4);
//	cout << ps << endl;
//	delete [] ps;       // free old string
//	ps = left(sample);
//	cout << ps << endl;
//	delete [] ps;       // free new string
//	// cin.get();
//	// cin.get();
//	return 0;
//}
//
//// This function returns a pointer to a new string
//// consisting of the first n characters in the str string.
//char * left(const char * str, int n) {
//	if(n < 0)
//		n = 0;
//	char * p = new char[n+1];
//	int i;
//	for (i = 0; i < n && str[i]; i++)
//		p[i] = str[i];  // copy characters
//	while (i <= n)
//		p[i++] = '\0';  // set rest of string to '\0'
//	return p;
//}


// leftover.cpp -- overloading the left() function			8-10

//#include <iostream>
//unsigned long left(unsigned long num, unsigned ct);
//char * left(const char * str, int n = 1);
//
//int main() {
//	using namespace std;
//	char * trip = "Hawaii!!";   // test value
//	unsigned long n = 12345678; // test value
//	int i;
//	char * temp;
//
//	for (i = 1; i < 10; i++) {
//		cout << left(n, i) << endl;
//		temp = left(trip,i);
//		cout << temp << endl;
//		delete [] temp; // point to temporary storage
//	}
//	// cin.get();
//	return 0;
//
//}
//
//// This function returns the first ct digits of the number num.
//unsigned long left(unsigned long num, unsigned ct) {
//	unsigned digits = 1;
//	unsigned long n = num;
//
//	if (ct == 0 || num == 0)
//		return 0;       // return 0 if no digits
//	while (n /= 10)
//		digits++;
//	if (digits > ct) {
//		ct = digits - ct;
//		while (ct--)
//			num /= 10;
//		return num;         // return left ct digits
//	} else              // if ct >= number of digits
//		return num;     // return the whole number
//}
//
//// This function returns a pointer to a new string
//// consisting of the first n characters in the str string.
//char * left(const char * str, int n) {
//	if(n < 0)
//		n = 0;
//	char * p = new char[n+1];
//	int i;
//	for (i = 0; i < n && str[i]; i++)
//		p[i] = str[i];  // copy characters
//	while (i <= n)
//		p[i++] = '\0';  // set rest of string to '\0'
//	return p;
//}


// funtemp.cpp -- using a function template			8-11

//#include <iostream>
//// function template prototype
//template <typename T>  // or class T
//void Swap(T &a, T &b);
//
//int main() {
//	using namespace std;
//	int i = 10;
//	int j = 20;
//	cout << "i, j = " << i << ", " << j << ".\n";
//	cout << "Using compiler-generated int swapper:\n";
//	Swap(i,j);  // generates void Swap(int &, int &)
//	cout << "Now i, j = " << i << ", " << j << ".\n";
//
//	double x = 24.5;
//	double y = 81.7;
//	cout << "x, y = " << x << ", " << y << ".\n";
//	cout << "Using compiler-generated double swapper:\n";
//	Swap(x,y);  // generates void Swap(double &, double &)
//	cout << "Now x, y = " << x << ", " << y << ".\n";
//	// cin.get();
//	return 0;
//}
//
//// function template definition
//template <typename T>  // or class T
//void Swap(T &a, T &b) {
//	T temp;   // temp a variable of type T
//	temp = a;
//	a = b;
//	b = temp;
//}


// twotemps.cpp -- using overloaded template functions		8-12

//#include <iostream>
//template <typename T>     // original template
//void Swap(T &a, T &b);
//
//template <typename T>     // new template
//void Swap(T *a, T *b, int n);
//
//void Show(int a[]);
//const int Lim = 8;
//int main() {
//	using namespace std;
//	int i = 10, j = 20;
//	cout << "i, j = " << i << ", " << j << ".\n";
//	cout << "Using compiler-generated int swapper:\n";
//	Swap(i,j);              // matches original template
//	cout << "Now i, j = " << i << ", " << j << ".\n";
//
//	int d1[Lim] = {0,7,0,4,1,7,7,6};
//	int d2[Lim] = {0,7,2,0,1,9,6,9};
//	cout << "Original arrays:\n";
//	Show(d1);
//	Show(d2);
//	Swap(d1,d2,Lim);        // matches new template
//	cout << "Swapped arrays:\n";
//	Show(d1);
//	Show(d2);
//	// cin.get();
//	return 0;
//}
//
//template <typename T>
//void Swap(T &a, T &b) {
//	T temp;
//	temp = a;
//	a = b;
//	b = temp;
//}
//
//template <typename T>
//void Swap(T a[], T b[], int n) {
//	T temp;
//	for (int i = 0; i < n; i++) {
//		temp = a[i];
//		a[i] = b[i];
//		b[i] = temp;
//	}
//}
//
//void Show(int a[]) {
//	using namespace std;
//	cout << a[0] << a[1] << "/";
//	cout << a[2] << a[3] << "/";
//	for (int i = 4; i < Lim; i++)
//		cout << a[i];
//	cout << endl;
//}


// twoswap.cpp -- specialization overrides a template		8-13

//#include <iostream>
//template <typename T>
//void Swap(T &a, T &b);
//
//struct job {
//	char name[40];
//	double salary;
//	int floor;
//};
//
//// explicit specialization
//template <> void Swap<job>(job &j1, job &j2);
//void Show(job &j);
//
//int main() {
//	using namespace std;
//	cout.precision(2);
//	cout.setf(ios::fixed, ios::floatfield);
//	int i = 10, j = 20;
//	cout << "i, j = " << i << ", " << j << ".\n";
//	cout << "Using compiler-generated int swapper:\n";
//	Swap(i,j);    // generates void Swap(int &, int &)
//	cout << "Now i, j = " << i << ", " << j << ".\n";
//
//	job sue = {"Susan Yaffee", 73000.60, 7};
//	job sidney = {"Sidney Taffee", 78060.72, 9};
//	cout << "Before job swapping:\n";
//	Show(sue);
//	Show(sidney);
//	Swap(sue, sidney); // uses void Swap(job &, job &)
//	cout << "After job swapping:\n";
//	Show(sue);
//	Show(sidney);
//	// cin.get();
//	return 0;
//}
//
//template <typename T>
//void Swap(T &a, T &b) {  // general version
//	T temp;
//	temp = a;
//	a = b;
//	b = temp;
//}
//
//// swaps just the salary and floor fields of a job structure
//
//template <> void Swap<job>(job &j1, job &j2) { // specialization
//	double t1;
//	int t2;
//	t1 = j1.salary;
//	j1.salary = j2.salary;
//	j2.salary = t1;
//	t2 = j1.floor;
//	j1.floor = j2.floor;
//	j2.floor = t2;
//}
//
//void Show(job &j) {
//	using namespace std;
//	cout << j.name << ": $" << j.salary
//	     << " on floor " << j.floor << endl;
//}


// tempover.cpp --- template overloading			8-14

//#include <iostream>
//
//template <typename T>            // template A
//void ShowArray(T arr[], int n);
//
//template <typename T>            // template B
//void ShowArray(T * arr[], int n);
//
//struct debts {
//	char name[50];
//	double amount;
//};
//
//int main() {
//	using namespace std;
//	int things[6] = {13, 31, 103, 301, 310, 130};
//	struct debts mr_E[3] = {
//		{"Ima Wolfe", 2400.0},
//		{"Ura Foxe", 1300.0},
//		{"Iby Stout", 1800.0}
//	};
//	double * pd[3];
//
//// set pointers to the amount members of the structures in mr_E
//	for (int i = 0; i < 3; i++)
//		pd[i] = &mr_E[i].amount;
//
//	cout << "Listing Mr. E's counts of things:\n";
//// things is an array of int
//	ShowArray(things, 6);  // uses template A
//	cout << "Listing Mr. E's debts:\n";
//// pd is an array of pointers to double
//	ShowArray(pd, 3);      // uses template B (more specialized)
//	// cin.get();
//	return 0;
//}
//
//template <typename T>
//void ShowArray(T arr[], int n) {
//	using namespace std;
//	cout << "template A\n";
//	for (int i = 0; i < n; i++)
//		cout << arr[i] << ' ';
//	cout << endl;
//}
//
//template <typename T>
//void ShowArray(T * arr[], int n) {
//	using namespace std;
//	cout << "template B\n";
//	for (int i = 0; i < n; i++)
//		cout << *arr[i] << ' ';
//	cout << endl;
//}


// choices.cpp -- choosing a template			8-15

//#include <iostream>
//
//template<class T>
//T lesser(T a, T b) {       // #1
//	return a < b ? a : b;
//}
//
//int lesser (int a, int b) { // #2
//	a = a < 0 ? -a : a;
//	b = b < 0 ? -b : b;
//	return a < b ? a : b;
//}
//
//int main() {
//	using namespace std;
//	int m = 20;
//	int n = -30;
//	double x = 15.5;
//	double y = 25.9;
//
//	cout << lesser(m, n) << endl;       // use #2
//	cout << lesser(x, y) << endl;       // use #1 with double
//	cout << lesser<>(m, n) << endl;     // use #1 with int
//	cout << lesser<int>(x, y)  << endl; // use #1 with int
//
//	// cin.get();
//	return 0;
//}



//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


//#include <iostream>
//#include <cstring>
//#include <cctype>
////#include <cstring>
//
//using namespace std;
//
//// practice 1
//void fun_of_p8_1(char *str, int print_times = 0) {
//	// 这里也将print_times也打印出来，方便演示
//	cout << "String: " << str << " , print_times: " << print_times << endl;
//	if (print_times > 1) {
//		print_times--;
//		fun_of_p8_1(str, print_times);
//	}
//	return;
//}
//void p8_1(void) {
//	char str[128];
//	int print_times = 0;
//	cout << "Enter the string you want to print: ";
//	cin.getline(str, 128);
//	cout << "Enter the times you want to print: ";
//	cin >> print_times;
//
//	// 测试传入两个参数
//	cout << "Test fun which has two prematers: " << endl;
//	fun_of_p8_1(str, print_times);
//
//	// 测试传入一个参数
//	cout << "Test fun which has one premater: " << endl;
//	fun_of_p8_1(str);
//}
//
//
//// practice 2
//struct CandyBar {
//	char company[128];
//	double weight;
//	int heat;
//};
//void print_CandyBar(const struct CandyBar &candybar) {
//	cout << "CandyBar company: " << candybar.company << endl;
//	cout << "CandyBar weight: " << candybar.weight << endl;
//	cout << "CandyBar heat: " << candybar.heat << endl;
//}
//void fill_CandyBar(struct CandyBar &candybar, char *company , double weight , int heat) {
//	/*
//	如果使用strcpy遇到如下错误：
//	error C4996: 'strcpy': This function or variable may be unsafe. Consider using strcpy_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.
//	1>c:\program files (x86)\windows kits\10\include\10.0.15063.0\ucrt\string.h(136): note: 参见“strcpy”的声明
//
//	可以这样子解决：右键工程名-->属性-->C/C++-->预处理器-->预处理器定义，编辑右边输入框加入：_CRT_SECURE_NO_WARNINGS
//	*/
//	strcpy(candybar.company, company);
//	candybar.weight = weight;
//	candybar.heat = heat;
//}
//void p8_2(void) {
//	struct CandyBar candybar = { "" };
//	char company[128];
//	double weight = 0.0;
//	int heat = 0;
//
//	cout << "Enter the company of candybar: ";
//	cin.getline(company, 128);
//
//	cout << "Enter the weight of candybar: ";
//	cin >> weight;
//
//	cout << "Enter the heat of candybar: ";
//	cin >> heat;
//
//	fill_CandyBar(candybar, company, weight, heat);
//	print_CandyBar(candybar);
//
//	return;
//}
//
//
//// practice 3
//void p8_3(void) {
//	string input;
//
//	cout << "Enter a string (q to quit): ";
//	getline(cin, input);
//
//	while (input[0] != 'q') {
//		for (size_t i = 0; i < input.length(); i++) {
//			input[i] = toupper(input[i]);
//		}
//		cout << input << endl;
//
//		cout << "Next string (q to quit): ";
//		getline(cin, input);
//	}
//
//}
//
//
//// practice 4
//struct stringy {
//	char *str;
//	int ct;
//};
//void set(struct stringy &in_stringy, char * in_string) {
//	int string_length = strlen(in_string);
//	in_stringy.str = new char(string_length + 1);
//	strcpy(in_stringy.str, in_string);
//	in_stringy.ct = string_length;
//}
//void show(const struct stringy &in_stringy, int print_times = 1) {
//	for (int i = 0; i < print_times; i++) {
//		cout << "member string of struct stringy: " << in_stringy.str << endl;
//	}
//}
//void show(const char * str, int print_times = 1) {
//	for (int i = 0; i < print_times; i++) {
//		cout << "Print char string: " << str << endl;
//	}
//}
//int p8_4(void) {
//	struct stringy beany;
//	char testing[] = "Reality isn't what it used to be." ;
//
//	set( beany, testing );
//	show( beany );
//	show( beany, 2);
//	testing[0] = 'D';
//	testing[1] = 'u';
//	show(testing);
//	show(testing, 3);
//	show("Done!");
//
//	return 0;
//}
//
//
//// practice 5
//template <typename T>
//T max5(T in_array[]) {
//	T max = in_array[0];
//	for (size_t i = 0; i < 5; i++) {
//		if (max < in_array[i]) {
//			max = in_array[i];
//		}
//	}
//
//	return max;
//}
//void p8_5(void) {
//	int int_array[5] = {32, 43, 66, 23, 54};
//	double double_array[5] = { 32.4, 33.3, 61.3, 646.3, 23.5 };
//
//	int int_array_max = max5(int_array);
//	double double_array_max = max5(double_array);
//
//	cout << "max of int array: " << int_array_max << endl;
//	cout << "max of double array: " << double_array_max << endl;
//}
//
//
//// practice 6
//template <typename T>
//T maxn(T in_array[], int array_size) {
//	T max = in_array[0];
//	for (int i = 0; i < array_size; i++) {
//		if (max < in_array[i]) {
//			max = in_array[i];
//		}
//	}
//
//	return max;
//}
//// 显示具体化
//template <> char * maxn(char *in_str[], int n) {
//	char * str = in_str[0];
//
//	for (int i = 0; i < n; i++) {
//		if (strlen(str) < strlen(in_str[i])) {
//			str = in_str[i];
//		}
//	}
//
//	return str;
//}
//void p8_6(void) {
//	int int_array[6] = { 43, 235, 54, 232, 123, 65 };
//	double double_array[4] = { 32.1, 453.2, 53.3, 67.4 };
//	string str_array[5] = { "Hello Jimmy!", "Hello World!", "ABCDEFG,HIJKLMN", "Today is a goood day!", "C++ Primer Plus!" };
//
//	int int_max = maxn(int_array, 6);
//	double double_max = maxn(double_array, 4);
//	string length_max_str = maxn(str_array, 5);
//
//	cout << "max of int array: " << int_max << endl;
//	cout << "max of double array: " << double_max << endl;
//	cout << "max length string of string array: " << length_max_str << endl;
//}
//
//
//// practice 7
//template <typename T>
//T SumArray(T arr[], int n);
//
//template <typename T>
//T SumArray(T * arr[], int n);
//
//struct debts {
//	char name[50];
//	double amount;
//};
//
//int p8_7(void) {
//	int thing[6] = { 13, 31, 103, 301, 310, 130 };
//	int int_sum = 0;
//	struct debts mr_E[3] = {
//		{"Ima Wolfe", 2400.0},
//		{"Ura Foxe", 1300.0},
//		{"Iby Stout", 1800.0}
//	};
//	double *pd[3];
//	double double_sum = 0.0;
//
//	for (size_t i = 0; i < 3; i++) {
//		pd[i] = &mr_E[i].amount;
//	}
//
//	int_sum = SumArray(thing, 6);
//	double_sum = SumArray(pd, 3);
//
//	cout << "Sum of int array: " << int_sum << endl;
//	cout << "Sum of double* array: " << double_sum << endl;
//
//	return 0;
//}
//
//template <typename T>
//T SumArray(T arr[], int n) {
//	// 下面的sum初始化，在便宜的时候会有warning提示，有个简单的方法可以解决，那就是将sum初始化为arr的第一个元素，然后for循环从i=1开始
//	T sum = 0.0;
//
//	for (int i = 0; i < n; i++) {
//		sum += arr[i];
//	}
//
//	return sum;
//}
//
//template <typename T>
//T SumArray(T * arr[], int n) {
//	T sum = 0.0;
//	for (int i = 0; i < n; i++) {
//		sum += *(arr[i]);
//	}
//
//	return sum;
//}
//
//
//// main
//int main(int argc, char **argv) {
//	p8_7();
//}

/******************************************************************ch09 内存模型和名称空间****************************************************************/


//// coordin.h -- structure templates and function prototypes		9-1
//// structure templates

//#ifndef COORDIN_H_
//#define COORDIN_H_
//
//struct polar {
//	double distance;    // distance from origin
//	double angle;        // direction from origin
//};
//struct rect {
//	double x;        // horizontal distance from origin
//	double y;        // vertical distance from origin
//};
//
//// prototypes
//polar rect_to_polar(rect xypos);
//void show_polar(polar dapos);
//
//#endif


//// file1.cpp -- example of a three-file program			9-2

//#include <iostream>
//#include "coordin.h" // structure templates, function prototypes
//using namespace std;
//int main() {
//	rect rplace;
//	polar pplace;
//
//	cout << "Enter the x and y values: ";
//	while (cin >> rplace.x >> rplace.y) { // slick use of cin
//		pplace = rect_to_polar(rplace);
//		show_polar(pplace);
//		cout << "Next two numbers (q to quit): ";
//	}
//	cout << "Bye!\n";
//// keep window open in MSVC++
//	/*
//	    cin.clear();
//	    while (cin.get() != '\n')
//	        continue;
//	    cin.get();
//	*/
//	return 0;
//}


//// file2.cpp -- contains functions called in file1.cpp			9-3
//
//#include <iostream>
//#include <cmath>
//#include "coordin.h" // structure templates, function prototypes
//
//// convert rectangular to polar coordinates
//polar rect_to_polar(rect xypos) {
//	using namespace std;
//	polar answer;
//
//	answer.distance =
//	    sqrt( xypos.x * xypos.x + xypos.y * xypos.y);
//	answer.angle = atan2(xypos.y, xypos.x);
//	return answer;      // returns a polar structure
//}
//
//// show polar coordinates, converting angle to degrees
//void show_polar (polar dapos) {
//	using namespace std;
//	const double Rad_to_deg = 57.29577951;
//
//	cout << "distance = " << dapos.distance;
//	cout << ", angle = " << dapos.angle * Rad_to_deg;
//	cout << " degrees\n";
//}


//// autoscp.cpp -- illustrating scope of automatic variables			9-4
//
//#include <iostream>
//void oil(int x);
//int main() {
//	using namespace std;
//
//	int texas = 31;
//	int year = 2011;
//	cout << "In main(), texas = " << texas << ", &texas = ";
//	cout << &texas << endl;
//	cout << "In main(), year = " << year << ", &year = ";
//	cout << &year << endl;
//	oil(texas);
//	cout << "In main(), texas = " << texas << ", &texas = ";
//	cout << &texas << endl;
//	cout << "In main(), year = " << year << ", &year = ";
//	cout << &year << endl;
//	// cin.get();
//	return 0;
//}
//
//void oil(int x) {
//	using namespace std;
//	int texas = 5;
//
//	cout << "In oil(), texas = " << texas << ", &texas = ";
//	cout << &texas << endl;
//	cout << "In oil(), x = " << x << ", &x = ";
//	cout << &x << endl;
//	{
//		// start a block
//		int texas = 113;
//		cout << "In block, texas = " << texas;
//		cout << ", &texas = " << &texas << endl;
//		cout << "In block, x = " << x << ", &x = ";
//		cout << &x << endl;
//	}                               // end a block
//	cout << "Post-block texas = " << texas;
//	cout << ", &texas = " << &texas << endl;
//}


//// external.cpp -- external variable				9-5
//// compile with support.cpp
//
//#include <iostream>
//// external variable
//double warming = 0.3;       // warming defined
//
//// function prototypes
//void update(double dt);
//void local();
//
//int main() {                // uses global variable
//	using namespace std;
//	cout << "Global warming is " << warming << " degrees.\n";
//	update(0.1);            // call function to change warming
//	cout << "Global warming is " << warming << " degrees.\n";
//	local();                // call function with local warming
//	cout << "Global warming is " << warming << " degrees.\n";
//	// cin.get();
//	return 0;
//}
//
//
//// support.cpp -- use external variable				9-6
//// compile with external.cpp
//
//#include <iostream>
//extern double warming;  // use warming from another file
//
//// function prototypes
//void update(double dt);
//void local();
//
//using std::cout;
//void update(double dt)      // modifies global variable
//{
//    extern double warming;  // optional redeclaration
//    warming += dt;          // uses global warming
//    cout << "Updating global warming to " << warming;
//    cout << " degrees.\n";
//}
//
//void local()                // uses local variable
//{
//    double warming = 0.8;   // new variable hides external one
//
//    cout << "Local warming = " << warming << " degrees.\n";
//        // Access global variable with the
//        // scope resolution operator
//    cout << "But global warming = " << ::warming;
//    cout << " degrees.\n";
//}


//// twofile1.cpp -- variables with external and internal linkage			9-7
//
//#include <iostream>     // to be compiled with two file2.cpp
//int tom = 3;            // external variable definition
//int dick = 30;          // external variable definition
//static int harry = 300; // static, internal linkage
//// function prototype
//void remote_access();
//
//int main() {
//	using namespace std;
//	cout << "main() reports the following addresses:\n";
//	cout << &tom << " = &tom, " << &dick << " = &dick, ";
//	cout << &harry << " = &harry\n";
//	remote_access();
//	// cin.get();
//	return 0;
//}
//
//// twofile2.cpp -- variables with internal and external linkage			9-8
//
//#include <iostream>
//extern int tom;         // tom defined elsewhere
//static int dick = 10;   // overrides external dick
//int harry = 200;        // external variable definition,
//// no conflict with twofile1 harry
//
//void remote_access() {
//	using namespace std;
//
//	cout << "remote_access() reports the following addresses:\n";
//	cout << &tom << " = &tom, " << &dick << " = &dick, ";
//	cout << &harry << " = &harry\n";
//}


//// static.cpp -- using a static local variable			9-9
//
//#include <iostream>
//// constants
//const int ArSize = 10;
//
//// function prototype
//void strcount(const char * str);
//
//int main() {
//	using namespace std;
//	char input[ArSize];
//	char next;
//
//	cout << "Enter a line:\n";
//	cin.get(input, ArSize);
//	while (cin) {
//		cin.get(next);
//		while (next != '\n')    // string didn't fit!
//			cin.get(next);      // dispose of remainder
//		strcount(input);
//		cout << "Enter next line (empty line to quit):\n";
//		cin.get(input, ArSize);
//	}
//	cout << "Bye\n";
//// code to keep window open for MSVC++
//	/*
//	cin.clear();
//	    while (cin.get() != '\n')
//	        continue;
//	    cin.get();
//	*/
//	return 0;
//}
//
//void strcount(const char * str) {
//	using namespace std;
//	static int total = 0;        // static local variable
//	int count = 0;               // automatic local variable
//
//	cout << "\"" << str <<"\" contains ";
//	while (*str++)               // go to end of string
//		count++;
//	total += count;
//	cout << count << " characters\n";
//	cout << total << " characters total\n";
//}


//// newplace.cpp -- using placement new				9-10
//
//#include <iostream>
//#include <new> // for placement new
//const int BUF = 512;
//const int N = 5;
//char buffer[BUF];      // chunk of memory
//int main() {
//	using namespace std;
//
//	double *pd1, *pd2;
//	int i;
//	cout << "Calling new and placement new:\n";
//	pd1 = new double[N];           // use heap
//	pd2 = new (buffer) double[N];  // use buffer array
//	for (i = 0; i < N; i++)
//		pd2[i] = pd1[i] = 1000 + 20.0 * i;
//	cout << "Memory addresses:\n" << "  heap: " << pd1
//	     << "  static: " <<  (void *) buffer  <<endl;
//	cout << "Memory contents:\n";
//	for (i = 0; i < N; i++) {
//		cout << pd1[i] << " at " << &pd1[i] << "; ";
//		cout << pd2[i] << " at " << &pd2[i] << endl;
//	}
//
//	cout << "\nCalling new and placement new a second time:\n";
//	double *pd3, *pd4;
//	pd3= new double[N];            // find new address
//	pd4 = new (buffer) double[N];  // overwrite old data
//	for (i = 0; i < N; i++)
//		pd4[i] = pd3[i] = 1000 + 40.0 * i;
//	cout << "Memory contents:\n";
//	for (i = 0; i < N; i++) {
//		cout << pd3[i] << " at " << &pd3[i] << "; ";
//		cout << pd4[i] << " at " << &pd4[i] << endl;
//	}
//
//	cout << "\nCalling new and placement new a third time:\n";
//	delete [] pd1;
//	pd1= new double[N];
//	pd2 = new (buffer + N * sizeof(double)) double[N];
//	for (i = 0; i < N; i++)
//		pd2[i] = pd1[i] = 1000 + 60.0 * i;
//	cout << "Memory contents:\n";
//	for (i = 0; i < N; i++) {
//		cout << pd1[i] << " at " << &pd1[i] << "; ";
//		cout << pd2[i] << " at " << &pd2[i] << endl;
//	}
//	delete [] pd1;
//	delete [] pd3;
//	// cin.get();
//	return 0;
//}


//// namesp.h												9-11
//
//#include <string>
//// create the pers and debts namespaces
//namespace pers {
//	struct Person {
//		std::string fname;
//		std::string lname;
//	};
//	void getPerson(Person &);
//	void showPerson(const Person &);
//}
//
//namespace debts {
//	using namespace pers;
//	struct Debt {
//		Person name;
//		double amount;
//	};
//
//	void getDebt(Debt &);
//	void showDebt(const Debt &);
//	double sumDebts(const Debt ar[], int n);
//}
//
//
//// namesp.cpp -- namespaces							9-12
//
//#include <iostream>
//#include "namesp.h"
//
//namespace pers {
//	using std::cout;
//	using std::cin;
//	void getPerson(Person & rp) {
//		cout << "Enter first name: ";
//		cin >> rp.fname;
//		cout << "Enter last name: ";
//		cin >> rp.lname;
//	}
//
//	void showPerson(const Person & rp) {
//		std::cout << rp.lname << ", " << rp.fname;
//	}
//}
//
//namespace debts {
//	void getDebt(Debt & rd) {
//		getPerson(rd.name);
//		std::cout << "Enter debt: ";
//		std::cin >> rd.amount;
//	}
//
//	void showDebt(const Debt & rd) {
//		showPerson(rd.name);
//		std::cout <<": $" << rd.amount << std::endl;
//	}
//
//	double sumDebts(const Debt ar[], int n) {
//		double total = 0;
//		for (int i = 0; i < n; i++)
//			total += ar[i].amount;
//		return total;
//	}
//}
//
//
//// usenmsp.cpp -- using namespaces					9-13
//
//#include <iostream>
//#include "namesp.h"
//
//void other(void);
//void another(void);
//int main(void) {
//	using debts::Debt;
//	using debts::showDebt;
//	Debt golf = { {"Benny", "Goatsniff"}, 120.0 };
//	showDebt(golf);
//	other();
//	another();
//	// std::cin.get();
//	// std::cin.get();
//	return 0;
//}
//
//void other(void) {
//	using std::cout;
//	using std::endl;
//	using namespace debts;
//	Person dg = {"Doodles", "Glister"};
//	showPerson(dg);
//	cout << endl;
//	Debt zippy[3];
//	int i;
//
//	for (i = 0; i < 3; i++)
//		getDebt(zippy[i]);
//
//	for (i = 0; i < 3; i++)
//		showDebt(zippy[i]);
//	cout << "Total debt: $" << sumDebts(zippy, 3) << endl;
//
//	return;
//}
//
//void another(void) {
//	using pers::Person;;
//
//	Person collector = { "Milo", "Rightshift" };
//	pers::showPerson(collector);
//	std::cout << std::endl;
//}


//// new standard header for Microsoft
//#include <iostream>
//using namespace std;
//#pragma once
//#ifndef _NEWER_
//#define _NEWER_
//#ifndef RC_INVOKED
//#include <exception>
//
// #pragma pack(push,_CRT_PACKING)
// #pragma warning(push,3)
//// #pragma push_macro("new")
//
// // #undef new
//
//
//#if !defined(__CRTDECL)
//#if defined(_M_CEE_PURE)
//#define __CRTDECL
//#else
//#define __CRTDECL   __cdecl
//#endif
//#endif
//
//_STD_BEGIN
//
//		// SUPPORT TYPES
// #if !defined(_INC_NEW) || !defined(_MSC_EXTENSIONS)
//// handler for operator new failures
//#ifdef _M_CEE_PURE
//typedef void (__clrcall * new_handler) ();
//#else
//typedef void (__cdecl * new_handler) ();
//#endif
// #endif /* !defined(_INC_NEW) || !defined(_MSC_EXTENSIONS) */
//
// #ifndef __NOTHROW_T_DEFINED
//struct nothrow_t
//	{	// placement new tag type to suppress exceptions
//	};
//
//extern const nothrow_t nothrow;	// constant for placement new tag
// #endif /* __NOTHROW_T_DEFINED */
//
//		// FUNCTION AND OBJECT DECLARATIONS
//_CRTIMP2 new_handler __cdecl set_new_handler(_In_opt_ new_handler)
//	_THROW0();	// establish alternate new handler
//_STD_END
//
//		// new AND delete DECLARATIONS (NB: NOT IN std)
//void __CRTDECL operator delete(void *) _THROW0();
//#pragma warning (suppress: 4985)
//_Ret_bytecap_(_Size) void *__CRTDECL operator new(size_t _Size) _THROW1(_STD bad_alloc);
//
// #ifndef __PLACEMENT_NEW_INLINE
//  #define __PLACEMENT_NEW_INLINE
//inline void *__CRTDECL operator new(size_t, void *_Where) _THROW0()
//	{	// construct array with placement at _Where
//	cout << "New!\n";
//	return (_Where);
//	}
//
//inline void __CRTDECL operator delete(void *, void *) _THROW0()
//	{	// delete if placement new fails
//		cout << "Delete!\n";
//	}
// #endif /* __PLACEMENT_NEW_INLINE */
//
// #ifndef __PLACEMENT_VEC_NEW_INLINE
//  #define __PLACEMENT_VEC_NEW_INLINE
//inline void *__CRTDECL operator new[](size_t, void *_Where) _THROW0()
//	{	// construct array with placement at _Where
//	cout << "New!\n";
//	return (_Where);
//	}
//
//inline void __CRTDECL operator delete[](void *, void *) _THROW0()
//	{	// delete if placement array new fails
//		cout << "Delete!\n";
//	}
// #endif /* __PLACEMENT_VEC_NEW_INLINE */
//
//void __CRTDECL operator delete[](void *) _THROW0();	// delete allocated array
//
//_Ret_bytecap_(_Size) void *__CRTDECL operator new[](size_t _Size)
//	_THROW1(_STD bad_alloc);	// allocate array or throw exception
//
// #ifndef __NOTHROW_T_DEFINED
//  #define __NOTHROW_T_DEFINED
//_Ret_opt_bytecap_(_Size) void *__CRTDECL operator new(size_t _Size, const _STD nothrow_t&)
//	_THROW0();
//
//_Ret_opt_bytecap_(_Size) void *__CRTDECL operator new[](size_t _Size, const _STD nothrow_t&)
//	_THROW0();	// allocate array or return null pointer
//
//void __CRTDECL operator delete(void *, const _STD nothrow_t&)
//	_THROW0();	// delete if nothrow new fails -- REPLACEABLE
//
//void __CRTDECL operator delete[](void *, const _STD nothrow_t&)
//	_THROW0();	// delete if nothrow array new fails -- REPLACEABLE
// #endif /* __NOTHROW_T_DEFINED */
//
//
// #if !defined(_INC_NEW) || !defined(_MSC_EXTENSIONS)
//using _STD new_handler;
// #endif /* !defined(_INC_NEW) || !defined(_MSC_EXTENSIONS) */
//
// #pragma pop_macro("new")
// #pragma warning(pop)
// #pragma pack(pop)
//
//#endif /* RC_INVOKED */
//#endif /* _NEWER_ */
//
///*
// * Copyright (c) 1992-2007 by P.J. Plauger.  ALL RIGHTS RESERVED.
// * Consult your license regarding permissions and restrictions.
// V5.03:0009 */


//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


//// chapter9.cpp
//
//#include <iostream>
//#include <string>
//#include <cstring>
//#include <cctype>
//#include <new>
//#include "sales.h"
//
//
//using namespace std;
//
//
//// practice 1
//const int Len = 40;
//struct golf {
//	char fullname[Len];
//	int handicap;
//};
//void setgolf(golf & g, const char * name, int hc) {
//	strcpy(g.fullname, name);
//	g.handicap = hc;
//}
//int setgolf(golf & g) {
//	cout << "Please enter the full name of golf player: ";
//	cin.getline(g.fullname, Len);
//	if (strcmp(g.fullname, "") == 0) {
//		return 0;
//	}
//
//	cout << "Please enter the hanicap of golf player: ";
//	cin >> g.handicap;
//	cin.get();
//
//	return 1;
//}
//void handicap(golf & g, int hc) {
//	g.handicap = hc;
//}
//void showgolf(const golf & g) {
//	cout << "full name of golf player: " << g.fullname << endl;
//	cout << "handicap of golf player: " << g.handicap << endl;
//}
//void p9_1(void) {
//	golf g[10];
//	int n = 0;
//	cout << "Enter the information of golf player: " << endl;
//
//	while ((n < 10) && (setgolf(g[n]))) {
//		n++;
//		cout << "Next golf player: " << endl;
//	}
//
//	cout << "Show all golf player information: " << endl;
//	for (int i = 0; i < n; i++) {
//		showgolf(g[i]);
//	}
//
//}
//
//
//// practice 2
//const int ArSize = 10;
//void strcount(const string str) {
//	static int total = 0;
//	int count = 0;
//
//	cout << "\"" << str.c_str() << "\" contains ";
//	while (str[count]) {
//		count++;
//	}
//	total += count;
//	cout << count << " characters\n";
//	cout << total << " characters total\n";
//}
//void p9_2(void) {
//	string input;
//
//	cout << "Enter a line:\n";
//	getline(cin, input);
//	while (cin) {
//		strcount(input);
//		cout << "Enter next line (empty line to quit): \n";
//		getline(cin, input);
//		if (input == "") {
//			break;
//		}
//	}
//
//	cout << "Bye\n";
//	return;
//}
//
//
//// practice 3
//struct chaff {
//	char dross[20];
//	int slag;
//};
//char buffer[1024];
//void p9_3(void) {
//	chaff *pcha = new (buffer) chaff[2];
//	char *pc = new char[1024];
//	chaff *pcha2 = new (pc) chaff[2];
//	char dross[20] = { 0 };
//	int slag = 0;
//
//	for (int i = 0; i < 2; i++) {
//		cout << "Enter dross of #" << i << " chaff: " << endl;
//		cin.getline(dross, 20);
//		cout << "Enter slag of #" << i << " chaff: " << endl;
//		cin >> slag;
//		cin.get();
//
//		strcpy(pcha[i].dross, dross);
//		strcpy(pcha2[i].dross, dross);
//		pcha[i].slag = pcha2[i].slag = slag;
//	}
//
//	for (int i = 0; i < 2; i++) {
//		cout << "staff #" << (i + 1) << ":" << endl;
//		cout << "pcha.dross: " << pcha[i].dross << ". pcha.slag: " << pcha[i].slag << endl;
//		cout << "pcha2.dross: " << pcha2[i].dross << ". pcha2.slag: " << pcha2[i].slag << endl;
//	}
//
//	cout << "address of buffer: " << (void *)buffer << endl;
//	cout << "address of pcha: " << pcha << ". address of pcha[0]: " << &pcha[0] << ". address of pcha[1]: " << &pcha[1] << endl;
//	cout << "address of pc: " << (void *)pc << endl;
//	cout << "address of pcha2:" << pcha2 << ". address of pcha2[0]: " << &pcha2[0] << ". address of pcha2[1]: " << &pcha2[1] << endl;;
//
//	delete[] pc;
//}
//
//
//// practice 4
//void p9_4(void) {
//	SALES::Sales sales1;
//	SALES::Sales sales2;
//
//	double ar[3] = { 32.1, 23.2, 65.3 };
//	SALES::setSales(sales1, ar, 3);
//	SALES::setSales(sales2);
//
//	SALES::showSales(sales1);
//	SALES::showSales(sales2);
//}
//
//
//int main(int argc, char **argv) {
//	p9_4();
//
//	while (cin.get());
//
//	return 0;
//}
//
//
//// sales.h
//
//#pragma once
//#include <iostream>
//namespace SALES {
//	const int QUARTERS = 4;
//	struct Sales {
//		double sales[QUARTERS];
//		double average;
//		double max;
//		double min;
//	};
//	void setSales(Sales & s, const double ar[], int n);
//	void setSales(Sales & s);
//	void showSales(const Sales & s);
//}
//
//
//// sales.cpp
//
//#include "sales.h"
//
//namespace SALES {
//	using namespace std;
//
//	void setSales(Sales & s, const double ar[], int n) {
//		double total = 0.0;
//		double max = ar[0];
//		double min = ar[0];
//
//		for (int i = 0; i < n; i++) {
//			total += ar[i];
//			s.sales[i] = ar[i];
//			if (max < ar[i]) {
//				max = ar[i];
//			}
//			if (min > ar[i]) {
//				min = ar[i];
//			}
//		}
//		for (int i = n; i < QUARTERS; i++) {
//			s.sales[i] = 0.0;
//		}
//
//		s.average = total / n;
//		s.max = max;
//		s.min = min;
//	}
//
//	void setSales(Sales & s) {
//		double total = 0.0;
//		double max = 0.0;
//		double min = 0.0;
//		double input = 0.0;
//
//		cout << "Enter 4 double number; " << endl;
//		for (size_t i = 0; i < QUARTERS; i++) {
//			cin >> input;
//			if (i == 0) {
//				max = input;
//				min = input;
//			}
//			if (min > input) {
//				min = input;
//			}
//			if (max < input) {
//				max = input;
//			}
//			total += input;
//			s.sales[i] = input;
//		}
//		s.average = total / QUARTERS;
//		s.max = max;
//		s.min = min;
//	}
//
//	void showSales(const Sales & s) {
//		cout << "sales: ";
//		for (size_t i = 0; i < QUARTERS; i++) {
//			cout << s.sales[i] << " ";
//		}
//
//		cout << endl;
//		cout << "average: " << s.average << endl;
//		cout << "max: " << s.max << endl;
//		cout << "min: " << s.min << endl;
//	}
//}

/******************************************************************ch10  类和对象****************************************************************/

//// stock00.h -- Stock class interface						10-1
//
//// version 00
//#ifndef STOCK00_H_
//#define STOCK00_H_
//
//#include <string>
//
//class Stock { // class declaration
//	private:
//		std::string company;
//		long shares;
//		double share_val;
//		double total_val;
//		void set_tot() {
//			total_val = shares * share_val;
//		}
//	public:
//		void acquire(const std::string & co, long n, double pr);
//		void buy(long num, double price);
//		void sell(long num, double price);
//		void update(double price);
//		void show();
//};    // note semicolon at the end
//
//#endif

//// stock00.cpp -- implementing the Stock class				10-2
//// version 00
//#include <iostream>
//#include "stock00.h"
//
//void Stock::acquire(const std::string & co, long n, double pr) {
//	company = co;
//	if (n < 0) {
//		std::cout << "Number of shares can't be negative; "
//		          << company << " shares set to 0.\n";
//		shares = 0;
//	} else
//		shares = n;
//	share_val = pr;
//	set_tot();
//}
//
//void Stock::buy(long num, double price) {
//	if (num < 0) {
//		std::cout << "Number of shares purchased can't be negative. "
//		          << "Transaction is aborted.\n";
//	} else {
//		shares += num;
//		share_val = price;
//		set_tot();
//	}
//}
//
//void Stock::sell(long num, double price) {
//	using std::cout;
//	if (num < 0) {
//		cout << "Number of shares sold can't be negative. "
//		     << "Transaction is aborted.\n";
//	} else if (num > shares) {
//		cout << "You can't sell more than you have! "
//		     << "Transaction is aborted.\n";
//	} else {
//		shares -= num;
//		share_val = price;
//		set_tot();
//	}
//}
//
//void Stock::update(double price) {
//	share_val = price;
//	set_tot();
//}
//
//void Stock::show() {
//	std::cout << "Company: " << company
//	          << "  Shares: " << shares << '\n'
//	          << "  Share Price: $" << share_val
//	          << "  Total Worth: $" << total_val << '\n';
//}

//// usestok0.cpp -- the client program								10-3
//
//// compile with stock.cpp
//#include <iostream>
//#include "stock00.h"
//
//int main() {
//	Stock fluffy_the_cat;
//	fluffy_the_cat.acquire("NanoSmart", 20, 12.50);
//	fluffy_the_cat.show();
//	fluffy_the_cat.buy(15, 18.125);
//	fluffy_the_cat.show();
//	fluffy_the_cat.sell(400, 20.00);
//	fluffy_the_cat.show();
//	fluffy_the_cat.buy(300000,40.125);
//	fluffy_the_cat.show();
//	fluffy_the_cat.sell(300000,0.125);
//	fluffy_the_cat.show();
//	// std::cin.get();
//	return 0;
//}


//// stock10.h � Stock class declaration with constructors, destructor added			10-4
//
//#ifndef STOCK1_H_
//#define STOCK1_H_
//#include <string>
//class Stock {
//	private:
//		std::string company;
//		long shares;
//		double share_val;
//		double total_val;
//		void set_tot() {
//			total_val = shares * share_val;
//		}
//	public:
//		Stock();        // default constructor
//		Stock(const std::string & co, long n = 0, double pr = 0.0);
//		~Stock();       // noisy destructor
//		void buy(long num, double price);
//		void sell(long num, double price);
//		void update(double price);
//		void show();
//};
//
//#endif

//// stock1.cpp � Stock class implementation with constructors, destructor added			10-5
//
//#include <iostream>
//#include "stock10.h"
//
//// constructors (verbose versions)
//Stock::Stock() {      // default constructor
//	std::cout << "Default constructor called\n";
//	company = "no name";
//	shares = 0;
//	share_val = 0.0;
//	total_val = 0.0;
//}
//
//Stock::Stock(const std::string & co, long n, double pr) {
//	std::cout << "Constructor using " << co << " called\n";
//	company = co;
//
//	if (n < 0) {
//		std::cout << "Number of shares can't be negative; "
//		          << company << " shares set to 0.\n";
//		shares = 0;
//	} else
//		shares = n;
//	share_val = pr;
//	set_tot();
//}
//// class destructor
//Stock::~Stock() {      // verbose class destructor
//	std::cout << "Bye, " << company << "!\n";
//}
//
//// other methods
//void Stock::buy(long num, double price) {
//	if (num < 0) {
//		std::cout << "Number of shares purchased can't be negative. "
//		          << "Transaction is aborted.\n";
//	} else {
//		shares += num;
//		share_val = price;
//		set_tot();
//	}
//}
//
//void Stock::sell(long num, double price) {
//	using std::cout;
//	if (num < 0) {
//		cout << "Number of shares sold can't be negative. "
//		     << "Transaction is aborted.\n";
//	} else if (num > shares) {
//		cout << "You can't sell more than you have! "
//		     << "Transaction is aborted.\n";
//	} else {
//		shares -= num;
//		share_val = price;
//		set_tot();
//	}
//}
//
//void Stock::update(double price) {
//	share_val = price;
//	set_tot();
//}
//
//void Stock::show() {
//	using std::cout;
//	using std::ios_base;
//	// set format to #.###
//	ios_base::fmtflags orig =
//	    cout.setf(ios_base::fixed, ios_base::floatfield);
//	std::streamsize prec = cout.precision(3);
//
//	cout << "Company: " << company
//	     << "  Shares: " << shares << '\n';
//	cout << "  Share Price: $" << share_val;
//	// set format to #.##
//	cout.precision(2);
//	cout << "  Total Worth: $" << total_val << '\n';
//
//	// restore original format
//	cout.setf(orig, ios_base::floatfield);
//	cout.precision(prec);
//}

//// usestok2.cpp -- using the Stock class											10-6
//
//// compile with stock20.cpp
//#include <iostream>
//#include "stock20.h"
//
//const int STKS = 4;
//int main() {
//	{
//// create an array of initialized objects
//		Stock stocks[STKS] = {
//			Stock("NanoSmart", 12, 20.0),
//			Stock("Boffo Objects", 200, 2.0),
//			Stock("Monolithic Obelisks", 130, 3.25),
//			Stock("Fleep Enterprises", 60, 6.5)
//		};
//
//		std::cout << "Stock holdings:\n";
//		int st;
//		for (st = 0; st < STKS; st++)
//			stocks[st].show();
//// set pointer to first element
//		const Stock * top = &stocks[0];
//		for (st = 1; st < STKS; st++)
//			top = &top->topval(stocks[st]);
//// now top points to the most valuable holding
//		std::cout << "\nMost valuable holding:\n";
//		top->show();
//	}
//	// std::cin.get();
//	return 0;
//}


//// stock20.h -- augmented version												10-7
//
//#ifndef STOCK20_H_
//#define STOCK20_H_
//#include <string>
//
//class Stock {
//	private:
//		std::string company;
//		int shares;
//		double share_val;
//		double total_val;
//		void set_tot() {
//			total_val = shares * share_val;
//		}
//	public:
//		//  Stock();        // default constructor
//		Stock(const std::string & co, long n = 0, double pr = 0.0);
//		~Stock();       // do-nothing destructor
//		void buy(long num, double price);
//		void sell(long num, double price);
//		void update(double price);
//		void show()const;
//		const Stock & topval(const Stock & s) const;
//};
//
//#endif

//// stock20.cpp -- augmented version													10-8
//
//#include <iostream>
//#include "stock20.h"
//using namespace std;
//// constructors
//Stock::Stock() {      // default constructor
//	shares = 0;
//	share_val = 0.0;
//	total_val = 0.0;
//}
//
//Stock::Stock(const std::string & co, long n, double pr) {
//	company = co;
//	if (n < 0) {
//		std::cout << "Number of shares can't be negative; "
//		          << company << " shares set to 0.\n";
//		shares = 0;
//	} else
//		shares = n;
//	share_val = pr;
//	set_tot();
//}
//
//// class destructor
//Stock::~Stock() {      // quiet class destructor
//}
//
//// other methods
//void Stock::buy(long num, double price) {
//	if (num < 0) {
//		std::cout << "Number of shares purchased can't be negative. "
//		          << "Transaction is aborted.\n";
//	} else {
//		shares += num;
//		share_val = price;
//		set_tot();
//	}
//}
//
//void Stock::sell(long num, double price) {
//	using std::cout;
//	if (num < 0) {
//		cout << "Number of shares sold can't be negative. "
//		     << "Transaction is aborted.\n";
//	} else if (num > shares) {
//		cout << "You can't sell more than you have! "
//		     << "Transaction is aborted.\n";
//	} else {
//		shares -= num;
//		share_val = price;
//		set_tot();
//	}
//}
//
//void Stock::update(double price) {
//	share_val = price;
//	set_tot();
//}
//
//void Stock::show() const {
//	using std::cout;
//	using std::ios_base;
//	// set format to #.###
//	ios_base::fmtflags orig =
//	    cout.setf(ios_base::fixed, ios_base::floatfield);
//	std::streamsize prec = cout.precision(3);
//
//	cout << "Company: " << company
//	     << "  Shares: " << shares << '\n';
//	cout << "  Share Price: $" << share_val;
//	// set format to #.##
//	cout.precision(2);
//	cout << "  Total Worth: $" << total_val << '\n';
//
//	// restore original format
//	cout.setf(orig, ios_base::floatfield);
//	cout.precision(prec);
//}
//
//const Stock & Stock::topval(const Stock & s) const {
//	if (s.total_val > total_val)
//		return s;
//	else
//		return *this;
//}

//// usestok2.cpp -- using the Stock class										10-9
//
//// compile with stock20.cpp
//#include <iostream>
//#include "stock20.h"
//
//const int STKS = 4;
//int main() {
//	{
//// create an array of initialized objects
//		Stock stocks[STKS] = {
//			Stock("NanoSmart", 12, 20.0),
//			Stock("Boffo Objects", 200, 2.0),
//			Stock("Monolithic Obelisks", 130, 3.25),
//			Stock("Fleep Enterprises", 60, 6.5)
//		};
//
//		std::cout << "Stock holdings:\n";
//		int st;
//		for (st = 0; st < STKS; st++)
//			stocks[st].show();
//// set pointer to first element
//		const Stock * top = &stocks[0];
//		for (st = 1; st < STKS; st++)
//			top = &top->topval(stocks[st]);
//// now top points to the most valuable holding
//		std::cout << "\nMost valuable holding:\n";
//		top->show();
//	}
//	// std::cin.get();
//	return 0;
//}


//// stack.h -- class definition for the stack ADT								10-10
//
//#ifndef STACK_H_
//#define STACK_H_
//
//typedef unsigned long Item;
//
//class Stack {
//	private:
//		enum {MAX = 10};    // constant specific to class
//		Item items[MAX];    // holds stack items
//		int top;            // index for top stack item
//	public:
//		Stack();
//		bool isempty() const;
//		bool isfull() const;
//		// push() returns false if stack already is full, true otherwise
//		bool push(const Item & item);   // add item to stack
//		// pop() returns false if stack already is empty, true otherwise
//		bool pop(Item & item);          // pop top into item
//};
//#endif

//// stack.cpp -- Stack member functions											10-11
//
//#include "stack.h"
//Stack::Stack() {  // create an empty stack
//	top = 0;
//}
//
//bool Stack::isempty() const {
//	return top == 0;
//}
//
//bool Stack::isfull() const {
//	return top == MAX;
//}
//
//bool Stack::push(const Item & item) {
//	if (top < MAX) {
//		items[top++] = item;
//		return true;
//	} else
//		return false;
//}
//
//bool Stack::pop(Item & item) {
//	if (top > 0) {
//		item = items[--top];
//		return true;
//	} else
//		return false;
//}

//// stacker.cpp -- testing the Stack class											10-12
//
//#include <iostream>
//#include <cctype>  // or ctype.h
//#include "stack.h"
//int main() {
//	using namespace std;
//	Stack st; // create an empty stack
//	char ch;
//	unsigned long po;
//	cout << "Please enter A to add a purchase order,\n"
//	     << "P to process a PO, or Q to quit.\n";
//	while (cin >> ch && toupper(ch) != 'Q') {
//		while (cin.get() != '\n')
//			continue;
//		if (!isalpha(ch)) {
//			cout << '\a';
//			continue;
//		}
//		switch(ch) {
//			case 'A':
//			case 'a':
//				cout << "Enter a PO number to add: ";
//				cin >> po;
//				if (st.isfull())
//					cout << "stack already full\n";
//				else
//					st.push(po);
//				break;
//			case 'P':
//			case 'p':
//				if (st.isempty())
//					cout << "stack already empty\n";
//				else {
//					st.pop(po);
//					cout << "PO #" << po << " popped\n";
//				}
//				break;
//		}
//		cout << "Please enter A to add a purchase order,\n"
//		     << "P to process a PO, or Q to quit.\n";
//	}
//	cout << "Bye\n";
//	return 0;
//}



//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


//// chapter10.cpp
//
//#include <iostream>
//#include <string>
//#include <cstring>
//#include <cctype>
//
//#include "Sales.h"
//#include "stack.h"
//#include "List.h"
//
//using namespace std;
//
//// practice 1
//class BankCount {
//
//	private:
//		string fullname;
//		string banknumber;
//		long balance;
//
//	public:
//		BankCount() {}
//		BankCount(string fullname, string banknumber, long balance);
//		void ShowBankCount();
//		int Deposit(long deposit);
//		int WithDrawals(long withdrawals);
//};
//BankCount::BankCount(string fullname, string banknumber, long balance) {
//	this->fullname = fullname;
//	this->banknumber = banknumber;
//	this->balance = balance;
//}
//void BankCount::ShowBankCount() {
//	cout << "BankCount full name: " << fullname << endl;
//	cout << "BankCount number: " << banknumber << endl;
//	cout << "BankCount balance: " << balance << endl;
//}
//int BankCount::Deposit(long deposit) {
//	this->balance += deposit;
//	return 1;
//}
//int BankCount::WithDrawals(long withdrawals) {
//	this->balance -= withdrawals;
//	return 1;
//}
//void p10_1(void) {
//	BankCount MyBankCount("Jimmy", "1234567", 10000);
//	cout << "Original BankCount: " << endl;
//	MyBankCount.ShowBankCount();
//
//	cout << endl;
//	cout << "After Deposit 5000: " << endl;
//	MyBankCount.Deposit(5000);
//	MyBankCount.ShowBankCount();
//
//	cout << endl;
//	cout << "After withdrawals 5000: " << endl;
//	MyBankCount.WithDrawals(5000);
//	MyBankCount.ShowBankCount();
//}
//
//
//// practice 2
//class Person {
//	private:
//		// static const LIMIT = 25 编译报错，C++不支持默认int
//		static const int LIMIT = 25;
//		string lname;
//		char fname[LIMIT];
//
//	public:
//		Person() {
//			lname = "";
//			fname[0] = '\0';
//		}
//		Person(const string & ln, const char * fn = "Heyyou");
//		void Show() const;
//		void FormalShow() const;
//};
//Person::Person(const string & ln, const char * fn) {
//	lname = ln;
//	strncpy(fname, fn, LIMIT);
//}
//void Person::Show() const {
//	cout << fname << ", " << lname << endl;
//}
//void Person::FormalShow() const {
//	cout << lname << ", " << fname << endl;
//}
//void p10_2(void) {
//	Person one;
//	Person two("Smythecraft");
//	Person three("Dimwiddy", "Sam");
//	one.Show();
//	one.FormalShow();
//
//	cout << endl;
//	two.Show();
//	two.FormalShow();
//
//	cout << endl;
//	three.Show();
//	three.FormalShow();
//}
//
//
//// practice 3
//class golf {
//	private:
//		static const int Len = 40;
//		char fullname[Len];
//		int handicap;
//
//	public:
//		golf(const char * name, int hc);
//		golf();
//		void sethandicap(int hc);
//		void showgolf();
//};
//golf::golf(const char * name, int hc) {
//	strncpy(fullname, name, Len);
//	handicap = hc;
//}
//golf::golf() {
//	char temp[Len] = "";
//	int hand = 0;
//	cout << "Please enter the full name of golf player: ";
//	cin.getline(temp, Len);
//
//	cout << "Please enter the hanicap of golf player: ";
//	cin >> hand;
//	cin.get();
//
//	*this = golf(temp, hand);
//}
//void golf::sethandicap(int hc) {
//	handicap = hc;
//}
//void golf::showgolf() {
//	cout << "golf full name: " << fullname << endl;
//	cout << "golf handicap: " << handicap << endl;
//}
//void p10_3(void) {
//	golf g;
//	golf g2("Jimmy", 100);
//
//	g.showgolf();
//	g.sethandicap(120);
//	g.showgolf();
//
//	g2.showgolf();
//	g2.sethandicap(120);
//	g2.showgolf();
//}
//
//
//// practice 4
//using namespace SALES;
//void p10_4(void) {
//	double ar[3] = { 32.1, 23.2, 65.3 };
//	Sales sales1(ar, 3);
//	Sales sales2;
//
//	sales1.showSales();
//	sales2.showSales();
//}
//
//
//// practice 5
//void p10_5(void) {
//	Stack stack;
//	double total = 0.0;
//	customer pop;
//
//	customer customer1 = { "jimmy", 1000 };
//
//	if (stack.push(customer1)) {
//		cout << customer1.fullname << " push." << endl;
//	} else {
//		cout << "Stack full." << endl;
//	}
//
//	customer customer2 = { "hey", 200.0 };
//
//	if (stack.push(customer2)) {
//		cout << customer2.fullname << " push." << endl;
//	} else {
//		cout << "Stack full." << endl;
//	}
//
//	if (stack.pop(pop)) {
//		cout << pop.fullname << " pop." << endl;
//		total += pop.payment;
//	} else
//		cout << "Stack empty." << endl;
//
//
//	customer customer3 = { "kitty", 3000.0 };
//	if (stack.push(customer3))
//		cout << customer3.fullname << " push." << endl;
//	else
//		cout << "Stack full." << endl;
//
//	if (stack.pop(pop)) {
//		cout << pop.fullname << " pop." << endl;
//		total += pop.payment;
//	} else
//		cout << "Stack empty." << endl;
//
//	if (stack.pop(pop)) {
//		cout << pop.fullname << " pop." << endl;
//		total += pop.payment;
//	} else
//		cout << "Stack empty." << endl;
//
//	if (stack.pop(pop)) {
//		cout << pop.fullname << " pop." << endl;
//		total += pop.payment;
//	} else
//		cout << "Stack empty." << endl;
//
//	cout << "Total paymemt: " << total << endl;
//}
//
//
//// practice 6
//class Move {
//	private:
//		double x;
//		double y;
//
//	public:
//		Move(double a = 0, double b = 0);
//		void showmove() const;
//		Move add(const Move & m) const;
//		void reset(double a = 0, double b = 0);
//};
//Move::Move(double a, double b) {
//	x = a;
//	y = b;
//}
//void Move::showmove() const {
//	cout << "x = " << x << ", y = " << y << "." << endl;
//}
//Move Move::add(const Move & m) const {
//	Move temp;
//	temp.x = this->x + m.x;
//	temp.y = this->y + m.y;
//
//	return temp;
//}
//void Move::reset(double a, double b) {
//	x = a;
//	y = b;
//}
//void p10_6(void) {
//	Move move1(1.1, 2.2);
//	move1.showmove();
//
//	Move move2(3.3, 4.4);
//	move2.showmove();
//
//	Move move3 = move1.add(move2);
//	move3.showmove();
//
//	move3.reset(0.1, 0.2);
//	move3.showmove();
//}
//
//
//// practice 7
//class plorg {
//	private:
//		enum { LEN = 20 };
//		char fullname[LEN];
//		int CI;
//
//	public:
//		plorg(char * name = "Plorga", int CI = 50);
//		void setCI(int CI);
//		void showPlorg();
//};
//plorg::plorg(char * name, int CI) {
//	strncpy(fullname, name, LEN);
//	this->CI = CI;
//}
//void plorg::setCI(int CI) {
//	this->CI = CI;
//}
//void plorg::showPlorg() {
//	cout << "plorg full name: " << fullname << endl;
//	cout << "plorg CI: " << CI << endl;
//}
//void p10_7(void) {
//	plorg pl("Jimmy", 100);
//	pl.showPlorg();
//
//	plorg pl2;
//	pl2.showPlorg();
//
//	pl.setCI(150);
//	pl.showPlorg();
//}
//
//
//// practice 8
//// 大概这样简单的写一下吧
//void p10_8(void) {
//	List list;
//	if (list.isempty()) {
//		cout << "List is empty" << endl;
//	}
//
//	uItem item1 = 1;
//	uItem item2 = 2;
//	uItem item3 = 3;
//
//	list.add(item1);
//	list.add(item2);
//	list.add(item3);
//
//	if (list.isempty()) {
//		cout << "List is empty" << endl;
//	} else if (list.isfull()) {
//		cout << "List is full" << endl;
//	} else {
//		cout << "Some items in the list" << endl;
//	}
//
//	list.visit(oringin);
//	list.visit(x2);
//	list.visit(half);
//
//}
//
//
//int main(int argc, char **argv) {
//	p10_8();
//
//	while (cin.get());
//
//	return 0;
//}
//
//
//// List.h
//#pragma once
//#include <iostream>
//
//typedef unsigned long uItem;
//using std::cout;
//using std::cin;
//using std::endl;
//
//class List {
//	private:
//		enum { MAX = 20 };
//		uItem items[MAX];
//		int top;
//
//	public:
//		List() {
//			top = 0;
//		}
//		int add(uItem & item);
//		bool isempty();
//		bool isfull();
//		void visit(void(*pf)(uItem &));
//};
//
//void oringin(uItem & item);
//void x2(uItem & item);
//void half(uItem & item);
//
//
//// List.cpp
//#include "List.h"
//
//int List::add(uItem & item) {
//	if (top < MAX) {
//		items[top++] = item;
//		return true;
//	} else
//		return false;
//}
//
//bool List::isempty() {
//	return top == 0;
//}
//
//bool List::isfull() {
//	return top == (MAX - 1);
//}
//
//void List::visit(void(*pf)(uItem &)) {
//	for (int i = 0; i < top; i++) {
//		cout << "#" << i << ": ";
//		pf(items[i]);
//	}
//}
//
//void oringin(uItem & item) {
//	cout << item << endl;
//}
//
//void x2(uItem & item) {
//	item = item * 2;
//	cout << item << endl;
//}
//
//void half(uItem & item) {
//	item = item / 2;
//	cout << item << endl;
//}
//
//
//// Sales.h
//#pragma once
//#include <iostream>
//
//namespace SALES {
//	const int QUARTERS = 4;
//	class Sales {
//		private:
//			double sales[QUARTERS];
//			double average;
//			double max;
//			double min;
//
//		public:
//			Sales(double ar[], int n);
//			Sales();
//			void showSales();
//	};
//}
//
//
//// Sales.cpp
//#include "Sales.h"
//
//using namespace std;
//using namespace SALES;
//Sales::Sales() {
//	double total = 0.0;
//	double max = 0.0;
//	double min = 0.0;
//	double input = 0.0;
//
//	cout << "Enter 4 double number; " << endl;
//	for (size_t i = 0; i < QUARTERS; i++) {
//		cin >> input;
//		if (i == 0) {
//			max = input;
//			min = input;
//		}
//		if (min > input) {
//			min = input;
//		}
//		if (max < input) {
//			max = input;
//		}
//		total += input;
//		sales[i] = input;
//	}
//	this->average = total / QUARTERS;
//	this->max = max;
//	this->min = min;
//}
//Sales::Sales(double ar[], int n) {
//	double total = 0.0;
//	double max = ar[0];
//	double min = ar[0];
//
//	for (int i = 0; i < n; i++) {
//		total += ar[i];
//		sales[i] = ar[i];
//		if (max < ar[i]) {
//			max = ar[i];
//		}
//		if (min > ar[i]) {
//			min = ar[i];
//		}
//	}
//	for (int i = n; i < QUARTERS; i++) {
//		sales[i] = 0.0;
//	}
//
//	this->average = total / n;
//	this->max = max;
//	this->min = min;
//}
//void Sales::showSales() {
//	cout << "sales: ";
//	for (size_t i = 0; i < QUARTERS; i++) {
//		cout << sales[i] << " ";
//	}
//
//	cout << endl;
//	cout << "average: " << average << endl;
//	cout << "max: " << max << endl;
//	cout << "min: " << min << endl;
//}
//
//
////stack.h
//#pragma once
//#ifndef STACK_H_
//#define STACK_H_
//
//struct customer {
//	char fullname[35];
//	double payment;
//};
//
//typedef customer Item;
//
//class Stack {
//	private:
//		enum { MAX = 10};
//		Item items[MAX];
//		int top;
//
//	public:
//		Stack();
//		bool isempty() const;
//		bool isfull() const;
//		bool push(const Item & item);
//		bool pop(Item & item);
//};
//
//#endif // !STACK_H_
//
//
//// stack.cpp
//#include "stack.h"
//
//Stack::Stack() {
//	top = 0;
//}
//
//bool Stack::isempty() const {
//	return top == 0;
//}
//
//bool Stack::isfull() const {
//	return top == MAX;
//}
//
//bool Stack::push(const Item & item) {
//	if (top < MAX) {
//		items[top++] = item;
//		return true;
//	} else
//		return false;
//}
//
//bool Stack::pop(Item & item) {
//	if (top > 0) {
//		item = items[--top];
//		return true;
//	} else
//		return false;
//}

/******************************************************************ch11  使用类****************************************************************/

//// mytime0.h -- Time class before operator overloading						11-1
//
//#ifndef MYTIME0_H_
//#define MYTIME0_H_
//
//class Time
//{
//private:
//    int hours;
//    int minutes;
//public:
//    Time();
//    Time(int h, int m = 0);
//    void AddMin(int m);
//    void AddHr(int h);
//    void Reset(int h = 0, int m = 0);
//    const Time Sum(const Time & t) const;
//    void Show() const;
//};
//#endif


//// mytime0.cpp  -- implementing Time methods						11-2
//
//#include <iostream>
//#include "mytime0.h"
//
//Time::Time() {
//	hours = minutes = 0;
//}
//
//Time::Time(int h, int m ) {
//	hours = h;
//	minutes = m;
//}
//
//void Time::AddMin(int m) {
//	minutes += m;
//	hours += minutes / 60;
//	minutes %= 60;
//}
//
//void Time::AddHr(int h) {
//	hours += h;
//}
//
//void Time::Reset(int h, int m) {
//	hours = h;
//	minutes = m;
//}
//
//const Time Time::Sum(const Time & t) const {
//	Time sum;
//	sum.minutes = minutes + t.minutes;
//	sum.hours = hours + t.hours + sum.minutes / 60;
//	sum.minutes %= 60;
//	return sum;
//}
//
//void Time::Show() const {
//	std::cout << hours << " hours, " << minutes << " minutes";
//}


//// usetime0.cpp -- using the first draft of the Time class			11-3
//// compile usetime0.cpp and mytime0.cpp together
//#include <iostream>
//#include "mytime0.h"
//
//int main() {
//	using std::cout;
//	using std::endl;
//	Time planning;
//	Time coding(2, 40);
//	Time fixing(5, 55);
//	Time total;
//
//	cout << "planning time = ";
//	planning.Show();
//	cout << endl;
//
//	cout << "coding time = ";
//	coding.Show();
//	cout << endl;
//
//	cout << "fixing time = ";
//	fixing.Show();
//	cout << endl;
//
//	total = coding.Sum(fixing);
//	cout << "coding.Sum(fixing) = ";
//	total.Show();
//	cout << endl;
//	// std::cin.get();
//	return 0;
//}


//// mytime1.h -- Time class before operator overloading				11-4
//#ifndef MYTIME1_H_
//#define MYTIME1_H_
//
//class Time {
//	private:
//		int hours;
//		int minutes;
//	public:
//		Time();
//		Time(int h, int m = 0);
//		void AddMin(int m);
//		void AddHr(int h);
//		void Reset(int h = 0, int m = 0);
//		Time operator+(const Time & t) const;
//		void Show() const;
//};
//#endif
//
//
//// mytime1.cpp  -- implementing Time methods						11-5
//#include <iostream>
//#include "mytime1.h"
//
//Time::Time() {
//	hours = minutes = 0;
//}
//
//Time::Time(int h, int m ) {
//	hours = h;
//	minutes = m;
//}
//
//void Time::AddMin(int m) {
//	minutes += m;
//	hours += minutes / 60;
//	minutes %= 60;
//}
//
//void Time::AddHr(int h) {
//	hours += h;
//}
//
//void Time::Reset(int h, int m) {
//	hours = h;
//	minutes = m;
//}
//
//Time Time::operator+(const Time & t) const {
//	Time sum;
//	sum.minutes = minutes + t.minutes;
//	sum.hours = hours + t.hours + sum.minutes / 60;
//	sum.minutes %= 60;
//	return sum;
//}
//
//void Time::Show() const {
//	std::cout << hours << " hours, " << minutes << " minutes";
//}
//
//
//// usetime1.cpp -- using the second draft of the Time class					11-6
//// compile usetime1.cpp and mytime1.cpp together
//#include <iostream>
//#include "mytime1.h"
//
//int main() {
//	using std::cout;
//	using std::endl;
//	Time planning;
//	Time coding(2, 40);
//	Time fixing(5, 55);
//	Time total;
//
//	cout << "planning time = ";
//	planning.Show();
//	cout << endl;
//
//	cout << "coding time = ";
//	coding.Show();
//	cout << endl;
//
//	cout << "fixing time = ";
//	fixing.Show();
//	cout << endl;
//
//	total = coding + fixing;
//	// operator notation
//	cout << "coding + fixing = ";
//	total.Show();
//	cout << endl;
//
//	Time morefixing(3, 28);
//	cout << "more fixing time = ";
//	morefixing.Show();
//	cout << endl;
//	total = morefixing.operator+(total);
//	// function notation
//	cout << "morefixing.operator+(total) = ";
//	total.Show();
//	cout << endl;
//	// std::cin.get();
//	return 0;
//}


//// mytime2.h -- Time class after operator overloading				11-7
//#ifndef MYTIME2_H_
//#define MYTIME2_H_
//
//class Time {
//	private:
//		int hours;
//		int minutes;
//	public:
//		Time();
//		Time(int h, int m = 0);
//		void AddMin(int m);
//		void AddHr(int h);
//		void Reset(int h = 0, int m = 0);
//		Time operator+(const Time & t) const;
//		Time operator-(const Time & t) const;
//		Time operator*(double n) const;
//		void Show() const;
//};
//#endif


//// mytime2.cpp  -- implementing Time methods				11-8
//#include <iostream>
//#include "mytime2.h"
//
//Time::Time() {
//	hours = minutes = 0;
//}
//
//Time::Time(int h, int m ) {
//	hours = h;
//	minutes = m;
//}
//
//void Time::AddMin(int m) {
//	minutes += m;
//	hours += minutes / 60;
//	minutes %= 60;
//}
//void Time::AddHr(int h) {
//	hours += h;
//}
//
//void Time::Reset(int h, int m) {
//	hours = h;
//	minutes = m;
//}
//
//Time Time::operator+(const Time & t) const {
//	Time sum;
//	sum.minutes = minutes + t.minutes;
//	sum.hours = hours + t.hours + sum.minutes / 60;
//	sum.minutes %= 60;
//	return sum;
//}
//
//Time Time::operator-(const Time & t) const {
//	Time diff;
//	int tot1, tot2;
//	tot1 = t.minutes + 60 * t.hours;
//	tot2 = minutes + 60 * hours;
//	diff.minutes = (tot2 - tot1) % 60;
//	diff.hours = (tot2 - tot1) / 60;
//	return diff;
//}
//
//Time Time::operator*(double mult) const {
//	Time result;
//	long totalminutes = hours * mult * 60 + minutes * mult;
//	result.hours = totalminutes / 60;
//	result.minutes = totalminutes % 60;
//	return result;
//}
//
//void Time::Show() const {
//	std::cout << hours << " hours, " << minutes << " minutes";
//}


//// usetime2.cpp -- using the third draft of the Time class					11-9
//// compile usetime2.cpp and mytime2.cpp together
//#include <iostream>
//#include "mytime2.h"
//
//int main() {
//	using std::cout;
//	using std::endl;
//	Time weeding(4, 35);
//	Time waxing(2, 47);
//	Time total;
//	Time diff;
//	Time adjusted;
//
//	cout << "weeding time = ";
//	weeding.Show();
//	cout << endl;
//
//	cout << "waxing time = ";
//	waxing.Show();
//	cout << endl;
//
//	cout << "total work time = ";
//	total = weeding + waxing;   // use operator+()
//	total.Show();
//	cout << endl;
//
//	diff = weeding - waxing;    // use operator-()
//	cout << "weeding time - waxing time = ";
//	diff.Show();
//	cout << endl;
//
//	adjusted = total * 1.5;      // use operator+()
//	cout << "adjusted work time = ";
//	adjusted.Show();
//	cout << endl;
//	// std::cin.get();
//	return 0;
//}


//// mytime3.h -- Time class with friends						11-10
//#ifndef MYTIME3_H_
//#define MYTIME3_H_
//#include <iostream>
//
//class Time {
//	private:
//		int hours;
//		int minutes;
//	public:
//		Time();
//		Time(int h, int m = 0);
//		void AddMin(int m);
//		void AddHr(int h);
//		void Reset(int h = 0, int m = 0);
//		Time operator+(const Time & t) const;
//		Time operator-(const Time & t) const;
//		Time operator*(double n) const;
//		friend Time operator*(double m, const Time & t) {
//			return t * m;    // inline definition
//		}
//		friend std::ostream & operator<<(std::ostream & os, const Time & t);
//
//};
//#endif


//// mytime3.cpp  -- implementing Time methods				11-11
//#include "mytime3.h"
//
//Time::Time() {
//	hours = minutes = 0;
//}
//
//Time::Time(int h, int m ) {
//	hours = h;
//	minutes = m;
//}
//
//void Time::AddMin(int m) {
//	minutes += m;
//	hours += minutes / 60;
//	minutes %= 60;
//}
//
//void Time::AddHr(int h) {
//	hours += h;
//}
//
//void Time::Reset(int h, int m) {
//	hours = h;
//	minutes = m;
//}
//
//Time Time::operator+(const Time & t) const {
//	Time sum;
//	sum.minutes = minutes + t.minutes;
//	sum.hours = hours + t.hours + sum.minutes / 60;
//	sum.minutes %= 60;
//	return sum;
//}
//
//Time Time::operator-(const Time & t) const {
//	Time diff;
//	int tot1, tot2;
//	tot1 = t.minutes + 60 * t.hours;
//	tot2 = minutes + 60 * hours;
//	diff.minutes = (tot2 - tot1) % 60;
//	diff.hours = (tot2 - tot1) / 60;
//	return diff;
//}
//
//Time Time::operator*(double mult) const {
//	Time result;
//	long totalminutes = hours * mult * 60 + minutes * mult;
//	result.hours = totalminutes / 60;
//	result.minutes = totalminutes % 60;
//	return result;
//}
//
//std::ostream & operator<<(std::ostream & os, const Time & t) {
//	os << t.hours << " hours, " << t.minutes << " minutes";
//	return os;
//}


////usetime3.cpp -- using the fourth draft of the Time class			11-12
//// compile usetime3.cpp and mytime3.cpp together
//#include <iostream>
//#include "mytime3.h"
//
//int main() {
//	using std::cout;
//	using std::endl;
//	Time aida(3, 35);
//	Time tosca(2, 48);
//	Time temp;
//
//	cout << "Aida and Tosca:\n";
//	cout << aida<<"; " << tosca << endl;
//	temp = aida + tosca;     // operator+()
//	cout << "Aida + Tosca: " << temp << endl;
//	temp = aida* 1.17;  // member operator*()
//	cout << "Aida * 1.17: " << temp << endl;
//	cout << "10.0 * Tosca: " << 10.0 * tosca << endl;
//	// std::cin.get();
//	return 0;
//}


//// vect.h -- Vector class with <<, mode state				11-13
//#ifndef VECTOR_H_
//#define VECTOR_H_
//#include <iostream>
//namespace VECTOR {
//	class Vector {
//		public:
//			enum Mode {RECT, POL};
//			// RECT for rectangular, POL for Polar modes
//		private:
//			double x;          // horizontal value
//			double y;          // vertical value
//			double mag;        // length of vector
//			double ang;        // direction of vector in degrees
//			Mode mode;         // RECT or POL
//			// private methods for setting values
//			void set_mag();
//			void set_ang();
//			void set_x();
//			void set_y();
//		public:
//			Vector();
//			Vector(double n1, double n2, Mode form = RECT);
//			void reset(double n1, double n2, Mode form = RECT);
//			~Vector();
//			double xval() const {
//				return x;   // report x value
//			}
//			double yval() const {
//				return y;   // report y value
//			}
//			double magval() const {
//				return mag;   // report magnitude
//			}
//			double angval() const {
//				return ang;   // report angle
//			}
//			void polar_mode();                    // set mode to POL
//			void rect_mode();                     // set mode to RECT
//			// operator overloading
//			Vector operator+(const Vector & b) const;
//			Vector operator-(const Vector & b) const;
//			Vector operator-() const;
//			Vector operator*(double n) const;
//			// friends
//			friend Vector operator*(double n, const Vector & a);
//			friend std::ostream & operator<<(std::ostream & os, const Vector & v);
//	};
//
//}   // end namespace VECTOR
//#endif


//// vect.cpp -- methods for the Vector class						11-14
//#include <cmath>
//#include "vect.h"   // includes <iostream>
//using std::sqrt;
//using std::sin;
//using std::cos;
//using std::atan;
//using std::atan2;
//using std::cout;
//
//namespace VECTOR {
//	// compute degrees in one radian
//	const double Rad_to_deg = 45.0 / atan(1.0);
//	// should be about 57.2957795130823
//
//	// private methods
//	// calculates magnitude from x and y
//	void Vector::set_mag() {
//		mag = sqrt(x * x + y * y);
//	}
//
//	void Vector::set_ang() {
//		if (x == 0.0 && y == 0.0)
//			ang = 0.0;
//		else
//			ang = atan2(y, x);
//	}
//
//	// set x from polar coordinate
//	void Vector::set_x() {
//		x = mag * cos(ang);
//	}
//
//	// set y from polar coordinate
//	void Vector::set_y() {
//		y = mag * sin(ang);
//	}
//
//	// public methods
//	Vector::Vector() {           // default constructor
//		x = y = mag = ang = 0.0;
//		mode = RECT;
//	}
//
//	// construct vector from rectangular coordinates if form is r
//	// (the default) or else from polar coordinates if form is p
//	Vector::Vector(double n1, double n2, Mode form) {
//		mode = form;
//		if (form == RECT) {
//			x = n1;
//			y = n2;
//			set_mag();
//			set_ang();
//		} else if (form == POL) {
//			mag = n1;
//			ang = n2 / Rad_to_deg;
//			set_x();
//			set_y();
//		} else {
//			cout << "Incorrect 3rd argument to Vector() -- ";
//			cout << "vector set to 0\n";
//			x = y = mag = ang = 0.0;
//			mode = RECT;
//		}
//	}
//
//	// reset vector from rectangular coordinates if form is
//	// RECT (the default) or else from polar coordinates if
//	// form is POL
//	void Vector:: reset(double n1, double n2, Mode form) {
//		mode = form;
//		if (form == RECT) {
//			x = n1;
//			y = n2;
//			set_mag();
//			set_ang();
//		} else if (form == POL) {
//			mag = n1;
//			ang = n2 / Rad_to_deg;
//			set_x();
//			set_y();
//		} else {
//			cout << "Incorrect 3rd argument to Vector() -- ";
//			cout << "vector set to 0\n";
//			x = y = mag = ang = 0.0;
//			mode = RECT;
//		}
//	}
//
//	Vector::~Vector() {  // destructor
//	}
//
//	void Vector::polar_mode() {  // set to polar mode
//		mode = POL;
//	}
//
//	void Vector::rect_mode() {   // set to rectangular mode
//		mode = RECT;
//	}
//
//	// operator overloading
//	// add two Vectors
//	Vector Vector::operator+(const Vector & b) const {
//		return Vector(x + b.x, y + b.y);
//	}
//
//	// subtract Vector b from a
//	Vector Vector::operator-(const Vector & b) const {
//		return Vector(x - b.x, y - b.y);
//	}
//
//	// reverse sign of Vector
//	Vector Vector::operator-() const {
//		return Vector(-x, -y);
//	}
//
//	// multiply vector by n
//	Vector Vector::operator*(double n) const {
//		return Vector(n * x, n * y);
//	}
//
//	// friend methods
//	// multiply n by Vector a
//	Vector operator*(double n, const Vector & a) {
//		return a * n;
//	}
//
//	// display rectangular coordinates if mode is RECT,
//	// else display polar coordinates if mode is POL
//	std::ostream & operator<<(std::ostream & os, const Vector & v) {
//		if (v.mode == Vector::RECT)
//			os << "(x,y) = (" << v.x << ", " << v.y << ")";
//		else if (v.mode == Vector::POL) {
//			os << "(m,a) = (" << v.mag << ", "
//			   << v.ang * Rad_to_deg << ")";
//		} else
//			os << "Vector object mode is invalid";
//		return os;
//	}
//
//}  // end namespace VECTOR


//// randwalk.cpp -- using the Vector class						11-15
//// compile with the vect.cpp file
//#include <iostream>
//#include <cstdlib>      // rand(), srand() prototypes
//#include <ctime>        // time() prototype
//#include "vect.h"
//int main() {
//	using namespace std;
//	using VECTOR::Vector;
//	srand(time(0));     // seed random-number generator
//	double direction;
//	Vector step;
//	Vector result(0.0, 0.0);
//	unsigned long steps = 0;
//	double target;
//	double dstep;
//	cout << "Enter target distance (q to quit): ";
//	while (cin >> target) {
//		cout << "Enter step length: ";
//		if (!(cin >> dstep))
//			break;
//
//		while (result.magval() < target) {
//			direction = rand() % 360;
//			step.reset(dstep, direction, VECTOR::Vector::POL);
//			result = result + step;
//			steps++;
//		}
//		cout << "After " << steps << " steps, the subject "
//		     "has the following location:\n";
//		cout << result << endl;
//		result.polar_mode();
//		cout << " or\n" << result << endl;
//		cout << "Average outward distance per step = "
//		     << result.magval()/steps << endl;
//		steps = 0;
//		result.reset(0.0, 0.0);
//		cout << "Enter target distance (q to quit): ";
//	}
//	cout << "Bye!\n";
//	/* keep window open
//	    cin.clear();
//	    while (cin.get() != '\n')
//	        continue;
//	    cin.get();
//	*/
//	return 0;
//}


//// stonewt.h -- definition for the Stonewt class			11-16
//#ifndef STONEWT_H_
//#define STONEWT_H_
//class Stonewt {
//	private:
//		enum {Lbs_per_stn = 14};      // pounds per stone
//		int stone;                    // whole stones
//		double pds_left;              // fractional pounds
//		double pounds;                // entire weight in pounds
//	public:
//		Stonewt(double lbs);          // constructor for double pounds
//		Stonewt(int stn, double lbs); // constructor for stone, lbs
//		Stonewt();                    // default constructor
//		~Stonewt();
//		void show_lbs() const;        // show weight in pounds format
//		void show_stn() const;        // show weight in stone format
//};
//#endif


//// stonewt.cpp -- Stonewt methods								11-17
//#include <iostream>
//using std::cout;
//#include "stonewt.h"
//
//// construct Stonewt object from double value
//Stonewt::Stonewt(double lbs) {
//	stone = int (lbs) / Lbs_per_stn;    // integer division
//	pds_left = int (lbs) % Lbs_per_stn + lbs - int(lbs);
//	pounds = lbs;
//}
//
//// construct Stonewt object from stone, double values
//Stonewt::Stonewt(int stn, double lbs) {
//	stone = stn;
//	pds_left = lbs;
//	pounds =  stn * Lbs_per_stn +lbs;
//}
//
//Stonewt::Stonewt() {        // default constructor, wt = 0
//	stone = pounds = pds_left = 0;
//}
//
//Stonewt::~Stonewt() {       // destructor
//}
//
//// show weight in stones
//void Stonewt::show_stn() const {
//	cout << stone << " stone, " << pds_left << " pounds\n";
//}
//
//// show weight in pounds
//void Stonewt::show_lbs() const {
//	cout << pounds << " pounds\n";
//}


//// stone.cpp -- user-defined conversions					11-18
//// compile with stonewt.cpp
//#include <iostream>
//using std::cout;
//#include "stonewt.h"
//void display(const Stonewt & st, int n);
//int main() {
//	Stonewt incognito = 275; // uses constructor to initialize
//	Stonewt wolfe(285.7);    // same as Stonewt wolfe = 285.7;
//	Stonewt taft(21, 8);
//
//	cout << "The celebrity weighed ";
//	incognito.show_stn();
//	cout << "The detective weighed ";
//	wolfe.show_stn();
//	cout << "The President weighed ";
//	taft.show_lbs();
//	incognito = 276.8;      // uses constructor for conversion
//	taft = 325;             // same as taft = Stonewt(325);
//	cout << "After dinner, the celebrity weighed ";
//	incognito.show_stn();
//	cout << "After dinner, the President weighed ";
//	taft.show_lbs();
//	display(taft, 2);
//	cout << "The wrestler weighed even more.\n";
//	display(422, 2);
//	cout << "No stone left unearned\n";
//	// std::cin.get();
//	return 0;
//}
//
//void display(const Stonewt & st, int n) {
//	for (int i = 0; i < n; i++) {
//		cout << "Wow! ";
//		st.show_stn();
//	}
//}


//// stonewt1.h -- revised definition for the Stonewt class			11-19
//#ifndef STONEWT1_H_
//#define STONEWT1_H_
//class Stonewt {
//	private:
//		enum {Lbs_per_stn = 14};      // pounds per stone
//		int stone;                    // whole stones
//		double pds_left;              // fractional pounds
//		double pounds;                // entire weight in pounds
//	public:
//		Stonewt(double lbs);          // construct from double pounds
//		Stonewt(int stn, double lbs); // construct from stone, lbs
//		Stonewt();                    // default constructor
//		~Stonewt();
//		void show_lbs() const;        // show weight in pounds format
//		void show_stn() const;        // show weight in stone format
//// conversion functions
//		operator int() const;
//		operator double() const;
//};
//#endif


//// stonewt1.cpp -- Stonewt class methods + conversion functions				11-20
//#include <iostream>
//using std::cout;
//#include "stonewt1.h"
//
//// construct Stonewt object from double value
//Stonewt::Stonewt(double lbs) {
//	stone = int (lbs) / Lbs_per_stn;    // integer division
//	pds_left = int (lbs) % Lbs_per_stn + lbs - int(lbs);
//	pounds = lbs;
//}
//
//// construct Stonewt object from stone, double values
//Stonewt::Stonewt(int stn, double lbs) {
//	stone = stn;
//	pds_left = lbs;
//	pounds =  stn * Lbs_per_stn +lbs;
//}
//
//Stonewt::Stonewt() {        // default constructor, wt = 0
//	stone = pounds = pds_left = 0;
//}
//
//Stonewt::~Stonewt() {       // destructor
//}
//
//// show weight in stones
//void Stonewt::show_stn() const {
//	cout << stone << " stone, " << pds_left << " pounds\n";
//}
//
//// show weight in pounds
//void Stonewt::show_lbs() const {
//	cout << pounds << " pounds\n";
//}
//
//// conversion functions
//Stonewt::operator int() const {
//
//	return int (pounds + 0.5);
//
//}
//
//Stonewt::operator double()const {
//	return pounds;
//}


//// stone1.cpp -- user-defined conversion functions				11-21
//// compile with stonewt1.cpp
//#include <iostream>
//#include "stonewt1.h"
//
//int main() {
//	using std::cout;
//	Stonewt poppins(9,2.8);     // 9 stone, 2.8 pounds
//	double p_wt = poppins;      // implicit conversion
//	cout << "Convert to double => ";
//	cout << "Poppins: " << p_wt << " pounds.\n";
//	cout << "Convert to int => ";
//	cout << "Poppins: " << int (poppins) << " pounds.\n";
//	// std::cin.get();
//	return 0;
//}




//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


//// Chapter11.cpp
//#include <iostream>
//#include <cstring>
//#include <string>
//#include <cctype>
//#include <cstdlib>
//#include <ctime>
//#include <fstream>
//
//#include "vector.h"
//#include "mytime1.h"
//#include "Stonewt1.h"
//#include "Stonewt2.h"
//#include "complex0.h"
//
//using namespace std;
//
//
//// practice 1
//// 第六版的校对做得真的有点差，随机漫步应该是程序清单11.15才对
//// 对应的vector.h和vector.cpp可以用书本中原有的，也可以用practice 2中修改过的
//void p11_1(void) {
//	using VECTOR::Vector;
//	string filename = "randwalk.txt";
//	ofstream outFile;
//	outFile.open(filename.c_str(), ios_base::out);
//	srand(time(0));
//	double direction;
//	Vector step;
//	Vector result(0.0, 0.0);
//	unsigned long steps = 0;
//	double target;
//	double dstep;
//	cout << "Enter target distance (q to quit): ";
//	while (cin >> target) {
//		cout << "Enter step length: ";
//		if (!(cin >> dstep))
//			break;
//
//		outFile << "Target Distance: " << target << ", " << "Step Size: " << dstep << endl;
//		while (result.magval() < target) {
//			direction = rand() % 360;
//			step.reset(dstep, direction, Vector::POL);
//			result = result + step;
//			steps++;
//			step.rect_mode();
//			outFile << result << endl;
//		}
//		outFile << "After " << steps << " steps, the subject "
//		        "has the following locations:\n";
//		outFile << result << endl;
//		result.polar_mode();
//		outFile << " or\n" << result << endl;
//		outFile << "Average outward distance per step = "
//		        << result.magval() / steps << endl;
//		steps = 0;
//		result.reset(0.0, 0.0);
//		cout << "Enter target distance (q to quit): ";
//	}
//	cout << "Bye!\n";
//	cin.clear();
//	while (cin.get() != '\n')
//		continue;
//
//	return ;
//}
//
//
//// practice 2
//void p11_2(void) {
//	using VECTOR::Vector;
//	srand(time(0));
//	double direction;
//	Vector step;
//	Vector result(0.0, 0.0);
//	unsigned long steps = 0;
//	double target;
//	double dstep;
//	cout << "Enter target distance (q to quit): ";
//	while (cin >> target) {
//		cout << "Enter step length: ";
//		if (!(cin >> dstep))
//			break;
//
//		cout << "Target Distance: " << target << ", " << "Step Size: " << dstep << endl;
//		while (result.magval() < target) {
//			direction = rand() % 360;
//			step.reset(dstep, direction, Vector::POL);
//			result = result + step;
//			steps++;
//			step.rect_mode();
//			cout << result << endl;
//		}
//		cout << "After " << steps << " steps, the subject "
//		     "has the following locations:\n";
//		cout << result << endl;
//		result.polar_mode();
//		cout << " or\n" << result << endl;
//		cout << "Average outward distance per step = "
//		     << result.magval() / steps << endl;
//		steps = 0;
//		result.reset(0.0, 0.0);
//		cout << "Enter target distance (q to quit): ";
//	}
//	cout << "Bye!\n";
//	cin.clear();
//	while (cin.get() != '\n')
//		continue;
//
//	return;
//}
//
//
//// practice 3
//void p11_3(void) {
//	using VECTOR::Vector;
//	srand(time(0));
//	double direction;
//	Vector step;
//	Vector result(0.0, 0.0);
//	unsigned long steps = 0;
//	double target;
//	double dstep;
//	unsigned long max_steps = 0;
//	unsigned long min_steps = 0 - 1;
//	unsigned long total_steps = 0;
//	double average_steps = 0.0;
//	int test_times = 0;
//	cout << "Enter target distance (q to quit): ";
//	cin >> target;
//	cout << "Enter step length: ";
//	cin >> dstep;
//	cout << "Enter test times: ";
//	cin >> test_times;
//	cin.get();
//	for (int i = 0; i < test_times; i++) {
//		cout << "Target Distance: " << target << ", " << "Step Size: " << dstep << endl;
//		while (result.magval() < target) {
//			direction = rand() % 360;
//			step.reset(dstep, direction, Vector::POL);
//			result = result + step;
//			steps++;
//			step.rect_mode();
//			cout << result << endl;
//		}
//		cout << "After " << steps << " steps, the subject "
//		     "has the following locations:\n";
//		cout << result << endl;
//		result.polar_mode();
//		cout << " or\n" << result << endl;
//		cout << "Average outward distance per step = "
//		     << result.magval() / steps << endl;
//
//		total_steps += steps;
//		if (steps > max_steps) {
//			max_steps = steps;
//		} else if (steps < min_steps) {
//			min_steps = steps;
//		}
//		steps = 0;
//		result.reset(0.0, 0.0);
//		cout << endl;
//	}
//
//	average_steps = (double)total_steps / test_times;
//	cout << endl;
//	cout << "Test " << test_times << " times, max steps is " << max_steps << ", min steps is " << min_steps << ", average steps is " << average_steps << endl;
//
//	cout << "Bye!\n";
//	cin.clear();
//	while (cin.get() != '\n')
//		continue;
//
//	return;
//}
//
//
//// practice 4
//void p11_4(void) {
//	Time aida(3, 35);
//	Time tosca(2, 48);
//	Time temp;
//
//	cout << "Aida and Tosca:\n";
//	cout << aida << "; " << tosca << endl;
//	temp = aida + tosca;
//	cout << "Aida + Tosca: " << temp << endl;
//
//	temp = aida * 1.17;
//	cout << "Aida * 1.17: " << temp << endl;
//
//	cout << "10 * Tosca: " << 10 * tosca << endl;
//
//	return;
//}
//
//
//// practice 5
//void p11_5(void) {
//	Stonewt1 st1(120);
//	Stonewt1 st2(12.3, Stonewt1::IPOUND);
//	Stonewt1 st3(123.3, Stonewt1::DPOUND);
//
//	Stonewt1 st4 = 13 + st1;
//	Stonewt1 st5 = 13 * st2;
//	Stonewt1 st6 = 13 - st2;
//
//	Stonewt1 st7 = st1 + 10;
//	Stonewt1 st8 = st1 - 10;
//	Stonewt1 st9 = st1 * 10;
//
//	cout << st1 << endl;
//	cout << st2 << endl;
//	cout << st3 << endl;
//	cout << st4 << endl;
//	cout << st5 << endl;
//	cout << st6 << endl;
//	cout << st7 << endl;
//	cout << st8 << endl;
//	cout << st9 << endl;
//}
//
//
//// practice 6
//void p11_6(void) {
//	Stonewt2 st[6] = {
//		Stonewt2(10.0, 0),
//		Stonewt2(11.1, 0),
//		Stonewt2(22.2, 0)
//	};
//	Stonewt2 max = st[0];
//	Stonewt2 min = st[0];
//	Stonewt2 ele(11, 0);
//	int num = 0;
//
//	for (int i = 0; i < 3; i++) {
//		double pounds = 0;
//		cout << "Enter the pounds: ";
//		cin >> pounds;
//		Stonewt2 tmp(pounds);
//		st[3 + i] = tmp;
//	}
//
//	for (int i = 0; i < 6; i++) {
//		if (max < st[i]) {
//			max = st[i];
//		} else if (min > st[i]) {
//			min = st[i];
//		}
//
//		if (st[i] >= ele) {
//			num++;
//		}
//	}
//
//	cout << "Max element: ";
//	max.show_stn();
//
//	cout << "Min element: ";
//	min.show_stn();
//
//	cout << "There are " << num << " element large than 11 stones." << endl;
//
//	return;
//}
//
//
//// practice 7
//void p11_7(void) {
//	complex a(3.0, 4.0);
//	complex c;
//
//	cout << "Enter a complex number (q to quit):\n";
//	while (cin >> c) {
//		cout << "c is " << c << '\n';
//		cout << "complex conjugate is " << ~c << '\n';
//		cout << "a is " << a << '\n';
//		cout << "a + c is " << a + c << '\n';
//		cout << "a - c is " << a - c << '\n';
//		cout << "a * c is " << a * c << '\n';
//		cout << "2 * c is " << 2 * c << '\n';
//		cout << "Enter a complex number (q to quit):\n";
//	}
//
//	cout << "Done!\n";
//	return;
//}
//
//
//int main(int argc, char ** argv) {
//	p11_7();
//
//	while (cin.get());
//}
//
//// complex0.h
//#pragma once
//#ifndef COMPLEX0_H_
//#define COMPLEX0_H_
//#include <iostream>
//
//class complex {
//	public:
//		complex();
//		complex(double real, double imaginary);
//		complex operator+(const complex & cx) const;
//		complex operator-(const complex & cx) const;
//		complex operator*(const complex & cx) const;
//
//		friend complex operator~(const complex & cx);
//		friend complex operator*(int x, const complex & cx);
//		friend std::istream & operator>>(std::istream & is, complex & cx);
//		friend std::ostream & operator<<(std::ostream & os, const complex & cx);
//
//	private:
//		double real;
//		double imaginary;
//
//};
//
//#endif // !COMPLEX0_H_
//
//// complex0.cpp
//#include <iostream>
//using namespace std;
//
//#include "complex0.h"
//
//complex::complex() {
//	real = imaginary = 0;
//}
//
//complex::complex(double real, double imaginary) {
//	this->real = real;
//	this->imaginary = imaginary;
//}
//
//complex complex::operator+(const complex & cx) const {
//	return complex(real + cx.real, imaginary + cx.imaginary);
//}
//
//complex complex::operator-(const complex & cx) const {
//	return complex(real - cx.real, imaginary - cx.imaginary);
//}
//
//complex complex::operator*(const complex & cx) const {
//	return complex(real * cx.real - imaginary * cx.imaginary,
//	               real * cx.imaginary + imaginary * cx.real);
//}
//
//complex operator~(const complex & cx) {
//	return complex(cx.real, -cx.imaginary);
//}
//
//complex operator*(int x, const complex & cx) {
//	return complex(x*cx.real, x*cx.imaginary);
//}
//
//std::istream & operator>>(std::istream & is, complex & cx) {
//	cout << "real: ";
//	is >> cx.real;
//	if (!is) {
//		return is;
//	}
//	cout << "imaginary: ";
//	is >> cx.imaginary;
//	cin.get();
//
//	return is;
//}
//
//std::ostream & operator<<(std::ostream & os, const complex & cx) {
//	os << "(" << cx.real << ", " << cx.imaginary << "i)";
//
//	return os;
//}
//
//
//// mytime1.h
//#pragma once
//#ifndef MYTIME1_H_
//#define MYTIME1_H_
//
//#include <iostream>
//
//class Time {
//	private:
//		int hours;
//		int minutes;
//
//	public:
//		Time();
//		Time(int h, int m = 0);
//		void AddMin(int m);
//		void AddHr(int h);
//		void Reset(int h = 0, int m = 0);
//		friend Time operator+(const Time & t1, const Time & t2);
//		friend Time operator-(const Time & t1, const Time & t2);
//		friend Time operator*(double n, const Time & t);
//		friend Time operator*(const Time & t, double n);
//		friend std::ostream & operator<<(std::ostream & os, const Time & t);
//
//};
//
//
//#endif // MYTIME1_H_
//
//
//// mytime1.cpp
//#include "mytime1.h"
//
//using namespace std;
//
//Time::Time() {
//
//}
//
//Time::Time(int h, int m) {
//	hours = h;
//	minutes = m;
//}
//
//void Time::AddHr(int h) {
//	hours += h;
//}
//
//void Time::AddMin(int m) {
//	minutes += m;
//}
//
//void Time::Reset(int h, int m) {
//	hours = h;
//	minutes = m;
//}
//
//Time operator+(const Time & t1, const Time & t2) {
//	Time sum;
//	sum.minutes = t1.minutes + t2.minutes;
//	sum.hours = t1.hours + t2.hours + sum.minutes / 60;
//	sum.minutes %= 60;
//	return sum;
//}
//
//Time operator-(const Time & t1, const Time & t2) {
//	Time diff;
//	int tot1, tot2;
//	tot1 = t1.minutes + 60 * t1.hours;
//	tot2 = t2.minutes + 60 * t2.hours;
//	diff.minutes = (tot1 - tot2) % 60;
//	diff.hours = (tot1 - tot2) / 60;
//	return diff;
//}
//
//Time operator*(double n, const Time & t) {
//	Time result;
//	long totalminutes = t.hours * n * 60 + t.minutes * n;
//	result.hours = totalminutes / 60;
//	result.minutes = totalminutes % 60;
//	return result;
//}
//
//Time operator*(const Time & t, double n) {
//	Time result;
//	long totalminutes = t.hours * n * 60 + t.minutes * n;
//	result.hours = totalminutes / 60;
//	result.minutes = totalminutes % 60;
//	return result;
//}
//
//std::ostream & operator<<(std::ostream & os, const Time & t) {
//	os << t.hours << " hours, " << t.minutes << " minutes";
//	return os;
//}
//
//
//// Stonewt1.h
//#pragma once
//#ifndef STONEWT1_H_
//#define STONEWT1_H_
//
//#include <iostream>
//
//class Stonewt1 {
//	public:
//		enum format { STONES, IPOUND, DPOUND };
//
//	private:
//		enum {Lbs_per_stn = 14};
//		format ft;
//		double stone;
//		int ipounds;
//		double dpounds;
//
//		// 有三种格式的数据，成员函数先对total进行操作
//		// 然后调用update更新所有的成员变量
//		// 免得每个成员函数里面都用if...else if的判断来更新
//		double total;
//		void update();
//
//	public:
//		Stonewt1();
//		Stonewt1(double n, format f = STONES);
//		Stonewt1 operator+(double n) const;
//		Stonewt1 operator-(double n) const;
//		Stonewt1 operator*(double n) const;
//
//		friend Stonewt1 operator+(double n, const Stonewt1 & st);
//		friend Stonewt1 operator-(double n, const Stonewt1 & st);
//		friend Stonewt1 operator*(double n, const Stonewt1 & st);
//		friend std::ostream & operator<<(std::ostream & os, const Stonewt1 & st);
//};
//
//#endif // !STONEWT1_H_
//
//
//// Stonewt1.cpp
//#include "Stonewt1.h"
//using namespace std;
//
//void Stonewt1::update() {
//	if (ft == STONES) {
//		stone = total;
//		ipounds = (int)stone * Lbs_per_stn;
//		dpounds = stone * Lbs_per_stn;
//	} else if (ft == IPOUND) {
//		ipounds = total;
//		stone = ipounds / Lbs_per_stn;
//		dpounds = ipounds;
//	} else if (ft == DPOUND) {
//		dpounds = total;
//		stone = dpounds / Lbs_per_stn;
//		ipounds = (int)dpounds;
//	}
//}
//
//Stonewt1::Stonewt1() {
//	total = 0;
//	ft = STONES;
//	update();
//}
//
//Stonewt1::Stonewt1(double n, format f) {
//	total = n;
//	ft = f;
//	update();
//}
//
//Stonewt1 Stonewt1::operator+(double n) const {
//	Stonewt1 st(total + n, ft);
//	return st;
//}
//
//Stonewt1 Stonewt1::operator-(double n) const {
//	Stonewt1 st(total - n, ft);
//	return st;
//}
//
//Stonewt1 Stonewt1::operator*(double n) const {
//	Stonewt1 st(total * n, ft);
//	return st;
//}
//
//Stonewt1 operator+(double n, const Stonewt1 & st) {
//	return (st + n);
//}
//
//Stonewt1 operator-(double n, const Stonewt1 & st) {
//	return st - n;
//}
//
//Stonewt1 operator*(double n, const Stonewt1 & st) {
//	return st * n;
//}
//
//std::ostream & operator<<(std::ostream & os, const Stonewt1 & st) {
//	if (st.ft == st.STONES) {
//		cout << "Stone: " << st.stone ;
//	} else if (st.ft == st.IPOUND) {
//		cout << "pounds in int: " << st.ipounds ;
//	} else if (st.ft == st.DPOUND) {
//		cout << "pounds in double: " << st.dpounds;
//	}
//
//	return os;
//}
//
//
//// Stonewt2.h
//#pragma once
//#ifndef MYTIME2_H_
//#define MYTIME2_H_
//
//class Stonewt2 {
//	private:
//		enum { Lbs_per_stn = 14 };
//		int stone;
//		double pds_left;
//		double pounds;
//
//	public:
//		Stonewt2(double lbs);
//		Stonewt2(int stn, double lbs);
//		Stonewt2();
//		~Stonewt2();
//		void show_lbs() const;
//		void show_stn() const;
//
//		bool operator==(const Stonewt2 & st) const;
//		bool operator!=(const Stonewt2 & st) const;
//		bool operator<(const Stonewt2 & st) const;
//		bool operator>(const Stonewt2 & st) const;
//		bool operator<=(const Stonewt2 & st) const;
//		bool operator>=(const Stonewt2 & st) const;
//};
//
//#endif // !MYTIME2_H_
//
//
//// Stone2.cpp
//#include "Stonewt2.h"
//#include <iostream>
//
//using namespace std;
//
//Stonewt2::Stonewt2(double lbs) {
//	stone = int(lbs) / Lbs_per_stn;
//	pds_left = int(lbs) % Lbs_per_stn + lbs - (int)lbs;
//	pounds = lbs;
//}
//
//Stonewt2::Stonewt2(int stn, double lbs) {
//	stone = stn;
//	pds_left = lbs;
//	pounds = stn * Lbs_per_stn + lbs;
//}
//
//Stonewt2::Stonewt2() {
//	stone = pds_left = pounds = 0;
//}
//
//Stonewt2::~Stonewt2() {
//
//}
//
//void Stonewt2::show_stn() const {
//	cout << stone << " stone, " << pds_left << " pounds\n";
//}
//
//void Stonewt2::show_lbs() const {
//	cout << pounds << " pounds\n";
//}
//
//bool Stonewt2::operator<(const Stonewt2 & st) const {
//	return pounds < st.pounds;
//}
//
//bool Stonewt2::operator>(const Stonewt2 & st) const {
//	return pounds > st.pounds;
//}
//
//bool Stonewt2::operator<=(const Stonewt2 & st) const {
//	return pounds <= st.pounds;
//}
//
//bool Stonewt2::operator>=(const Stonewt2 & st) const {
//	return pounds >= st.pounds;
//}
//
//bool Stonewt2::operator==(const Stonewt2 & st) const {
//	return pounds == st.pounds;
//}
//
//bool Stonewt2::operator!=(const Stonewt2 & st) const {
//	return pounds != st.pounds;
//}
//
//
//// vector.h
//#ifndef VECTOR_H_
//#define VECTOR_H_
//#pragma once
//
//#include <iostream>
//
//namespace VECTOR {
//	class Vector {
//		public:
//			enum Mode {RECT, POL};
//
//		private:
//			double x;
//			double y;
//			Mode mode;
//			void set_x(double, double);
//			void set_y(double, double);
//
//		public:
//			Vector();
//			Vector(double n1, double n2, Mode form = RECT);
//			void reset(double n1, double n2, Mode form = RECT);
//			~Vector();
//			double xval() const {
//				return x;
//			}
//			double yval() const {
//				return y;
//			}
//			double magval() const;
//			double angval() const;
//			void polar_mode();
//			void rect_mode();
//
//			Vector operator+(const Vector & b) const;
//			Vector operator-(const Vector & b) const;
//			Vector operator-() const;
//			Vector operator*(double n) const;
//
//			friend Vector operator*(double n, const Vector & a);
//			friend std::ostream & operator<<(std::ostream & os, const Vector & v);
//	};
//}
//
//#endif // !VECTOR_H_
//
//
//// vector.cpp
//#include <cmath>
//#include "vector.h"
//
//using std::sqrt;
//using std::sin;
//using std::cos;
//using std::atan;
//using std::atan2;
//using std::cout;
//
//namespace VECTOR {
//	const double Rad_to_deg = 45.0 / atan(1.0);
//
//	void Vector::set_x(double mag, double ang) {
//		x = mag * cos(ang);
//	}
//
//	void Vector::set_y(double mag, double ang) {
//		y = mag * sin(ang);
//	}
//
//	Vector::Vector() {
//		x = y = 0.0;
//		mode = RECT;
//	}
//
//	Vector::Vector(double n1, double n2, Mode form) {
//		mode = form;
//		if (form == RECT) {
//			x = n1;
//			y = n2;
//		} else if (form == POL) {
//			set_x(n1, n2);
//			set_y(n1, n2);
//		} else {
//			cout << "Incorrect 3rd argument to Vector() -- ";
//			cout << "vector set to 0\n";
//			x = y = 0.0;
//			mode = RECT;
//		}
//	}
//
//	void Vector::reset(double n1, double n2, Mode form) {
//		mode = form;
//		if (form == RECT) {
//			x = n1;
//			y = n2;
//		} else if (form == POL) {
//			set_x(n1, n2);
//			set_y(n1, n2);
//		} else {
//			cout << "Incorrect 3rd argument to Vector() -- ";
//			cout << "vector set to 0\n";
//			x = y = 0.0;
//			mode = RECT;
//		}
//	}
//
//	Vector::~Vector() {
//
//	}
//
//	void Vector::polar_mode() {
//		mode = POL;
//	}
//
//	void Vector::rect_mode() {
//		mode = RECT;
//	}
//
//	double Vector::magval() const {
//		return sqrt(x * x + y * y);
//	}
//
//	double Vector::angval() const {
//		if(x == 0.0 && y == 0.0) {
//			return 0.0;
//		} else
//			return atan2(y, x);
//	}
//
//	Vector Vector::operator+(const Vector & b) const {
//		return Vector(x + b.x, y + b.y);
//	}
//
//	Vector Vector::operator-(const Vector & b) const {
//		return Vector(x - b.x, y - b.y);
//	}
//
//	Vector Vector::operator-() const {
//		return Vector(-x, -y);
//	}
//
//	Vector Vector::operator*(double n) const {
//		return Vector(n*x, n*y);
//	}
//
//	Vector operator*(double n, const Vector & a) {
//		return a * n;
//	}
//
//	std::ostream & operator<<(std::ostream & os, const Vector & v) {
//		if (v.mode == Vector::RECT) {
//			os << "(x,y) = (" << v.x << ", " << v.y << ")";
//		} else if (v.mode == Vector::POL) {
//			os << "(m,a) = (" << v.magval() << ", " << v.angval() * Rad_to_deg << ")";
//		} else
//			os << "Vector object mode is invalid";
//
//		return os;
//	}
//}



/******************************************************************ch12  类和动态内存分配****************************************************************/

//// strngbad.h -- flawed string class definition									12-1
//
//#include <iostream>
//#ifndef STRNGBAD_H_
//#define STRNGBAD_H_
//class StringBad {
//	private:
//		char * str;                // pointer to string
//		int len;                   // length of string
//		static int num_strings;    // number of objects
//	public:
//		StringBad(const char * s); // constructor
//		StringBad();               // default constructor
//		~StringBad();              // destructor
//// friend function
//		friend std::ostream & operator<<(std::ostream & os, const StringBad & st);
//};
//#endif


//// strngbad.cpp -- StringBad class methods											12-2
//
//#include <cstring>                    // string.h for some
//#include "strngbad.h"
//using std::cout;
//
//// initializing static class member
//int StringBad::num_strings = 0;
//
//// class methods
//
//// construct StringBad from C string
//StringBad::StringBad(const char * s) {
//	len = std::strlen(s);             // set size
//	str = new char[len + 1];          // allot storage
//	std::strcpy(str, s);              // initialize pointer
//	num_strings++;                    // set object count
//	cout << num_strings << ": \"" << str
//	     << "\" object created\n";    // For Your Information
//}
//
//StringBad::StringBad() {              // default constructor
//	len = 4;
//	str = new char[4];
//	std::strcpy(str, "C++");          // default string
//	num_strings++;
//	cout << num_strings << ": \"" << str
//	     << "\" default object created\n";  // FYI
//}
//
//StringBad::~StringBad() {             // necessary destructor
//	cout << "\"" << str << "\" object deleted, ";    // FYI
//	--num_strings;                    // required
//	cout << num_strings << " left\n"; // FYI
//	delete [] str;                    // required
//}
//
//std::ostream & operator<<(std::ostream & os, const StringBad & st) {
//	os << st.str;
//	return os;
//}


//// vegnews.cpp -- using new and delete with classes									12-3 //漏洞百出
//
//// compile with strngbad.cpp
//#include <iostream>
//using std::cout;
//#include "strngbad.h"
//
//void callme1(StringBad &);  // pass by reference
//void callme2(StringBad);    // pass by value
//
//int main() {
//	using std::endl;
//	{
//		cout << "Starting an inner block.\n";
//		StringBad headline1("Celery Stalks at Midnight");
//		StringBad headline2("Lettuce Prey");
//		StringBad sports("Spinach Leaves Bowl for Dollars");
//		cout << "headline1: " << headline1 << endl;
//		cout << "headline2: " << headline2 << endl;
//		cout << "sports: " << sports << endl;
//		callme1(headline1);
//		cout << "headline1: " << headline1 << endl;
//		callme2(headline2);
//		cout << "headline2: " << headline2 << endl;
//		cout << "Initialize one object to another:\n";
//		StringBad sailor = sports;
//		cout << "sailor: " << sailor << endl;
//		cout << "Assign one object to another:\n";
//		StringBad knot;
//		knot = headline1;
//		cout << "knot: " << knot << endl;
//		cout << "Exiting the block.\n";
//	}
//	cout << "End of main()\n";
//	// std::cin.get();
//	return 0;
//}
//
//void callme1(StringBad & rsb) {
//	cout << "String passed by reference:\n";
//	cout << "    \"" << rsb << "\"\n";
//}
//
//void callme2(StringBad sb) {
//	cout << "String passed by value:\n";
//	cout << "    \"" << sb << "\"\n";
//}


//// string1.h -- fixed and augmented string class definition					12-4
//
//#ifndef STRING1_H_
//#define STRING1_H_
//#include <iostream>
//using std::ostream;
//using std::istream;
//
//class String {
//	private:
//		char * str;             // pointer to string
//		int len;                // length of string
//		static int num_strings; // number of objects
//		static const int CINLIM = 80;  // cin input limit
//	public:
//// constructors and other methods
//		String(const char * s); // constructor
//		String();               // default constructor
//		String(const String &); // copy constructor
//		~String();              // destructor
//		int length () const {
//			return len;
//		}
//// overloaded operator methods
//		String & operator=(const String &);
//		String & operator=(const char *);
//		char & operator[](int i);
//		const char & operator[](int i) const;
//// overloaded operator friends
//		friend bool operator<(const String &st, const String &st2);
//		friend bool operator>(const String &st1, const String &st2);
//		friend bool operator==(const String &st, const String &st2);
//		friend ostream & operator<<(ostream & os, const String & st);
//		friend istream & operator>>(istream & is, String & st);
//// static function
//		static int HowMany();
//};
//#endif


//// string1.cpp -- String class methods									12-5
//#include <cstring>                 // string.h for some
//#include "string1.h"               // includes <iostream>
//using std::cin;
//using std::cout;
//
//// initializing static class member
//
//int String::num_strings = 0;
//
//// static method
//int String::HowMany() {
//	return num_strings;
//}
//
//// class methods
//String::String(const char * s) {   // construct String from C string
//	len = std::strlen(s);          // set size
//	str = new char[len + 1];       // allot storage
//	std::strcpy(str, s);           // initialize pointer
//	num_strings++;                 // set object count
//}
//
//String::String() {                 // default constructor
//	len = 4;
//	str = new char[1];
//	str[0] = '\0';                 // default string
//	num_strings++;
//}
//
//String::String(const String & st) {
//	num_strings++;             // handle static member update
//	len = st.len;              // same length
//	str = new char [len + 1];  // allot space
//	std::strcpy(str, st.str);  // copy string to new location
//}
//
//String::~String() {                   // necessary destructor
//	--num_strings;                    // required
//	delete [] str;                    // required
//}
//
//// overloaded operator methods
//
//// assign a String to a String
//String & String::operator=(const String & st) {
//	if (this == &st)
//		return *this;
//	delete [] str;
//	len = st.len;
//	str = new char[len + 1];
//	std::strcpy(str, st.str);
//	return *this;
//}
//
//// assign a C string to a String
//String & String::operator=(const char * s) {
//	delete [] str;
//	len = std::strlen(s);
//	str = new char[len + 1];
//	std::strcpy(str, s);
//	return *this;
//}
//
//// read-write char access for non-const String
//char & String::operator[](int i) {
//	return str[i];
//}
//
//// read-only char access for const String
//const char & String::operator[](int i) const {
//	return str[i];
//}
//
//// overloaded operator friends
//
//bool operator<(const String &st1, const String &st2) {
//	return (std::strcmp(st1.str, st2.str) < 0);
//}
//
//bool operator>(const String &st1, const String &st2) {
//	return st2 < st1;
//}
//
//bool operator==(const String &st1, const String &st2) {
//	return (std::strcmp(st1.str, st2.str) == 0);
//}
//
//// simple String output
//ostream & operator<<(ostream & os, const String & st) {
//	os << st.str;
//	return os;
//}
//
//// quick and dirty String input
//istream & operator>>(istream & is, String & st) {
//	char temp[String::CINLIM];
//	is.get(temp, String::CINLIM);
//	if (is)
//		st = temp;
//	while (is && is.get() != '\n')
//		continue;
//	return is;
//}


//// sayings1.cpp -- using expanded String class						12-6
//// compile with string1.cpp
//#include <iostream>
//#include "string1.h"
//const int ArSize = 10;
//const int MaxLen = 81;
//int main() {
//	using std::cout;
//	using std::cin;
//	using std::endl;
//	String name;
//	cout <<"Hi, what's your name?\n>> ";
//	cin >> name;
//
//	cout << name << ", please enter up to " << ArSize
//	     << " short sayings <empty line to quit>:\n";
//	String sayings[ArSize];     // array of objects
//	char temp[MaxLen];          // temporary string storage
//	int i;
//	for (i = 0; i < ArSize; i++) {
//		cout << i+1 << ": ";
//		cin.get(temp, MaxLen);
//		while (cin && cin.get() != '\n')
//			continue;
//		if (!cin || temp[0] == '\0')    // empty line?
//			break;              // i not incremented
//		else
//			sayings[i] = temp;  // overloaded assignment
//	}
//	int total = i;              // total # of lines read
//
//	if ( total > 0) {
//		cout << "Here are your sayings:\n";
//		for (i = 0; i < total; i++)
//			cout << sayings[i][0] << ": " << sayings[i] << endl;
//
//		int shortest = 0;
//		int first = 0;
//		for (i = 1; i < total; i++) {
//			if (sayings[i].length() < sayings[shortest].length())
//				shortest = i;
//			if (sayings[i] < sayings[first])
//				first = i;
//		}
//		cout << "Shortest saying:\n" << sayings[shortest] << endl;;
//		cout << "First alphabetically:\n" << sayings[first] << endl;
//		cout << "This program used "<< String::HowMany()
//		     << " String objects. Bye.\n";
//	} else
//		cout << "No input! Bye.\n";
//// keep window open
//	/*    if (!cin)
//	        cin.clear();
//	    while (cin.get() != '\n')
//	        continue; */
//	return 0;
//}


//// sayings2.cpp -- using pointers to objects						12-7
//// compile with string1.cpp
//#include <iostream>
//#include <cstdlib>      // (or stdlib.h) for rand(), srand()
//#include <ctime>        // (or time.h) for time()
//#include "string1.h"
//const int ArSize = 10;
//const int MaxLen = 81;
//int main() {
//	using namespace std;
//	String name;
//	cout <<"Hi, what's your name?\n>> ";
//	cin >> name;
//
//	cout << name << ", please enter up to " << ArSize
//	     << " short sayings <empty line to quit>:\n";
//	String sayings[ArSize];
//	char temp[MaxLen];               // temporary string storage
//	int i;
//	for (i = 0; i < ArSize; i++) {
//		cout << i+1 << ": ";
//		cin.get(temp, MaxLen);
//		while (cin && cin.get() != '\n')
//			continue;
//		if (!cin || temp[0] == '\0') // empty line?
//			break;                   // i not incremented
//		else
//			sayings[i] = temp;       // overloaded assignment
//	}
//	int total = i;                   // total # of lines read
//
//	if (total > 0) {
//		cout << "Here are your sayings:\n";
//		for (i = 0; i < total; i++)
//			cout << sayings[i] << "\n";
//
//		// use pointers to keep track of shortest, first strings
//		String * shortest = &sayings[0]; // initialize to first object
//		String * first = &sayings[0];
//		for (i = 1; i < total; i++) {
//			if (sayings[i].length() < shortest->length())
//				shortest = &sayings[i];
//			if (sayings[i] < *first)     // compare values
//				first = &sayings[i];     // assign address
//		}
//		cout << "Shortest saying:\n" << * shortest << endl;
//		cout << "First alphabetically:\n" << * first << endl;
//
//		srand(time(0));
//		int choice = rand() % total; // pick index at random
//		// use new to create, initialize new String object
//		String * favorite = new String(sayings[choice]);
//		cout << "My favorite saying:\n" << *favorite << endl;
//		delete favorite;
//	} else
//		cout << "Not much to say, eh?\n";
//	cout << "Bye.\n";
//// keep window open
//	/*    if (!cin)
//	        cin.clear();
//	    while (cin.get() != '\n')
//	        continue;
//	    cin.get();
//	*/
//	return 0;
//}


//// placenew1.cpp  -- new, placement new, no delete						12-8
//
//#include <iostream>
//#include <string>
//#include <new>
//using namespace std;
//const int BUF = 512;
//
//class JustTesting {
//	private:
//		string words;
//		int number;
//	public:
//		JustTesting(const string & s = "Just Testing", int n = 0) {
//			words = s;
//			number = n;
//			cout << words << " constructed\n";
//		}
//		~JustTesting() {
//			cout << words << " destroyed\n";
//		}
//		void Show() const {
//			cout << words << ", " << number << endl;
//		}
//};
//int main() {
//	char * buffer = new char[BUF];       // get a block of memory
//
//	JustTesting *pc1, *pc2;
//
//	pc1 = new (buffer) JustTesting;      // place object in buffer
//	pc2 = new JustTesting("Heap1", 20);  // place object on heap
//
//	cout << "Memory block addresses:\n" << "buffer: "
//	     << (void *) buffer << "    heap: " << pc2 <<endl;
//	cout << "Memory contents:\n";
//	cout << pc1 << ": ";
//	pc1->Show();
//	cout << pc2 << ": ";
//	pc2->Show();
//
//	JustTesting *pc3, *pc4;
//	pc3 = new (buffer) JustTesting("Bad Idea", 6);
//	pc4 = new JustTesting("Heap2", 10);
//	cout << "Memory contents:\n";
//	cout << pc3 << ": ";
//	pc3->Show();
//	cout << pc4 << ": ";
//	pc4->Show();
//
//	delete pc2;                          // free Heap1
//	delete pc4;                          // free Heap2
//	delete [] buffer;                    // free buffer
//	cout << "Done\n";
//	// std::cin.get();
//	return 0;
//}


//// placenew2.cpp  -- new, placement new, no delete							12-9

//#include <iostream>
//#include <string>
//#include <new>
//using namespace std;
//const int BUF = 512;
//
//class JustTesting {
//	private:
//		string words;
//		int number;
//	public:
//		JustTesting(const string & s = "Just Testing", int n = 0) {
//			words = s;
//			number = n;
//			cout << words << " constructed\n";
//		}
//		~JustTesting() {
//			cout << words << " destroyed\n";
//		}
//		void Show() const {
//			cout << words << ", " << number << endl;
//		}
//};
//int main() {
//	char * buffer = new char[BUF];       // get a block of memory
//
//	JustTesting *pc1, *pc2;
//
//	pc1 = new (buffer) JustTesting;      // place object in buffer
//	pc2 = new JustTesting("Heap1", 20);  // place object on heap
//
//	cout << "Memory block addresses:\n" << "buffer: "
//	     << (void *) buffer << "    heap: " << pc2 <<endl;
//	cout << "Memory contents:\n";
//	cout << pc1 << ": ";
//	pc1->Show();
//	cout << pc2 << ": ";
//	pc2->Show();
//
//	JustTesting *pc3, *pc4;
//// fix placement new location
//	pc3 = new (buffer + sizeof (JustTesting))
//	JustTesting("Better Idea", 6);
//	pc4 = new JustTesting("Heap2", 10);
//
//	cout << "Memory contents:\n";
//	cout << pc3 << ": ";
//	pc3->Show();
//	cout << pc4 << ": ";
//	pc4->Show();
//
//	delete pc2;           // free Heap1
//	delete pc4;           // free Heap2
//// explicitly destroy placement new objects
//	pc3->~JustTesting();  // destroy object pointed to by pc3
//	pc1->~JustTesting();  // destroy object pointed to by pc1
//	delete [] buffer;     // free buffer
//	// std::cin.get();
//	return 0;
//}


//// queue.h -- interface for a queue											12-10
//
//#ifndef QUEUE_H_
//#define QUEUE_H_
//// This queue will contain Customer items
//class Customer {
//	private:
//		long arrive;        // arrival time for customer
//		int processtime;    // processing time for customer
//	public:
//		Customer() : arrive(0), processtime (0) {}
//		void set(long when);
//		long when() const {
//			return arrive;
//		}
//		int ptime() const {
//			return processtime;
//		}
//};
//
//typedef Customer Item;
//
//class Queue {
//	private:
//// class scope definitions
//		// Node is a nested structure definition local to this class
//		struct Node {
//			Item item;
//			struct Node * next;
//		};
//		enum {Q_SIZE = 10};
//// private class members
//		Node * front;       // pointer to front of Queue
//		Node * rear;        // pointer to rear of Queue
//		int items;          // current number of items in Queue
//		const int qsize;    // maximum number of items in Queue
//		// preemptive definitions to prevent public copying
//		Queue(const Queue & q) : qsize(0) { }
//		Queue & operator=(const Queue & q) {
//			return *this;
//		}
//	public:
//		Queue(int qs = Q_SIZE); // create queue with a qs limit
//		~Queue();
//		bool isempty() const;
//		bool isfull() const;
//		int queuecount() const;
//		bool enqueue(const Item &item); // add item to end
//		bool dequeue(Item &item);       // remove item from front
//};
//#endif


//// queue.cpp -- Queue and Customer methods								12-11
//#include "queue.h"
//#include <cstdlib>         // (or stdlib.h) for rand()
//
//// Queue methods
//Queue::Queue(int qs) : qsize(qs) {
//	front = rear = NULL;    // or nullptr
//	items = 0;
//}
//
//Queue::~Queue() {
//	Node * temp;
//	while (front != NULL) { // while queue is not yet empty
//		temp = front;       // save address of front item
//		front = front->next;// reset pointer to next item
//		delete temp;        // delete former front
//	}
//}
//
//bool Queue::isempty() const {
//	return items == 0;
//}
//
//bool Queue::isfull() const {
//	return items == qsize;
//}
//
//int Queue::queuecount() const {
//	return items;
//}
//
//// Add item to queue
//bool Queue::enqueue(const Item & item) {
//	if (isfull())
//		return false;
//	Node * add = new Node;  // create node
//// on failure, new throws std::bad_alloc exception
//	add->item = item;       // set node pointers
//	add->next = NULL;       // or nullptr;
//	items++;
//	if (front == NULL)      // if queue is empty,
//		front = add;        // place item at front
//	else
//		rear->next = add;   // else place at rear
//	rear = add;             // have rear point to new node
//	return true;
//}
//
//// Place front item into item variable and remove from queue
//bool Queue::dequeue(Item & item) {
//	if (front == NULL)
//		return false;
//	item = front->item;     // set item to first item in queue
//	items--;
//	Node * temp = front;    // save location of first item
//	front = front->next;    // reset front to next item
//	delete temp;            // delete former first item
//	if (items == 0)
//		rear = NULL;
//	return true;
//}
//
//// customer method
//
//// when is the time at which the customer arrives
//// the arrival time is set to when and the processing
//// time set to a random value in the range 1 - 3
//void Customer::set(long when) {
//	processtime = std::rand() % 3 + 1;
//	arrive = when;
//}


//// bank.cpp -- using the Queue interface									12-12
//
//// compile with queue.cpp
//#include <iostream>
//#include <cstdlib> // for rand() and srand()
//#include <ctime>   // for time()
//#include "queue.h"
//const int MIN_PER_HR = 60;
//
//bool newcustomer(double x); // is there a new customer?
//
//int main() {
//	using std::cin;
//	using std::cout;
//	using std::endl;
//	using std::ios_base;
//// setting things up
//	std::srand(std::time(0));    //  random initializing of rand()
//
//	cout << "Case Study: Bank of Heather Automatic Teller\n";
//	cout << "Enter maximum size of queue: ";
//	int qs;
//	cin >> qs;
//	Queue line(qs);         // line queue holds up to qs people
//
//	cout << "Enter the number of simulation hours: ";
//	int hours;              //  hours of simulation
//	cin >> hours;
//	// simulation will run 1 cycle per minute
//	long cyclelimit = MIN_PER_HR * hours; // # of cycles
//
//	cout << "Enter the average number of customers per hour: ";
//	double perhour;         //  average # of arrival per hour
//	cin >> perhour;
//	double min_per_cust;    //  average time between arrivals
//	min_per_cust = MIN_PER_HR / perhour;
//
//	Item temp;              //  new customer data
//	long turnaways = 0;     //  turned away by full queue
//	long customers = 0;     //  joined the queue
//	long served = 0;        //  served during the simulation
//	long sum_line = 0;      //  cumulative line length
//	int wait_time = 0;      //  time until autoteller is free
//	long line_wait = 0;     //  cumulative time in line
//
//
//// running the simulation
//	for (int cycle = 0; cycle < cyclelimit; cycle++) {
//		if (newcustomer(min_per_cust)) { // have newcomer
//			if (line.isfull())
//				turnaways++;
//			else {
//				customers++;
//				temp.set(cycle);    // cycle = time of arrival
//				line.enqueue(temp); // add newcomer to line
//			}
//		}
//		if (wait_time <= 0 && !line.isempty()) {
//			line.dequeue (temp);      // attend next customer
//			wait_time = temp.ptime(); // for wait_time minutes
//			line_wait += cycle - temp.when();
//			served++;
//		}
//		if (wait_time > 0)
//			wait_time--;
//		sum_line += line.queuecount();
//	}
//
//// reporting results
//	if (customers > 0) {
//		cout << "customers accepted: " << customers << endl;
//		cout << "  customers served: " << served << endl;
//		cout << "         turnaways: " << turnaways << endl;
//		cout << "average queue size: ";
//		cout.precision(2);
//		cout.setf(ios_base::fixed, ios_base::floatfield);
//		cout << (double) sum_line / cyclelimit << endl;
//		cout << " average wait time: "
//		     << (double) line_wait / served << " minutes\n";
//	} else
//		cout << "No customers!\n";
//	cout << "Done!\n";
//	// cin.get();
//	// cin.get();
//	return 0;
//}
//
////  x = average time, in minutes, between customers
////  return value is true if customer shows up this minute
//bool newcustomer(double x) {
//	return (std::rand() * x / RAND_MAX < 1);
//}



//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


//// Chapter12.h
//#pragma once
//#ifndef CHAPTER12_H_
//#define CHAPTER12_H_
//
//class Cow {
//		char name[20];
//		char * hobby;
//		double weight;
//
//	public:
//		Cow();
//		Cow(const char * nm, const char * ho, double wt);
//		Cow(const Cow & c);
//		~Cow();
//		Cow & operator=(const Cow & c);
//		void ShowCow() const;
//};
//
//#endif // !CHAPTER12_H_
//
//
//// Chapter12.cpp
//#include <iostream>
//#include <string>
//#include <cstring>
//#include <cctype>
//#include <cmath>
//#include <ctime>
//#include <cstdlib>
//
//#include "Chapter12.h"
//#include "string2.h"
//#include "Stock.h"
//#include "Stack.h"
//#include "Queue.h"
//
//using namespace std;
//
//
//// practice 1
//Cow::Cow() {
//
//}
//Cow::Cow(const char * nm, const char * ho, double wt) {
//	strncpy(name, nm, 20);
//	int ho_length = strlen(ho);
//	hobby = new char[ho_length + 1];
//	strncpy(hobby, ho, ho_length);
//	hobby[ho_length] = '\0';
//	weight = wt;
//}
//Cow::Cow(const Cow & c) {
//	strncpy(name, c.name, 20);
//	int ho_length = strlen(c.hobby);
//	hobby = new char[ho_length + 1];
//	strncpy(hobby, c.hobby, ho_length);
//	hobby[ho_length] = '\0';
//	weight = c.weight;
//}
//Cow::~Cow() {
//	delete[] hobby;
//	hobby = nullptr;
//}
//Cow & Cow::operator=(const Cow & c) {
//	strncpy(name, c.name, 20);
//	int ho_length = strlen(c.hobby);
//	hobby = new char[ho_length + 1];
//	strncpy(hobby, c.hobby, ho_length);
//	hobby[ho_length] = '\0';
//	weight = c.weight;
//
//	return *this;
//}
//void Cow::ShowCow() const {
//	cout << "Cow name: " << name << endl;
//	cout << "Cow hobby: " << hobby << endl;
//	cout << "Cow weight: " << weight << endl;
//}
//void p12_1(void) {
//	Cow cow1("hehehe", "eat", 123.4);
//	Cow cow2("heihei", "drink", 321.2);
//	Cow cow3(cow2);
//	Cow cow4 = cow1;
//
//	cow1.ShowCow();
//	cow2.ShowCow();
//	cow3.ShowCow();
//	cow4.ShowCow();
//}
//
//
//// practice 2
//void p12_2(void) {
//	String2 s1("and i am a C++ student.");
//	String2 s2 = "Please enter your name: ";
//	String2 s3;
//	cout << s2;
//	cin >> s3;
//	s2 = "My name is " + s3;
//	cout << s2 << ".\n";
//	s2 = s2 + s1;
//	s2.Stringup();
//	cout << "The sting\n" << s2 << "\ncontains " << s2.has('A')
//	     << " 'A' characters in it.\n";
//	s1 = "red";
//	String2 rgb[3] = { String2(s1), String2("green"), String2("blue") };
//	cout << "Enter the name of a primary color for mixing light: ";
//	String2 ans;
//	bool success = false;
//	while (cin >> ans) {
//		ans.Stringlow();
//		for (int i = 0; i < 3; i++) {
//			if (ans == rgb[i]) {
//				cout << "That's right!\n";
//				success = true;
//				break;
//			}
//		}
//		if (success) {
//			break;
//		} else {
//			cout << "Try again!\n";
//		}
//	}
//
//	cout << "Bye!\n";
//	return ;
//}
//
//
//// practice 3
//const int STKS = 4;
//void p12_3(void) {
//	Stock stocks[STKS] = {
//		Stock("NanoSmart", 12, 20.0),
//		Stock("Boffo Objects", 200, 2.0),
//		Stock("Monolithic Obelisks", 130, 3.25),
//		Stock("Fleep Enterprises", 60, 6.5)
//	};
//
//	std::cout << "Stock holdings:\n";
//	int st;
//	for (st = 0; st < STKS; st++) {
//		std::cout << stocks[st];
//	}
//
//	const Stock * top = &stocks[0];
//	for (st = 0; st < STKS; st++) {
//		top = &top->topval(stocks[st]);
//	}
//
//	std::cout << "\nMost valuable holding:\n";
//	cout << *top;
//	return;
//}
//
//
//// practice 4
//void p12_4(void) {
//	Stack st1(10);
//	srand(time(0));
//	for (size_t i = 0; i < 10; i++) {
//		if (!st1.push(rand() % 100)) {
//			cout << "Push error!" << endl;;
//		}
//
//	}
//	if (!st1.push(0)) {
//		cout << "Push 0 error!" << endl;
//	}
//	Stack st2(st1);
//	Stack st3 = st1;
//	// 故意导致pop error
//	for (size_t i = 0; i < 11; i++) {
//		Item item;
//		cout << "#" << i+1 << ": " << endl;
//		if (!st1.pop(item)) {
//			cout << "st1 pop error!" << endl;
//		} else
//			cout << "st1: " << item << endl;
//
//		if (!st2.pop(item)) {
//			cout << "st2 pop error!" << endl;
//		} else
//			cout << "st2: " << item << endl;
//
//		if (!st3.pop(item)) {
//			cout << "st3 pop error!" << endl;
//		} else
//			cout << "st3: " << item << endl;
//
//		cout << endl;
//	}
//}
//
//
//// practice 5
//const int MIN_PER_HR = 60;
//bool newcustomer(double x) {
//	return (std::rand() * x / RAND_MAX < 1);
//}
//void p12_5(void) {
//	using std::cin;
//	using std::cout;
//	using std::endl;
//	using std::ios_base;
//
//	std::srand(std::time(0));
//
//	cout << "Case Study: Bank of Heather Automatic Teller\n";
//	cout << "Enter maximun size of queue: ";
//	int qs;
//	cin >> qs;
//	Queue line(qs);
//
//	// 直接将测试时间设置为100好了
//	cout << "Simulation hours: 100" << endl;
//	int hours = 100;
//
//	long cyclelimit = MIN_PER_HR * hours;
//
//	cItem temp;
//	long turnaways = 0;
//	long customers = 0;
//	long served = 0;
//	long sum_line = 0;
//	int wait_time = 0;
//	long line_wait = 0;
//	double avg_wait_time = 0.0;
//
//	// 每小时使用人数初始值为15，之后进行+1枚举测试
//	double perhour = 15;
//	double min_per_cust;
//
//	do {
//		min_per_cust = MIN_PER_HR / perhour;
//		turnaways = 0;
//		customers = 0;
//		served = 0;
//		sum_line = 0;
//		wait_time = 0;
//		line_wait = 0;
//		avg_wait_time = 0;
//
//		// 需要清空队列
//		while (!line.isempty()) {
//			line.dequeue(temp);
//		}
//
//		for (int cycle = 0; cycle < cyclelimit; cycle++) {
//			if (newcustomer(min_per_cust)) {
//				if (line.isfull()) {
//					turnaways++;
//				} else {
//					customers++;
//					temp.set(cycle);
//					line.enqueue(temp);
//				}
//			}
//			if (wait_time <= 0 && !line.isempty()) {
//				line.dequeue(temp);
//				wait_time = temp.ptime();
//				line_wait += (cycle - temp.when());
//				served++;
//			}
//			if (wait_time > 0) {
//				wait_time--;
//			}
//			sum_line += line.queuecount();
//		}
//
//		if (customers > 0) {
//			cout << "customers accepted: " << customers << endl;
//			cout << "  customers served: " << served << endl;
//			cout << "         turnaways: " << turnaways << endl;
//			cout << "average queue size: ";
//			cout.precision(2);
//			cout.setf(ios_base::fixed, ios_base::floatfield);
//			cout << (double)sum_line / cyclelimit << endl;
//			avg_wait_time = (double)line_wait / served;
//			cout << " average wait time: "
//			     << avg_wait_time << " minutes\n" << endl;
//		} else
//			cout << "No customers!\n" << endl;;
//		// 平均等待时间不一定刚好是1，设置在一个区间内
//	} while ((perhour++) && (avg_wait_time < 0.9) || (avg_wait_time > 1.1));
//
//	cout << "When perhour = " << perhour << " , the average wait time"
//	     " will be about 1 minute\n" << endl;
//
//	cout << "Done!\n";
//
//	return;
//}
//
//
//// practice 6
//void p12_6(void) {
//	using std::cin;
//	using std::cout;
//	using std::endl;
//	using std::ios_base;
//
//	std::srand(std::time(0));
//
//	cout << "Case Study: Bank of Heather Automatic Teller\n";
//	cout << "Enter maximun size of queue: ";
//	int qs;
//	cin >> qs;
//	Queue line1(qs);
//	Queue line2(qs);
//
//	// 直接将测试时间设置为100好了
//	cout << "Simulation hours: 100" << endl;
//	int hours = 100;
//
//	long cyclelimit = MIN_PER_HR * hours;
//
//	cItem temp;
//	long turnaways = 0;
//	long customers = 0;
//	long served = 0;
//	long sum_line = 0;
//	int wait_time1 = 0;
//	int wait_time2 = 0;
//	int line1_size = 0;
//	int line2_size = 0;
//	long line_wait = 0;
//	double avg_wait_time = 0.0;
//
//	// 每小时使用人数初始值为15，之后进行+1枚举测试
//	double perhour = 15;
//	double min_per_cust;
//
//	do {
//		min_per_cust = MIN_PER_HR / perhour;
//		turnaways = 0;
//		customers = 0;
//		served = 0;
//		sum_line = 0;
//		wait_time1 = 0;
//		wait_time2 = 0;
//		line1_size = 0;
//		line2_size = 0;
//		line_wait = 0;
//		avg_wait_time = 0;
//
//		// 需要清空队列
//		while (!line1.isempty()) {
//			line1.dequeue(temp);
//		}
//
//		while (!line2.isempty()) {
//			line2.dequeue(temp);
//		}
//
//		for (int cycle = 0; cycle < cyclelimit; cycle++) {
//			if (newcustomer(min_per_cust)) {
//				if (line1.isfull() && line2.isfull()) {
//					turnaways++;
//				} else if (line1_size > line2_size) {
//					customers++;
//					temp.set(cycle);
//					line2.enqueue(temp);
//					line2_size++;
//				} else {
//					customers++;
//					temp.set(cycle);
//					line1.enqueue(temp);
//					line1_size++;
//				}
//			}
//			if (wait_time1 <= 0 && !line1.isempty()) {
//				line1.dequeue(temp);
//				line1_size--;
//				wait_time1 = temp.ptime();
//				line_wait += (cycle - temp.when());
//				served++;
//			}
//			if (wait_time2 <=0 && !line2.isempty()) {
//				line2.dequeue(temp);
//				line2_size--;
//				wait_time2 = temp.ptime();
//				line_wait += (cycle - temp.when());
//				served++;
//			}
//			if (wait_time1 > 0) {
//				wait_time1--;
//			}
//			if (wait_time2 > 0) {
//				wait_time2--;
//			}
//			sum_line += line1.queuecount();
//			sum_line += line2.queuecount();
//		}
//
//		if (customers > 0) {
//			cout << "customers accepted: " << customers << endl;
//			cout << "  customers served: " << served << endl;
//			cout << "         turnaways: " << turnaways << endl;
//			cout << "average queue size: ";
//			cout.precision(2);
//			cout.setf(ios_base::fixed, ios_base::floatfield);
//			cout << (double)sum_line / cyclelimit << endl;
//			avg_wait_time = (double)line_wait / served;
//			cout << " average wait time: "
//			     << avg_wait_time << " minutes\n" << endl;;
//		} else
//			cout << "No customers!\n" << endl;
//		// 平均等待时间不一定刚好是1，设置在一个区间内
//	} while ((perhour++) && (avg_wait_time < 0.9) || (avg_wait_time > 1.1));
//
//	cout << "When perhour = " << perhour << " , the average wait time"
//	     " will be about 1 minute\n" << endl;
//
//	cout << "Done!\n";
//
//	return;
//}
//
//
//int main(int argc, char **argv) {
//	p12_6();
//
//	while (cin.get());
//}
//
//
//// Queue.h
//#pragma once
//
//class Customer {
//	private:
//		long arrive;
//		int processtime;
//
//	public:
//		Customer() {
//			arrive = processtime = 0;
//		}
//		void set(long when);
//		long when() const {
//			return arrive;
//		}
//		int ptime() const {
//			return processtime;
//		}
//};
//
//typedef Customer cItem;
//
//class Queue {
//	private:
//		struct Node {
//			cItem item;
//			struct Node * next;
//		};
//		enum {Q_SIZE = 10};
//		Node * front;
//		Node * rear;
//		int items;
//		const int qsize;
//		Queue(const Queue & q) : qsize(0) {}
//		Queue & operator=(const Queue & q) {
//			return *this;
//		}
//
//	public:
//		Queue(int qs = Q_SIZE);
//		~Queue();
//		bool isempty() const;
//		bool isfull() const;
//		int queuecount() const;
//		bool enqueue(const cItem & item);
//		bool dequeue(cItem & item);
//};
//
//
//// Queue.cpp
//#include "Queue.h"
//#include <cstdlib>
//
//
//Queue::Queue(int qs) : qsize(qs) {
//	front = rear = NULL;
//	items = 0;
//}
//
//Queue::~Queue() {
//	Node * temp;
//	while (front != NULL) {
//		temp = front;
//		front = front->next;
//		delete temp;
//	}
//}
//
//bool Queue::isempty() const {
//	return items == 0;
//}
//
//bool Queue::isfull() const {
//	return items == qsize;
//}
//
//int Queue::queuecount() const {
//	return items;
//}
//
//bool Queue::enqueue(const cItem & item) {
//	if (isfull()) {
//		return false;
//	}
//
//	Node * add = new Node;
//	add->item = item;
//	add->next = NULL;
//	items++;
//	if (front == NULL) {
//		front = add;
//	} else
//		rear->next = add;
//
//	rear = add;
//	return true;
//}
//
//bool Queue::dequeue(cItem & item) {
//	if (front == NULL) {
//		return false;
//	}
//
//	item = front->item;
//	items--;
//	Node * temp = front;
//	front = front->next;
//	delete temp;
//
//	if (items == 0) {
//		rear = NULL;
//	}
//	return true;
//}
//
//void Customer::set(long when) {
//	processtime = std::rand() % 3 + 1;
//	arrive = when;
//}
//
//
//// Stack.h
//#pragma once
//typedef unsigned long Item;
//
//
//class Stack {
//	private:
//		enum {MAX = 10};
//		Item * pitems;
//		int size;
//		int top;
//
//	public:
//		Stack(int n = MAX);
//		Stack(const Stack & st);
//		~Stack();
//		bool isempty() const;
//		bool isfull() const;
//		bool push(const Item & item);
//		bool pop(Item & item);
//		Stack & operator=(const Stack & st);
//};
//
//
//// Stack.cpp
//#include "Stack.h"
//#include <iostream>
//
//
//Stack::Stack(int n) {
//	pitems = new Item[n];
//	size = n;
//	top = 0;
//}
//
//Stack::Stack(const Stack & st) {
//	size = st.size;
//	pitems = new Item[size];
//	top = st.top;
//	for (int i = 0; i < top; i++) {
//		pitems[i] = st.pitems[i];
//	}
//}
//
//Stack::~Stack() {
//	delete[] pitems;
//	pitems = nullptr;
//}
//
//bool Stack::isempty() const {
//	return top == 0;
//}
//
//bool Stack::isfull() const {
//	return top == size;
//}
//
//bool Stack::push(const Item & item) {
//	if (isfull()) {
//		return false;
//	}
//
//	pitems[top++] = item;
//	return true;
//}
//
//bool Stack::pop(Item & item) {
//	if (isempty()) {
//		return false;
//	}
//
//	item = pitems[--top];
//	return true;
//}
//
//Stack & Stack::operator=(const Stack & st) {
//	size = st.size;
//	pitems = new Item[size];
//	top = st.top;
//	for (int i = 0; i < top; i++) {
//		pitems[i] = st.pitems[i];
//	}
//
//	return *this;
//}
//
//
//// Stock.h
//#pragma once
//#include <iostream>
//class Stock {
//	private:
//		char * company;
//		int shares;
//		double share_val;
//		double total_val;
//		void set_tot() {
//			total_val = shares * share_val;
//		}
//
//	public:
//		Stock();
//		Stock(const char * co, long n = 0, double pr = 0.0);
//		~Stock();
//		void buy(long num, double price);
//		void sell(long num, double price);
//		void update(double price);
//		void show() const;
//		friend std::ostream & operator<<(std::ostream & os, const Stock & st);
//		const Stock & topval(const Stock & s) const;
//};
//
//
//// Stock.cpp
//#include "Stock.h"
//#include <cstring>
//
//
//Stock::Stock() {
//	int len = std::strlen("no name");
//	company = new char[len + 1];
//	std::strcpy(company, "no name");
//	company[len] = '\0';
//
//	shares = 0;
//	share_val = 0.0;
//	total_val = 0.0;
//}
//
//Stock::Stock(const char * co, long n, double pr) {
//	int len = std::strlen(co);
//	company = new char[len + 1];
//	std::strcpy(company, co);
//
//	if (n < 0) {
//		std::cout << "Number of shares can't be negative; "
//		          << company << " shares set to n.\n";
//		shares = 0;
//	} else
//		shares = n;
//	share_val = pr;
//	set_tot();
//}
//
//Stock::~Stock() {
//	delete[] company;
//	company = nullptr;
//}
//
//void Stock::buy(long num, double price) {
//	if (num < 0) {
//		std::cout << "Number of shares purchased can't be negative. "
//		          << "Transaction is aborted.\n";
//	} else {
//		shares += num;
//		share_val = price;
//		set_tot();
//	}
//}
//
//void Stock::sell(long num, double price) {
//	using std::cout;
//	if (num < 0) {
//		cout << "Number of shares sold can't be negative. "
//		     << "Transaction is aborted.\n";
//	} else if (num > shares) {
//		cout << "You can't sell more than you have! "
//		     << "Transaction is aborted.\n";
//	} else {
//		shares -= num;
//		share_val = price;
//		set_tot();
//	}
//}
//
//void Stock::update(double price) {
//	share_val = price;
//	set_tot();
//}
//
//void Stock::show() const {
//	using std::cout;
//	using std::ios_base;
//	ios_base::fmtflags orig =
//	    cout.setf(ios_base::fixed, ios_base::floatfield);
//	std::streamsize prec = cout.precision(3);
//
//	cout << "Company: " << company
//	     << " Shares: " << shares << '\n';
//	cout << "Share Price: $" << share_val;
//	cout.precision(2);
//	cout << " Total Worth: $" << total_val << '\n';
//
//	cout.setf(orig, ios_base::floatfield);
//	cout.precision(prec);
//}
//
//std::ostream & operator<<(std::ostream & os, const Stock & st) {
//	using std::ios_base;
//	ios_base::fmtflags orig =
//	    os.setf(ios_base::fixed, ios_base::floatfield);
//	std::streamsize prec = os.precision(3);
//
//	os << "Company: " << st.company
//	   << " Shares: " << st.shares << '\n';
//	os << " Share Price: $" << st.share_val;
//	os.precision(2);
//	os << " Total Worth: $" << st.total_val << '\n';
//
//	os.setf(orig, ios_base::floatfield);
//	os.precision(prec);
//
//	return os;
//}
//
//const Stock & Stock::topval(const Stock & s) const {
//	if (s.total_val > total_val) {
//		return s;
//	} else
//		return *this;
//}
//
//
//// string2.h
//#pragma once
//#ifndef STRING2_H_
//#define STRING2_H_
//
//#include <iostream>
//using std::ostream;
//using std::istream;
//
//class String2 {
//	private:
//		char * str;
//		int len;
//		static int num_strings;
//		static const int CINLIM = 80;
//
//	public:
//		String2(const char * s);
//		String2();
//		String2(const String2 &);
//		~String2();
//		int length() const {
//			return len;
//		}
//
//		String2 & operator=(const String2 &);
//		String2 & operator=(const char *);
//		char & operator[](int i);
//		const char & operator[](int i) const;
//
//		friend bool operator<(const String2 &st, const String2 &st2);
//		friend bool operator>(const String2 &st, const String2 &st2);
//		friend bool operator==(const String2 &st, const String2 &st2);
//		friend ostream & operator<<(ostream & os, const String2 &st);
//		friend istream & operator>>(istream & is, String2 &st);
//
//		static int HowMany();
//
//		String2 operator+(const String2 &) const;
//		String2 operator+(const char *) const;
//		friend String2 operator+(const char *, const String2 &);
//		void Stringlow();
//		void Stringup();
//		int has(char);
//};
//
//#endif // !STRING2_H_
//
//
//// string2.cpp
//#include <cstring>
//#include "string2.h"
//
//using std::cin;
//using std::cout;
//
//int String2::num_strings = 0;
//
//int String2::HowMany() {
//	return num_strings;
//}
//
//String2::String2(const char * s) {
//	len = std::strlen(s);
//	str = new char[len + 1];
//	std::strcpy(str, s);
//	num_strings++;
//}
//
//String2::String2() {
//	len = 4;
//	str = new char[1];
//	str[0] = '\0';
//	num_strings++;
//}
//
//String2::String2(const String2 & st) {
//	num_strings++;
//	len = st.len;
//	str = new char[len + 1];
//	std::strcpy(str, st.str);
//}
//
//String2::~String2() {
//	--num_strings;
//	delete[] str;
//}
//
//String2 & String2::operator=(const String2 & st) {
//	if (this == &st) {
//		return *this;
//	}
//	delete[] str;
//	len = st.len;
//	str = new char[len + 1];
//	std::strcpy(str, st.str);
//	return *this;
//}
//
//String2 & String2::operator=(const char * s) {
//	delete[] str;
//	len = std::strlen(s);
//	str = new char[len + 1];
//	std::strcpy(str, s);
//	return *this;
//}
//
//char & String2::operator[](int i) {
//	return str[i];
//}
//
//const char & String2::operator[](int i) const {
//	return str[i];
//}
//
//bool operator<(const String2 & st, const String2 & st2) {
//	return(std::strcmp(st.str, st2.str) < 0);
//}
//
//bool operator>(const String2 & st, const String2 & st2) {
//	return(std::strcmp(st.str, st2.str) > 0);
//}
//
//bool operator==(const String2 & st, const String2 & st2) {
//	return(std::strcmp(st.str, st2.str) == 0);
//}
//
//ostream & operator<<(ostream & os, const String2 & st) {
//	os << st.str;
//	return os;
//}
//
//istream & operator>>(istream & is, String2 & st) {
//	char temp[String2::CINLIM];
//	is.get(temp, String2::CINLIM);
//	if (is) {
//		st = temp;
//	}
//	while (is && is.get() != '\n') {
//		continue;
//	}
//	return is;
//}
//
//String2 String2::operator+(const String2 & st) const {
//	int total_len = len + st.len;
//	char *temp = new char[total_len + 1];
//	std::strcpy(temp, str);
//	std::strcpy(temp + len, st.str);
//	temp[total_len] = '\0';
//	return String2(temp);
//}
//
//String2 String2::operator+(const char * s) const {
//	int total_len = len + strlen(s);
//	char *temp = new char[total_len + 1];
//	std::strcpy(temp, str);
//	std::strcpy(temp + len, s);
//	temp[total_len] = '\0';
//	return String2(temp);
//}
//
//String2 operator+(const char * s, const String2 & st) {
//	return String2(s) + st;
//}
//
//void String2::Stringlow() {
//	for (int i = 0; i < len + 1; i++) {
//		str[i] = tolower(str[i]);
//	}
//}
//
//void String2::Stringup() {
//	for (int i = 0; i < len + 1; i++) {
//		str[i] = toupper(str[i]);
//	}
//}
//
//int String2::has(char c) {
//	int same = 0;
//	for (int i = 0; i < len; i++) {
//		if (str[i] == c) {
//			same++;
//		}
//	}
//
//	return same;
//}



/******************************************************************ch13  类继承****************************************************************/



//// tabtenn0.h -- a table-tennis base class									13-1
//
//#ifndef TABTENN0_H_
//#define TABTENN0_H_
//#include <string>
//using std::string;
//// simple base class
//class TableTennisPlayer
//{
//private:
//    string firstname;
//    string lastname;
//    bool hasTable;
//public:
//    TableTennisPlayer (const string & fn = "none",
//                       const string & ln = "none", bool ht = false);
//    void Name() const;
//    bool HasTable() const { return hasTable; };
//    void ResetTable(bool v) { hasTable = v; };
//};
//#endif


////tabtenn0.cpp -- simple base-class methods								13-2
//
//#include "tabtenn0.h"
//#include <iostream>
//
//TableTennisPlayer::TableTennisPlayer (const string & fn,
//                                      const string & ln, bool ht) : firstname(fn),
//	lastname(ln), hasTable(ht) {}
//
//void TableTennisPlayer::Name() const {
//	std::cout << lastname << ", " << firstname;
//}


//// usett0.cpp -- using a base class												13-3
//
//#include <iostream>
//#include "tabtenn0.h"
//
//int main ( void ) {
//	using std::cout;
//	TableTennisPlayer player1("Chuck", "Blizzard", true);
//	TableTennisPlayer player2("Tara", "Boomdea", false);
//	player1.Name();
//	if (player1.HasTable())
//		cout << ": has a table.\n";
//	else
//		cout << ": hasn't a table.\n";
//	player2.Name();
//	if (player2.HasTable())
//		cout << ": has a table";
//	else
//		cout << ": hasn't a table.\n";
//	// std::cin.get();
//	return 0;
//}


//// tabtenn1.h -- a table-tennis base class											13-4
//
//#ifndef TABTENN1_H_
//#define TABTENN1_H_
//#include <string>
//using std::string;
//// simple base class
//class TableTennisPlayer {
//	private:
//		string firstname;
//		string lastname;
//		bool hasTable;
//	public:
//		TableTennisPlayer (const string & fn = "none",
//		                   const string & ln = "none", bool ht = false);
//		void Name() const;
//		bool HasTable() const {
//			return hasTable;
//		};
//		void ResetTable(bool v) {
//			hasTable = v;
//		};
//};
//
//// simple derived class
//class RatedPlayer : public TableTennisPlayer {
//	private:
//		unsigned int rating;
//	public:
//		RatedPlayer (unsigned int r = 0, const string & fn = "none",
//		             const string & ln = "none", bool ht = false);
//		RatedPlayer(unsigned int r, const TableTennisPlayer & tp);
//		unsigned int Rating() const {
//			return rating;
//		}
//		void ResetRating (unsigned int r) {
//			rating = r;
//		}
//};
//#endif


////tabtenn1.cpp -- simple base-class methods												13-5
//
//#include "tabtenn1.h"
//#include <iostream>
//
//TableTennisPlayer::TableTennisPlayer (const string & fn,
//                                      const string & ln, bool ht) : firstname(fn),
//	lastname(ln), hasTable(ht) {}
//
//void TableTennisPlayer::Name() const {
//	std::cout << lastname << ", " << firstname;
//}
//
//// RatedPlayer methods
//RatedPlayer::RatedPlayer(unsigned int r, const string & fn,
//                         const string & ln, bool ht) : TableTennisPlayer(fn, ln, ht) {
//	rating = r;
//}
//
//RatedPlayer::RatedPlayer(unsigned int r, const TableTennisPlayer & tp)
//	: TableTennisPlayer(tp), rating(r) {
//}


//// usett1.cpp -- using base class and derived class									13-6

//#include <iostream>
//#include "tabtenn1.h"
//
//int main ( void )
//{
//    using std::cout;
//    using std::endl;
//    TableTennisPlayer player1("Tara", "Boomdea", false);
//    RatedPlayer rplayer1(1140, "Mallory", "Duck", true);
//    rplayer1.Name();          // derived object uses base method
//    if (rplayer1.HasTable())
//        cout << ": has a table.\n";
//    else
//        cout << ": hasn't a table.\n";
//    player1.Name();           // base object uses base method
//    if (player1.HasTable())
//        cout << ": has a table";
//    else
//        cout << ": hasn't a table.\n";
//    cout << "Name: ";
//    rplayer1.Name();
//    cout << "; Rating: " << rplayer1.Rating() << endl;
//// initialize RatedPlayer using TableTennisPlayer object
//    RatedPlayer rplayer2(1212, player1);
//    cout << "Name: ";
//    rplayer2.Name();
//    cout << "; Rating: " << rplayer2.Rating() << endl;
//    // std::cin.get();
//    return 0;
//}


//// brass.h  -- bank account classes													13-7
//
//#ifndef BRASS_H_
//#define BRASS_H_
//#include <string>
//// Brass Account Class
//class Brass {
//	private:
//		std::string fullName;
//		long acctNum;
//		double balance;
//	public:
//		Brass(const std::string & s = "Nullbody", long an = -1,
//		      double bal = 0.0);
//		void Deposit(double amt);
//		virtual void Withdraw(double amt);
//		double Balance() const;
//		virtual void ViewAcct() const;
//		virtual ~Brass() {}
//};
//
////Brass Plus Account Class
//class BrassPlus : public Brass {
//	private:
//		double maxLoan;
//		double rate;
//		double owesBank;
//	public:
//		BrassPlus(const std::string & s = "Nullbody", long an = -1,
//		          double bal = 0.0, double ml = 500,
//		          double r = 0.11125);
//		BrassPlus(const Brass & ba, double ml = 500,
//		          double r = 0.11125);
//		virtual void ViewAcct()const;
//		virtual void Withdraw(double amt);
//		void ResetMax(double m) {
//			maxLoan = m;
//		}
//		void ResetRate(double r) {
//			rate = r;
//		};
//		void ResetOwes() {
//			owesBank = 0;
//		}
//};
//
//#endif


//// brass.cpp -- bank account class methods												13-8
//
//#include <iostream>
//#include "brass.h"
//using std::cout;
//using std::endl;
//using std::string;
//
//// formatting stuff
//typedef std::ios_base::fmtflags format;
//typedef std::streamsize precis;
//format setFormat();
//void restore(format f, precis p);
//
//// Brass methods
//
//Brass::Brass(const string & s, long an, double bal) {
//	fullName = s;
//	acctNum = an;
//	balance = bal;
//}
//
//void Brass::Deposit(double amt) {
//	if (amt < 0)
//		cout << "Negative deposit not allowed; "
//		     << "deposit is cancelled.\n";
//	else
//		balance += amt;
//}
//
//void Brass::Withdraw(double amt) {
//	// set up ###.## format
//	format initialState = setFormat();
//	precis prec = cout.precision(2);
//
//	if (amt < 0)
//		cout << "Withdrawal amount must be positive; "
//
//		     << "withdrawal canceled.\n";
//	else if (amt <= balance)
//		balance -= amt;
//	else
//		cout << "Withdrawal amount of $" << amt
//		     << " exceeds your balance.\n"
//		     << "Withdrawal canceled.\n";
//	restore(initialState, prec);
//}
//double Brass::Balance() const {
//	return balance;
//}
//
//void Brass::ViewAcct() const {
//	// set up ###.## format
//	format initialState = setFormat();
//	precis prec = cout.precision(2);
//	cout << "Client: " << fullName << endl;
//	cout << "Account Number: " << acctNum << endl;
//	cout << "Balance: $" << balance << endl;
//	restore(initialState, prec); // Restore original format
//}
//
//// BrassPlus Methods
//BrassPlus::BrassPlus(const string & s, long an, double bal,
//                     double ml, double r) : Brass(s, an, bal) {
//	maxLoan = ml;
//	owesBank = 0.0;
//	rate = r;
//}
//
//BrassPlus::BrassPlus(const Brass & ba, double ml, double r)
//	: Brass(ba) { // uses implicit copy constructor
//	maxLoan = ml;
//	owesBank = 0.0;
//	rate = r;
//}
//
//// redefine how ViewAcct() works
//void BrassPlus::ViewAcct() const {
//	// set up ###.## format
//	format initialState = setFormat();
//	precis prec = cout.precision(2);
//
//	Brass::ViewAcct();   // display base portion
//	cout << "Maximum loan: $" << maxLoan << endl;
//	cout << "Owed to bank: $" << owesBank << endl;
//	cout.precision(3);  // ###.### format
//	cout << "Loan Rate: " << 100 * rate << "%\n";
//	restore(initialState, prec);
//}
//
//// redefine how Withdraw() works
//void BrassPlus::Withdraw(double amt) {
//	// set up ###.## format
//	format initialState = setFormat();
//	precis prec = cout.precision(2);
//
//	double bal = Balance();
//	if (amt <= bal)
//		Brass::Withdraw(amt);
//	else if ( amt <= bal + maxLoan - owesBank) {
//		double advance = amt - bal;
//		owesBank += advance * (1.0 + rate);
//		cout << "Bank advance: $" << advance << endl;
//		cout << "Finance charge: $" << advance * rate << endl;
//		Deposit(advance);
//		Brass::Withdraw(amt);
//	} else
//		cout << "Credit limit exceeded. Transaction cancelled.\n";
//	restore(initialState, prec);
//}
//
//format setFormat() {
//	// set up ###.## format
//	return cout.setf(std::ios_base::fixed,
//	                 std::ios_base::floatfield);
//}
//
//void restore(format f, precis p) {
//	cout.setf(f, std::ios_base::floatfield);
//	cout.precision(p);
//}


//// usebrass1.cpp -- testing bank account classes										13-9
//
//// compile with brass.cpp
//#include <iostream>
//#include "brass.h"
//
//int main() {
//	using std::cout;
//	using std::endl;
//
//	Brass Piggy("Porcelot Pigg", 381299, 4000.00);
//	BrassPlus Hoggy("Horatio Hogg", 382288, 3000.00);
//	Piggy.ViewAcct();
//	cout << endl;
//	Hoggy.ViewAcct();
//	cout << endl;
//	cout << "Depositing $1000 into the Hogg Account:\n";
//	Hoggy.Deposit(1000.00);
//	cout << "New balance: $" << Hoggy.Balance() << endl;
//	cout << "Withdrawing $4200 from the Pigg Account:\n";
//	Piggy.Withdraw(4200.00);
//	cout << "Pigg account balance: $" << Piggy.Balance() << endl;
//	cout << "Withdrawing $4200 from the Hogg Account:\n";
//	Hoggy.Withdraw(4200.00);
//	Hoggy.ViewAcct();
//	// std::cin.get();
//	return 0;
//}


//// usebrass2.cpp -- polymorphic example												13-10
//
//// compile with brass.cpp
//#include <iostream>
//#include <string>
//#include "brass.h"
//const int CLIENTS = 4;
//
//int main() {
//	using std::cin;
//	using std::cout;
//	using std::endl;
//
//	Brass * p_clients[CLIENTS];
//	std::string temp;
//	long tempnum;
//	double tempbal;
//	char kind;
//
//	for (int i = 0; i < CLIENTS; i++) {
//		cout << "Enter client's name: ";
//		getline(cin,temp);
//		cout << "Enter client's account number: ";
//		cin >> tempnum;
//		cout << "Enter opening balance: $";
//		cin >> tempbal;
//		cout << "Enter 1 for Brass Account or "
//		     << "2 for BrassPlus Account: ";
//		while (cin >> kind && (kind != '1' && kind != '2'))
//			cout <<"Enter either 1 or 2: ";
//		if (kind == '1')
//			p_clients[i] = new Brass(temp, tempnum, tempbal);
//		else {
//			double tmax, trate;
//			cout << "Enter the overdraft limit: $";
//			cin >> tmax;
//			cout << "Enter the interest rate "
//			     << "as a decimal fraction: ";
//			cin >> trate;
//			p_clients[i] = new BrassPlus(temp, tempnum, tempbal,
//			                             tmax, trate);
//		}
//		while (cin.get() != '\n')
//			continue;
//	}
//	cout << endl;
//	for (int i = 0; i < CLIENTS; i++) {
//		p_clients[i]->ViewAcct();
//		cout << endl;
//	}
//
//	for (int i = 0; i < CLIENTS; i++) {
//		delete p_clients[i];  // free memory
//	}
//	cout << "Done.\n";
//	/* code to keep window open
//	  if (!cin)
//	     cin.clear();
//	  while (cin.get() != '\n')
//	     continue;
//	*/
//	return 0;
//}


//// acctabc.h  -- bank account classes												13-11
//
//#ifndef ACCTABC_H_
//#define ACCTABC_H_
//#include <iostream>
//#include <string>
//
//// Abstract Base Class
//class AcctABC {
//	private:
//		std::string fullName;
//		long acctNum;
//		double balance;
//	protected:
//		struct Formatting {
//			std::ios_base::fmtflags flag;
//			std::streamsize pr;
//		};
//		const std::string & FullName() const {
//			return fullName;
//		}
//		long AcctNum() const {
//			return acctNum;
//		}
//		Formatting SetFormat() const;
//		void Restore(Formatting & f) const;
//	public:
//		AcctABC(const std::string & s = "Nullbody", long an = -1,
//		        double bal = 0.0);
//		void Deposit(double amt) ;
//		virtual void Withdraw(double amt) = 0; // pure virtual function
//		double Balance() const {
//			return balance;
//		};
//		virtual void ViewAcct() const = 0;     // pure virtual function
//		virtual ~AcctABC() {}
//};
//
//// Brass Account Class
//class Brass :public AcctABC {
//	public:
//		Brass(const std::string & s = "Nullbody", long an = -1,
//		      double bal = 0.0) : AcctABC(s, an, bal) { }
//		virtual void Withdraw(double amt);
//		virtual void ViewAcct() const;
//		virtual ~Brass() {}
//};
//
////Brass Plus Account Class
//class BrassPlus : public AcctABC {
//	private:
//		double maxLoan;
//		double rate;
//		double owesBank;
//	public:
//		BrassPlus(const std::string & s = "Nullbody", long an = -1,
//		          double bal = 0.0, double ml = 500,
//		          double r = 0.10);
//		BrassPlus(const Brass & ba, double ml = 500, double r = 0.1);
//		virtual void ViewAcct()const;
//		virtual void Withdraw(double amt);
//		void ResetMax(double m) {
//			maxLoan = m;
//		}
//		void ResetRate(double r) {
//			rate = r;
//		};
//		void ResetOwes() {
//			owesBank = 0;
//		}
//};
//
//#endif


//// acctabc.cpp -- bank account class methods									13-12
//
//#include <iostream>
//#include "acctabc.h"
//using std::cout;
//using std::ios_base;
//using std::endl;
//using std::string;
//
//// Abstract Base Class
//AcctABC::AcctABC(const string & s, long an, double bal) {
//	fullName = s;
//	acctNum = an;
//	balance = bal;
//}
//
//void AcctABC::Deposit(double amt) {
//	if (amt < 0)
//		cout << "Negative deposit not allowed; "
//		     << "deposit is cancelled.\n";
//	else
//		balance += amt;
//}
//
//void AcctABC::Withdraw(double amt) {
//	balance -= amt;
//}
//
//// protected methods for formatting
//AcctABC::Formatting AcctABC::SetFormat() const {
//// set up ###.## format
//	Formatting f;
//	f.flag =
//	    cout.setf(ios_base::fixed, ios_base::floatfield);
//	f.pr = cout.precision(2);
//	return f;
//}
//
//void AcctABC::Restore(Formatting & f) const {
//	cout.setf(f.flag, ios_base::floatfield);
//	cout.precision(f.pr);
//}
//
//// Brass methods
//void Brass::Withdraw(double amt) {
//	if (amt < 0)
//		cout << "Withdrawal amount must be positive; "
//		     << "withdrawal canceled.\n";
//	else if (amt <= Balance())
//		AcctABC::Withdraw(amt);
//	else
//		cout << "Withdrawal amount of $" << amt
//		     << " exceeds your balance.\n"
//		     << "Withdrawal canceled.\n";
//}
//
//void Brass::ViewAcct() const {
//
//	Formatting f = SetFormat();
//	cout << "Brass Client: " << FullName() << endl;
//	cout << "Account Number: " << AcctNum() << endl;
//	cout << "Balance: $" << Balance() << endl;
//	Restore(f);
//}
//
//// BrassPlus Methods
//BrassPlus::BrassPlus(const string & s, long an, double bal,
//                     double ml, double r) : AcctABC(s, an, bal) {
//	maxLoan = ml;
//	owesBank = 0.0;
//	rate = r;
//}
//
//BrassPlus::BrassPlus(const Brass & ba, double ml, double r)
//	: AcctABC(ba) { // uses implicit copy constructor
//	maxLoan = ml;
//	owesBank = 0.0;
//	rate = r;
//}
//
//void BrassPlus::ViewAcct() const {
//	Formatting f = SetFormat();
//
//	cout << "BrassPlus Client: " << FullName() << endl;
//	cout << "Account Number: " << AcctNum() << endl;
//	cout << "Balance: $" << Balance() << endl;
//	cout << "Maximum loan: $" << maxLoan << endl;
//	cout << "Owed to bank: $" << owesBank << endl;
//	cout.precision(3);
//	cout << "Loan Rate: " << 100 * rate << "%\n";
//	Restore(f);
//}
//
//void BrassPlus::Withdraw(double amt) {
//	Formatting f = SetFormat();
//
//	double bal = Balance();
//	if (amt <= bal)
//		AcctABC::Withdraw(amt);
//	else if ( amt <= bal + maxLoan - owesBank) {
//		double advance = amt - bal;
//		owesBank += advance * (1.0 + rate);
//		cout << "Bank advance: $" << advance << endl;
//		cout << "Finance charge: $" << advance * rate << endl;
//		Deposit(advance);
//		AcctABC::Withdraw(amt);
//	} else
//		cout << "Credit limit exceeded. Transaction cancelled.\n";
//	Restore(f);
//}


//// usebrass3.cpp -- polymorphic example												13-13
//
//// compile with acctacb.cpp
//#include <iostream>
//#include <string>
//#include "acctabc.h"
//const int CLIENTS = 4;
//
//int main() {
//	using std::cin;
//	using std::cout;
//	using std::endl;
//
//	AcctABC * p_clients[CLIENTS];
//	std::string temp;
//	long tempnum;
//	double tempbal;
//	char kind;
//
//	for (int i = 0; i < CLIENTS; i++) {
//		cout << "Enter client's name: ";
//		getline(cin,temp);
//		cout << "Enter client's account number: ";
//		cin >> tempnum;
//		cout << "Enter opening balance: $";
//		cin >> tempbal;
//		cout << "Enter 1 for Brass Account or "
//		     << "2 for BrassPlus Account: ";
//		while (cin >> kind && (kind != '1' && kind != '2'))
//			cout <<"Enter either 1 or 2: ";
//		if (kind == '1')
//			p_clients[i] = new Brass(temp, tempnum, tempbal);
//		else {
//			double tmax, trate;
//			cout << "Enter the overdraft limit: $";
//			cin >> tmax;
//			cout << "Enter the interest rate "
//			     << "as a decimal fraction: ";
//			cin >> trate;
//			p_clients[i] = new BrassPlus(temp, tempnum, tempbal,
//			                             tmax, trate);
//		}
//		while (cin.get() != '\n')
//			continue;
//	}
//	cout << endl;
//	for (int i = 0; i < CLIENTS; i++) {
//		p_clients[i]->ViewAcct();
//		cout << endl;
//	}
//
//	for (int i = 0; i < CLIENTS; i++) {
//		delete p_clients[i];  // free memory
//	}
//	cout << "Done.\n";
//	// cin.get();
//	return 0;
//}


//// dma.h  -- inheritance and dynamic memory allocation									13-14
//
//#ifndef DMA_H_
//#define DMA_H_
//#include <iostream>
//
////  Base Class Using DMA
//class baseDMA {
//	private:
//		char * label;
//		int rating;
//
//	public:
//		baseDMA(const char * l = "null", int r = 0);
//		baseDMA(const baseDMA & rs);
//		virtual ~baseDMA();
//		baseDMA & operator=(const baseDMA & rs);
//		friend std::ostream & operator<<(std::ostream & os,
//		                                 const baseDMA & rs);
//};
//
//// derived class without DMA
//// no destructor needed
//// uses implicit copy constructor
//// uses implicit assignment operator
//class lacksDMA :public baseDMA {
//	private:
//		enum { COL_LEN = 40};
//		char color[COL_LEN];
//	public:
//		lacksDMA(const char * c = "blank", const char * l = "null",
//		         int r = 0);
//		lacksDMA(const char * c, const baseDMA & rs);
//		friend std::ostream & operator<<(std::ostream & os,
//		                                 const lacksDMA & rs);
//};
//
//// derived class with DMA
//class hasDMA :public baseDMA {
//	private:
//		char * style;
//	public:
//		hasDMA(const char * s = "none", const char * l = "null",
//		       int r = 0);
//		hasDMA(const char * s, const baseDMA & rs);
//		hasDMA(const hasDMA & hs);
//		~hasDMA();
//		hasDMA & operator=(const hasDMA & rs);
//		friend std::ostream & operator<<(std::ostream & os,
//		                                 const hasDMA & rs);
//};
//
//#endif


//// dma.cpp --dma class methods															13-15
//
//#include "dma.h"
//#include <cstring>
//
//// baseDMA methods
//baseDMA::baseDMA(const char * l, int r) {
//	label = new char[std::strlen(l) + 1];
//	std::strcpy(label, l);
//	rating = r;
//}
//
//baseDMA::baseDMA(const baseDMA & rs) {
//	label = new char[std::strlen(rs.label) + 1];
//	std::strcpy(label, rs.label);
//	rating = rs.rating;
//}
//
//baseDMA::~baseDMA() {
//	delete [] label;
//}
//
//baseDMA & baseDMA::operator=(const baseDMA & rs) {
//	if (this == &rs)
//		return *this;
//	delete [] label;
//	label = new char[std::strlen(rs.label) + 1];
//	std::strcpy(label, rs.label);
//	rating = rs.rating;
//	return *this;
//}
//
//std::ostream & operator<<(std::ostream & os, const baseDMA & rs) {
//	os << "Label: " << rs.label << std::endl;
//	os << "Rating: " << rs.rating << std::endl;
//	return os;
//}
//
//// lacksDMA methods
//lacksDMA::lacksDMA(const char * c, const char * l, int r)
//	: baseDMA(l, r) {
//	std::strncpy(color, c, 39);
//	color[39] = '\0';
//}
//
//lacksDMA::lacksDMA(const char * c, const baseDMA & rs)
//	: baseDMA(rs) {
//	std::strncpy(color, c, COL_LEN - 1);
//	color[COL_LEN - 1] = '\0';
//}
//
//std::ostream & operator<<(std::ostream & os, const lacksDMA & ls) {
//	os << (const baseDMA &) ls;
//	os << "Color: " << ls.color << std::endl;
//	return os;
//}
//
//// hasDMA methods
//hasDMA::hasDMA(const char * s, const char * l, int r)
//	: baseDMA(l, r) {
//	style = new char[std::strlen(s) + 1];
//	std::strcpy(style, s);
//}
//
//hasDMA::hasDMA(const char * s, const baseDMA & rs)
//	: baseDMA(rs) {
//	style = new char[std::strlen(s) + 1];
//	std::strcpy(style, s);
//}
//
//hasDMA::hasDMA(const hasDMA & hs)
//	: baseDMA(hs) { // invoke base class copy constructor
//	style = new char[std::strlen(hs.style) + 1];
//	std::strcpy(style, hs.style);
//}
//
//hasDMA::~hasDMA() {
//	delete [] style;
//}
//
//hasDMA & hasDMA::operator=(const hasDMA & hs) {
//	if (this == &hs)
//		return *this;
//	baseDMA::operator=(hs);  // copy base portion
//	delete [] style;         // prepare for new style
//	style = new char[std::strlen(hs.style) + 1];
//	std::strcpy(style, hs.style);
//	return *this;
//}
//
//std::ostream & operator<<(std::ostream & os, const hasDMA & hs) {
//	os << (const baseDMA &) hs;
//	os << "Style: " << hs.style << std::endl;
//	return os;
//}


//// usedma.cpp -- inheritance, friends, and DMA										13-16
//
//// compile with dma.cpp
//#include <iostream>
//#include "dma.h"
//int main() {
//	using std::cout;
//	using std::endl;
//
//	baseDMA shirt("Portabelly", 8);
//	lacksDMA balloon("red", "Blimpo", 4);
//	hasDMA map("Mercator", "Buffalo Keys", 5);
//	cout << "Displaying baseDMA object:\n";
//	cout << shirt << endl;
//	cout << "Displaying lacksDMA object:\n";
//	cout << balloon << endl;
//	cout << "Displaying hasDMA object:\n";
//	cout << map << endl;
//	lacksDMA balloon2(balloon);
//	cout << "Result of lacksDMA copy:\n";
//	cout << balloon2 << endl;
//	hasDMA map2;
//	map2 = map;
//	cout << "Result of hasDMA assignment:\n";
//	cout << map2 << endl;
//	// std::cin.get();
//	return 0;
//}



//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//// Chapter13.cpp
//#include <iostream>
//#include <string>
//#include <cstdlib>
//#include <cstring>
//#include <cctype>
//
//using namespace std;
//
//#include "Cd.h"
//#include "Cd1.h"
//#include "dma.h"
//#include "Port.h"
//
//
//// practice 1
//void Bravo(const Cd & disk);
//void p13_1(void) {
//	Cd c1("Beatles", "Capitol", 14, 35.5);
//	Classic c2 = Classic("Piano Sonata in B flat, Fantasia in C",
//	                     "Alfred Brendel", "Philips", 2, 57.17);
//	Cd *pcd = &c1;
//
//	cout << "Using object directly:\n";
//	c1.Report();
//	c2.Report();
//
//	cout << "Using type cd * pointer to objects:\n";
//	pcd->Report();
//	pcd = &c2;
//	pcd->Report();
//
//	cout << "Calling a function whit a cd reference argument:\n";
//	Bravo(c1);
//	Bravo(c2);
//
//	cout << "Testing assignment: ";
//	Classic copy;
//	copy = c2;
//	copy.Report();
//
//	return;
//}
//void Bravo(const Cd & disk) {
//	disk.Report();
//}
//
//
//// practice 2
//void Bravo(const Cd1 & disk) {
//	disk.Report();
//}
//void p13_2(void) {
//	Cd1 c1("Beatles", "Capitol", 14, 35.5);
//	Classic1 c2 = Classic1("Piano Sonata in B flat, Fantasia in C",
//	                       "Alfred Brendel", "Philips", 2, 57.17);
//	Cd1 *pcd = &c1;
//
//	cout << "Using object directly:\n";
//	c1.Report();
//	c2.Report();
//
//	cout << "Using type cd * pointer to objects:\n";
//	pcd->Report();
//	pcd = &c2;
//	pcd->Report();
//
//	cout << "Calling a function whit a cd reference argument:\n";
//	Bravo(c1);
//	Bravo(c2);
//
//	cout << "Testing assignment: ";
//	Classic1 copy;
//	copy = c2;
//	copy.Report();
//
//	return;
//}
//
//
//// practice 3
//const int CLIMENTS = 5;
//void p13_3(void) {
//	baseDMA * dma[CLIMENTS];
//	string label;
//	int rating;
//	char choice;
//	string color;
//	string style;
//
//	for (int i = 0; i < CLIMENTS; i++) {
//		cout << "Enter lable: ";
//		getline(cin, label);
//		cout << "Enter rating: ";
//		cin >> rating;
//		cout << "Enter 1 for baseDMA or 2"
//		     " for lacksDMA or 3 for hasDMA: ";
//		while (cin >> choice && (choice != '1' && choice != '2' && choice != '3')) {
//			cout << "Enter 1 or 2 or 3: ";
//		}
//		while (cin.get() != '\n');
//		if (choice == '1') {
//			dma[i] = new baseDMA(label.c_str(), rating);
//		} else if (choice == '2') {
//			cout << "Enter color: ";
//			getline(cin, color);
//			dma[i] = new lacksDMA(color.c_str(), label.c_str(), rating);
//		} else {
//			cout << "Enter style: ";
//			getline(cin, style);
//			dma[i] = new hasDMA(style.c_str(), label.c_str(), rating);
//		}
//
//	}
//	cout << endl;
//	for (int i = 0; i < CLIMENTS; i++) {
//		dma[i]->View();
//		cout << endl;
//	}
//
//	for (int i = 0; i < CLIMENTS; i++) {
//		delete dma[i];
//	}
//
//	cout << "Done.\n";
//	return;
//
//}
//
//
//// practice 4
//void p13_4(void) {
//	Port port1("Gallo", "tawny", 20);
//	VintagePort vp("None", 20, "The Noble", 1997);
//
//	port1.Show();
//	vp.Show();
//
//	VintagePort vp2 = vp;
//	Port port2 = port1;
//
//	cout << vp2 << endl;
//	cout << port2 << endl;
//}
//
//
//int main(int argc, char ** argv) {
//	p13_4();
//
//	while (cin.get());
//}
//
//
//// Cd.h
//#pragma once
//#ifndef CD_H_
//#define CD_H_
//
//#include <iostream>
//
//class Cd {
//	private:
//		char performers[50];
//		char label[20];
//		int selections;
//		double playtime;
//
//	public:
//		Cd(char * s1, char * s2, int n, double x);
//		Cd(const Cd & d);
//		Cd();
//		virtual ~Cd();
//		virtual void Report() const;
//		virtual Cd & operator=(const Cd & d);
//};
//
//class Classic : public Cd {
//	private:
//		char mainfile[20];
//
//	public:
//		Classic(char * s1, char * s2, char * s3, int n, double x);
//		Classic(const Cd & d, char * s3);
//		Classic(const Classic & d);
//		Classic();
//		virtual ~Classic();
//		virtual void Report() const;
//		virtual Classic & operator=(const Classic & d);
//};
//
//#endif // !CD_H_
//
//// Cd.cpp
//#include "Cd.h"
//
//#include <cstring>
//
//Cd::Cd(char * s1, char * s2, int n, double x) {
//	std::strcpy(performers, s1);
//	std::strcpy(label, s2);
//	selections = n;
//	playtime = x;
//}
//
//Cd::Cd(const Cd & d) {
//	std::strcpy(performers, d.performers);
//	std::strcpy(label, d.label);
//	selections = d.selections;
//	playtime = d.playtime;
//}
//
//Cd::Cd() {
//	std::strcpy(performers, "null");
//	std::strcpy(label, "null");
//	selections = 0;
//	playtime = 0;
//}
//
//
//Cd::~Cd() {
//}
//
//void Cd::Report() const {
//	std::cout << "Performers: " << performers << std::endl;
//	std::cout << "Label: " << label << std::endl;
//	std::cout << "Selections: " << selections << std::endl;
//	std::cout << "Playtime: " << playtime << std::endl;
//}
//
//Cd & Cd::operator=(const Cd & d) {
//	std::strcpy(performers, d.performers);
//	std::strcpy(label, d.label);
//	selections = d.selections;
//	playtime = d.playtime;
//
//	return *this;
//}
//
//
//
//// Classic
//Classic::Classic(char * s1, char * s2, char * s3, int n, double x) :
//	Cd(s1, s2, n, x) {
//	std::strcpy(mainfile, s3);
//}
//
//Classic::Classic(const Cd & d, char * s3) : Cd(d) {
//	std::strcpy(mainfile, s3);
//}
//
//Classic::Classic(const Classic & d) : Cd(d) {
//	std::strcpy(mainfile, d.mainfile);
//}
//
//Classic::Classic() : Cd() {
//	std::strcpy(mainfile, "null");
//}
//
//Classic::~Classic() {
//
//}
//
//void Classic::Report() const {
//	Cd::Report();
//	std::cout << "Mainfile: " << mainfile << std::endl;
//}
//
//Classic & Classic::operator=(const Classic & d) {
//	Cd::operator=(d);
//	std::strcpy(mainfile, d.mainfile);
//	return *this;
//}
//
//
//// Cd1.h
//#pragma once
//#ifndef CD1_H_
//#define CD1_H_
//
//#include <iostream>
//
//class Cd1 {
//	private:
//		char * performers;
//		char * label;
//		int selections;
//		double playtime;
//
//	public:
//		Cd1(char * s1, char * s2, int n, double x);
//		Cd1(const Cd1 & d);
//		Cd1();
//		virtual ~Cd1();
//		virtual void Report() const;
//		virtual Cd1 & operator=(const Cd1 & d);
//};
//
//class Classic1 : public Cd1 {
//	private:
//		char * mainfile;
//
//	public:
//		Classic1(char * s1, char * s2, char * s3, int n, double x);
//		Classic1(const Cd1 & d, char * s3);
//		Classic1(const Classic1 & d);
//		Classic1();
//		virtual ~Classic1();
//		virtual void Report() const;
//		virtual Classic1 & operator=(const Classic1 & d);
//};
//
//#endif // !CD1_H_
//
//// Cd1.cpp
//#include "Cd1.h"
//
//#include <cstring>
//
//Cd1::Cd1(char * s1, char * s2, int n, double x) {
//	int performers_length = std::strlen(s1);
//	performers = new char[performers_length + 1];
//
//	int label_length = std::strlen(s2);
//	label = new char[label_length + 1];
//
//	std::strcpy(performers, s1);
//	std::strcpy(label, s2);
//	selections = n;
//	playtime = x;
//}
//
//Cd1::Cd1(const Cd1 & d) {
//	int performers_length = std::strlen(d.performers);
//	performers = new char[performers_length + 1];
//
//	int label_length = std::strlen(d.label);
//	label = new char[label_length + 1];
//
//	std::strcpy(performers, d.performers);
//	std::strcpy(label, d.label);
//	selections = d.selections;
//	playtime = d.playtime;
//}
//
//Cd1::Cd1() {
//	int null_length = std::strlen("null");
//	performers = new char[null_length + 1];
//	label = new char[null_length + 1];
//
//	std::strcpy(performers, "null");
//	std::strcpy(label, "null");
//	selections = 0;
//	playtime = 0;
//}
//
//
//Cd1::~Cd1() {
//	delete[] performers;
//	delete[] label;
//	performers = nullptr;
//	label = nullptr;
//}
//
//void Cd1::Report() const {
//	std::cout << "Performers: " << performers << std::endl;
//	std::cout << "Label: " << label << std::endl;
//	std::cout << "Selections: " << selections << std::endl;
//	std::cout << "Playtime: " << playtime << std::endl;
//}
//
//Cd1 & Cd1::operator=(const Cd1 & d) {
//	delete[] performers;
//	delete[] label;
//	performers = nullptr;
//	label = nullptr;
//
//	int performers_length = std::strlen(d.performers);
//	performers = new char[performers_length + 1];
//
//	int label_length = std::strlen(d.label);
//	label = new char[label_length + 1];
//
//	std::strcpy(performers, d.performers);
//	std::strcpy(label, d.label);
//	selections = d.selections;
//	playtime = d.playtime;
//
//	return *this;
//}
//
//
//
//// Classic1
//Classic1::Classic1(char * s1, char * s2, char * s3, int n, double x) :
//	Cd1(s1, s2, n, x) {
//	int mainfile_length = std::strlen(s3);
//	mainfile = new char[mainfile_length + 1];
//
//	std::strcpy(mainfile, s3);
//}
//
//Classic1::Classic1(const Cd1 & d, char * s3) : Cd1(d) {
//	int mainfile_length = std::strlen(s3);
//	mainfile = new char[mainfile_length + 1];
//
//	std::strcpy(mainfile, s3);
//}
//
//Classic1::Classic1(const Classic1 & d) : Cd1(d) {
//	int mainfile_length = std::strlen(d.mainfile);
//	mainfile = new char[mainfile_length + 1];
//
//	std::strcpy(mainfile, d.mainfile);
//}
//
//Classic1::Classic1() : Cd1() {
//	int null_length = std::strlen("null");
//	mainfile = new char[null_length + 1];
//
//	std::strcpy(mainfile, "null");
//}
//
//Classic1::~Classic1() {
//	delete[] mainfile;
//	mainfile = nullptr;
//}
//
//void Classic1::Report() const {
//	Cd1::Report();
//	std::cout << "Mainfile: " << mainfile << std::endl;
//}
//
//Classic1 & Classic1::operator=(const Classic1 & d) {
//	Cd1::operator=(d);
//	delete[] mainfile;
//	mainfile = nullptr;
//
//	int mainfile_length = std::strlen(d.mainfile);
//	mainfile = new char[mainfile_length + 1];
//
//	std::strcpy(mainfile, d.mainfile);
//	return *this;
//}
//
//
//// dma.h
//#pragma once
//#ifndef DMA_H_
//#define DMA_H_
//
//#include <iostream>
//
//class DMA {
//	public:
//		DMA();
//		~DMA();
//		virtual void View() = 0;
//};
//
//
//class baseDMA : public DMA {
//	private:
//		char * label;
//		int rating;
//
//	public:
//		baseDMA(const char * l = "null", int r = 0);
//		baseDMA(const baseDMA & rs);
//		virtual ~baseDMA();
//		baseDMA & operator=(const baseDMA & rs);
//		friend std::ostream & operator<<(std::ostream & os, const baseDMA & rs);
//
//		virtual void View();
//};
//
//
//class lacksDMA : public baseDMA {
//	private:
//		enum { COL_LEN = 40 };
//		char color[COL_LEN];
//
//	public:
//		lacksDMA(const char * c = "black", const char * l = "null", int r = 0);
//		lacksDMA(const char * c, const baseDMA & rs);
//		friend std::ostream & operator<<(std::ostream & os, const lacksDMA & rs);
//
//		virtual void View();
//};
//
//class hasDMA : public baseDMA {
//	private:
//		char * style;
//
//	public:
//		hasDMA(const char * s = "none", const char * l = "null", int r = 0);
//		hasDMA(const char * s, const baseDMA & rs);
//		hasDMA(const hasDMA & hs);
//		~hasDMA();
//		hasDMA & operator=(const hasDMA & rs);
//		friend std::ostream & operator<<(std::ostream & os, const hasDMA & rs);
//
//		virtual void View();
//};
//
//#endif // !DMA_H_
//
//// dma.cpp
//#include "dma.h"
//
//#include <cstring>
//
//
//DMA::DMA() {
//
//}
//
//
//DMA::~DMA() {
//}
//
//baseDMA::baseDMA(const char * l, int r) {
//	int label_length = std::strlen(l);
//	label = new char[label_length + 1];
//
//	std::strcpy(label, l);
//	rating = r;
//}
//
//baseDMA::baseDMA(const baseDMA & rs) {
//	int label_length = std::strlen(rs.label);
//	label = new char[label_length + 1];
//
//	std::strcpy(label, rs.label);
//	rating = rs.rating;
//}
//
//baseDMA::~baseDMA() {
//	delete[] label;
//	label = nullptr;
//}
//
//baseDMA & baseDMA::operator=(const baseDMA & rs) {
//	delete[] label;
//
//	int label_length = std::strlen(rs.label);
//	label = new char[label_length + 1];
//
//	std::strcpy(label, rs.label);
//	rating = rs.rating;
//
//	return *this;
//}
//
//std::ostream & operator<<(std::ostream & os, const baseDMA & rs) {
//	os << "Label: " << rs.label << std::endl;
//	os << "Rating: " << rs.rating;
//
//	return os;
//}
//
//void baseDMA::View() {
//	std::cout << "Label: " << label << std::endl;
//	std::cout << "Rating: " << rating << std::endl;
//}
//
//lacksDMA::lacksDMA(const char * c, const char * l, int t) :
//	baseDMA(l, t) {
//	std::strcpy(color, c);
//}
//
//lacksDMA::lacksDMA(const char * c, const baseDMA & rs) :
//	baseDMA(rs) {
//	std::strcpy(color, c);
//}
//
//std::ostream & operator<<(std::ostream & os, const lacksDMA & rs) {
//	operator<<(os, (baseDMA)rs) << std::endl;
//	os << "Color: " << rs.color;
//
//	return os;
//}
//
//void lacksDMA::View() {
//	baseDMA::View();
//	std::cout << "Color: " << color << std::endl;
//}
//
//hasDMA::hasDMA(const char * s, const char * l, int r) :
//	baseDMA(l, r) {
//	int style_length = std::strlen(s);
//	style = new char[style_length + 1];
//
//	std::strcpy(style, s);
//}
//
//hasDMA::hasDMA(const char * s, const baseDMA & rs) :
//	baseDMA(rs) {
//	int style_length = std::strlen(s);
//	style = new char[style_length + 1];
//
//	std::strcpy(style, s);
//}
//
//hasDMA::hasDMA(const hasDMA & hs) :
//	baseDMA(hs) {
//	int style_length = std::strlen(hs.style);
//	style = new char[style_length + 1];
//
//	std::strcpy(style, hs.style);
//}
//
//hasDMA::~hasDMA() {
//	delete[] style;
//	style = nullptr;
//}
//
//hasDMA & hasDMA::operator=(const hasDMA & rs) {
//	baseDMA::operator=(rs);
//	delete[] style;
//
//	int style_length = std::strlen(rs.style);
//	style = new char[style_length + 1];
//
//	std::strcpy(style, rs.style);
//
//	return *this;
//}
//
//std::ostream & operator<<(std::ostream & os, const hasDMA & rs) {
//	operator<<(os, baseDMA(rs)) << std::endl;
//	os << "Style: " << rs.style;
//
//	return os;
//}
//
//void hasDMA::View() {
//	baseDMA::View();
//	std::cout << "Style: " << style << std::endl;
//}
//
//
//// port.h
//#pragma once
//#include <iostream>
//#include <cstring>
//using namespace std;
//
//class Port {
//	private:
//		char * brand;
//		char style[20];
//		int bottles;
//
//	public:
//		Port(const char * br = "none", const char * st = "none", int b = 0);
//		Port(const Port & p);
//		virtual ~Port() {
//			delete[] brand;
//		}
//		Port & operator=(const Port & p);
//		Port & operator+=(int b);
//		Port & operator-=(int b);
//		int BottleCount() const {
//			return bottles;
//		}
//		virtual void Show() const;
//		friend ostream & operator<<(ostream & os, const Port & p);
//};
//
//class VintagePort : public Port {
//	private:
//		char * nickname;
//		int year;
//
//	public:
//		VintagePort();
//		VintagePort(const char * br, int b, const char * nn, int y);
//		VintagePort(const VintagePort & vp);
//		~VintagePort() {
//			delete[] nickname;
//		}
//		VintagePort & operator=(const VintagePort & vp);
//		void Show() const;
//		friend ostream & operator<<(ostream & os, const VintagePort & vp);
//};
//
//// port.cpp
//#include "Port.h"
//
//
//
//Port::Port(const char * br, const char * st, int b) {
//	int brand_length = std::strlen(br);
//	brand = new char[brand_length + 1];
//	std::strcpy(brand, br);
//	std::strcpy(style, st);
//	bottles = b;
//}
//
//Port::Port(const Port & p) {
//	int brand_length = std::strlen(p.brand);
//	brand = new char[brand_length + 1];
//	std::strcpy(brand, p.brand);
//	std::strcpy(style, p.style);
//	bottles = p.bottles;
//}
//
//Port & Port::operator=(const Port & p) {
//	delete[] brand;
//
//	int brand_length = std::strlen(p.brand);
//	brand = new char[brand_length + 1];
//	std::strcpy(brand, p.brand);
//	std::strcpy(style, p.style);
//	bottles = p.bottles;
//
//	return *this;
//}
//
//Port & Port::operator+=(int b) {
//	bottles += b;
//
//	return *this;
//}
//
//Port & Port::operator-=(int b) {
//	bottles -= b;
//	return *this;
//}
//
//void Port::Show() const {
//	std::cout << "Brand: " << brand << std::endl;
//	std::cout << "Style: " << style << std::endl;
//	std::cout << "Bottles: " << bottles << std::endl;
//}
//
//ostream & operator<<(ostream & os, const Port & s) {
//	os << s.brand << ", " << s.style << ", " << s.bottles;
//
//	return os;
//}
//
//VintagePort::VintagePort() : Port() {
//	int null_length = std::strlen("null");
//	nickname = new char[null_length + 1];
//	std::strcpy(nickname, "null");
//	year = 0;
//}
//
//VintagePort::VintagePort(const char * br, int b, const char * nn, int y) :
//	Port(br, "Vintage", b) {
//	int nn_length = std::strlen(nn);
//	nickname = new char[nn_length + 1];
//	std::strcpy(nickname, nn);
//	year = y;
//}
//
//VintagePort::VintagePort(const VintagePort & vp) : Port(vp) {
//	int nn_length = std::strlen(vp.nickname);
//	nickname = new char[nn_length + 1];
//	std::strcpy(nickname, vp.nickname);
//	year = vp.year;
//}
//
//VintagePort & VintagePort::operator=(const VintagePort & vp) {
//	delete nickname;
//	Port::operator=(vp);
//
//	int nn_length = std::strlen(vp.nickname);
//	nickname = new char[nn_length + 1];
//	std::strcpy(nickname, vp.nickname);
//	year = vp.year;
//
//	return *this;
//}
//
//void VintagePort::Show() const {
//	Port::Show();
//	cout << "Nickname: " << nickname << endl;
//	cout << "Year: " << year << endl;
//}
//
//ostream & operator<<(ostream & os, const VintagePort & vp) {
//	os << Port(vp);
//	os << ", " << vp.nickname << ", " << vp.year;
//
//	return os;
//}



/******************************************************************ch14  c++中的代码重用****************************************************************/

//// studentc.h -- defining a Student class using containment									14-1
//
//#ifndef STUDENTC_H_
//#define STUDENTC_H_
//
//#include <iostream>
//#include <string>
//#include <valarray>
//class Student {
//	private:
//		typedef std::valarray<double> ArrayDb;
//		std::string name;       // contained object
//		ArrayDb scores;         // contained object
//		// private method for scores output
//		std::ostream & arr_out(std::ostream & os) const;
//	public:
//		Student() : name("Null Student"), scores() {}
//		explicit Student(const std::string & s)
//			: name(s), scores() {}
//		explicit Student(int n) : name("Nully"), scores(n) {}
//		Student(const std::string & s, int n)
//			: name(s), scores(n) {}
//		Student(const std::string & s, const ArrayDb & a)
//			: name(s), scores(a) {}
//		Student(const char * str, const double * pd, int n)
//			: name(str), scores(pd, n) {}
//		~Student() {}
//		double Average() const;
//		const std::string & Name() const;
//		double & operator[](int i);
//		double operator[](int i) const;
//// friends
//		// input
//		friend std::istream & operator>>(std::istream & is,
//		                                 Student & stu);  // 1 word
//		friend std::istream & getline(std::istream & is,
//		                              Student & stu);     // 1 line
//		// output
//		friend std::ostream & operator<<(std::ostream & os,
//		                                 const Student & stu);
//};
//
//#endif


//// studentc.cpp -- Student class using containment										14-2
//
//#include "studentc.h"
//using std::ostream;
//using std::endl;
//using std::istream;
//using std::string;
//
////public methods
//double Student::Average() const {
//	if (scores.size() > 0)
//		return scores.sum()/scores.size();
//	else
//		return 0;
//}
//
//const string & Student::Name() const {
//	return name;
//}
//
//double & Student::operator[](int i) {
//	return scores[i];         // use valarray<double>::operator[]()
//}
//
//double Student::operator[](int i) const {
//	return scores[i];
//}
//
//// private method
//ostream & Student::arr_out(ostream & os) const {
//	int i;
//	int lim = scores.size();
//	if (lim > 0) {
//		for (i = 0; i < lim; i++) {
//			os << scores[i] << " ";
//			if (i % 5 == 4)
//				os << endl;
//		}
//		if (i % 5 != 0)
//			os << endl;
//	} else
//		os << " empty array ";
//	return os;
//}
//
//// friends
//
//// use string version of operator>>()
//istream & operator>>(istream & is, Student & stu) {
//	is >> stu.name;
//	return is;
//}
//
//// use string friend getline(ostream &, const string &)
//istream & getline(istream & is, Student & stu) {
//	getline(is, stu.name);
//	return is;
//}
//
//// use string version of operator<<()
//ostream & operator<<(ostream & os, const Student & stu) {
//	os << "Scores for " << stu.name << ":\n";
//	stu.arr_out(os);  // use private method for scores
//	return os;
//}


//// use_stuc.cpp -- using a composite class											14-3
//
//// compile with studentc.cpp
//#include <iostream>
//#include "studentc.h"
//using std::cin;
//using std::cout;
//using std::endl;
//
//void set(Student & sa, int n);
//
//const int pupils = 3;
//const int quizzes = 5;
//
//int main() {
//	Student ada[pupils] =
//	{Student(quizzes), Student(quizzes), Student(quizzes)};
//
//	int i;
//	for (i = 0; i < pupils; ++i)
//		set(ada[i], quizzes);
//	cout << "\nStudent List:\n";
//	for (i = 0; i < pupils; ++i)
//		cout << ada[i].Name() << endl;
//	cout << "\nResults:";
//	for (i = 0; i < pupils; ++i) {
//		cout << endl << ada[i];
//		cout << "average: " << ada[i].Average() << endl;
//	}
//	cout << "Done.\n";
//	// cin.get();
//
//	return 0;
//}
//
//void set(Student & sa, int n) {
//	cout << "Please enter the student's name: ";
//	getline(cin, sa);
//	cout << "Please enter " << n << " quiz scores:\n";
//	for (int i = 0; i < n; i++)
//		cin >> sa[i];
//	while (cin.get() != '\n')
//		continue;
//}


//// studenti.h -- defining a Student class using private inheritance							14-4
//
//#ifndef STUDENTC_H_
//#define STUDENTC_H_
//
//#include <iostream>
//#include <valarray>
//#include <string>
//class Student : private std::string, private std::valarray<double> {
//	private:
//		typedef std::valarray<double> ArrayDb;
//		// private method for scores output
//		std::ostream & arr_out(std::ostream & os) const;
//	public:
//		Student() : std::string("Null Student"), ArrayDb() {}
//		explicit Student(const std::string & s)
//			: std::string(s), ArrayDb() {}
//		explicit Student(int n) : std::string("Nully"), ArrayDb(n) {}
//		Student(const std::string & s, int n)
//			: std::string(s), ArrayDb(n) {}
//		Student(const std::string & s, const ArrayDb & a)
//			: std::string(s), ArrayDb(a) {}
//		Student(const char * str, const double * pd, int n)
//			: std::string(str), ArrayDb(pd, n) {}
//		~Student() {}
//		double Average() const;
//		double & operator[](int i);
//		double operator[](int i) const;
//		const std::string & Name() const;
//// friends
//		// input
//		friend std::istream & operator>>(std::istream & is,
//		                                 Student & stu);  // 1 word
//		friend std::istream & getline(std::istream & is,
//		                              Student & stu);     // 1 line
//		// output
//		friend std::ostream & operator<<(std::ostream & os,
//		                                 const Student & stu);
//};
//
//#endif


//// studenti.cpp -- Student class using private inheritance										14-5
//
//#include "studenti.h"
//using std::ostream;
//using std::endl;
//using std::istream;
//using std::string;
//
//// public methods
//double Student::Average() const {
//	if (ArrayDb::size() > 0)
//		return ArrayDb::sum()/ArrayDb::size();
//	else
//		return 0;
//}
//
//const string & Student::Name() const {
//	return (const string &) *this;
//}
//
//double & Student::operator[](int i) {
//	return ArrayDb::operator[](i);         // use ArrayDb::operator[]()
//}
//
//double Student::operator[](int i) const {
//	return ArrayDb::operator[](i);
//}
//
//// private method
//ostream & Student::arr_out(ostream & os) const {
//	int i;
//	int lim = ArrayDb::size();
//	if (lim > 0) {
//		for (i = 0; i < lim; i++) {
//			os << ArrayDb::operator[](i) << " ";
//			if (i % 5 == 4)
//				os << endl;
//		}
//		if (i % 5 != 0)
//			os << endl;
//	} else
//		os << " empty array ";
//	return os;
//}
//
//// friends
//// use String version of operator>>()
//istream & operator>>(istream & is, Student & stu) {
//	is >> (string &)stu;
//	return is;
//}
//
//// use string friend getline(ostream &, const string &)
//istream & getline(istream & is, Student & stu) {
//	getline(is, (string &)stu);
//	return is;
//}
//
//// use string version of operator<<()
//ostream & operator<<(ostream & os, const Student & stu) {
//	os << "Scores for " << (const string &) stu  << ":\n";
//	stu.arr_out(os);  // use private method for scores
//	return os;
//}


//// use_stui.cpp -- using a class with private inheritance									14-6
//
//// compile with studenti.cpp
//#include <iostream>
//#include "studenti.h"
//using std::cin;
//using std::cout;
//using std::endl;
//
//void set(Student & sa, int n);
//
//const int pupils = 3;
//const int quizzes = 5;
//
//int main() {
//	Student ada[pupils] =
//	{Student(quizzes), Student(quizzes), Student(quizzes)};
//
//	int i;
//	for (i = 0; i < pupils; i++)
//		set(ada[i], quizzes);
//	cout << "\nStudent List:\n";
//	for (i = 0; i < pupils; ++i)
//		cout << ada[i].Name() << endl;
//	cout << "\nResults:";
//	for (i = 0; i < pupils; i++) {
//		cout << endl << ada[i];
//		cout << "average: " << ada[i].Average() << endl;
//	}
//	cout << "Done.\n";
//	// cin.get();
//	return 0;
//}
//
//void set(Student & sa, int n) {
//	cout << "Please enter the student's name: ";
//	getline(cin, sa);
//	cout << "Please enter " << n << " quiz scores:\n";
//	for (int i = 0; i < n; i++)
//		cin >> sa[i];
//	while (cin.get() != '\n')
//		continue;
//}


//// worker0.h  -- working classes													14-7
//
//#ifndef WORKER0_H_
//#define WORKER0_H_
//
//#include <string>
//
//class Worker { // an abstract base class
//	private:
//		std::string fullname;
//		long id;
//	public:
//		Worker() : fullname("no one"), id(0L) {}
//		Worker(const std::string & s, long n)
//			: fullname(s), id(n) {}
//		virtual ~Worker() = 0;   // pure virtual destructor
//		virtual void Set();
//		virtual void Show() const;
//};
//
//class Waiter : public Worker {
//	private:
//		int panache;
//	public:
//		Waiter() : Worker(), panache(0) {}
//		Waiter(const std::string & s, long n, int p = 0)
//			: Worker(s, n), panache(p) {}
//		Waiter(const Worker & wk, int p = 0)
//			: Worker(wk), panache(p) {}
//		void Set();
//		void Show() const;
//};
//
//class Singer : public Worker {
//	protected:
//		enum {other, alto, contralto, soprano,
//		      bass, baritone, tenor
//		     };
//		enum {Vtypes = 7};
//	private:
//		static char *pv[Vtypes];    // string equivs of voice types
//		int voice;
//	public:
//		Singer() : Worker(), voice(other) {}
//		Singer(const std::string & s, long n, int v = other)
//			: Worker(s, n), voice(v) {}
//		Singer(const Worker & wk, int v = other)
//			: Worker(wk), voice(v) {}
//		void Set();
//		void Show() const;
//};
//
//#endif


//// worker0.cpp -- working class methods												14-8
//
//#include "worker0.h"
//#include <iostream>
//using std::cout;
//using std::cin;
//using std::endl;
//// Worker methods
//
//// must implement virtual destructor, even if pure
//Worker::~Worker() {}
//
//void Worker::Set() {
//	cout << "Enter worker's name: ";
//	getline(cin, fullname);
//	cout << "Enter worker's ID: ";
//	cin >> id;
//	while (cin.get() != '\n')
//		continue;
//}
//
//void Worker::Show() const {
//	cout << "Name: " << fullname << "\n";
//	cout << "Employee ID: " << id << "\n";
//}
//
//// Waiter methods
//void Waiter::Set() {
//	Worker::Set();
//	cout << "Enter waiter's panache rating: ";
//	cin >> panache;
//	while (cin.get() != '\n')
//		continue;
//}
//
//void Waiter::Show() const {
//	cout << "Category: waiter\n";
//	Worker::Show();
//	cout << "Panache rating: " << panache << "\n";
//}
//
//// Singer methods
//
//char * Singer::pv[] = {"other", "alto", "contralto",
//                       "soprano", "bass", "baritone", "tenor"
//                      };
//
//void Singer::Set() {
//	Worker::Set();
//	cout << "Enter number for singer's vocal range:\n";
//	int i;
//	for (i = 0; i < Vtypes; i++) {
//		cout << i << ": " << pv[i] << "   ";
//		if ( i % 4 == 3)
//			cout << endl;
//	}
//	if (i % 4 != 0)
//		cout << endl;
//	while (cin >>  voice && (voice < 0 || voice >= Vtypes) )
//		cout << "Please enter a value >= 0 and < " << Vtypes << endl;
//	while (cin.get() != '\n')
//		continue;
//}
//
//void Singer::Show() const {
//	cout << "Category: singer\n";
//	Worker::Show();
//	cout << "Vocal range: " << pv[voice] << endl;
//}


//// worktest.cpp -- test worker class hierarchy											14-9
//
//#include <iostream>
//#include "worker0.h"
//const int LIM = 4;
//int main() {
//	Waiter bob("Bob Apple", 314L, 5);
//	Singer bev("Beverly Hills", 522L, 3);
//	Waiter w_temp;
//	Singer s_temp;
//
//	Worker * pw[LIM] = {&bob, &bev, &w_temp, &s_temp};
//
//	int i;
//	for (i = 2; i < LIM; i++)
//		pw[i]->Set();
//	for (i = 0; i < LIM; i++) {
//		pw[i]->Show();
//		std::cout << std::endl;
//	}
//	// std::cin.get();
//	return 0;
//}


//// workermi.h  -- working classes with MI													14-10
//
//#ifndef WORKERMI_H_
//#define WORKERMI_H_
//
//#include <string>
//
//class Worker { // an abstract base class
//	private:
//		std::string fullname;
//		long id;
//	protected:
//		virtual void Data() const;
//		virtual void Get();
//	public:
//		Worker() : fullname("no one"), id(0L) {}
//		Worker(const std::string & s, long n)
//			: fullname(s), id(n) {}
//		virtual ~Worker() = 0; // pure virtual function
//		virtual void Set() = 0;
//		virtual void Show() const = 0;
//};
//
//class Waiter : virtual public Worker {
//	private:
//		int panache;
//	protected:
//		void Data() const;
//		void Get();
//	public:
//		Waiter() : Worker(), panache(0) {}
//		Waiter(const std::string & s, long n, int p = 0)
//			: Worker(s, n), panache(p) {}
//		Waiter(const Worker & wk, int p = 0)
//			: Worker(wk), panache(p) {}
//		void Set();
//		void Show() const;
//};
//
//class Singer : virtual public Worker {
//	protected:
//		enum {other, alto, contralto, soprano,
//		      bass, baritone, tenor
//		     };
//		enum {Vtypes = 7};
//		void Data() const;
//		void Get();
//	private:
//		static char *pv[Vtypes];    // string equivs of voice types
//		int voice;
//	public:
//		Singer() : Worker(), voice(other) {}
//		Singer(const std::string & s, long n, int v = other)
//			: Worker(s, n), voice(v) {}
//		Singer(const Worker & wk, int v = other)
//			: Worker(wk), voice(v) {}
//		void Set();
//		void Show() const;
//};
//
//// multiple inheritance
//class SingingWaiter : public Singer, public Waiter {
//	protected:
//		void Data() const;
//		void Get();
//	public:
//		SingingWaiter()  {}
//		SingingWaiter(const std::string & s, long n, int p = 0,
//		              int v = other)
//			: Worker(s,n), Waiter(s, n, p), Singer(s, n, v) {}
//		SingingWaiter(const Worker & wk, int p = 0, int v = other)
//			: Worker(wk), Waiter(wk,p), Singer(wk,v) {}
//		SingingWaiter(const Waiter & wt, int v = other)
//			: Worker(wt),Waiter(wt), Singer(wt,v) {}
//		SingingWaiter(const Singer & wt, int p = 0)
//			: Worker(wt),Waiter(wt,p), Singer(wt) {}
//		void Set();
//		void Show() const;
//};
//
//#endif


//// workermi.cpp -- working class methods with MI										14-11
//
//#include "workermi.h"
//#include <iostream>
//using std::cout;
//using std::cin;
//using std::endl;
//// Worker methods
//Worker::~Worker() { }
//
//// protected methods
//void Worker::Data() const {
//	cout << "Name: " << fullname << endl;
//	cout << "Employee ID: " << id << endl;
//}
//
//void Worker::Get() {
//	getline(cin, fullname);
//	cout << "Enter worker's ID: ";
//	cin >> id;
//	while (cin.get() != '\n')
//		continue;
//}
//
//// Waiter methods
//void Waiter::Set() {
//	cout << "Enter waiter's name: ";
//	Worker::Get();
//	Get();
//}
//
//void Waiter::Show() const {
//	cout << "Category: waiter\n";
//	Worker::Data();
//	Data();
//}
//
//// protected methods
//void Waiter::Data() const {
//	cout << "Panache rating: " << panache << endl;
//}
//
//void Waiter::Get() {
//	cout << "Enter waiter's panache rating: ";
//	cin >> panache;
//	while (cin.get() != '\n')
//		continue;
//}
//
//// Singer methods
//
//char * Singer::pv[Singer::Vtypes] = {"other", "alto", "contralto",
//                                     "soprano", "bass", "baritone", "tenor"
//                                    };
//
//void Singer::Set() {
//	cout << "Enter singer's name: ";
//	Worker::Get();
//	Get();
//}
//
//void Singer::Show() const {
//	cout << "Category: singer\n";
//	Worker::Data();
//	Data();
//}
//
//// protected methods
//void Singer::Data() const {
//	cout << "Vocal range: " << pv[voice] << endl;
//}
//
//void Singer::Get() {
//	cout << "Enter number for singer's vocal range:\n";
//	int i;
//	for (i = 0; i < Vtypes; i++) {
//		cout << i << ": " << pv[i] << "   ";
//		if ( i % 4 == 3)
//			cout << endl;
//	}
//	if (i % 4 != 0)
//		cout << '\n';
//	while (cin >>  voice && (voice < 0 || voice >= Vtypes) )
//		cout << "Please enter a value >= 0 and < " << Vtypes << endl;
//	while (cin.get() != '\n')
//		continue;
//}
//
//// SingingWaiter methods
//void SingingWaiter::Data() const {
//	Singer::Data();
//	Waiter::Data();
//}
//
//void SingingWaiter::Get() {
//	Waiter::Get();
//	Singer::Get();
//}
//
//void SingingWaiter::Set() {
//	cout << "Enter singing waiter's name: ";
//	Worker::Get();
//	Get();
//}
//
//void SingingWaiter::Show() const {
//	cout << "Category: singing waiter\n";
//	Worker::Data();
//	Data();
//}


//// workmi.cpp -- multiple inheritance												14-12
//
//// compile with workermi.cpp
//#include <iostream>
//#include <cstring>
//#include "workermi.h"
//const int SIZE = 5;
//
//int main()
//{
//   using std::cin;
//   using std::cout;
//   using std::endl;
//   using std::strchr;
//
//   Worker * lolas[SIZE];
//
//    int ct;
//    for (ct = 0; ct < SIZE; ct++)
//    {
//        char choice;
//        cout << "Enter the employee category:\n"
//            << "w: waiter  s: singer  "
//            << "t: singing waiter  q: quit\n";
//        cin >> choice;
//        while (strchr("wstq", choice) == NULL)
//        {
//            cout << "Please enter a w, s, t, or q: ";
//            cin >> choice;
//        }
//        if (choice == 'q')
//            break;
//        switch(choice)
//        {
//            case 'w':   lolas[ct] = new Waiter;
//                        break;
//            case 's':   lolas[ct] = new Singer;
//                        break;
//            case 't':   lolas[ct] = new SingingWaiter;
//                        break;
//        }
//        cin.get();
//        lolas[ct]->Set();
//    }
//
//    cout << "\nHere is your staff:\n";
//    int i;
//    for (i = 0; i < ct; i++)
//    {
//        cout << endl;
//        lolas[i]->Show();
//    }
//    for (i = 0; i < ct; i++)
//        delete lolas[i];
//    cout << "Bye.\n";
//    // cin.get();
//    // cin.get();
//    return 0;
//}


//// stacktp.h -- a stack template												14-13
//
//#ifndef STACKTP_H_
//#define STACKTP_H_
//template <class Type>
//class Stack {
//	private:
//		enum {MAX = 10};    // constant specific to class
//		Type items[MAX];    // holds stack items
//		int top;            // index for top stack item
//	public:
//		Stack();
//		bool isempty();
//		bool isfull();
//		bool push(const Type & item); // add item to stack
//		bool pop(Type & item);        // pop top into item
//};
//
//template <class Type>
//Stack<Type>::Stack() {
//	top = 0;
//}
//
//template <class Type>
//bool Stack<Type>::isempty() {
//	return top == 0;
//}
//
//template <class Type>
//bool Stack<Type>::isfull() {
//	return top == MAX;
//}
//
//template <class Type>
//bool Stack<Type>::push(const Type & item) {
//	if (top < MAX) {
//		items[top++] = item;
//		return true;
//	} else
//		return false;
//}
//
//template <class Type>
//bool Stack<Type>::pop(Type & item) {
//	if (top > 0) {
//		item = items[--top];
//		return true;
//	} else
//		return false;
//}
//
//#endif


//// stacktem.cpp -- testing the template stack class										14-14
//
//#include <iostream>
//#include <string>
//#include <cctype>
//#include "stacktp.h"
//using std::cin;
//using std::cout;
//
//int main() {
//	Stack<std::string> st;   // create an empty stack
//	char ch;
//	std::string po;
//	cout << "Please enter A to add a purchase order,\n"
//	     << "P to process a PO, or Q to quit.\n";
//	while (cin >> ch && std::toupper(ch) != 'Q') {
//		while (cin.get() != '\n')
//			continue;
//		if (!std::isalpha(ch)) {
//			cout << '\a';
//			continue;
//		}
//		switch(ch) {
//			case 'A':
//			case 'a':
//				cout << "Enter a PO number to add: ";
//				cin >> po;
//				if (st.isfull())
//					cout << "stack already full\n";
//				else
//					st.push(po);
//				break;
//			case 'P':
//			case 'p':
//				if (st.isempty())
//					cout << "stack already empty\n";
//				else {
//					st.pop(po);
//					cout << "PO #" << po << " popped\n";
//					break;
//				}
//		}
//		cout << "Please enter A to add a purchase order,\n"
//		     << "P to process a PO, or Q to quit.\n";
//	}
//	cout << "Bye\n";
//	// cin.get();
//	// cin.get();
//	return 0;
//}


//// stcktp1.h -- modified Stack template													14-15
//
//#ifndef STCKTP1_H_
//#define STCKTP1_H_
//
//template <class Type>
//class Stack {
//	private:
//		enum {SIZE = 10};    // default size
//		int stacksize;
//		Type * items;       // holds stack items
//		int top;            // index for top stack item
//	public:
//		explicit Stack(int ss = SIZE);
//		Stack(const Stack & st);
//		~Stack() {
//			delete [] items;
//		}
//		bool isempty() {
//			return top == 0;
//		}
//		bool isfull() {
//			return top == stacksize;
//		}
//		bool push(const Type & item);   // add item to stack
//		bool pop(Type & item);          // pop top into item
//		Stack & operator=(const Stack & st);
//};
//
//template <class Type>
//Stack<Type>::Stack(int ss) : stacksize(ss), top(0) {
//	items = new Type [stacksize];
//}
//
//template <class Type>
//Stack<Type>::Stack(const Stack & st) {
//	stacksize = st.stacksize;
//	top = st.top;
//	items = new Type [stacksize];
//	for (int i = 0; i < top; i++)
//		items[i] = st.items[i];
//}
//
//template <class Type>
//bool Stack<Type>::push(const Type & item) {
//	if (top < stacksize) {
//		items[top++] = item;
//		return true;
//	} else
//		return false;
//}
//
//template <class Type>
//bool Stack<Type>::pop(Type & item) {
//	if (top > 0) {
//		item = items[--top];
//		return true;
//	} else
//		return false;
//}
//
//template <class Type>
//Stack<Type> & Stack<Type>::operator=(const Stack<Type> & st) {
//	if (this == &st)
//		return *this;
//	delete [] items;
//	stacksize = st.stacksize;
//	top = st.top;
//	items = new Type [stacksize];
//	for (int i = 0; i < top; i++)
//		items[i] = st.items[i];
//	return *this;
//}
//
//#endif


//// stkoptr1.cpp -- testing stack of pointers											14-16
//
//#include <iostream>
//#include <cstdlib>     // for rand(), srand()
//#include <ctime>       // for time()
//#include "stcktp1.h"
//const int Num = 10;
//int main() {
//	std::srand(std::time(0)); // randomize rand()
//	std::cout << "Please enter stack size: ";
//	int stacksize;
//	std::cin >> stacksize;
//// create an empty stack with stacksize slots
//	Stack<const char *> st(stacksize);
//
//// in basket
//	const char * in[Num] = {
//		" 1: Hank Gilgamesh", " 2: Kiki Ishtar",
//		" 3: Betty Rocker", " 4: Ian Flagranti",
//		" 5: Wolfgang Kibble", " 6: Portia Koop",
//		" 7: Joy Almondo", " 8: Xaverie Paprika",
//		" 9: Juan Moore", "10: Misha Mache"
//	};
//// out basket
//	const char * out[Num];
//
//	int processed = 0;
//	int nextin = 0;
//	while (processed < Num) {
//		if (st.isempty())
//			st.push(in[nextin++]);
//		else if (st.isfull())
//			st.pop(out[processed++]);
//		else if (std::rand() % 2  && nextin < Num)   // 50-50 chance
//			st.push(in[nextin++]);
//		else
//			st.pop(out[processed++]);
//	}
//	for (int i = 0; i < Num; i++)
//		std::cout << out[i] << std::endl;
//
//	std::cout << "Bye\n";
//	// std::cin.get();
//	// std::cin.get();
//	return 0;
//}


////arraytp.h  -- Array Template															14-17
//
//#ifndef ARRAYTP_H_
//#define ARRAYTP_H_
//
//#include <iostream>
//#include <cstdlib>
//
//template <class T, int n>
//class ArrayTP {
//	private:
//		T ar[n];
//	public:
//		ArrayTP() {};
//		explicit ArrayTP(const T & v);
//		virtual T & operator[](int i);
//		virtual T operator[](int i) const;
//};
//
//template <class T, int n>
//ArrayTP<T,n>::ArrayTP(const T & v) {
//	for (int i = 0; i < n; i++)
//		ar[i] = v;
//}
//
//template <class T, int n>
//T & ArrayTP<T,n>::operator[](int i) {
//	if (i < 0 || i >= n) {
//		std::cerr << "Error in array limits: " << i
//		          << " is out of range\n";
//		std::exit(EXIT_FAILURE);
//	}
//	return ar[i];
//}
//
//template <class T, int n>
//T ArrayTP<T,n>::operator[](int i) const {
//	if (i < 0 || i >= n) {
//		std::cerr << "Error in array limits: " << i
//		          << " is out of range\n";
//		std::exit(EXIT_FAILURE);
//	}
//	return ar[i];
//}
//
//#endif


//// twod.cpp -- making a 2-d array													14-18
//
//#include <iostream>
//#include "arraytp.h"
//int main(void) {
//	using std::cout;
//	using std::endl;
//	ArrayTP<int, 10> sums;
//	ArrayTP<double, 10> aves;
//	ArrayTP< ArrayTP<int,5>, 10> twodee;
//
//
//	int i, j;
//
//	for (i = 0; i < 10; i++) {
//		sums[i] = 0;
//		for (j = 0; j < 5; j++) {
//			twodee[i][j] = (i + 1) * (j + 1);
//			sums[i] += twodee[i][j];
//		}
//		aves[i] = (double) sums[i] / 10;
//	}
//	for (i = 0; i < 10; i++) {
//		for (j = 0; j < 5; j++) {
//			cout.width(2);
//			cout << twodee[i][j] << ' ';
//		}
//		cout << ": sum = ";
//		cout.width(3);
//		cout  << sums[i] << ", average = " << aves[i] << endl;
//	}
//
//	cout << "Done.\n";
//	// std::cin.get();
//	return 0;
//}


//// pairs.cpp -- defining and using a Pair template											14-19
//
//#include <iostream>
//#include <string>
//template <class T1, class T2>
//class Pair {
//	private:
//		T1 a;
//		T2 b;
//	public:
//		T1 & first();
//		T2 & second();
//		T1 first() const {
//			return a;
//		}
//		T2 second() const {
//			return b;
//		}
//		Pair(const T1 & aval, const T2 & bval) : a(aval), b(bval) { }
//		Pair() {}
//};
//
//template<class T1, class T2>
//T1 & Pair<T1,T2>::first() {
//	return a;
//}
//template<class T1, class T2>
//T2 & Pair<T1,T2>::second() {
//	return b;
//}
//
//int main() {
//	using std::cout;
//	using std::endl;
//	using std::string;
//	Pair<string, int> ratings[4] = {
//		Pair<string, int>("The Purpled Duck", 5),
//		Pair<string, int>("Jaquie's Frisco Al Fresco", 4),
//		Pair<string, int>("Cafe Souffle", 5),
//		Pair<string, int>("Bertie's Eats", 3)
//	};
//
//	int joints = sizeof(ratings) / sizeof (Pair<string, int>);
//	cout << "Rating:\t Eatery\n";
//	for (int i = 0; i < joints; i++)
//		cout << ratings[i].second() << ":\t "
//		     << ratings[i].first() << endl;
//	cout << "Oops! Revised rating:\n";
//	ratings[3].first() = "Bertie's Fab Eats";
//	ratings[3].second() = 6;
//	cout << ratings[3].second() << ":\t "
//	     << ratings[3].first() << endl;
//	// std::cin.get();
//	return 0;
//}


//// tempmemb.cpp -- template members															14-20
//
//#include <iostream>
//using std::cout;
//using std::endl;
//
//template <typename T>
//class beta {
//	private:
//		template <typename V>  // nested template class member
//		class hold {
//			private:
//				V val;
//			public:
//				hold(V v  = 0) : val(v) {}
//				void show() const {
//					cout << val << endl;
//				}
//				V Value() const {
//					return val;
//				}
//		};
//		hold<T> q;             // template object
//		hold<int> n;           // template object
//	public:
//		beta( T t, int i) : q(t), n(i) {}
//		template<typename U>   // template method
//		U blab(U u, T t) {
//			return (n.Value() + q.Value()) * u / t;
//		}
//		void Show() const {
//			q.show();
//			n.show();
//		}
//};
//
//int main() {
//	beta<double> guy(3.5, 3);
//	cout << "T was set to double\n";
//	guy.Show();
//	cout << "V was set to T, which is double, then V was set to int\n";
//	cout << guy.blab(10, 2.3) << endl;
//	cout << "U was set to int\n";
//	cout << guy.blab(10.0, 2.3) << endl;
//	cout << "U was set to double\n";
//	cout << "Done\n";
//	// std::cin.get();
//	return 0;
//}


//// tempparm.cpp � templates as parameters													14-21
//
//#include <iostream>
//#include "stacktp.h"
//
//template <template <typename T> class Thing>
//class Crab {
//	private:
//		Thing<int> s1;
//		Thing<double> s2;
//	public:
//		Crab() {};
//		// assumes the thing class has push() and pop() members
//		bool push(int a, double x) {
//			return s1.push(a) && s2.push(x);
//		}
//		bool pop(int & a, double & x) {
//			return s1.pop(a) && s2.pop(x);
//		}
//};
//
//int main() {
//	using std::cout;
//	using std::cin;
//	using std::endl;
//	Crab<Stack> nebula;
//// Stack must match template <typename T> class thing
//	int ni;
//	double nb;
//	cout << "Enter int double pairs, such as 4 3.5 (0 0 to end):\n";
//	while (cin>> ni >> nb && ni > 0 && nb > 0) {
//		if (!nebula.push(ni, nb))
//			break;
//	}
//
//	while (nebula.pop(ni, nb))
//		cout << ni << ", " << nb << endl;
//	cout << "Done.\n";
//	// cin.get();
//	// cin.get();
//	return 0;
//}


//// frnd2tmp.cpp -- template class with non-template friends												14-22
//
//#include <iostream>
//using std::cout;
//using std::endl;
//
//template <typename T>
//class HasFriend {
//	private:
//		T item;
//		static int ct;
//	public:
//		HasFriend(const T & i) : item(i) {
//			ct++;
//		}
//		~HasFriend()  {
//			ct--;
//		}
//		friend void counts();
//		friend void reports(HasFriend<T> &); // template parameter
//};
//
//// each specialization has its own static data member
//template <typename T>
//int HasFriend<T>::ct = 0;
//
//// non-template friend to all HasFriend<T> classes
//void counts() {
//	cout << "int count: " << HasFriend<int>::ct << "; ";
//	cout << "double count: " << HasFriend<double>::ct << endl;
//}
//
//// non-template friend to the HasFriend<int> class
//void reports(HasFriend<int> & hf) {
//	cout <<"HasFriend<int>: " << hf.item << endl;
//}
//
//// non-template friend to the HasFriend<double> class
//void reports(HasFriend<double> & hf) {
//	cout <<"HasFriend<double>: " << hf.item << endl;
//}
//
//int main() {
//	cout << "No objects declared: ";
//	counts();
//	HasFriend<int> hfi1(10);
//	cout << "After hfi1 declared: ";
//	counts();
//	HasFriend<int> hfi2(20);
//	cout << "After hfi2 declared: ";
//	counts();
//	HasFriend<double> hfdb(10.5);
//	cout << "After hfdb declared: ";
//	counts();
//	reports(hfi1);
//	reports(hfi2);
//	reports(hfdb);
//	// std::cin.get();
//	return 0;
//}


//// tmp2tmp.cpp -- template friends to a template class											14-23
//
//#include <iostream>
//using std::cout;
//using std::endl;
//
//// template prototypes
//template <typename T> void counts();
//template <typename T> void report(T &);
//
//// template class
//template <typename TT>
//class HasFriendT {
//	private:
//		TT item;
//		static int ct;
//	public:
//		HasFriendT(const TT & i) : item(i) {
//			ct++;
//		}
//		~HasFriendT() {
//			ct--;
//		}
//		friend void counts<TT>();
//		friend void report<>(HasFriendT<TT> &);
//};
//
//template <typename T>
//int HasFriendT<T>::ct = 0;
//
//// template friend functions definitions
//template <typename T>
//void counts() {
//	cout << "template size: " << sizeof(HasFriendT<T>) << "; ";
//	cout << "template counts(): " << HasFriendT<T>::ct << endl;
//}
//
//template <typename T>
//void report(T & hf) {
//	cout << hf.item << endl;
//}
//
//int main() {
//	counts<int>();
//	HasFriendT<int> hfi1(10);
//	HasFriendT<int> hfi2(20);
//	HasFriendT<double> hfdb(10.5);
//	report(hfi1);  // generate report(HasFriendT<int> &)
//	report(hfi2);  // generate report(HasFriendT<int> &)
//	report(hfdb);  // generate report(HasFriendT<double> &)
//	cout << "counts<int>() output:\n";
//	counts<int>();
//	cout << "counts<double>() output:\n";
//	counts<double>();
//	// std::cin.get();
//	return 0;
//}


//// manyfrnd.cpp -- unbound template friend to a template class									14-24
//
//#include <iostream>
//using std::cout;
//using std::endl;
//
//template <typename T>
//class ManyFriend {
//	private:
//		T item;
//	public:
//		ManyFriend(const T & i) : item(i) {}
//		template <typename C, typename D> friend void show2(C &, D &);
//};
//
//template <typename C, typename D> void show2(C & c, D & d) {
//	cout << c.item << ", " << d.item << endl;
//}
//
//int main() {
//	ManyFriend<int> hfi1(10);
//	ManyFriend<int> hfi2(20);
//	ManyFriend<double> hfdb(10.5);
//	cout << "hfi1, hfi2: ";
//	show2(hfi1, hfi2);
//	cout << "hfdb, hfi2: ";
//	show2(hfdb, hfi2);
//	// std::cin.get();
//	return 0;
//}


//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//// Chapter14.cpp
//#include <iostream>
//#include <array>
//#include <string>
//#include <ctime>
//#include "Pairs.h"
//#include "QueueTp.h"
//#include "Worker.h"
//#include "Person.h"
//#include "emp.h"
//
//// practice 1的时候include Wine.h
//// 还要将Wine.cpp中的 #if 0 改成 #if 1
//// 还要将Wine1.cpp中的 #if 1 改成 #if 0
////#include "Wine.h"
//
//// practice 2的时候include Wine1.h
//#include "Wine1.h"
//
//using namespace std;
//
//// practice 1 && practice 2
//void p14_1(void) {
//	cout << "Enter name of wine: ";
//	char lab[50];
//	cin.getline(lab, 50);
//	cout << "Enter number of years: ";
//	int yrs;
//	cin >> yrs;
//
//	Wine holding(lab, yrs);
//	holding.GetBottles();
//	holding.Show();
//
//	const int YRS = 3;
//	int y[YRS] = { 1993, 1995, 1998 };
//	int b[YRS] = { 48, 60, 72 };
//
//	Wine more("Gushing Grape Red", YRS, y, b);
//	more.Show();
//
//	cout << "Total bottles for " << more.Label()
//	     << ": " << more.sum() << endl;
//
//	cout << "Bye\n";
//	return;
//}
//
//
//// practice 3
//void p14_3(void) {
//	QueueTp<Worker> * Qworker = new QueueTp<Worker>(20);
//
//	// 放在大括号里面是想看看Queue里面的item是否受原数据生命周期的影响的
//	// 看来是不会受到影响
//	{
//		Worker w1("jimmy", 0);
//		Worker w2("jimmy2", 1);
//		if (Qworker->isempty()) {
//			cout << "Qworker is empty!\n";
//		}
//		Qworker->enqueue(w1);
//		Qworker->enqueue(w2);
//		cout << "Qworker count: " << Qworker->queuecount() << endl;
//
//		Worker w3("hello", 2);
//		Qworker->enqueue(w3);
//		Qworker->enqueue(w2);
//		cout << "Qworker count: " << Qworker->queuecount() << endl;
//	}
//
//	Worker temp;
//	Qworker->dequeue(temp);
//	cout << "Dequeue: " << endl;
//	temp.Show();
//
//	Qworker->dequeue(temp);
//	cout << "Dequeue: " << endl;
//	temp.Show();
//
//	cout << "Qworker count: " << Qworker->queuecount() << endl;
//}
//
//
//// practice 4
//// 勉勉强强用吧，感觉写得我自己都有点晕了
//void p14_4(void) {
//	const int SIZE = 5;
//	srand(time(0));
//
//	Person * person[SIZE];
//	int ct = 0;
//	for ( ct = 0; ct < SIZE; ct++) {
//		char choice;
//		cout << "Enter the choice:\n"
//		     << "g: Gunslinger  t: BadDude  "
//		     << "a: PokerPlayer  q: quit\n";
//		cin >> choice;
//
//		while (strchr("pgatq", choice) == NULL) {
//			cout << "Please enter a p, g, a, t, q: ";
//			cin >> choice;
//		}
//		while (cin.get() != '\n') {
//			continue;
//		}
//
//		if (choice == 'q') {
//			break;
//		}
//
//		string fname;
//		string lname;
//		int nicks = 0;
//
//		cout << "Enter first name: " << endl;
//		getline(cin, fname);
//		cout << "Enter last name: " << endl;
//		getline(cin, lname);
//
//		switch (choice) {
//			case 'g':
//				cout << "Enter nicks: " << endl;
//				cin >> nicks;
//				person[ct] = new Gunslinger(fname, lname, nicks);
//				break;
//
//			case 'a':
//				person[ct] = new PokerPlayer(fname, lname);
//				break;
//
//			case 't':
//				cout << "Enter nicks: " << endl;
//				cin >> nicks;
//				person[ct] = new BadDude(fname, lname, nicks);
//				break;
//
//			default:
//				break;
//		}
//	}
//
//	cout << "\nHere is your input:\n";
//	int i = 0;
//	for (i = 0; i < ct; i++) {
//		cout << endl;
//		person[i]->Show();
//	}
//
//	for (i = 0; i < ct; i++) {
//		delete person[i];
//	}
//
//	cout << "Bye!\n";
//	return;
//}
//
//
//// practice 5
//void p14_5(void) {
//	employee em("Trip", "Harris", "Thumper");
//	cout << em << endl;
//	em.ShowAll();
//	manager ma("Amorphias", "Spindragon", "Nuancer", 5);
//	cout << ma << endl;
//	ma.ShowAll();
//
//	fink fi("Matt", "Oggs", "Oiler", "Juno Barr");
//	cout << fi << endl;
//	fi.ShowAll();
//	highfink hf(ma, "Curly Kew");
//	hf.ShowAll();
//	cout << "Press a key for next phase:\n";
//	cin.get();
//	highfink hf2;
//	hf2.SetAll();
//
//	cout << "Using an abstr_emp * pointer:\n";
//	abstr_emp * tri[4] = { &em, &fi, &hf, &hf2 };
//	for (int i = 0; i < 4; i++) {
//		tri[i]->ShowAll();
//	}
//
//	return;
//}
//
//
//
//int main(int argc, char **argv) {
//	p14_5();
//
//	while (cin.get());
//
//	return 0;
//}
//
//// emp.h
//#pragma once
//#include <iostream>
//#include <string>
//
//class abstr_emp {
//	public:
//		abstr_emp();
//		abstr_emp(const std::string & fn, const std::string & ln,
//		          const std::string & j);
//		virtual void ShowAll() const;
//		virtual void SetAll();
//		friend std::ostream &
//		operator<<(std::ostream & os, const abstr_emp & e);
//		virtual ~abstr_emp() = 0;
//
//	private:
//		std::string fname;
//		std::string lname;
//		std::string job;
//};
//
//class employee : public abstr_emp {
//	public:
//		employee();
//		employee(const std::string & fn, const std::string & ln,
//		         const std::string & j);
//		virtual void ShowAll() const;
//		virtual void SetAll();
//};
//
//class manager: virtual public abstr_emp {
//	private:
//		int inchargeof;
//
//	protected:
//		int InChargeOf() const {
//			return inchargeof;
//		}
//		int & InChargeOf() {
//			return inchargeof;
//		}
//
//	public:
//		manager();
//		manager(const std::string & fn, const std::string & ln,
//		        const std::string & j, int ico = 0);
//		manager(const abstr_emp & e, int ico);
//		manager(const manager & m);
//		virtual void ShowAll() const;
//		virtual void SetAll();
//};
//
//class fink : virtual public abstr_emp {
//	private:
//		std::string reportsto;
//	protected:
//		const std::string ReportsTo() const {
//			return reportsto;
//		}
//		std::string & ReportsTo() {
//			return reportsto;
//		}
//	public:
//		fink();
//		fink(const std::string & fn, const std::string & ln,
//		     const std::string & j, const std::string & rpo);
//		fink(const abstr_emp & e, const std::string & rep);
//		fink(const fink & e);
//		virtual void ShowAll() const;
//		virtual void SetAll();
//};
//
//class highfink : public manager, public fink {
//	public:
//		highfink();
//		highfink(const std::string & fn, const std::string & ln,
//		         const std::string & j, const std::string & rpo,
//		         int ico);
//		highfink(const abstr_emp & e, const std::string & rpo, int ico);
//		highfink(const fink & f, int ico);
//		highfink(const manager & m, const std::string & rpo);
//		highfink(const highfink & h);
//		virtual void ShowAll() const;
//		virtual void SetAll();
//};
//
//
//// emp.cpp
//#include "emp.h"
//
//using namespace std;
//
//abstr_emp::abstr_emp() : fname("None"), lname("None"), job("None") {
//
//}
//
//abstr_emp::abstr_emp(const string & fn, const string & ln,
//                     const string & j) {
//	lname = ln;
//	fname = fn;
//	job = j;
//}
//
//void abstr_emp::ShowAll() const {
//	cout << "abstr_emp: " << endl;
//	cout << "First Name: " << fname << endl;
//	cout << "Last Name: " << lname << endl;
//	cout << "job: " << job << endl;
//}
//
//void abstr_emp::SetAll() {
//	cout << "Enter First name: ";
//	getline(cin, fname);
//	cout << "Enter Last name: ";
//	getline(cin, lname);
//	cout << "Enter job: ";
//	getline(cin, job);
//}
//
//std::ostream & operator<<(std::ostream & os, const abstr_emp & e) {
//	cout << e.fname << ", " << e.lname ;
//	return os;
//}
//
//abstr_emp::~abstr_emp() {
//
//}
//
//employee::employee() : abstr_emp() {
//
//}
//
//employee::employee(const string & fn, const string & ln,
//                   const string & j) : abstr_emp(fn, ln, j) {
//
//}
//
//void employee::ShowAll() const {
//	cout << "employee: " << endl;
//	abstr_emp::ShowAll();
//}
//
//void employee::SetAll() {
//	abstr_emp::SetAll();
//}
//
//manager::manager() : abstr_emp(), inchargeof(-1) {
//
//}
//
//manager::manager(const string & fn, const string & ln,
//                 const string & j, int ico) : abstr_emp(fn, ln, j), inchargeof(ico) {
//
//}
//
//manager::manager(const abstr_emp & e, int ico) :
//	abstr_emp(e), inchargeof(ico) {
//
//}
//
//manager::manager(const manager & m) : abstr_emp(m) {
//	inchargeof = m.inchargeof;
//}
//
//void manager::ShowAll() const {
//	cout << "manager: " << endl;
//	abstr_emp::ShowAll();
//	cout << "inchargeof: " << inchargeof << endl;
//}
//
//void manager::SetAll() {
//	abstr_emp::SetAll();
//	cout << "Enter inchargeof: ";
//	cin >> inchargeof;
//	while (cin.get() != '\n') {
//		continue;
//	}
//}
//
//fink::fink() : abstr_emp(), reportsto("None") {
//
//}
//
//fink::fink(const string & fn, const string & ln,
//           const string & j, const string & rpo) : abstr_emp(fn, ln, j), reportsto(rpo) {
//
//}
//
//fink::fink(const abstr_emp & e, const string & rpo) : abstr_emp(e), reportsto(rpo) {
//
//}
//
//fink::fink(const fink & e) : abstr_emp(e) {
//	reportsto = e.reportsto;
//}
//
//void fink::ShowAll() const {
//	cout << "fink: " << endl;
//	abstr_emp::ShowAll();
//	cout << "reportsTo: " << reportsto << endl;
//}
//
//void fink::SetAll() {
//	abstr_emp::SetAll();
//	cout << "Enter reportsTo: ";
//	getline(cin, reportsto);
//}
//
//highfink::highfink() : abstr_emp(), manager(), fink() {
//
//}
//
//highfink::highfink(const string & fn, const string & ln,
//                   const string & j, const string & rpo, int ico) :
//	abstr_emp(fn, ln, j), manager(fn, ln, j, ico),
//	fink(fn, ln, j, rpo) {
//
//}
//
//highfink::highfink(const abstr_emp & e, const string & rpo, int ico) :
//	abstr_emp(e), manager(e, ico), fink(e, rpo) {
//
//}
//
//highfink::highfink(const fink & f, int ico) :
//	abstr_emp(f), manager(f, ico), fink(f) {
//
//}
//
//highfink::highfink(const manager & m, const string & rpo) :
//	abstr_emp(m), manager(m), fink(m, rpo) {
//
//}
//
//highfink::highfink(const highfink & h) :
//	abstr_emp(h), manager(h), fink(h) {
//
//}
//
//void highfink::ShowAll() const {
//	cout << "highfink: " << endl;
//	abstr_emp::ShowAll();
//	cout << "inchargeof: " << manager::InChargeOf() << endl;
//	cout << "reportsTo: " << fink::ReportsTo() << endl;
//}
//
//void highfink::SetAll() {
//	manager::SetAll();
//	cout << "Enter reportsTo: ";
//	getline(cin, fink::ReportsTo());
//}
//
//
//// Pairs.h
//#pragma once
//#include <iostream>
//#include <string>
//
//template<class T1, class T2>
//class Pair {
//	private:
//		T1 a;
//		T2 b;
//
//	public:
//		T1 & first();
//		T2 & second();
//		T1 first() const {
//			return a;
//		}
//		T2 second() const {
//			return b;
//		}
//		Pair(const T1 & aval, const T2 & bval) : a(aval), b(bval) {}
//		Pair() {}
//};
//
//template<class T1, class T2>
//T1 & Pair<T1, T2>::first() {
//	return a;
//}
//
//template<class T1, class T2>
//T2 & Pair<T1, T2>::second() {
//	return b;
//}
//
//
//// Person.h
//#pragma once
//#include <string>
//
//class Person {
//	private:
//		std::string firstName;
//		std::string lastName;
//
//	public:
//		Person() : firstName("None"), lastName("None") {}
//		Person(const std::string fname, const std::string lname) :
//			firstName(fname), lastName(lname) {}
//		Person(const Person & p);
//		virtual ~Person() = 0;
//		virtual void Show() const = 0;
//};
//
//class Gunslinger : public virtual Person {
//	private:
//		int nicks;
//
//	public:
//		Gunslinger(int d = 0) : Person(), nicks(d) {}
//		Gunslinger(const std::string fname, const std::string lname, int d) :
//			Person(fname, lname), nicks(d) {}
//		Gunslinger(const Person & p, int d) : Person(p), nicks(d) {}
//		Gunslinger(const Gunslinger & g);
//		~Gunslinger();
//		void Show() const;
//		double Draw() const;
//};
//
//class PokerPlayer : public virtual Person {
//	public:
//		int Draw() const;
//		void Show() const;
//		PokerPlayer() : Person() {}
//		PokerPlayer(const Person & p) : Person(p) {}
//		PokerPlayer(const std::string fname, const std::string lname) :
//			Person(fname, lname) {}
//		PokerPlayer(const PokerPlayer & p) : Person(p) {}
//		~PokerPlayer();
//};
//
//class BadDude : public Gunslinger, public PokerPlayer {
//	public:
//		BadDude() {}
//		BadDude(const std::string fname, const std::string lname, int d) :
//			Person(fname, lname), Gunslinger(fname, lname, d), PokerPlayer(fname, lname) {}
//		BadDude(const Person & p, int d) :
//			Person(p), Gunslinger(p, d), PokerPlayer(p) {}
//		BadDude(const Gunslinger & g) :
//			Person(g), Gunslinger(g), PokerPlayer(g) {}
//		BadDude(const PokerPlayer & p, int d) :
//			Person(p), Gunslinger(p, d), PokerPlayer(p) {}
//		~BadDude();
//
//		void Show() const;
//		double Gdraw();
//		int Cdraw();
//};
//
//
//// Person.cpp
//#include "Person.h"
//#include <iostream>
//#include <ctime>
//#include <cmath>
//
//using std::cout;
//using std::endl;
//
//Person::Person(const Person & p) {
//	firstName = p.firstName;
//	lastName = p.lastName;
//}
//
//Person::~Person() {
//}
//
//void Person::Show() const {
//	cout << "First Name: " << firstName << endl;
//	cout << "Last Name: " << lastName << endl;
//}
//
//Gunslinger::Gunslinger(const Gunslinger & g) : Person(g) {
//	nicks = g.nicks;
//}
//
//double Gunslinger::Draw() const {
//	return (double)(rand() % 10) / 10;
//}
//
//void Gunslinger::Show() const {
//	Person::Show();
//	cout << "Nicks: " << nicks << endl;
//	cout << "Pull the gun time: " << Draw() << endl;
//}
//
//Gunslinger::~Gunslinger() {
//
//}
//
//int PokerPlayer::Draw() const {
//	return (rand() % 52);
//}
//
//void PokerPlayer::Show() const {
//	Person::Show();
//}
//
//PokerPlayer::~PokerPlayer() {
//
//}
//
//
//void BadDude::Show() const {
//	Gunslinger::Show();
//	cout << "Next Card: " << PokerPlayer::Draw() << endl;
//}
//
//double BadDude::Gdraw() {
//	return Gunslinger::Draw();
//}
//
//int BadDude::Cdraw() {
//	return PokerPlayer::Draw();
//}
//
//BadDude::~BadDude() {
//
//}
//
//
//// QueueTp.h
//#pragma once
//
//// 这个模板类的内容是按照程序清单12.10来写的
//// 还要注意模板类定义和实现都要放在头文件中，不然编译会报错
//template <class T>
//class QueueTp {
//	private:
//		struct Node {
//			T item;
//			struct Node * next;
//		};
//		enum { Q_SIZE = 10 };
//		Node * front;
//		Node * rear;
//		int items;
//		const int qsize;
//		QueueTp(const QueueTp & q) : qsize(0) {}
//		QueueTp & operator=(const QueueTp & q) {
//			return *this;
//		}
//
//	public:
//		QueueTp(int qs = Q_SIZE);
//		~QueueTp();
//		bool isempty() const;
//		bool isfull() const;
//		int queuecount() const;
//		bool enqueue(const T & item);
//		bool dequeue(T & item);
//};
//
//template <class T>
//QueueTp<T>::QueueTp(int qs) : qsize(qs) {
//	front = rear = NULL;
//	items = 0;
//}
//
//template <class T>
//QueueTp<T>::~QueueTp() {
//	Node * temp;
//	while (front != NULL) {
//		temp = front;
//		front = front->next;
//		delete temp;
//	}
//}
//
//template <class T>
//bool QueueTp<T>::isempty() const {
//	return items == 0;
//}
//
//template <class T>
//bool QueueTp<T>::isfull() const {
//	return items == qsize;
//}
//
//template <class T>
//int QueueTp<T>::queuecount() const {
//	return items;
//}
//
//template <class T>
//bool QueueTp<T>::enqueue(const T & item) {
//	if (isfull()) {
//		return false;
//	}
//	Node * add = new Node;
//	add->item = item;
//	add->next = NULL;
//	items++;
//	if (front == NULL) {
//		front = add;
//	} else
//		rear->next = add;
//	rear = add;
//	return true;
//}
//
//template <class T>
//bool QueueTp<T>::dequeue(T & item) {
//	if (front == NULL) {
//		return false;
//	}
//	item = front->item;
//	items--;
//	Node * temp = front;
//	front = front->next;
//	delete temp;
//	if (items == 0) {
//		rear = NULL;
//	}
//
//	return true;
//}
//
//
//// Wine.h
//#pragma once
//#include <iostream>
//#include <array>
//#include <string>
//#include <valarray>
//#include "Pairs.h"
//
//typedef std::valarray<int> ArrayInt;
//typedef Pair<ArrayInt, ArrayInt> PairArray;
//
//class Wine {
//	private:
//		int year;
//		std::string label;
//		PairArray pArray;
//
//	public:
//		Wine(const char * l, int y, const int yr[], const int bot[]);
//		Wine(const char * l, int y);
//		~Wine();
//		void GetBottles();
//		void Show();
//		std::string & Label();
//		int sum();
//};
//
//// Wine.cpp
//#include "Wine.h"
//
//#if 0
//
//Wine::Wine(const char * l, int y, const int yr[], const int bot[]) {
//	pArray = PairArray(ArrayInt(y), ArrayInt(y));
//	label = l;
//	year = y;
//	for (int  i = 0; i < y; i++) {
//		pArray.first()[i] = yr[i];
//		pArray.second()[i] = bot[i];
//	}
//}
//
//Wine::Wine(const char * l, int y) {
//	pArray = PairArray(ArrayInt(y), ArrayInt(y));
//	label = l;
//	year = y;
//	for (int i = 0; i < y; i++) {
//		pArray.first()[i] = 0;
//		pArray.second()[i] = 0;
//	}
//}
//
//
//Wine::~Wine() {
//}
//
//void Wine::GetBottles() {
//	std::cout << "Enter " << label << " data for " << year << " year(s):" << std::endl;
//	for (int i = 0; i < year; i++) {
//		std::cout << "Enter year: ";
//		std::cin >> pArray.first()[i];
//		std::cout << "Enter bootles for that year: ";
//		std::cin >> pArray.second()[i];
//	}
//}
//
//void Wine::Show() {
//	std::cout << "Wine: " << label << std::endl;
//	std::cout << "  Year    Bottles" << std::endl;
//	for (int i = 0; i < year; i++) {
//		std::cout << "  " << pArray.first()[i] << " " << pArray.second()[i] << std::endl;
//	}
//}
//
//std::string & Wine::Label() {
//	return label;
//}
//
//int Wine::sum() {
//	int sum = 0;
//	for (int i = 0; i < year; i++) {
//		sum += pArray.second()[i];
//	}
//
//	return sum;
//}
//
//#endif
//
//
//// Wine1.h
//#pragma once
//#include <iostream>
//#include <string>
//#include <valarray>
//#include "Pairs.h"
//
//typedef std::valarray<int> ArrayInt;
//typedef Pair<ArrayInt, ArrayInt> PairArray;
//
//class Wine : public PairArray, public std::string {
//	private:
//		int year;
//
//	public:
//		Wine(const char * l, int y, const int yr[], const int bot[]);
//		Wine(const char * l, int y);
//		~Wine();
//		void GetBottles();
//		void Show();
//		std::string & Label();
//		int sum();
//};
//
//
//// Wine1.cpp
//#include "Wine1.h"
//
//#if 1
//
//Wine::Wine(const char * l, int y, const int yr[], const int bot[]) :
//	std::string(l), PairArray(ArrayInt(y), ArrayInt(y)) {
//	year = y;
//	for (int i = 0; i < year; i++) {
//		PairArray::first()[i] = yr[i];
//		PairArray::second()[i] = bot[i];
//	}
//}
//
//Wine::Wine(const char * l, int y) :
//	std::string(l), PairArray(ArrayInt(y), ArrayInt(y)) {
//	year = y;
//	for (int i = 0; i < year; i++) {
//		PairArray::first()[i] = 0;
//		PairArray::second()[i] = 0;
//	}
//}
//
//Wine::~Wine() {
//
//}
//
//void Wine::GetBottles() {
//	std::cout << "Enter " << (const std::string)*this << " data for " << year
//	          << " year(s): " << std::endl;
//	for (int i = 0; i < year; i++) {
//		std::cout << "Enter year: ";
//		std::cin >> PairArray::first()[i];
//		std::cout << "Enter bootles for that year: ";
//		std::cin >> PairArray::second()[i];
//	}
//}
//
//void Wine::Show() {
//	std::cout << "Wine: " << (const std::string)*this << std::endl;
//	std::cout << "  Year    Bootles" << std::endl;
//	for (int i = 0; i < year; i++) {
//		std::cout << "  " << PairArray::first()[i] << " "
//		          << PairArray::second()[i] << std::endl;
//	}
//}
//
//std::string & Wine::Label() {
//	return (std::string &)*this;
//}
//
//int Wine::sum() {
//	int sum = 0;
//	for (int i = 0; i < year; i++) {
//		sum += PairArray::second()[i];
//	}
//
//	return sum;
//}
//
//#endif
//
//
//// Worker.h
//#pragma once
//#include <string>
//
//
//class Worker {
//	private:
//		std::string fullname;
//		long id;
//
//	public:
//		Worker() : fullname("no one"), id(0L) {}
//		Worker(const std::string & s, long n)
//			: fullname(s), id(n) {}
//		virtual ~Worker();
//		virtual void Set();
//		virtual void Show() const;
//};
//
//// Worker.cpp
//#include "Worker.h"
//#include <iostream>
//
//using std::cout;
//using std::endl;
//using std::cin;
//
//
//void Worker::Set() {
//	cout << "Enter worker's name: ";
//	std::getline(cin, fullname);
//	cout << "Enter worker's ID: ";
//	cin >> id;
//	while (cin.get() != '\n') {
//		continue;
//	}
//}
//
//void Worker::Show() const {
//	cout << "Name: " << fullname << "\n";
//	cout << "Employee ID: " << id << "\n";
//}
//
//
//Worker::~Worker() {
//}


/******************************************************************ch15  友元、异常和其他****************************************************************/


//// tv.h -- Tv and Remote classes																15-1
//
//#ifndef TV_H_
//#define TV_H_
//
//class Tv {
//	public:
//		friend class Remote;   // Remote can access Tv private parts
//		enum {Off, On};
//		enum {MinVal,MaxVal = 20};
//		enum {Antenna, Cable};
//		enum {TV, DVD};
//
//		Tv(int s = Off, int mc = 125) : state(s), volume(5),
//			maxchannel(mc), channel(2), mode(Cable), input(TV) {}
//		void onoff() {
//			state = (state == On)? Off : On;
//		}
//		bool ison() const {
//			return state == On;
//		}
//		bool volup();
//		bool voldown();
//		void chanup();
//		void chandown();
//		void set_mode() {
//			mode = (mode == Antenna)? Cable : Antenna;
//		}
//		void set_input() {
//			input = (input == TV)? DVD : TV;
//		}
//		void settings() const; // display all settings
//	private:
//		int state;             // on or off
//		int volume;            // assumed to be digitized
//		int maxchannel;        // maximum number of channels
//		int channel;           // current channel setting
//		int mode;              // broadcast or cable
//		int input;             // TV or DVD
//};
//
//class Remote {
//	private:
//		int mode;              // controls TV or DVD
//	public:
//		Remote(int m = Tv::TV) : mode(m) {}
//		bool volup(Tv & t) {
//			return t.volup();
//		}
//		bool voldown(Tv & t) {
//			return t.voldown();
//		}
//		void onoff(Tv & t) {
//			t.onoff();
//		}
//		void chanup(Tv & t) {
//			t.chanup();
//		}
//		void chandown(Tv & t) {
//			t.chandown();
//		}
//		void set_chan(Tv & t, int c) {
//			t.channel = c;
//		}
//		void set_mode(Tv & t) {
//			t.set_mode();
//		}
//		void set_input(Tv & t) {
//			t.set_input();
//		}
//};
//#endif


//// tv.cpp -- methods for the Tv class (Remote methods are inline)									15-2
//
//#include <iostream>
//#include "tv.h"
//
//bool Tv::volup() {
//	if (volume < MaxVal) {
//		volume++;
//		return true;
//	} else
//		return false;
//}
//bool Tv::voldown() {
//	if (volume > MinVal) {
//		volume--;
//		return true;
//	} else
//		return false;
//}
//
//void Tv::chanup() {
//	if (channel < maxchannel)
//		channel++;
//	else
//		channel = 1;
//}
//
//void Tv::chandown() {
//	if (channel > 1)
//		channel--;
//	else
//		channel = maxchannel;
//}
//
//void Tv::settings() const {
//	using std::cout;
//	using std::endl;
//	cout << "TV is " << (state == Off? "Off" : "On") << endl;
//	if (state == On) {
//		cout << "Volume setting = " << volume << endl;
//		cout << "Channel setting = " << channel << endl;
//		cout << "Mode = "
//		     << (mode == Antenna? "antenna" : "cable") << endl;
//		cout << "Input = "
//		     << (input == TV? "TV" : "DVD") << endl;
//	}
//}


////use_tv.cpp -- using the Tv and Remote classes													15-3
//
//#include <iostream>
//#include "tv.h"
//
//int main() {
//	using std::cout;
//	Tv s42;
//	cout << "Initial settings for 42\" TV:\n";
//	s42.settings();
//	s42.onoff();
//	s42.chanup();
//	cout << "\nAdjusted settings for 42\" TV:\n";
//	s42.settings();
//
//	Remote grey;
//
//	grey.set_chan(s42, 10);
//	grey.volup(s42);
//	grey.volup(s42);
//	cout << "\n42\" settings after using remote:\n";
//	s42.settings();
//
//	Tv s58(Tv::On);
//	s58.set_mode();
//	grey.set_chan(s58,28);
//	cout << "\n58\" settings:\n";
//	s58.settings();
//	// std::cin.get();
//	return 0;
//}


//// tvfm.h -- Tv and Remote classes using a friend member											15-4
//
//#ifndef TVFM_H_
//#define TVFM_H_
//
//class Tv;                       // forward declaration
//
//class Remote {
//	public:
//		enum State {Off, On};
//		enum {MinVal,MaxVal = 20};
//		enum {Antenna, Cable};
//		enum {TV, DVD};
//	private:
//		int mode;
//	public:
//		Remote(int m = TV) : mode(m) {}
//		bool volup(Tv & t);         // prototype only
//		bool voldown(Tv & t);
//		void onoff(Tv & t);
//		void chanup(Tv & t);
//		void chandown(Tv & t);
//		void set_mode(Tv & t);
//		void set_input(Tv & t);
//		void set_chan(Tv & t, int c);
//};
//
//class Tv {
//	public:
//		friend void Remote::set_chan(Tv & t, int c);
//		enum State {Off, On};
//		enum {MinVal,MaxVal = 20};
//		enum {Antenna, Cable};
//		enum {TV, DVD};
//
//		Tv(int s = Off, int mc = 125) : state(s), volume(5),
//			maxchannel(mc), channel(2), mode(Cable), input(TV) {}
//		void onoff() {
//			state = (state == On)? Off : On;
//		}
//		bool ison() const {
//			return state == On;
//		}
//		bool volup();
//		bool voldown();
//		void chanup();
//		void chandown();
//		void set_mode() {
//			mode = (mode == Antenna)? Cable : Antenna;
//		}
//		void set_input() {
//			input = (input == TV)? DVD : TV;
//		}
//		void settings() const;
//	private:
//		int state;
//		int volume;
//		int maxchannel;
//		int channel;
//		int mode;
//		int input;
//};
//
//// Remote methods as inline functions
//inline bool Remote::volup(Tv & t) {
//	return t.volup();
//}
//inline bool Remote::voldown(Tv & t) {
//	return t.voldown();
//}
//inline void Remote::onoff(Tv & t) {
//	t.onoff();
//}
//inline void Remote::chanup(Tv & t) {
//	t.chanup();
//}
//inline void Remote::chandown(Tv & t) {
//	t.chandown();
//}
//inline void Remote::set_mode(Tv & t) {
//	t.set_mode();
//}
//inline void Remote::set_input(Tv & t) {
//	t.set_input();
//}
//inline void Remote::set_chan(Tv & t, int c) {
//	t.channel = c;
//}
//#endif


//// queuetp.h -- queue template with a nested class													15-5
//
//#ifndef QUEUETP_H_
//#define QUEUETP_H_
//
//template <class Item>
//class QueueTP {
//	private:
//		enum {Q_SIZE = 10};
//		// Node is a nested class definition
//		class Node {
//			public:
//				Item item;
//				Node * next;
//				Node(const Item & i):item(i), next(0) { }
//		};
//		Node * front;       // pointer to front of Queue
//		Node * rear;        // pointer to rear of Queue
//		int items;          // current number of items in Queue
//		const int qsize;    // maximum number of items in Queue
//		QueueTP(const QueueTP & q) : qsize(0) {}
//		QueueTP & operator=(const QueueTP & q) {
//			return *this;
//		}
//	public:
//		QueueTP(int qs = Q_SIZE);
//		~QueueTP();
//		bool isempty() const {
//			return items == 0;
//		}
//		bool isfull() const {
//			return items == qsize;
//		}
//		int queuecount() const {
//			return items;
//		}
//		bool enqueue(const Item &item); // add item to end
//		bool dequeue(Item &item);       // remove item from front
//};
//
//// QueueTP methods
//template <class Item>
//QueueTP<Item>::QueueTP(int qs) : qsize(qs) {
//	front = rear = 0;
//	items = 0;
//}
//
//template <class Item>
//QueueTP<Item>::~QueueTP() {
//	Node * temp;
//	while (front != 0) {    // while queue is not yet empty
//		temp = front;       // save address of front item
//		front = front->next;// reset pointer to next item
//		delete temp;        // delete former front
//	}
//}
//
//// Add item to queue
//template <class Item>
//bool QueueTP<Item>::enqueue(const Item & item) {
//	if (isfull())
//		return false;
//	Node * add = new Node(item);    // create node
//// on failure, new throws std::bad_alloc exception
//	items++;
//	if (front == 0)         // if queue is empty,
//		front = add;        // place item at front
//	else
//		rear->next = add;   // else place at rear
//	rear = add;             // have rear point to new node
//	return true;
//}
//
//// Place front item into item variable and remove from queue
//template <class Item>
//bool QueueTP<Item>::dequeue(Item & item) {
//	if (front == 0)
//		return false;
//	item = front->item;     // set item to first item in queue
//	items--;
//	Node * temp = front;    // save location of first item
//	front = front->next;    // reset front to next item
//	delete temp;            // delete former first item
//	if (items == 0)
//		rear = 0;
//	return true;
//}
//
//#endif


//// nested.cpp -- using a queue that has a nested class													15-6
//
//#include <iostream>
//
//#include <string>
//#include "queuetp.h"
//
//int main() {
//	using std::string;
//	using std::cin;
//	using std::cout;
//
//	QueueTP<string> cs(5);
//	string temp;
//
//	while(!cs.isfull()) {
//		cout << "Please enter your name. You will be "
//		     "served in the order of arrival.\n"
//		     "name: ";
//		getline(cin, temp);
//		cs.enqueue(temp);
//	}
//	cout << "The queue is full. Processing begins!\n";
//
//	while (!cs.isempty()) {
//		cs.dequeue(temp);
//		cout << "Now processing " << temp << "...\n";
//	}
//	// cin.get();
//	return 0;
//}


////error1.cpp -- using the abort() function															15-7
//
//#include <iostream>
//#include <cstdlib>
//double hmean(double a, double b);
//
//int main() {
//	double x, y, z;
//
//	std::cout << "Enter two numbers: ";
//	while (std::cin >> x >> y) {
//		z = hmean(x,y);
//		std::cout << "Harmonic mean of " << x << " and " << y
//		          << " is " << z << std::endl;
//		std::cout << "Enter next set of numbers <q to quit>: ";
//	}
//	std::cout << "Bye!\n";
//	return 0;
//}
//
//double hmean(double a, double b) {
//	if (a == -b) {
//		std::cout << "untenable arguments to hmean()\n";
//		std::abort();
//	}
//	return 2.0 * a * b / (a + b);
//}


////error2.cpp -- returning an error code																15-8
//
//#include <iostream>
//#include <cfloat>  // (or float.h) for DBL_MAX
//
//bool hmean(double a, double b, double * ans);
//
//int main() {
//	double x, y, z;
//
//	//std::cout << DBL_MAX<<std::endl;
//
//	std::cout << "Enter two numbers: ";
//	while (std::cin >> x >> y) {
//		if (hmean(x,y,&z))
//			std::cout << "Harmonic mean of " << x << " and " << y
//			          << " is " << z << std::endl;
//		else
//			std::cout << "One value should not be the negative "
//			          << "of the other - try again.\n";
//		std::cout << "Enter next set of numbers <q to quit>: ";
//	}
//	std::cout << "Bye!\n";
//	return 0;
//}
//
//bool hmean(double a, double b, double * ans) {
//	if (a == -b) {
//		*ans = DBL_MAX;
//		return false;
//	} else {
//		*ans = 2.0 * a * b / (a + b);
//		return true;
//	}
//}


//// error3.cpp -- using an exception																15-9
//
//#include <iostream>
//double hmean(double a, double b);
//
//int main() {
//	double x, y, z;
//
//	std::cout << "Enter two numbers: ";
//	while (std::cin >> x >> y) {
//		try {                   // start of try block
//			z = hmean(x,y);
//		}                       // end of try block
//		catch (const char * s) { // start of exception handler
//			std::cout << s << std::endl;
//			std::cout << "Enter a new pair of numbers: ";
//			continue;
//		}                       // end of handler
//		std::cout << "Harmonic mean of " << x << " and " << y
//		          << " is " << z << std::endl;
//		std::cout << "Enter next set of numbers <q to quit>: ";
//	}
//	std::cout << "Bye!\n";
//	return 0;
//}
//
//double hmean(double a, double b) {
//	if (a == -b)
//		throw "bad hmean() arguments: a = -b not allowed";
//	return 2.0 * a * b / (a + b);
//}


//// exc_mean.h  -- exception classes for hmean(), gmean()										15-10
//
//#include <iostream>
//
//class bad_hmean {
//	private:
//		double v1;
//		double v2;
//	public:
//		bad_hmean(double a = 0, double b = 0) : v1(a), v2(b) {}
//		void mesg();
//};
//
//inline void bad_hmean::mesg() {
//	std::cout << "hmean(" << v1 << ", " << v2 <<"): "
//	          << "invalid arguments: a = -b\n";
//}
//
//class bad_gmean {
//	public:
//		double v1;
//		double v2;
//		bad_gmean(double a = 0, double b = 0) : v1(a), v2(b) {}
//		const char * mesg();
//};
//
//inline const char * bad_gmean::mesg() {
//	return "gmean() arguments should be >= 0\n";
//}


////error4.cpp � using exception classes														15-11
//
//#include <iostream>
//#include <cmath> // or math.h, unix users may need -lm flag
//#include "exc_mean.h"
//// function prototypes
//double hmean(double a, double b);
//double gmean(double a, double b);
//int main() {
//	using std::cout;
//	using std::cin;
//	using std::endl;
//
//	double x, y, z;
//
//	cout << "Enter two numbers: ";
//	while (cin >> x >> y) {
//		try {                  // start of try block
//			z = hmean(x,y);
//			cout << "Harmonic mean of " << x << " and " << y
//			     << " is " << z << endl;
//			cout << "Geometric mean of " << x << " and " << y
//			     << " is " << gmean(x,y) << endl;
//			cout << "Enter next set of numbers <q to quit>: ";
//		}// end of try block
//		catch (bad_hmean & bg) {  // start of catch block
//			bg.mesg();
//			cout << "Try again.\n";
//			continue;
//		} catch (bad_gmean & hg) {
//			cout << hg.mesg();
//			cout << "Values used: " << hg.v1 << ", "
//			     << hg.v2 << endl;
//			cout << "Sorry, you don't get to play any more.\n";
//			break;
//		} // end of catch block
//	}
//	cout << "Bye!\n";
//	// cin.get();
//	// cin.get();
//	return 0;
//}
//
//double hmean(double a, double b) {
//	if (a == -b)
//		throw bad_hmean(a,b);
//	return 2.0 * a * b / (a + b);
//}
//
//double gmean(double a, double b) {
//	if (a < 0 || b < 0)
//		throw bad_gmean(a,b);
//	return std::sqrt(a * b);
//}


////error5.cpp -- unwinding the stack																15-12
//
//#include <iostream>
//#include <cmath> // or math.h, unix users may need -lm flag
//#include <string>
//#include "exc_mean.h"
//
//class demo {
//	private:
//		std::string word;
//	public:
//		demo (const std::string & str) {
//
//			word = str;
//			std::cout << "demo " << word << " created\n";
//		}
//		~demo() {
//			std::cout << "demo " << word << " destroyed\n";
//		}
//		void show() const {
//			std::cout << "demo " << word << " lives!\n";
//		}
//};
//
//// function prototypes
//double hmean(double a, double b);
//double gmean(double a, double b);
//double means(double a, double b);
//
//int main() {
//	using std::cout;
//	using std::cin;
//	using std::endl;
//
//	double x, y, z;
//	{
//		demo d1("found in block in main()");
//		cout << "Enter two numbers: ";
//		while (cin >> x >> y) {
//			try {                  // start of try block
//				z = means(x,y);
//				cout << "The mean mean of " << x << " and " << y
//				     << " is " << z << endl;
//				cout << "Enter next pair: ";
//			} // end of try block
//			catch (bad_hmean & bg) {  // start of catch block
//				bg.mesg();
//				cout << "Try again.\n";
//				continue;
//			} catch (bad_gmean & hg) {
//				cout << hg.mesg();
//				cout << "Values used: " << hg.v1 << ", "
//				     << hg.v2 << endl;
//				cout << "Sorry, you don't get to play any more.\n";
//				break;
//			} // end of catch block
//		}
//		d1.show();
//	}
//	cout << "Bye!\n";
//	// cin.get();
//	// cin.get();
//	return 0;
//}
//
//double hmean(double a, double b) {
//	if (a == -b)
//		throw bad_hmean(a,b);
//	return 2.0 * a * b / (a + b);
//}
//
//double gmean(double a, double b) {
//	if (a < 0 || b < 0)
//		throw bad_gmean(a,b);
//	return std::sqrt(a * b);
//}
//
//double means(double a, double b) {
//	double am, hm, gm;
//	demo d2("found in means()");
//	am = (a + b) / 2.0;    // arithmetic mean
//	try {
//		hm = hmean(a,b);
//		gm = gmean(a,b);
//	} catch (bad_hmean & bg) { // start of catch block
//		bg.mesg();
//		std::cout << "Caught in means()\n";
//		throw;             // rethrows the exception
//	}
//	d2.show();
//	return (am + hm + gm) / 3.0;
//}

//#include<iostream>
//#include<exception>
//int main(){
//	std::exception e;
//	std::cout<<e.what(); 				// (std::exception )
//}


//// newexcp.cpp -- the bad_alloc exception														15-13
//
//#include <iostream>
//#include <new>
//#include <cstdlib>  // for exit(), EXIT_FAILURE
//using namespace std;
//
//struct Big {
//	double stuff[20000];
//};
//
//int main() {
//	Big * pb;
//	try {
//		cout << "Trying to get a big block of memory:\n";
//		pb = new Big[10000]; // 1,600,000,000 bytes
//		cout << "Got past the new request:\n";
//	} catch (bad_alloc & ba) {
//		cout << "Caught the exception!\n";
//		cout << ba.what() << endl;
//		exit(EXIT_FAILURE);
//	}
//	cout << "Memory successfully allocated\n";
//	pb[0].stuff[0] = 4;
//	cout << pb[0].stuff[0] << endl;
//	delete [] pb;
//	// cin.get();
//	return 0;
//}


//// sales.h  -- exceptions and inheritance														15-14
//
//#include <stdexcept>
//#include <string>
//
//class Sales {
//	public:
//		enum {MONTHS = 12};   // could be a static const
//		class bad_index : public std::logic_error {
//			private:
//				int bi;  // bad index value
//			public:
//				explicit bad_index(int ix,
//				                   const std::string & s = "Index error in Sales object\n");
//				int bi_val() const {
//					return bi;
//				}
//				virtual ~bad_index() throw() {}
//		};
//		explicit Sales(int yy = 0);
//		Sales(int yy, const double * gr, int n);
//		virtual ~Sales() { }
//		int Year() const {
//			return year;
//		}
//		virtual double operator[](int i) const;
//		virtual double & operator[](int i);
//	private:
//		double gross[MONTHS];
//		int year;
//};
//
//class LabeledSales : public Sales {
//	public:
//		class nbad_index : public Sales::bad_index {
//			private:
//				std::string lbl;
//			public:
//				nbad_index(const std::string & lb, int ix,
//				           const std::string & s = "Index error in LabeledSales object\n");
//				const std::string & label_val() const {
//					return lbl;
//				}
//				virtual ~nbad_index() throw() {}
//		};
//		explicit LabeledSales(const std::string & lb = "none", int yy = 0);
//		LabeledSales(const std::string & lb, int yy, const double * gr, int n);
//		virtual ~LabeledSales() { }
//		const std::string & Label() const {
//			return label;
//		}
//		virtual double operator[](int i) const;
//		virtual double & operator[](int i);
//	private:
//		std::string label;
//};


//// sales.cpp -- Sales implementation													15-15
//
//#include "sales.h"
//using std::string;
//
//Sales::bad_index::bad_index(int ix, const string & s )
//	: std::logic_error(s), bi(ix) {
//}
//
//Sales::Sales(int yy) {
//	year = yy;
//	for (int i = 0; i < MONTHS; ++i)
//		gross[i] = 0;
//}
//
//Sales::Sales(int yy, const double * gr, int n) {
//	year = yy;
//	int lim = (n < MONTHS)? n : MONTHS;
//	int i;
//	for (i = 0; i < lim; ++i)
//		gross[i] = gr[i];
//	// for i > n and i < MONTHS
//	for ( ; i < MONTHS; ++i)
//		gross[i] = 0;
//}
//
//double Sales::operator[](int i) const {
//	if(i < 0 || i >= MONTHS)
//		throw bad_index(i);
//	return gross[i];
//}
//
//double & Sales::operator[](int i) {
//	if(i < 0 || i >= MONTHS)
//		throw bad_index(i);
//	return gross[i];
//}
//
//LabeledSales::nbad_index::nbad_index(const string & lb, int ix,
//                                     const string & s ) : Sales::bad_index(ix, s) {
//	lbl = lb;
//}
//
//LabeledSales::LabeledSales(const string & lb, int yy)
//	: Sales(yy) {
//	label = lb;
//}
//
//LabeledSales::LabeledSales(const string & lb, int yy, const double * gr, int n)
//	: Sales(yy, gr, n) {
//	label = lb;
//}
//
//double LabeledSales::operator[](int i) const {
//	if(i < 0 || i >= MONTHS)
//		throw nbad_index(Label(), i);
//	return Sales::operator[](i);
//}
//
//double & LabeledSales::operator[](int i) {
//	if(i < 0 || i >= MONTHS)
//		throw nbad_index(Label(), i);
//	return Sales::operator[](i);
//}


//// use_sales.cpp  -- nested exceptions													15-16
//
//#include <iostream>
//#include "sales.h"
//
//int main() {
//	using std::cout;
//	using std::cin;
//	using std::endl;
//
//	double vals1[12] = {
//		1220, 1100, 1122, 2212, 1232, 2334,
//		2884, 2393, 3302, 2922, 3002, 3544
//	};
//
//	double vals2[12] = {
//		12, 11, 22, 21, 32, 34,
//		28, 29, 33, 29, 32, 35
//	};
//
//	Sales sales1(2011, vals1, 12);
//	LabeledSales sales2("Blogstar",2012, vals2, 12 );
//
//	cout << "First try block:\n";
//	try {
//		int i;
//		cout << "Year = " << sales1.Year() << endl;
//		for (i = 0; i < 12; ++i) {
//
//			cout << sales1[i] << ' ';
//			if (i % 6 == 5)
//				cout << endl;
//		}
//		cout << "Year = " << sales2.Year() << endl;
//		cout << "Label = " << sales2.Label() << endl;
//		for (i = 0; i <= 12; ++i) {
//
//			cout << sales2[i] << ' ';
//			if (i % 6 == 5)
//				cout << endl;
//		}
//		cout << "End of try block 1.\n";
//	} catch(LabeledSales::nbad_index & bad) {
//		cout << bad.what();
//		cout << "Company: " << bad.label_val() << endl;
//		cout << "bad index: " << bad.bi_val() << endl;
//	} catch(Sales::bad_index & bad) {
//		cout << bad.what();
//		cout << "bad index: " << bad.bi_val() << endl;
//	}
//	cout << "\nNext try block:\n";
//	try {
//		sales2[2] = 37.5;
//		sales1[20] = 23345;
//		cout << "End of try block 2.\n";
//	} catch(LabeledSales::nbad_index & bad) {
//		cout << bad.what();
//		cout << "Company: " << bad.label_val() << endl;
//		cout << "bad index: " << bad.bi_val() << endl;
//	} catch(Sales::bad_index & bad) {
//		cout << bad.what();
//		cout << "bad index: " << bad.bi_val() << endl;
//	}
//	cout << "done\n";
//	// std::cin.get();
//	return 0;
//}


//// rtti1.cpp -- using the RTTI dynamic_cast operator												15-17
//
//#include <iostream>
//#include <cstdlib>
//#include <ctime>
//
//using std::cout;
//
//class Grand {
//	private:
//		int hold;
//	public:
//		Grand(int h = 0) : hold(h) {}
//		virtual void Speak() const {
//			cout << "I am a grand class!\n";
//		}
//		virtual int Value() const {
//			return hold;
//		}
//};
//
//class Superb : public Grand {
//	public:
//		Superb(int h = 0) : Grand(h) {}
//		void Speak() const {
//			cout << "I am a superb class!!\n";
//		}
//		virtual void Say() const {
//			cout << "I hold the superb value of " << Value() << "!\n";
//		}
//};
//
//class Magnificent : public Superb {
//	private:
//		char ch;
//	public:
//		Magnificent(int h = 0, char c = 'A') : Superb(h), ch(c) {}
//		void Speak() const {
//			cout << "I am a magnificent class!!!\n";
//		}
//		void Say() const {
//			cout << "I hold the character " << ch <<
//			     " and the integer "  << Value() << "!\n";
//		}
//};
//
//Grand * GetOne();
//
//int main() {
//	std::srand(std::time(0));
//	Grand * pg;
//	Superb * ps;
//	for (int i = 0; i < 5; i++) {
//		pg = GetOne();
//		pg->Speak();
//		if( ps = dynamic_cast<Superb *>(pg))
//			ps->Say();
//	}
//	// std::cin.get();
//	return 0;
//}
//
//Grand * GetOne() {  // generate one of three kinds of objects randomly
//	Grand * p;
//	switch( std::rand() % 3) {
//		case 0:
//			p = new Grand(std::rand() % 100);
//			break;
//		case 1:
//			p = new Superb(std::rand() % 100);
//			break;
//		case 2:
//			p = new Magnificent(std::rand() % 100,
//			                    'A' + std::rand() % 26);
//			break;
//	}
//	return p;
//}


//// rtti2.cpp  -- using dynamic_cast, typeid, and type_info											15-18
//
//#include <iostream>
//#include <cstdlib>
//#include <ctime>
//#include <typeinfo>
//using namespace std;
//
//class Grand {
//	private:
//		int hold;
//	public:
//		Grand(int h = 0) : hold(h) {}
//		virtual void Speak() const {
//			cout << "I am a grand class!\n";
//		}
//		virtual int Value() const {
//			return hold;
//		}
//};
//
//class Superb : public Grand {
//	public:
//		Superb(int h = 0) : Grand(h) {}
//		void Speak() const {
//			cout << "I am a superb class!!\n";
//		}
//		virtual void Say() const {
//			cout << "I hold the superb value of " << Value() << "!\n";
//		}
//};
//
//class Magnificent : public Superb {
//	private:
//		char ch;
//	public:
//		Magnificent(int h = 0, char cv = 'A') : Superb(h), ch(cv) {}
//		void Speak() const {
//			cout << "I am a magnificent class!!!\n";
//		}
//		void Say() const {
//			cout << "I hold the character " << ch <<
//			     " and the integer "  << Value() << "!\n";
//		}
//};
//
//Grand * GetOne();
//int main() {
//	srand(time(0));
//	Grand * pg;
//	Superb * ps;
//	for (int i = 0; i < 5; i++) {
//		pg = GetOne();
//		cout << "Now processing type " << typeid(*pg).name() << ".\n";
//		pg->Speak();
//		if( ps = dynamic_cast<Superb *>(pg))
//			ps->Say();
//		if (typeid(Magnificent) == typeid(*pg))
//			cout << "Yes, you're really magnificent.\n";
//	}
//	// std::cin.get();
//	return 0;
//}
//
//Grand * GetOne() {
//	Grand * p;
//
//	switch( rand() % 3) {
//		case 0:
//			p = new Grand(rand() % 100);
//			break;
//		case 1:
//			p = new Superb(rand() % 100);
//			break;
//		case 2:
//			p = new Magnificent(rand() % 100, 'A' + rand() % 26);
//			break;
//	}
//	return p;
//}


//// constcast.cpp -- using const_cast<>														15-19
//
//#include <iostream>
//using std::cout;
//using std::endl;
//
//void change(const int * pt, int n);
//
//int main() {
//	int pop1 = 38383;
//	const int pop2 = 2000;
//
//	cout << "pop1, pop2: " << pop1 << ", " << pop2 << endl;
//	change(&pop1, -103);
//	change(&pop2, -103);
//	cout << "pop1, pop2: " << pop1 << ", " << pop2 << endl;
//	// std::cin.get();
//	return 0;
//}
//
//void change(const int * pt, int n) {
//	int * pc;
//
//	pc = const_cast<int *>(pt);
//	*pc += n;
//
//}



/******************************************************************ch16  string类和标准模板库****************************************************************/

//// str1.cpp -- introducing the string class													16-1
//
//#include <iostream>
//#include <string>
//// using string constructors
//
//int main() {
//	using namespace std;
//	string one("Lottery Winner!");     // ctor #1
//	cout << one << endl;               // overloaded <<
//	string two(20, '$');               // ctor #2
//	cout << two << endl;
//	string three(one);                 // ctor #3
//	cout << three << endl;
//	one += " Oops!";                   // overloaded +=
//	cout << one << endl;
//	two = "Sorry! That was ";
//	three[0] = 'P';
//	string four;                       // ctor #4
//	four = two + three;                // overloaded +, =
//	cout << four << endl;
//	char alls[] = "All's well that ends well";
//	string five(alls,20);              // ctor #5
//	cout << five << "!\n";
//	string six(alls+6, alls + 10);     // ctor #6
//	cout << six  << ", ";
//	string seven(&five[6], &five[10]); // ctor #6 again
//	cout << seven << "...\n";
//	string eight(four, 7, 16);         // ctor #7
//	cout << eight << " in motion!" << endl;
//	// std::cin.get();
//	return 0;
//}


//// strfile.cpp -- read strings from a file													16-2
//
//#include <iostream>
//#include <fstream>
//#include <string>
//#include <cstdlib>
//int main() {
//	using namespace std;
//	ifstream fin;
//	fin.open("tobuy.txt");
//	if (fin.is_open() == false) {
//		cerr << "Can't open file. Bye.\n";
//		exit(EXIT_FAILURE);
//	}
//	string item;
//	int count = 0;
//
//	getline(fin, item, ':');
//	while (fin) { // while input is good
//		++count;
//		cout << count <<": " << item << endl;
//		getline(fin, item,':');
//	}
//	cout << "Done\n";
//	fin.close();
//	// std::cin.get();
//	// std::cin.get();
//	return 0;
//}


//// hangman.cpp -- some string methods															16-3
//
//#include <iostream>
//#include <string>
//#include <cstdlib>
//#include <ctime>
//#include <cctype>
//using std::string;
//const int NUM = 26;
//const string wordlist[NUM] = {"apiary", "beetle", "cereal",
//                              "danger", "ensign", "florid", "garage", "health", "insult",
//                              "jackal", "keeper", "loaner", "manage", "nonce", "onset",
//                              "plaid", "quilt", "remote", "stolid", "train", "useful",
//                              "valid", "whence", "xenon", "yearn", "zippy"
//                             };
//
//int main() {
//	using std::cout;
//	using std::cin;
//	using std::tolower;
//	using std::endl;
//
//	std::srand(std::time(0));
//	char play;
//	cout << "Will you play a word game? <y/n> ";
//	cin >> play;
//	play = tolower(play);
//	while (play == 'y') {
//		string target = wordlist[std::rand() % NUM];
//		int length = target.length();
//		string attempt(length, '-');
//		string badchars;
//		int guesses = 6;
//		cout << "Guess my secret word. It has " << length
//		     << " letters, and you guess\n"
//		     << "one letter at a time. You get " << guesses
//		     << " wrong guesses.\n";
//		cout << "Your word: " << attempt << endl;
//		while (guesses > 0 && attempt != target) {
//			char letter;
//			cout << "Guess a letter: ";
//			cin >> letter;
//			if (badchars.find(letter) != string::npos
//			        || attempt.find(letter) != string::npos) {
//				cout << "You already guessed that. Try again.\n";
//				continue;
//			}
//			int loc = target.find(letter);
//			if (loc == string::npos) {
//				cout << "Oh, bad guess!\n";
//				--guesses;
//				badchars += letter; // add to string
//			} else {
//				cout << "Good guess!\n";
//				attempt[loc]=letter;
//				// check if letter appears again
//				loc = target.find(letter, loc + 1);
//				while (loc != string::npos) {
//					attempt[loc]=letter;
//					loc = target.find(letter, loc + 1);
//				}
//			}
//			cout << "Your word: " << attempt << endl;
//			if (attempt != target) {
//				if (badchars.length() > 0)
//					cout << "Bad choices: " << badchars << endl;
//				cout << guesses << " bad guesses left\n";
//			}
//		}
//		if (guesses > 0)
//			cout << "That's right!\n";
//		else
//			cout << "Sorry, the word is " << target << ".\n";
//
//		cout << "Will you play another? <y/n> ";
//		cin >> play;
//		play = tolower(play);
//	}
//
//	cout << "Bye\n";
//
//	return 0;
//}


//// str2.cpp -- capacity() and reserve()														16-4
//
//#include <iostream>
//#include <string>
//int main() {
//	using namespace std;
//	string empty;
//	string small = "bit";
//	string larger = "Elephants are a girl's best friend";
//	cout << "Sizes:\n";
//	cout << "\tempty: " << empty.size() << endl;
//	cout << "\tsmall: " << small.size() << endl;
//	cout << "\tlarger: " << larger.size() << endl;
//	cout << "Capacities:\n";
//	cout << "\tempty: " << empty.capacity() << endl;
//	cout << "\tsmall: " << small.capacity() << endl;
//	cout << "\tlarger: " << larger.capacity() << endl;
//	empty.reserve(50);
//	cout << "Capacity after empty.reserve(50): "
//	     << empty.capacity() << endl;
//	// cin.get();
//	return 0;
//}


//// smrtptrs.cpp -- using three kinds of smart pointers										16-5
//
//#include <iostream>
//#include <string>
//#include <memory>
//
//class Report {
//	private:
//		std::string str;
//	public:
//		Report(const std::string s) : str(s) {
//			std::cout << "Object created!\n";
//		}
//		~Report() {
//			std::cout << "Object deleted!\n";
//		}
//		void comment() const {
//			std::cout << str << "\n";
//		}
//};
//
//int main() {
//	{
//		std::auto_ptr<Report> ps (new Report("using auto_ptr"));
//		ps->comment();   // use -> to invoke a member function
//	}
//	{
//		std::shared_ptr<Report> ps (new Report("using shared_ptr"));
//		ps->comment();
//	}
//	{
//		std::unique_ptr<Report> ps (new Report("using unique_ptr"));
//		ps->comment();
//	}
//	// std::cin.get();
//	return 0;
//}


//// fowl.cpp  -- auto_ptr a poor choice														16-6
//
//#include <iostream>
//#include <string>
//#include <memory>
//
//int main() {
//	using namespace std;
//	auto_ptr<string> films[5] = {
//		auto_ptr<string> (new string("Fowl Balls")),
//		auto_ptr<string> (new string("Duck Walks")),
//		auto_ptr<string> (new string("Chicken Runs")),
//		auto_ptr<string> (new string("Turkey Errors")),
//		auto_ptr<string> (new string("Goose Eggs"))
//	};
//	auto_ptr<string> pwin;
//	pwin = films[2];   // films[2] loses ownership
//
//	cout << "The nominees for best avian baseball film are\n";
//	for (int i = 0; i < 5; i++)
//		cout << *films[i] << endl;
//	cout << "The winner is " << *pwin << "!\n";
//	// cin.get();
//	return 0;
//}


//// vect1.cpp -- introducing the vector template												16-7
//
//#include <iostream>
//#include <string>
//#include <vector>
//
//const int NUM = 5;
//int main() {
//	using std::vector;
//	using std::string;
//	using std::cin;
//	using std::cout;
//	using std::endl;
//
//	vector<int> ratings(NUM);
//	vector<string> titles(NUM);
//	cout << "You will do exactly as told. You will enter\n"
//	     << NUM << " book titles and your ratings (0-10).\n";
//	int i;
//	for (i = 0; i < NUM; i++) {
//		cout << "Enter title #" << i + 1 << ": ";
//		getline(cin,titles[i]);
//		cout << "Enter your rating (0-10): ";
//		cin >> ratings[i];
//		cin.get();
//	}
//	cout << "Thank you. You entered the following:\n"
//	     << "Rating\tBook\n";
//	for (i = 0; i < NUM; i++) {
//		cout << ratings[i] << "\t" << titles[i] << endl;
//	}
//	// cin.get();
//
//	return 0;
//}


//// vect2.cpp -- methods and iterators													16-8
//
//#include <iostream>
//#include <string>
//#include <vector>
//
//struct Review {
//	std::string title;
//	int rating;
//};
//bool FillReview(Review & rr);
//void ShowReview(const Review & rr);
//
//int main() {
//	using std::cout;
//	using std::vector;
//	vector<Review> books;
//	Review temp;
//	while (FillReview(temp))
//		books.push_back(temp);
//	int num = books.size();
//	if (num > 0) {
//		cout << "Thank you. You entered the following:\n"
//		     << "Rating\tBook\n";
//		for (int i = 0; i < num; i++)
//			ShowReview(books[i]);
//		cout << "Reprising:\n"
//		     << "Rating\tBook\n";
//		vector<Review>::iterator pr;
//		for (pr = books.begin(); pr != books.end(); pr++)
//			ShowReview(*pr);
//		vector <Review> oldlist(books);     // copy constructor used
//		if (num > 3) {
//			// remove 2 items
//			books.erase(books.begin() + 1, books.begin() + 3);
//			cout << "After erasure:\n";
//			for (pr = books.begin(); pr != books.end(); pr++)
//				ShowReview(*pr);
//			// insert 1 item
//			books.insert(books.begin(), oldlist.begin() + 1,
//			             oldlist.begin() + 2);
//			cout << "After insertion:\n";
//			for (pr = books.begin(); pr != books.end(); pr++)
//				ShowReview(*pr);
//		}
//		books.swap(oldlist);
//		cout << "Swapping oldlist with books:\n";
//		for (pr = books.begin(); pr != books.end(); pr++)
//			ShowReview(*pr);
//	} else
//		cout << "Nothing entered, nothing gained.\n";
//	// std::cin.get();
//	return 0;
//}
//
//bool FillReview(Review & rr) {
//	std::cout << "Enter book title (quit to quit): ";
//	std::getline(std::cin,rr.title);
//	if (rr.title == "quit")
//		return false;
//	std::cout << "Enter book rating: ";
//	std::cin >> rr.rating;
//	if (!std::cin)
//		return false;
//	// get rid of rest of input line
//	while (std::cin.get() != '\n')
//		continue;
//	return true;
//}
//
//void ShowReview(const Review & rr) {
//	std::cout << rr.rating << "\t" << rr.title << std::endl;
//}


//// vect3.cpp -- using STL functions															16-9
//
//#include <iostream>
//#include <string>
//#include <vector>
//#include <algorithm>
//
//struct Review {
//	std::string title;
//	int rating;
//};
//
//bool operator<(const Review & r1, const Review & r2);
//bool worseThan(const Review & r1, const Review & r2);
//bool FillReview(Review & rr);
//void ShowReview(const Review & rr);
//int main() {
//	using namespace std;
//
//	vector<Review> books;
//	Review temp;
//	while (FillReview(temp))
//		books.push_back(temp);
//	if (books.size() > 0) {
//		cout << "Thank you. You entered the following "
//		     << books.size() << " ratings:\n"
//		     << "Rating\tBook\n";
//		for_each(books.begin(), books.end(), ShowReview);
//
//		sort(books.begin(), books.end());
//		cout << "Sorted by title:\nRating\tBook\n";
//		for_each(books.begin(), books.end(), ShowReview);
//
//		sort(books.begin(), books.end(), worseThan);
//		cout << "Sorted by rating:\nRating\tBook\n";
//		for_each(books.begin(), books.end(), ShowReview);
//
//		random_shuffle(books.begin(), books.end());
//		cout << "After shuffling:\nRating\tBook\n";
//		for_each(books.begin(), books.end(), ShowReview);
//	} else
//		cout << "No entries. ";
//	cout << "Bye.\n";
//	// cin.get();
//	return 0;
//}
//
//bool operator<(const Review & r1, const Review & r2) {
//	if (r1.title < r2.title)
//		return true;
//	else if (r1.title == r2.title && r1.rating < r2.rating)
//		return true;
//	else
//		return false;
//}
//
//bool worseThan(const Review & r1, const Review & r2) {
//	if (r1.rating < r2.rating)
//		return true;
//	else
//		return false;
//}
//
//bool FillReview(Review & rr) {
//	std::cout << "Enter book title (quit to quit): ";
//	std::getline(std::cin,rr.title);
//	if (rr.title == "quit")
//		return false;
//	std::cout << "Enter book rating: ";
//	std::cin >> rr.rating;
//	if (!std::cin)
//		return false;
//	// get rid of rest of input line
//	while (std::cin.get() != '\n')
//		continue;
//	return true;
//}
//
//void ShowReview(const Review & rr) {
//	std::cout << rr.rating << "\t" << rr.title << std::endl;
//}


//// copyit.cpp -- copy() and iterators														16-10
//
//#include <iostream>
//#include <iterator>
//#include <vector>
//
//int main() {
//	using namespace std;
//
//	int casts[10] = {6, 7, 2, 9 ,4 , 11, 8, 7, 10, 5};
//	vector<int> dice(10);
//	// copy from array to vector
//	copy(casts, casts + 10, dice.begin());
//	cout << "Let the dice be cast!\n";
//	// create an ostream iterator
//	ostream_iterator<int, char> out_iter(cout, " ");
//	// copy from vector to output
//	copy(dice.begin(), dice.end(), out_iter);
//	cout << endl;
//	cout <<"Implicit use of reverse iterator.\n";
//	copy(dice.rbegin(), dice.rend(), out_iter);
//	cout << endl;
//	cout <<"Explicit use of reverse iterator.\n";
//	// vector<int>::reverse_iterator ri;  // use if auto doesn't work
//	for (auto ri = dice.rbegin(); ri != dice.rend(); ++ri)
//		cout << *ri << ' ';
//	cout << endl;
//	// cin.get();
//	return 0;
//}


//// inserts.cpp -- copy() and insert iterators												16-11
//
//#include <iostream>
//#include <string>
//#include <iterator>
//#include <vector>
//#include <algorithm>
//
//void output(const std::string & s) {
//	std::cout << s << " ";
//}
//
//int main() {
//	using namespace std;
//	string s1[4] = {"fine", "fish", "fashion", "fate"};
//	string s2[2] = {"busy", "bats"};
//	string s3[2] = {"silly", "singers"};
//	vector<string> words(4);
//	copy(s1, s1 + 4, words.begin());
//	for_each(words.begin(), words.end(), output);
//	cout << endl;
//
//// construct anonymous back_insert_iterator object
//	copy(s2, s2 + 2, back_insert_iterator<vector<string> >(words));
//	for_each(words.begin(), words.end(), output);
//	cout << endl;
//
//// construct anonymous insert_iterator object
//	copy(s3, s3 + 2, insert_iterator<vector<string> >(words, words.begin()));
//	for_each(words.begin(), words.end(), output);
//	cout << endl;
//	// cin.get();
//	return 0;
//}


//// list.cpp -- using a list																	16-12
//
//#include <iostream>
//#include <list>
//#include <iterator>
//#include <algorithm>
//
//void outint(int n) {
//	std::cout << n << " ";
//}
//
//int main() {
//	using namespace std;
//	list<int> one(5, 2); // list of 5 2s
//	int stuff[5] = {1,2,4,8, 6};
//	list<int> two;
//	two.insert(two.begin(),stuff, stuff + 5 );
//	int more[6] = {6, 4, 2, 4, 6, 5};
//	list<int> three(two);
//	three.insert(three.end(), more, more + 6);
//
//	cout << "List one: ";
//	for_each(one.begin(),one.end(), outint);
//	cout << endl << "List two: ";
//	for_each(two.begin(), two.end(), outint);
//	cout << endl << "List three: ";
//	for_each(three.begin(), three.end(), outint);
//	three.remove(2);
//	cout << endl << "List three minus 2s: ";
//	for_each(three.begin(), three.end(), outint);
//	three.splice(three.begin(), one);
//	cout << endl << "List three after splice: ";
//	for_each(three.begin(), three.end(), outint);
//	cout << endl << "List one: ";
//	for_each(one.begin(), one.end(), outint);
//	three.unique();
//	cout << endl << "List three after unique: ";
//	for_each(three.begin(), three.end(), outint);
//	three.sort();
//	three.unique();
//	cout << endl << "List three after sort & unique: ";
//	for_each(three.begin(), three.end(), outint);
//	two.sort();
//	three.merge(two);
//	cout << endl << "Sorted two merged into three: ";
//	for_each(three.begin(), three.end(), outint);
//	cout << endl;
//	// cin.get();
//
//	return 0;
//}


//// setops.cpp -- some set operations														16-13
//
//#include <iostream>
//#include <string>
//#include <set>
//#include <algorithm>
//#include <iterator>
//
//int main() {
//	using namespace std;
//	const int N = 6;
//	string s1[N] = {"buffoon", "thinkers", "for", "heavy", "can", "for"};
//	string s2[N] = {"metal", "any", "food", "elegant", "deliver","for"};
//
//	set<string> A(s1, s1 + N);
//	set<string> B(s2, s2 + N);
//
//	ostream_iterator<string, char> out(cout, " ");
//	cout << "Set A: ";
//	copy(A.begin(), A.end(), out);
//	cout << endl;
//	cout << "Set B: ";
//	copy(B.begin(), B.end(), out);
//	cout << endl;
//
//	cout << "Union of A and B:\n";
//	set_union(A.begin(), A.end(), B.begin(), B.end(), out);
//	cout << endl;
//
//	cout << "Intersection of A and B:\n";
//	set_intersection(A.begin(), A.end(), B.begin(), B.end(), out);
//	cout << endl;
//
//	cout << "Difference of A and B:\n";
//	set_difference(A.begin(), A.end(), B.begin(), B.end(), out);
//	cout << endl;
//
//	set<string> C;
//	cout << "Set C:\n";
//	set_union(A.begin(), A.end(), B.begin(), B.end(),
//	          insert_iterator<set<string> >(C, C.begin()));
//	copy(C.begin(), C.end(), out);
//	cout << endl;
//
//	string s3("grungy");
//	C.insert(s3);
//	cout << "Set C after insertion:\n";
//	copy(C.begin(), C.end(),out);
//	cout << endl;
//
//	cout << "Showing a range:\n";
//	copy(C.lower_bound("ghost"),C.upper_bound("spook"), out);
//	cout << endl;
//	// cin.get();
//	return 0;
//}


//// multmap.cpp -- use a multimap															16-14
//
//#include <iostream>
//#include <string>
//#include <map>
//#include <algorithm>
//
//typedef int KeyType;
//typedef std::pair<const KeyType, std::string> Pair;
//typedef std::multimap<KeyType, std::string> MapCode;
//
//int main() {
//	using namespace std;
//	MapCode codes;
//
//	codes.insert(Pair(415, "San Francisco"));
//	codes.insert(Pair(510, "Oakland"));
//	codes.insert(Pair(718, "Brooklyn"));
//	codes.insert(Pair(718, "Staten Island"));
//	codes.insert(Pair(415, "San Rafael"));
//	codes.insert(Pair(510, "Berkeley"));
//
//	cout << "Number of cities with area code 415: "
//	     << codes.count(415) << endl;
//	cout << "Number of cities with area code 718: "
//	     << codes.count(718) << endl;
//	cout << "Number of cities with area code 510: "
//	     << codes.count(510) << endl;
//	cout << "Area Code   City\n";
//	MapCode::iterator it;
//	for (it = codes.begin(); it != codes.end(); ++it)
//		cout << "    " << (*it).first << "     "
//		     << (*it).second    << endl;
//
////	pair<MapCode::iterator, MapCode::iterator>
//	auto range
//	    = codes.equal_range(718);
//	cout << "Cities with area code 718:\n";
//	for (it = range.first; it != range.second; ++it)
//		cout <<  (*it).second    << endl;
//	// cin.get();
//	return 0;
//}


//// functor.cpp -- using a functor															16-15
//
//#include <iostream>
//#include <list>
//#include <iterator>
//#include <algorithm>
//
//template<class T>  // functor class defines operator()()
//class TooBig {
//	private:
//		T cutoff;
//	public:
//		TooBig(const T & t) : cutoff(t) {}
//		bool operator()(const T & v) {
//			return v > cutoff;
//		}
//};
//
//void outint(int n) {
//	std::cout << n << " ";
//}
//
//int main() {
//	using std::list;
//	using std::cout;
//	using std::endl;
//	using std::for_each;
//	using std::remove_if;
//
//	TooBig<int> f100(100); // limit = 100
//	int vals[10] = {50, 100, 90, 180, 60, 210, 415, 88, 188, 201};
//	list<int> yadayada(vals, vals + 10); // range constructor
//	list<int> etcetera(vals, vals + 10);
//
//// C++0x can use the following instead
////  list<int> yadayada = {50, 100, 90, 180, 60, 210, 415, 88, 188, 201};
////  list<int> etcetera {50, 100, 90, 180, 60, 210, 415, 88, 188, 201};
//
//	cout << "Original lists:\n";
//	for_each(yadayada.begin(), yadayada.end(), outint);
//	cout << endl;
//	for_each(etcetera.begin(), etcetera.end(), outint);
//	cout << endl;
//	yadayada.remove_if(f100);               // use a named function object
//	etcetera.remove_if(TooBig<int>(200));   // construct a function object
//	cout <<"Trimmed lists:\n";
//	for_each(yadayada.begin(), yadayada.end(), outint);
//	cout << endl;
//	for_each(etcetera.begin(), etcetera.end(), outint);
//	cout << endl;
//	// std::cin.get();
//	return 0;
//}


//// funadap.cpp -- using function adapters													16-16
//
//#include <iostream>
//#include <vector>
//#include <iterator>
//#include <algorithm>
//#include <functional>
//
//void Show(double);
//const int LIM = 6;
//int main() {
//	using namespace std;
//	double arr1[LIM] = {28, 29, 30, 35, 38, 59};
//	double arr2[LIM] = {63, 65, 69, 75, 80, 99};
//	vector<double> gr8(arr1, arr1 + LIM);
//	vector<double> m8(arr2, arr2 + LIM);
//	cout.setf(ios_base::fixed);
//	cout.precision(1);
//	cout << "gr8:\t";
//	for_each(gr8.begin(), gr8.end(), Show);
//	cout << endl;
//	cout << "m8: \t";
//	for_each(m8.begin(), m8.end(), Show);
//	cout << endl;
//
//	vector<double> sum(LIM);
//	transform(gr8.begin(), gr8.end(), m8.begin(), sum.begin(),
//	          plus<double>());
//	cout << "sum:\t";
//	for_each(sum.begin(), sum.end(), Show);
//	cout << endl;
//
//	vector<double> prod(LIM);
//	transform(gr8.begin(), gr8.end(), prod.begin(),
//	          bind1st(multiplies<double>(), 2.5));
//	cout << "prod:\t";
//	for_each(prod.begin(), prod.end(), Show);
//	cout << endl;
//	// cin.get();
//	return 0;
//}
//
//void Show(double v) {
//	std::cout.width(6);
//	std::cout << v << ' ';
//}


//// strgstl.cpp -- applying the STL to a string										16-17
//
//#include <iostream>
//#include <string>
//#include <algorithm>
//
//int main() {
//	using namespace std;
//	string letters;
//
//	cout << "Enter the letter grouping (quit to quit): ";
//	while (cin >> letters && letters != "quit") {
//		cout << "Permutations of " << letters << endl;
//		sort(letters.begin(), letters.end());
//		cout << letters << endl;
//		while (next_permutation(letters.begin(), letters.end()))
//			cout << letters << endl;
//		cout << "Enter next sequence (quit to quit): ";
//	}
//	cout << "Done.\n";
//	// cin.get();
//	// cin.get();
//	return 0;
//}


//// listrmv.cpp -- applying the STL to a string											16-18
//
//#include <iostream>
//#include <list>
//#include <algorithm>
//
//void Show(int);
//const int LIM = 10;
//int main() {
//	using namespace std;
//	int ar[LIM] = {4, 5, 4, 2, 2, 3, 4, 8, 1, 4};
//	list<int> la(ar, ar + LIM);
//	list<int> lb(la);
//
//	cout << "Original list contents:\n\t";
//	for_each(la.begin(), la.end(), Show);
//	cout << endl;
//	la.remove(4);
//	cout << "After using the remove() method:\n";
//	cout << "la:\t";
//	for_each(la.begin(), la.end(), Show);
//	cout << endl;
//	list<int>::iterator last;
//	last = remove(lb.begin(), lb.end(), 4);
//	cout << "After using the remove() function:\n";
//	cout << "lb:\t";
//	for_each(lb.begin(), lb.end(), Show);
//	cout << endl;
//	lb.erase(last, lb.end());
//	cout << "After using the erase() method:\n";
//	cout << "lb:\t";
//	for_each(lb.begin(), lb.end(), Show);
//	cout << endl;
//	// cin.get();
//	return 0;
//}
//
//void Show(int v) {
//	std::cout << v << ' ';
//}


////usealgo.cpp -- using several STL elements												16-19
//
//#include <iostream>
//#include <string>
//#include <vector>
//#include <set>
//#include <map>
//#include <iterator>
//#include <algorithm>
//#include <cctype>
//using namespace std;
//
//char toLower(char ch) { return tolower(ch); }
//string & ToLower(string & st);
//void display(const string & s);
//
//int main()
//{
//    vector<string> words;
//    cout << "Enter words (enter quit to quit):\n";
//    string input;
//    while (cin >> input && input != "quit")
//        words.push_back(input);
//
//    cout << "You entered the following words:\n";
//    for_each(words.begin(), words.end(), display);
//    cout << endl;
//
//    // place words in set, converting to lowercase
//    set<string> wordset;
//    transform(words.begin(), words.end(),
//        insert_iterator<set<string> > (wordset, wordset.begin()),
//        ToLower);
//    cout << "\nAlphabetic list of words:\n";
//    for_each(wordset.begin(), wordset.end(), display);
//    cout << endl;
//
//    // place word and frequency in map
//    map<string, int> wordmap;
//    set<string>::iterator si;
//    for (si = wordset.begin(); si != wordset.end(); si++)
//        wordmap[*si] = count(words.begin(), words.end(), *si);
//
//    // display map contents
//    cout << "\nWord frequency:\n";
//    for (si = wordset.begin(); si != wordset.end(); si++)
//        cout << *si << ": " << wordmap[*si] << endl;
//    // cin.get();
//    // cin.get();
//    return 0;
//}
//
//string & ToLower(string & st)
//{
//    transform(st.begin(), st.end(), st.begin(), toLower);
//    return st;
//}
//
//void display(const string & s)
//{
//    cout << s << " ";
//}


//// valvect.cpp -- comparing vector and valarray											16-20
//
//#include <iostream>
//#include <valarray>
//#include <vector>
//#include <algorithm>
//
//int main() {
//	using namespace std;
//	vector<double> data;
//	double temp;
//
//	cout << "Enter numbers (<=0 to quit):\n";
//	while (cin >> temp && temp > 0)
//		data.push_back(temp);
//	sort(data.begin(), data.end());
//	int size = data.size();
//	valarray<double> numbers(size);
//	int i;
//	for (i = 0; i < size; i++)
//		numbers[i] = data[i];
//	valarray<double> sq_rts(size);
//	sq_rts = sqrt(numbers);
//	valarray<double> results(size);
//	results = numbers + 2.0 * sq_rts;
//	cout.setf(ios_base::fixed);
//	cout.precision(4);
//	for (i = 0; i < size; i++) {
//		cout.width(8);
//		cout << numbers[i] << ": ";
//		cout.width(8);
//		cout << results[i] << endl;
//	}
//	cout << "done\n";
//	// cin.get();
//	// cin.get();
//
//	return 0;
//}


//// vslice.cpp -- using valarray slices													16-21
//
//#include <iostream>
//#include <valarray>
//#include <cstdlib>
//
//const int SIZE = 12;
//typedef std::valarray<int> vint;     // simplify declarations
//void show(const vint & v, int cols);
//int main()
//{
//    using std::slice;                // from <valarray>
//    using std::cout;
//    vint valint(SIZE);               // think of as 4 rows of 3
//
//    int i;
//    for (i = 0; i < SIZE; ++i)
//        valint[i] = std::rand() % 10;
//    cout << "Original array:\n";
//    show(valint, 3);                 // show in 3 columns
//    vint vcol(valint[slice(1,4,3)]); // extract 2nd column
//    cout << "Second column:\n";
//    show(vcol, 1);                   // show in 1 column
//    vint vrow(valint[slice(3,3,1)]); // extract 2nd row
//    cout << "Second row:\n";
//    show(vrow, 3);
//    valint[slice(2,4,3)]  = 10;      // assign to 2nd column
//    cout << "Set last column to 10:\n";
//    show(valint, 3);
//    cout << "Set first column to sum of next two:\n";
//    // + not defined for slices, so convert to valarray<int>
//    valint[slice(0,4,3)]  = vint(valint[slice(1,4,3)])
//                               + vint(valint[slice(2,4,3)]);
//    show(valint, 3);
//    // std::cin.get();
//    return 0;
//}
//
//void show(const vint & v, int cols)
//{
//    using std::cout;
//    using std::endl;
//
//    int lim = v.size();
//    for (int i = 0; i < lim; ++i)
//    {
//        cout.width(3);
//        cout << v[i];
//        if (i % cols == cols - 1)
//            cout << endl;
//        else
//            cout << ' ';
//    }
//    if (lim % cols != 0)
//        cout << endl;
//}


//// ilist.cpp  -- use initializer_list													16-22
//
//#include <iostream>
//#include <initializer_list>
//
//double sum(std::initializer_list<double> il);
//double average(const std::initializer_list<double> & ril);
//
//int main() {
//	using std::cout;
//
//	cout << "List 1: sum = " << sum({2,3,4})
//	     <<", ave = " << average({2,3,4}) << '\n';
//	std::initializer_list<double> dl = {1.1, 2.2, 3.3, 4.4, 5.5};
//	cout << "List 2: sum = " << sum(dl)
//	     <<", ave = " << average(dl) << '\n';
//	dl = {16.0, 25.0, 36.0, 40.0, 64.0};
//	cout << "List 3: sum = " << sum(dl)
//	     <<", ave = " << average(dl) << '\n';
//	// std::cin.get();
//	return 0;
//}
//
//double sum(std::initializer_list<double> il) {
//	double tot = 0;
//	for (auto p = il.begin(); p !=il.end(); p++)
//		tot += *p;
//	return tot;
//}
//
//double average(const std::initializer_list<double> & ril) {
//	double tot = 0;
//	int n = ril.size();
//	double ave = 0.0;
//
//	if (n > 0) {
//		for (auto p = ril.begin(); p !=ril.end(); p++)
//			tot += *p;
//		ave = tot / n;
//	}
//	return ave;
//}











//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



//#include <iostream>
//#include <string>
//#include <cstring>
//#include <set>
//#include <map>
//#include <iterator>
//#include <vector>
//#include <fstream>
//#include <ctime>
//#include <list>
//#include <queue>
//#include <memory>
//
//using namespace std;
//
//// practice 1
//bool Palindrome(string input) {
//	string::iterator forware = input.begin();
//	string::reverse_iterator backware = input.rbegin();
//	int input_length = input.length();
//
//	for (int i = 0; i < input_length / 2; i++) {
//		if (*forware == *backware) {
//			forware++;
//			backware++;
//		} else
//			return false;
//	}
//
//	return true;
//}
//void p16_1(void) {
//	string input;
//	cout << "Enter the string: ";
//	getline(cin, input);
//
//	if (Palindrome(input)) {
//		cout << input << " is a palindrome." << endl;
//	} else {
//		cout << input << " is not a palindrome." << endl;
//	}
//}
//
//
//// practice 2
//void p16_2(void) {
//	string input;
//	string temp;
//
//	cout << "Enter string: ";
//	getline(cin, input);
//	temp = input;
//
//	for (string::iterator it = input.begin(); it != input.end();) {
//		if (!isalpha(*it)) {
//			it = input.erase(it);
//			continue;
//		} else {
//			*it = tolower(*it);
//			it++;
//		}
//	}
//
//	if (Palindrome(input)) {
//		cout << input << " is a palindrome." << endl;
//	} else {
//		cout << input << " is not a palindrome." << endl;
//	}
//}
//
//
//// practice 3
//const string FileName = "word.txt";
//void p16_3(void) {
//	vector<string> wordlist;
//	ifstream in;
//	in.open(FileName.c_str());
//	string inword;
//
//
//	while (in >> inword) {
//		wordlist.push_back(inword);
//	}
//
//	srand(time(0));
//	char play;
//	cout << "Will you play a word game? <y/n> ";
//	cin >> play;
//	play = tolower(play);
//	while (play == 'y') {
//		string target = wordlist[rand() % wordlist.size()];
//		int length = target.length();
//		string attemp(length, '-');
//		string badchars;
//		int guesses = 6;
//		cout << "Guess my scret word. It has " << length
//		     << " letters, and you guess\n"
//		     << "one letter at a time. You get " << guesses
//		     << " wrong guesses.\n";
//		cout << "Your word: " << attemp << endl;
//		while (guesses > 0 && attemp != target) {
//			char letter;
//			cout << "Guess a letter: ";
//			cin >> letter;
//			if (badchars.find(letter) != string::npos
//			        || attemp.find(letter) != string::npos) {
//				cout << "You already gueesed that. Try again.\n";
//				continue;
//			}
//
//			int loc = target.find(letter);
//			if (loc == string::npos) {
//				cout << "Oh, bad guess!\n";
//				--guesses;
//				badchars += letter;
//			} else {
//				cout << "Good guess!\n";
//				attemp[loc] = letter;
//				loc = target.find(letter, loc + 1);
//				while (loc != string::npos) {
//					attemp[loc] = letter;
//					loc = target.find(letter, loc + 1);
//				}
//			}
//
//			cout << "You word: " << attemp << endl;
//
//			if (attemp != target) {
//				if (badchars.length() > 0)
//					cout << "Bad choices: " << badchars << endl;
//				cout << guesses << " bad guesses left\n";
//			}
//		}
//		if (guesses > 0) {
//			cout << "That's right!\n";
//		} else {
//			cout << "Sorry, the word is " << target << ".\n";
//		}
//
//		cout << "Will you play anther? <y/n> ";
//		cin >> play;
//		play = tolower(play);
//	}
//
//	cout << "Bye\n";
//
//	return;
//}
//
//
//// practice 4
//int reduce(long ar[], int n) {
//	list<long> lar(ar, ar + n);
//	lar.sort();
//	lar.unique();
//	int lar_length = 0;
//	for (list<long>::iterator it = lar.begin(); it != lar.end(); it++) {
//		*(ar + lar_length) = *it;
//		lar_length++;
//	}
//
//	for (int i = lar_length; i < n; i++) {
//		*(ar + lar_length) = 0;
//	}
//
//	return lar_length;
//
//}
//void p16_4(void) {
//	long ar[] = { 12, 2, 13, 12, 2, 55, 32, 44, 32, 100, 32, 12 };
//	int ar_length = 12;
//	int reduce_length = 0;
//
//	cout << "original array length: " << ar_length << endl;
//	cout << "original array: ";
//	for (int i = 0; i < ar_length; i++) {
//		cout << ar[i] << " " ;
//	}
//	cout << endl;
//
//	reduce_length = reduce(ar, ar_length);
//	cout << "After reduce, array length: " << reduce_length << endl;
//	cout << "After reduce, array: ";
//	for (int i = 0; i < reduce_length; i++) {
//		cout << ar[i] << " " ;
//	}
//	cout << endl;
//}
//
//
//// practice 5
//template <class T>
//int Treduce(T ar[], int n) {
//	list<T> lar(ar, ar + n);
//	lar.sort();
//	lar.unique();
//	int lar_length = 0;
//	for (list<T>::iterator it = lar.begin(); it != lar.end(); it++) {
//		*(ar + lar_length) = *it;
//		lar_length++;
//	}
//
//	return lar_length;
//}
//void p16_5(void) {
//	// long
//	long ar[] = { 12, 2, 13, 12, 2, 55, 32, 44, 32, 100, 32, 12 };
//	int ar_length = 12;
//	int reduce_length = 0;
//
//	cout << "original array length: " << ar_length << endl;
//	cout << "original array: ";
//	for (int i = 0; i < ar_length; i++) {
//		cout << ar[i] << " ";
//	}
//	cout << endl;
//
//	reduce_length = Treduce(ar, ar_length);
//	cout << "After reduce, array length: " << reduce_length << endl;
//	cout << "After reduce, array: ";
//	for (int i = 0; i < reduce_length; i++) {
//		cout << ar[i] << " ";
//	}
//	cout << endl;
//
//	cout << endl;
//	// string
//	string sar[] = { "hello", "jimmy", "array", "hehe", "jimmy", "hehe" };
//	int sar_length = 6;
//	cout << "original string array length: " << sar_length << endl;
//	cout << "original string array: ";
//	for (int i = 0; i < sar_length; i++) {
//		cout << sar[i] << " ";
//	}
//	cout << endl;
//
//	reduce_length = Treduce(sar, sar_length);
//	cout << "After reduce, array length: " << reduce_length << endl;
//	cout << "After reduce, array: ";
//	for (int i = 0; i < reduce_length; i++) {
//		cout << sar[i] << " ";
//	}
//	cout << endl;
//}
//
//
//// practice 6
//class Customer {
//	private:
//		long arrive;
//		int processtime;
//	public:
//		Customer() {
//			arrive = processtime = 0;
//		}
//		void set(long when) {
//			processtime = rand() % 3 + 1;
//			arrive = when;
//		}
//		long when() const {
//			return arrive;
//		}
//		int ptime() const {
//			return processtime;
//		}
//};
//const int MIN_PER_HR = 60;
//bool newcustomer(double x) {
//	return (rand() * x / RAND_MAX < 1);
//}
//void p16_6(void) {
//	srand(time(0));
//	cout << "Case study: Band of Heather Automatic Teller\n";
//	cout << "Enter maximum size of queue: ";
//	int qs;
//	cin >> qs;
//	queue<Customer> line;
//
//	cout << "Enter the number of simulation hours: ";
//	int hours;
//	cin >> hours;
//	long cyclelimit = MIN_PER_HR * hours;
//
//	cout << "Enter the average number of customer per hours: ";
//	double perhour;
//	cin >> perhour;
//	double min_per_cust;
//	min_per_cust = MIN_PER_HR / perhour;
//
//	Customer temp;
//	long turnaways = 0;
//	long customers = 0;
//	long served = 0;
//	long sum_line = 0;
//	int wait_time = 0;
//	long line_wait = 0;
//
//	for (int cycle = 0; cycle < cyclelimit; cycle++) {
//		if (newcustomer(min_per_cust)) {
//			if (qs == line.size())
//				turnaways++;
//			else {
//				customers++;
//				temp.set(cycle);
//				line.push(temp);
//			}
//		}
//		if (wait_time <= 0 && !line.empty()) {
//			temp = line.front();
//			wait_time = temp.ptime();
//			line_wait += cycle - temp.when();
//			served++;
//			line.pop();
//		}
//		if (wait_time > 0) {
//			wait_time--;
//		}
//		sum_line += line.size();
//	}
//
//	if (customers > 0) {
//		cout << "customers accepted: " << customers << endl;
//		cout << "  customers served: " << served << endl;
//		cout << "         turnaways: " << turnaways << endl;
//		cout << "average queue size: ";
//		cout.precision(2);
//		cout.setf(ios_base::fixed, ios_base::floatfield);
//		cout << (double)sum_line / cyclelimit << endl;
//		cout << " average wait time: "
//		     << (double)line_wait / served << " minutes\n";
//	} else
//		cout << "No customers!\n";
//
//	cout << "Done!\n";
//
//	return;
//
//}
//
//
//// practice 7
//vector<int> Lotto(int total, int choice) {
//	vector<int> ar(total);
//	for (int i = 0; i < total; i++) {
//		ar[i] = i + 1;
//	}
//
//	random_shuffle(ar.begin(), ar.end());
//
//	vector<int> car(choice);
//	for (int i = 0; i < choice; i++) {
//		car[i] = ar[i];
//	}
//	sort(car.begin(), car.end());
//	return car;
//}
//void p16_7(void) {
//	srand(time(0));
//	vector<int> winners;
//	winners = Lotto(51, 6);
//	cout << "Winners' number: ";
//	for (size_t i = 0; i < 6; i++) {
//		cout << winners[i] << " ";
//	}
//	cout << endl;
//
//	return;
//}
//
//
//// practice 8
//void p16_8(void) {
//	set<string> Mat_friend;
//	set<string> Pat_friend;
//	set<string> union_friend;
//	string input;
//
//	cout << "Mat friend: ";
//	while (cin >> input) {
//		Mat_friend.insert(input);
//		if (cin.get() == '\n') {
//			break;
//		}
//	}
//	copy(Mat_friend.begin(), Mat_friend.end(), ostream_iterator<string, char>(cout, " "));
//	cout << endl;
//
//	cout << "Pat friend: ";
//	while (cin >> input) {
//		Pat_friend.insert(input);
//		Mat_friend.insert(input);
//		if (cin.get() == '\n') {
//			break;
//		}
//	}
//	copy(Pat_friend.begin(), Pat_friend.end(), ostream_iterator<string, char>(cout, " "));
//	cout << endl;
//
//	set_union(Mat_friend.begin(), Mat_friend.end(), Pat_friend.begin(), Pat_friend.end(), insert_iterator<set<string> >(union_friend, union_friend.begin()));
//
//	cout << "All friends: ";
//	copy(union_friend.begin(), union_friend.end(), ostream_iterator<string, char>(cout, " "));
//	cout << endl;
//}
//
//
//// practice 9
//const long VEC_SIZE = 1000000;  // 这个量级i5-3320M大概用了一分多钟
//void p16_9(void) {
//	cout << "-----start-----" << endl;
//	srand(time(0));
//	vector<int> vi0(VEC_SIZE);
//	for (long i = 0; i < VEC_SIZE; i++) {
//		vi0[i] = rand() % 10000 + 1;
//	}
//
//	vector<int> vi(vi0);
//	list<int> li(vi0.begin(), vi0.end());
//
//	clock_t vector_start = clock();
//	sort(vi.begin(), vi.end());
//	clock_t vector_end = clock();
//
//	clock_t list_start = clock();
//	li.sort();
//	clock_t list_end = clock();
//
//	copy(vi0.begin(), vi0.end(), li.begin());
//	clock_t copy_sort_time_start = clock();
//	copy(li.begin(), li.end(), vi.begin());
//	sort(vi.begin(), vi.end());
//	copy(vi.begin(), vi.end(), li.begin());
//	clock_t copy_sort_time_end = clock();
//
//	cout << "test vector size: " << VEC_SIZE << endl;
//	cout << "vector sort time: " << (double)(vector_end - vector_start) / CLOCKS_PER_SEC << endl;
//	cout << "list sort time: " << (double)(list_end - list_start) / CLOCKS_PER_SEC << endl;
//	cout << "list copy sort time: " << (double)(copy_sort_time_end - copy_sort_time_start) / CLOCKS_PER_SEC << endl;
//	cout << "-----end-----" << endl;
//}
//
//
//// practice 10
//struct Review {
//	string title;
//	int rating;
//	double price;
//};
//bool FillRevice(Review & rr) {
//	cout << "Enter book title (quit to quit): ";
//	getline(cin, rr.title);
//	if (rr.title == "quit") {
//		return false;
//	}
//	cout << "Enter book rating: ";
//	cin >> rr.rating;
//	if (!cin) {
//		return false;
//	}
//
//	cout << "Enter book price: ";
//	cin >> rr.price;
//	if (!cin) {
//		return false;
//	}
//	while (cin.get() != '\n')
//		continue;
//
//	return true;
//}
//void ShowReview(const shared_ptr<Review> & rr) {
//	cout << rr->rating << "\t" << rr->title << "\t" << rr->price << endl;
//}
//bool operator<(const shared_ptr<Review> & r1, const shared_ptr<Review> & r2) {
//	if (r1->title < r2->title) {
//		return true;
//	} else if (r1->title == r2->title && r1->rating < r2->rating)
//		return true;
//	else
//		return false;
//}
//bool worseThan(const shared_ptr<Review> & r1, const shared_ptr<Review> & r2) {
//	if (r1->rating < r2->rating)
//		return true;
//	else
//		return false;
//}
//bool betterThan(const shared_ptr<Review> & r1, const shared_ptr<Review> & r2) {
//	if (r1->rating > r2->rating)
//		return true;
//	else
//		return false;
//}
//bool expensiveThan(const shared_ptr<Review> & r1, const shared_ptr<Review> & r2) {
//	if (r1->price > r2->price)
//		return true;
//	else
//		return false;
//}
//bool cheaperThan(const shared_ptr<Review> & r1, const shared_ptr<Review> & r2) {
//	if (r1->price < r2->price)
//		return true;
//	else
//		return false;
//}
//void p16_10(void) {
//	vector<shared_ptr<Review> > books;
//	Review temp;
//	while (FillRevice(temp)) {
//		shared_ptr<Review> in(new Review(temp));
//		books.push_back(in);
//	}
//	cout << "Enter your choice: " << endl;
//	cout << "0：按原始顺序显示， 1：按字母表顺序显示， 2：按评级升序显示" << endl;
//	cout << "3：按评级降序显示， 4：按价格升序显示  ， 5：按价格降序显示" << endl;
//	cout << "6：退出" << endl;
//	int choice = 0;
//	vector<shared_ptr<Review> > original_books(books.begin(), books.end());
//	while (cin >> choice && choice != 6) {
//		switch (choice) {
//			case 0:
//				copy(original_books.begin(), original_books.end(), books.begin());
//				break;
//
//			case 1:
//				sort(books.begin(), books.end());
//				break;
//
//			case 2:
//				sort(books.begin(), books.end(), worseThan);
//				break;
//
//			case 3:
//				sort(books.begin(), books.end(), betterThan);
//				break;
//
//			case 4:
//				sort(books.begin(), books.end(), cheaperThan);
//				break;
//
//			case 5:
//				sort(books.begin(), books.end(), expensiveThan);
//				break;
//
//			default:
//				break;
//		}
//
//		for_each(books.begin(), books.end(), ShowReview);
//	}
//
//	return;
//}
//
//
//int main(int argc, char ** argv) {
//	p16_10();
//
//	while (cin.get());
//
//	return 0;
//}


/******************************************************************ch17  输入输出和文件****************************************************************/


//// write.cpp -- using cout.write()															17-1
//
//#include <iostream>
//#include <cstring>  // or else string.h
//
//int main()
//{
//    using std::cout;
//    using std::endl;
//    const char * state1 = "Florida";
//    const char * state2 = "Kansas";
//    const char * state3 = "Euphoria";
//    int len = std::strlen(state2);
//    cout << "Increasing loop index:\n";
//    int i;
//    for (i = 1; i <= len; i++)
//    {
//        cout.write(state2,i);
//        cout << endl;
//    }
//
//// concatenate output
//    cout << "Decreasing loop index:\n";
//    for (i = len; i > 0; i--)
//        cout.write(state2,i) << endl;
//
//// exceed string length
//    cout << "Exceeding string length:\n";
//    cout.write(state2, len + 5) << endl;
//    // std::cin.get();
//    return 0;
//}


//// defaults.cpp -- cout default formats														17-2
//
//#include <iostream>
//
//int main() {
//	using std::cout;
//	cout << "12345678901234567890\n";
//	char ch = 'K';
//	int t = 273;
//	cout << ch << ":\n";
//	cout << t << ":\n";
//	cout << -t <<":\n";
//
//	double f1 = 1.200;
//	cout << f1 << ":\n";
//	cout << (f1 + 1.0 / 9.0) << ":\n";
//
//	double f2 = 1.67E2;
//	cout << f2 << ":\n";
//	f2 += 1.0 / 9.0;
//	cout << f2 << ":\n";
//	cout << (f2 * 1.0e4) << ":\n";
//
//
//	double f3 = 2.3e-4;
//	cout << f3 << ":\n";
//	cout << f3 / 10 << ":\n";
//	// std::cin.get();
//	return 0;
//}


//// manip.cpp -- using format manipulators														17-3
//
//#include <iostream>
//int main() {
//	using namespace std;
//	cout << "Enter an integer: ";
//	int n;
//	cin >> n;
//
//	cout << "n     n*n\n";
//	cout << n << "     " << n * n << " (decimal)\n";
//// set to hex mode
//	cout << hex;
//	cout << n << "     ";
//	cout << n * n << " (hexadecimal)\n";
//
//// set to octal mode
//	cout << oct << n << "     " << n * n << " (octal)\n";
//
//// alternative way to call a manipulator
//	dec(cout);
//	cout << n << "     " << n * n << " (decimal)\n";
//	// cin.get();
//	// cin.get();
//	return 0;
//}


//// width.cpp -- using the width method														17-4
//
//#include <iostream>
//
//int main() {
//	using std::cout;
//	int w = cout.width(30);
//	cout << "default field width = " << w << ":\n";
//
//	cout.width(5);
//	cout << "N" <<':';
//	cout.width(8);
//	cout << "N * N" << ":\n";
//
//	for (long i = 1; i <= 100; i *= 10) {
//		cout.width(5);
//		cout << i <<':';
//		cout.width(8);
//		cout << i * i << ":\n";
//	}
//	// std::cin.get();
//	return 0;
//}


//// fill.cpp -- changing fill character for fields												17-5
//
//#include <iostream>
//
//int main()
//{
//    using std::cout;
//    cout.fill('*');
//    const char * staff[2] = { "Waldo Whipsnade", "Wilmarie Wooper"};
//    long bonus[2] = {900, 1350};
//
//    for (int i = 0; i < 2; i++)
//    {
//        cout << staff[i] << ": $";
//        cout.width(7);
//        cout << bonus[i] << "\n";
//    }
//    // std::cin.get();
//    return 0;
//}


//// precise.cpp -- setting the precision															17-6
//
//#include <iostream>
//
//int main()
//{
//    using std::cout;
//    float price1 = 20.40;
//    float price2 = 1.9 + 8.0 / 9.0;
//
//    cout << "\"Furry Friends\" is $" << price1 << "!\n";
//    cout << "\"Fiery Fiends\" is $" << price2 << "!\n";
//
//    cout.precision(2);
//    cout << "\"Furry Friends\" is $" << price1 << "!\n";
//    cout << "\"Fiery Fiends\" is $" << price2 << "!\n";
//	// std::cin.get();
//    return 0;
//}


//// showpt.cpp -- setting the precision, showing trailing point									17-7
//
//#include <iostream>
//
//int main()
//{
//    using std::cout;
//    using std::ios_base;
//
//    float price1 = 20.40;
//    float price2 = 1.9 + 8.0 / 9.0;
//
//    cout.setf(ios_base::showpoint);
//    cout << "\"Furry Friends\" is $" << price1 << "!\n";
//    cout << "\"Fiery Fiends\" is $" << price2 << "!\n";
//
//    cout.precision(2);
//    cout << "\"Furry Friends\" is $" << price1 << "!\n";
//    cout << "\"Fiery Fiends\" is $" << price2 << "!\n";
//	// std::cin.get();
//    return 0;
//}


//// setf.cpp -- using setf() to control formatting												17-8
//
//#include <iostream>
//
//int main()
//{
//    using std::cout;
//    using std::endl;
//    using std::ios_base;
//
//    int temperature = 63;
//
//    cout << "Today's water temperature: ";
//    cout.setf(ios_base::showpos);    // show plus sign
//    cout << temperature << endl;
//
//    cout << "For our programming friends, that's\n";
//    cout << std::hex << temperature << endl; // use hex
//    cout.setf(ios_base::uppercase);  // use uppercase in hex
//    cout.setf(ios_base::showbase);   // use 0X prefix for hex
//    cout << "or\n";
//    cout << temperature << endl;
//    cout << "How " << true << "!  oops -- How ";
//    cout.setf(ios_base::boolalpha);
//    cout << true << "!\n";
//	// std::cin.get();
//    return 0;
//}


//// setf2.cpp -- using setf() with 2 arguments to control formatting								17-9
//
//#include <iostream>
//#include <cmath>
//
//int main() {
//	using namespace std;
//	// use left justification, show the plus sign, show trailing
//	// zeros, with a precision of 3
//	cout.setf(ios_base::left, ios_base::adjustfield);
//	cout.setf(ios_base::showpos);
//	cout.setf(ios_base::showpoint);
//	cout.precision(3);
//	// use e-notation and save old format setting
//	ios_base::fmtflags old = cout.setf(ios_base::scientific,
//	                                   ios_base::floatfield);
//	cout << "Left Justification:\n";
//	long n;
//	for (n = 1; n <= 41; n+= 10) {
//		cout.width(4);
//		cout << n << "|";
//		cout.width(12);
//		cout << sqrt(double(n)) << "|\n";
//	}
//
//	// change to internal justification
//	cout.setf(ios_base::internal, ios_base::adjustfield);
//	// restore default floating-point display style
//	cout.setf(old, ios_base::floatfield);
//
//	cout << "Internal Justification:\n";
//	for (n = 1; n <= 41; n+= 10) {
//		cout.width(4);
//		cout << n << "|";
//		cout.width(12);
//		cout << sqrt(double(n)) << "|\n";
//	}
//
//	// use right justification, fixed notation
//	cout.setf(ios_base::right, ios_base::adjustfield);
//	cout.setf(ios_base::fixed, ios_base::floatfield);
//	cout << "Right Justification:\n";
//	for (n = 1; n <= 41; n+= 10) {
//		cout.width(4);
//		cout << n << "|";
//		cout.width(12);
//		cout << sqrt(double(n)) << "|\n";
//	}
//	// std::cin.get();
//	return 0;
//}


//// iomanip.cpp -- using manipulators from iomanip													17-10
//
//// some systems require explicitly linking the math library
//#include <iostream>
//#include <iomanip>
//#include <cmath>
//
//int main() {
//	using namespace std;
//	// use new standard manipulators
//	cout << fixed << right;
//
//	// use iomanip manipulators
//	cout << setw(6) << "N" << setw(14) << "square root"
//	     << setw(15) << "fourth root\n";
//
//	double root;
//	for (int n = 10; n <=100; n += 10) {
//		root = sqrt(double(n));
//		cout << setw(6) << setfill('.') << n << setfill(' ')
//		     << setw(12) << setprecision(3) << root
//		     << setw(14) << setprecision(4) << sqrt(root)
//		     << endl;
//	}
//	// std::cin.get();
//	return 0;
//}


//// check_it.cpp -- checking for valid input															17-11
//
//#include <iostream>
//
//int main() {
//	using namespace std;
//	cout << "Enter numbers: ";
//
//	int sum = 0;
//	int input;
//	while (cin >> input) {
//		sum += input;
//	}
//
//	cout << "Last value entered = " << input << endl;
//	cout << "Sum = " << sum << endl;
//	/* keeping output window open */
//	/*
//	    cin.clear();
//	    while (cin.get() != '\n')
//	        continue;
//	    cin.get();
//	*/
//	return 0;
//}


//// cinexcp.cpp -- having cin throw an exception													17-12
//
//#include <iostream>
//#include <exception>
//
//int main() {
//	using namespace std;
//	// have failbit cause an exception to be thrown
//	cin.exceptions(ios_base::failbit);
//	cout << "Enter numbers: ";
//	int sum = 0;
//	int input;
//	try {
//		while (cin >> input) {
//			sum += input;
//		}
//	} catch(ios_base::failure & bf) {
//		cout << bf.what() << endl;
//		cout << "O! the horror!\n";
//	}
//
//	cout << "Last value entered = " << input << endl;
//	cout << "Sum = " << sum << endl;
//	/* keeping output window open */
//	/*
//	    cin.clear();
//	    while (cin.get() != '\n')
//	        continue;
//	    cin.get();
//	*/
//
//	return 0;
//}


//// get_fun.cpp -- using get() and getline()															17-13
//
//#include <iostream>
//const int Limit = 255;
//
//int main() {
//	using std::cout;
//	using std::cin;
//	using std::endl;
//
//	char input[Limit];
//
//	cout << "Enter a string for getline() processing:\n";
//	cin.getline(input, Limit, '#');
//	cout << "Here is your input:\n";
//	cout << input << "\nDone with phase 1\n";
//
//	char ch;
//	cin.get(ch);
//	cout << "The next input character is " << ch << endl;
//
//	if (ch != '\n')
//		cin.ignore(Limit, '\n');    // discard rest of line
//
//	cout << "Enter a string for get() processing:\n";
//	cin.get(input, Limit, '#');
//	cout << "Here is your input:\n";
//	cout << input << "\nDone with phase 2\n";
//
//	cin.get(ch);
//	cout << "The next input character is " << ch << endl;
//	/* keeping output window open */
//	/*
//	    cin.clear();
//	    while (cin.get() != '\n')
//	        continue;
//	    cin.get();
//	*/
//	return 0;
//}


//// peeker.cpp -- some istream methods																17-14
//
//#include <iostream>
//
//int main() {
//	using std::cout;
//	using std::cin;
//	using std::endl;
//
////  read and echo input up to a # character
//	char ch;
//
//	while(cin.get(ch)) {        // terminates on EOF
//		if (ch != '#')
//			cout << ch;
//		else {
//			cin.putback(ch);    // reinsert character
//			break;
//		}
//	}
//
//	if (!cin.eof()) {
//		cin.get(ch);
//		cout << endl << ch << " is next input character.\n";
//	} else {
//		cout << "End of file reached.\n";
//		std::exit(0);
//	}
//
//	while(cin.peek() != '#') {  // look ahead
//		cin.get(ch);
//		cout << ch;
//	}
//	if (!cin.eof()) {
//		cin.get(ch);
//		cout << endl << ch << " is next input character.\n";
//	} else
//		cout << "End of file reached.\n";
//// keeping output window open
//	/*
//	    cin.clear();
//	    while (cin.get() != '\n')
//	        continue;
//	    cin.get();
//	*/
//	return 0;
//}


//// truncate.cpp -- using get() to truncate input line, if necessary									17-15
//
//#include <iostream>
//const int SLEN = 10;
//inline void eatline() {
//	while (std::cin.get() != '\n') continue;
//}
//int main() {
//	using std::cin;
//	using std::cout;
//	using std::endl;
//
//	char name[SLEN];
//	char title[SLEN];
//	cout << "Enter your name: ";
//	cin.get(name,SLEN);
//	if (cin.peek() != '\n')
//		cout << "Sorry, we only have enough room for "
//		     << name << endl;
//	eatline();
//	cout << "Dear " << name << ", enter your title: \n";
//	cin.get(title,SLEN);
//	if (cin.peek() != '\n')
//		cout << "We were forced to truncate your title.\n";
//	eatline();
//	cout << " Name: " << name
//	     << "\nTitle: " << title << endl;
//	// cin.get();
//	return 0;
//}


//// fileio.cpp -- saving to a file																17-16
//
//#include <iostream> // not needed for many systems
//#include <fstream>
//#include <string>
//
//int main() {
//	using namespace std;
//	string filename;
//
//	cout << "Enter name for new file: ";
//	cin >> filename;
//
//// create output stream object for new file and call it fout
//	ofstream fout(filename.c_str());
//
//	fout << "For your eyes only!\n";        // write to file
//	cout << "Enter your secret number: ";   // write to screen
//	float secret;
//	cin >> secret;
//	fout << "Your secret number is " << secret << endl;
//	fout.close();           // close file
//
//// create input stream object for new file and call it fin
//	ifstream fin(filename.c_str());
//	cout << "Here are the contents of " << filename << ":\n";
//	char ch;
//	while (fin.get(ch))     // read character from file and
//		cout << ch;         // write it to screen
//	cout << "Done\n";
//	fin.close();
//	// std::cin.get();
//	// std::cin.get();
//	return 0;
//}


//// count.cpp -- counting characters in a list of files												17-17
//
//#include <iostream>
//#include <fstream>
//#include <cstdlib>          // or stdlib.h
//int main(int argc, char * argv[]) {
//	using namespace std;
//	if (argc == 1) {        // quit if no arguments
//		cerr << "Usage: " << argv[0] << " filename[s]\n";
//		exit(EXIT_FAILURE);
//	}
//
//	ifstream fin;              // open stream
//	long count;
//	long total = 0;
//	char ch;
//
//	for (int file = 1; file < argc; file++) {
//		fin.open(argv[file]);  // connect stream to argv[file]
//		if (!fin.is_open()) {
//			cerr << "Could not open " << argv[file] << endl;
//			fin.clear();
//			continue;
//		}
//		count = 0;
//		while (fin.get(ch))
//			count++;
//		cout << count << " characters in " << argv[file] << endl;
//		total += count;
//		fin.clear();           // needed for some implementations
//		fin.close();           // disconnect file
//	}
//	cout << total << " characters in all files\n";
//
//	return 0;
//}


//// append.cpp -- appending information to a file											17-18
//
//#include <iostream>
//#include <fstream>
//#include <string>
//#include <cstdlib>      // (or stdlib.h) for exit()
//
//const char * file = "guests.txt";
//int main() {
//	using namespace std;
//	char ch;
//
//// show initial contents
//	ifstream fin;
//	fin.open(file);
//
//	if (fin.is_open()) {
//		cout << "Here are the current contents of the "
//		     << file << " file:\n";
//		while (fin.get(ch))
//			cout << ch;
//		fin.close();
//	}
//
//// add new names
//	ofstream fout(file, ios::out | ios::app);
//	if (!fout.is_open()) {
//		cerr << "Can't open " << file << " file for output.\n";
//		exit(EXIT_FAILURE);
//	}
//
//	cout << "Enter guest names (enter a blank line to quit):\n";
//	string name;
//	while (getline(cin,name) && name.size() > 0) {
//		fout << name << endl;
//	}
//	fout.close();
//
//// show revised file
//	fin.clear();    // not necessary for some compilers
//	fin.open(file);
//	if (fin.is_open()) {
//		cout << "Here are the new contents of the "
//		     << file << " file:\n";
//		while (fin.get(ch))
//			cout << ch;
//		fin.close();
//	}
//	cout << "Done.\n";
//	// cin.get();
//	return 0;
//}


//// binary.cpp -- binary file I/O															17-19
//
//#include <iostream> // not required by most systems
//#include <fstream>
//#include <iomanip>
//#include <cstdlib>  // (or stdlib.h) for exit()
//
//inline void eatline() {
//	while (std::cin.get() != '\n') continue;
//}
//struct planet {
//	char name[20];      // name of planet
//	double population;  // its population
//	double g;           // its acceleration of gravity
//};
//
//const char * file = "planets.dat";
//
//int main() {
//	using namespace std;
//	planet pl;
//	cout << fixed << right;
//
//// show initial contents
//	ifstream fin;
//	fin.open(file, ios_base::in |ios_base::binary);  // binary file
//	//NOTE: some systems don't accept the ios_base::binary mode
//	if (fin.is_open()) {
//		cout << "Here are the current contents of the "
//		     << file << " file:\n";
//		while (fin.read((char *) &pl, sizeof pl)) {
//			cout << setw(20) << pl.name << ": "
//			     << setprecision(0) << setw(12) << pl.population
//			     << setprecision(2) << setw(6) << pl.g << endl;
//		}
//		fin.close();
//	}
//
//// add new data
//	ofstream fout(file,
//	              ios_base::out | ios_base::app | ios_base::binary);
//	//NOTE: some systems don't accept the ios::binary mode
//	if (!fout.is_open()) {
//		cerr << "Can't open " << file << " file for output:\n";
//		exit(EXIT_FAILURE);
//	}
//
//	cout << "Enter planet name (enter a blank line to quit):\n";
//	cin.get(pl.name, 20);
//	while (pl.name[0] != '\0') {
//		eatline();
//		cout << "Enter planetary population: ";
//		cin >> pl.population;
//		cout << "Enter planet's acceleration of gravity: ";
//		cin >> pl.g;
//		eatline();
//		fout.write((char *) &pl, sizeof pl);
//		cout << "Enter planet name (enter a blank line "
//		     "to quit):\n";
//		cin.get(pl.name, 20);
//	}
//	fout.close();
//
//// show revised file
//	fin.clear();    // not required for some implementations, but won't hurt
//	fin.open(file, ios_base::in | ios_base::binary);
//	if (fin.is_open()) {
//		cout << "Here are the new contents of the "
//		     << file << " file:\n";
//		while (fin.read((char *) &pl, sizeof pl)) {
//			cout << setw(20) << pl.name << ": "
//			     << setprecision(0) << setw(12) << pl.population
//			     << setprecision(2) << setw(6) << pl.g << endl;
//		}
//		fin.close();
//	}
//	cout << "Done.\n";
//// keeping output window open
//	// cin.clear();
//	// eatline();
//	// cin.get();
//	return 0;
//}


//// random.cpp -- random access to a binary file												17-20
//
//#include <iostream>     // not required by most systems
//#include <fstream>
//#include <iomanip>
//#include <cstdlib>      // (or stdlib.h) for exit()
//const int LIM = 20;
//struct planet {
//	char name[LIM];      // name of planet
//	double population;  // its population
//	double g;           // its acceleration of gravity
//};
//
//const char * file = "planets.dat";  // ASSUMED TO EXIST (binary.cpp example)
//inline void eatline() {
//	while (std::cin.get() != '\n') continue;
//}
//
//int main() {
//	using namespace std;
//	planet pl;
//	cout << fixed;
//
//// show initial contents
//	fstream finout;     // read and write streams
//	finout.open(file,
//	            ios_base::in | ios_base::out | ios_base::binary);
//	//NOTE: Some Unix systems require omitting | ios::binary
//	int ct = 0;
//	if (finout.is_open()) {
//		finout.seekg(0);    // go to beginning
//		cout << "Here are the current contents of the "
//		     << file << " file:\n";
//		while (finout.read((char *) &pl, sizeof pl)) {
//			cout << ct++ << ": " << setw(LIM) << pl.name << ": "
//			     << setprecision(0) << setw(12) << pl.population
//			     << setprecision(2) << setw(6) << pl.g << endl;
//		}
//		if (finout.eof())
//			finout.clear(); // clear eof flag
//		else {
//			cerr << "Error in reading " << file << ".\n";
//			exit(EXIT_FAILURE);
//		}
//	} else {
//		cerr << file << " could not be opened -- bye.\n";
//		exit(EXIT_FAILURE);
//	}
//
//// change a record
//	cout << "Enter the record number you wish to change: ";
//	long rec;
//	cin >> rec;
//	eatline();              // get rid of newline
//	if (rec < 0 || rec >= ct) {
//		cerr << "Invalid record number -- bye\n";
//		exit(EXIT_FAILURE);
//	}
//	streampos place = rec * sizeof pl;  // convert to streampos type
//	finout.seekg(place);    // random access
//	if (finout.fail()) {
//		cerr << "Error on attempted seek\n";
//		exit(EXIT_FAILURE);
//	}
//
//	finout.read((char *) &pl, sizeof pl);
//	cout << "Your selection:\n";
//	cout << rec << ": " << setw(LIM) << pl.name << ": "
//	     << setprecision(0) << setw(12) << pl.population
//	     << setprecision(2) << setw(6) << pl.g << endl;
//	if (finout.eof())
//		finout.clear();     // clear eof flag
//
//	cout << "Enter planet name: ";
//	cin.get(pl.name, LIM);
//	eatline();
//	cout << "Enter planetary population: ";
//	cin >> pl.population;
//	cout << "Enter planet's acceleration of gravity: ";
//	cin >> pl.g;
//	finout.seekp(place);    // go back
//	finout.write((char *) &pl, sizeof pl) << flush;
//	if (finout.fail()) {
//		cerr << "Error on attempted write\n";
//		exit(EXIT_FAILURE);
//	}
//
//// show revised file
//	ct = 0;
//	finout.seekg(0);            // go to beginning of file
//	cout << "Here are the new contents of the " << file
//	     << " file:\n";
//	while (finout.read((char *) &pl, sizeof pl)) {
//		cout << ct++ << ": " << setw(LIM) << pl.name << ": "
//		     << setprecision(0) << setw(12) << pl.population
//		     << setprecision(2) << setw(6) << pl.g << endl;
//	}
//	finout.close();
//	cout << "Done.\n";
//// keeping output window open
//	// cin.clear();
//	// eatline();
//	// cin.get();
//	return 0;
//}


//// strout.cpp -- incore formatting (output)													17-21
//
//#include <iostream>
//#include <sstream>
//#include <string>
//int main() {
//	using namespace std;
//	ostringstream outstr;   // manages a string stream
//
//	string hdisk;
//	cout << "What's the name of your hard disk? ";
//	getline(cin, hdisk);
//	int cap;
//	cout << "What's its capacity in GB? ";
//	cin >> cap;
//	// write formatted information to string stream
//	outstr << "The hard disk " << hdisk << " has a capacity of "
//	       << cap << " gigabytes.\n";
//	string result = outstr.str();   // save result
//	cout << result;                 // show contents
//
//	// cin.get();
//	// cin.get();
//	return 0;
//}


//// strin.cpp -- formatted reading from a char array										17-22
//
//#include <iostream>
//#include <sstream>
//#include <string>
//int main() {
//	using namespace std;
//	string lit = "It was a dark and stormy day, and "
//	             " the full moon glowed brilliantly. ";
//	istringstream instr(lit);   // use buf for input
//	string word;
//	while (instr >> word)       // read a word a time
//		cout << word << endl;
//	// cin.get();
//	return 0;
//}



/******************************************************************ch18  c++新标准****************************************************************/


//// rvref.cpp -- simple uses of rvalue references											18-1
//
//#include <iostream>
//
//inline double f(double tf) {return 5.0*(tf-32.0)/9.0;};
//int main()
//{
//    using namespace std;
//    double tc = 21.5;
//    double && rd1 = 7.07;
//    double && rd2 = 1.8 * tc + 32.0;
//    double && rd3 = f(rd2);
//    cout << " tc value and address: " << tc <<", " << &tc << endl;
//    cout << "rd1 value and address: " << rd1 <<", " << &rd1 << endl;
//    cout << "rd2 value and address: " << rd2 <<", " << &rd2 << endl;
//    cout << "rd3 value and address: " << rd3 <<", " << &rd3 << endl;
//    // cin.get();
//    return 0;
//}


//// useless.cpp -- an otherwise useless class with move semantics							18-2
//
//#include <iostream>
//using namespace std;
//
//// interface
//class Useless {
//	private:
//		int n;          // number of elements
//		char * pc;      // pointer to data
//		static int ct;  // number of objects
//		void ShowObject() const;
//	public:
//		Useless();
//		explicit Useless(int k);
//		Useless(int k, char ch);
//		Useless(const Useless & f); // regular copy constructor
//		Useless(Useless && f);      // move constructor
//		~Useless();
//		Useless operator+(const Useless & f)const;
//// need operator=() in copy and move versions
//		void ShowData() const;
//};
//
//// implementation
//int Useless::ct = 0;
//
//Useless::Useless() {
//	++ct;
//	n = 0;
//	pc = nullptr;
//	cout << "default constructor called; number of objects: " << ct << endl;
//	ShowObject();
//}
//
//Useless::Useless(int k) : n(k) {
//	++ct;
//	cout << "int constructor called; number of objects: " << ct << endl;
//	pc = new char[n];
//	ShowObject();
//}
//
//Useless::Useless(int k, char ch) : n(k) {
//	++ct;
//	cout << "int, char constructor called; number of objects: " << ct << endl;
//	pc = new char[n];
//	for (int i = 0; i < n; i++)
//		pc[i] = ch;
//	ShowObject();
//}
//
//Useless::Useless(const Useless & f): n(f.n) {
//	++ct;
//	cout << "copy const called; number of objects: " << ct << endl;
//	pc = new char[n];
//	for (int i = 0; i < n; i++)
//		pc[i] = f.pc[i];
//	ShowObject();
//}
//
//Useless::Useless(Useless && f): n(f.n) {
//	++ct;
//	cout << "move constructor called; number of objects: " << ct << endl;
//	pc = f.pc;       // steal address
//	f.pc = nullptr;  // give old object nothing in return
//	f.n = 0;
//	ShowObject();
//}
//
//Useless::~Useless() {
//	cout << "destructor called; objects left: " << --ct << endl;
//	cout << "deleted object:\n";
//	ShowObject();
//	delete [] pc;
//}
//
//Useless Useless::operator+(const Useless & f)const {
//	cout << "Entering operator+()\n";
//	Useless temp = Useless(n + f.n);
//	for (int i = 0; i < n; i++)
//		temp.pc[i] = pc[i];
//	for (int i = n; i < temp.n; i++)
//		temp.pc[i] = f.pc[i - n];
//	cout << "temp object:\n";
//	cout << "Leaving operator+()\n";
//	return temp;
//}
//
//void Useless::ShowObject() const {
//	cout << "Number of elements: " << n;
//	cout << " Data address: " << (void *) pc << endl;
//}
//
//void Useless::ShowData() const {
//	if (n == 0)
//		cout << "(object empty)";
//	else
//		for (int i = 0; i < n; i++)
//			cout << pc[i];
//	cout << endl;
//}
//
//// application
//int main() {
//	{
//		Useless one(10, 'x');
//		Useless two = one;          // calls copy constructor
//		Useless three(20, 'o');
//		Useless four(one + three);  // calls operator+(), move constructor
//		cout << "object one: ";
//		one.ShowData();
//		cout << "object two: ";
//		two.ShowData();
//		cout << "object three: ";
//		three.ShowData();
//		cout << "object four: ";
//		four.ShowData();
//	}
//	// cin.get();
//}


//// stdmove.cpp -- using std::move()															18-3
//
//#include <iostream>
//#include <utility>
//// use the following for g++4.5
//// #define nullptr 0
//// interface
//class Useless {
//	private:
//		int n;          // number of elements
//		char * pc;      // pointer to data
//		static int ct;  // number of objects
//		void ShowObject() const;
//	public:
//		Useless();
//		explicit Useless(int k);
//		Useless(int k, char ch);
//		Useless(const Useless & f); // regular copy constructor
//		Useless(Useless && f);      // move constructor
//		~Useless();
//		Useless operator+(const Useless & f)const;
//		Useless & operator=(const Useless & f); // copy assignment
//		Useless & operator=(Useless && f);      // move assignment
//		void ShowData() const;
//};
//
//// implementation
//int Useless::ct = 0;
//
//Useless::Useless() {
//	++ct;
//	n = 0;
//	pc = nullptr;
//}
//
//Useless::Useless(int k) : n(k) {
//	++ct;
//	pc = new char[n];
//}
//
//Useless::Useless(int k, char ch) : n(k) {
//	++ct;
//	pc = new char[n];
//	for (int i = 0; i < n; i++)
//		pc[i] = ch;
//}
//
//Useless::Useless(const Useless & f): n(f.n) {
//	++ct;
//	pc = new char[n];
//	for (int i = 0; i < n; i++)
//		pc[i] = f.pc[i];
//}
//
//Useless::Useless(Useless && f): n(f.n) {
//	++ct;
//	pc = f.pc;       // steal address
//	f.pc = nullptr;  // give old object nothing in return
//	f.n = 0;
//}
//
//Useless::~Useless() {
//	delete [] pc;
//}
//
//Useless & Useless::operator=(const Useless & f) { // copy assignment
//	std::cout << "copy assignment operator called:\n";
//	if (this == &f)
//		return *this;
//	delete [] pc;
//	n = f.n;
//	pc = new char[n];
//	for (int i = 0; i < n; i++)
//		pc[i] = f.pc[i];
//	return *this;
//}
//
//Useless & Useless::operator=(Useless && f) {     // move assignment
//	std::cout << "move assignment operator called:\n";
//	if (this == &f)
//		return *this;
//	delete [] pc;
//	n = f.n;
//	pc = f.pc;
//	f.n = 0;
//	f.pc = nullptr;
//	return *this;
//}
//
//Useless Useless::operator+(const Useless & f)const {
//	Useless temp = Useless(n + f.n);
//	for (int i = 0; i < n; i++)
//		temp.pc[i] = pc[i];
//	for (int i = n; i < temp.n; i++)
//		temp.pc[i] = f.pc[i - n];
//	return temp;
//}
//
//void Useless::ShowObject() const {
//	std::cout << "Number of elements: " << n;
//	std::cout << " Data address: " << (void *) pc << std::endl;
//}
//
//void Useless::ShowData() const {
//	if (n == 0)
//		std::cout << "(object empty)";
//	else
//		for (int i = 0; i < n; i++)
//			std::cout << pc[i];
//	std::cout << std::endl;
//}
//
//// application
//int main() {
//	using std::cout;
//	{
//		Useless one(10, 'x');
//		Useless two = one +one;   // calls move constructor
//		cout << "object one: ";
//		one.ShowData();
//		cout << "object two: ";
//		two.ShowData();
//		Useless three, four;
//		cout << "three = one\n";
//		three = one;              // automatic copy assignment
//		cout << "now object three = ";
//		three.ShowData();
//		cout << "and object one = ";
//		one.ShowData();
//		cout << "four = one + two\n";
//		four = one + two;         // automatic move assignment
//		cout << "now object four = ";
//		four.ShowData();
//		cout << "four = move(one)\n";
//		four = std::move(one);    // forced move assignment
//		cout << "now object four = ";
//		four.ShowData();
//		cout << "and object one = ";
//		one.ShowData();
//	}
//	std::cin.get();
//}


//// lambda0.cpp -- using lambda expressions													18-4
//
//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <cmath>
//#include <ctime>
//const long Size1 = 39L;
//const long Size2 = 100*Size1;
//const long Size3 = 100*Size2;
//
//bool f3(int x) {
//	return x % 3 == 0;
//}
//bool f13(int x) {
//	return x % 13 == 0;
//}
//
//int main() {
//	using std::cout;
//	std::vector<int> numbers(Size1);
//
//	std::srand(std::time(0));
//	std::generate(numbers.begin(), numbers.end(), std::rand);
//
//// using function pointers
//	cout << "Sample size = " << Size1 << '\n';
//
//	int count3 = std::count_if(numbers.begin(), numbers.end(), f3);
//	cout << "Count of numbers divisible by 3: " << count3 << '\n';
//	int count13 = std::count_if(numbers.begin(), numbers.end(), f13);
//	cout << "Count of numbers divisible by 13: " << count13 << "\n\n";
//
//// increase number of numbers
//	numbers.resize(Size2);
//	std::generate(numbers.begin(), numbers.end(), std::rand);
//	cout << "Sample size = " << Size2 << '\n';
//// using a functor
//	class f_mod {
//		private:
//			int dv;
//		public:
//			f_mod(int d = 1) : dv(d) {}
//			bool operator()(int x) {
//				return x % dv == 0;
//			}
//	};
//
//	count3 = std::count_if(numbers.begin(), numbers.end(), f_mod(3));
//	cout << "Count of numbers divisible by 3: " << count3 << '\n';
//	count13 = std::count_if(numbers.begin(), numbers.end(), f_mod(13));
//	cout << "Count of numbers divisible by 13: " << count13 << "\n\n";
//
//// increase number of numbers again
//	numbers.resize(Size3);
//	std::generate(numbers.begin(), numbers.end(), std::rand);
//	cout << "Sample size = " << Size3 << '\n';
//// using lambdas
//	count3 = std::count_if(numbers.begin(), numbers.end(),
//	[](int x) {
//		return x % 3 == 0;
//	});
//	cout << "Count of numbers divisible by 3: " << count3 << '\n';
//	count13 = std::count_if(numbers.begin(), numbers.end(),
//	[](int x) {
//		return x % 13 == 0;
//	});
//	cout << "Count of numbers divisible by 13: " << count13 << '\n';
//
//	// std::cin.get();
//	return 0;
//}


//// lambda1.cpp -- use captured variables														18-5
//
//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <cmath>
//#include <ctime>
//const long Size = 390000L;
//
//int main() {
//	using std::cout;
//	std::vector<int> numbers(Size);
//
//	std::srand(std::time(0));
//	std::generate(numbers.begin(), numbers.end(), std::rand);
//	cout << "Sample size = " << Size << '\n';
//// using lambdas
//	int count3 = std::count_if(numbers.begin(), numbers.end(),
//	[](int x) {
//		return x % 3 == 0;
//	});
//	cout << "Count of numbers divisible by 3: " << count3 << '\n';
//	int count13 = 0;
//	std::for_each(numbers.begin(), numbers.end(),
//	[&count13](int x) {
//		count13 += x % 13 == 0;
//	});
//	cout << "Count of numbers divisible by 13: " << count13 << '\n';
//// using a single lambda
//	count3 = count13 = 0;
//	std::for_each(numbers.begin(), numbers.end(),
//	[&](int x) {
//		count3 += x % 3 == 0;
//		count13 += x % 13 == 0;
//	});
//	cout << "Count of numbers divisible by 3: " << count3 << '\n';
//	cout << "Count of numbers divisible by 13: " << count13 << '\n';
//
//	// std::cin.get();
//	return 0;
//}


//// somedefs.h																				18-6
//
//#include <iostream>
//
//template <typename T, typename F>
//T use_f(T v, F f) {
//	static int count = 0;
//	count++;
//	std::cout << "use_f count = " << count
//	          << ", &count = " << &count << endl;
//	return f(v);
//}
//
//class Fp {
//	private:
//		double z_;
//	public:
//		Fp(double z = 1.0) : z_(z) {}
//		double operator()(double p) {
//			return z_*p;
//		}
//};
//
//class Fq {
//	private:
//		double z_;
//	public:
//		Fq(double z = 1.0) : z_(z) {}
//		double operator()(double q) {
//			return z_+ q;
//		}
//};


//// callable.cpp -- callable types and templates												18-7
//
//#include <iostream>
//#include <math.h>
//using namespace std;
//
//template <typename T, typename F>
//T use_f(T v, F f) {
//	static int count = 0;
//	count++;
//	cout << "  use_f count = " << count << ", &count = " << &count << endl;
//	return f(v);
//}
//
//class Fp {
//	private:
//		double z_;
//	public:
//		Fp(double z = 1.0) : z_(z) {}
//		double operator()(double p) {
//			return z_*p;
//		}
//};
//class Fq {
//	private:
//		double z_;
//	public:
//		Fq(double z = 1.0) : z_(z) {}
//		double operator()(double q) {
//			return z_+ q;
//		}
//};
//
//double dub(double x) {
//	return 2.0*x;
//}
//
//int main() {
//	double y = 1.21;
//	cout << "Function pointer dub:\n";
//	cout << "  " << use_f(y, dub) << endl;
//	cout << "Function pointer sqrt:\n";
//	cout << "  " << use_f(y, sqrt) << endl;
//	cout << "Function object Fp:\n";
//	cout << "  " << use_f(y, Fp(5.0)) << endl;
//	cout << "Function object Fq:\n";
//	cout << "  " << use_f(y, Fq(5.0)) << endl;
//	cout << "Lambda expression 1:\n";
//	cout << "  " << use_f(y, [](double u) {
//		return u*u;
//	}) << endl;
//	cout << "Lambda expresson 2:\n";
//	cout << "  " << use_f(y, [](double u) {
//		return u+u/2.0;
//	}) << endl;
//
//	cin.get();
//	return 0;
//}


//// wrapped0.cpp  -- using a function wrapper												18-8
//
//#include "somedefs.h"
//#include <iostream>
////#include <cmath>
//#include <functional>
//
//double dub(double x) {return 2.0*x;}
//double sqrt(double x) {return x*x ;}
//
//int main()
//{
//	using std::cout;
//	using std::endl;
//	using std::function;
//    typedef function<double(double)> fdd;
//    double y = 1.21;
//    function<double(double)> ef1 = dub;
//    function<double(double)> ef2 = sqrt;
//    function<double(double)> ef3 = Fq(10.0);
//    function<double(double)> ef4 = Fp(10.0);
//    function<double(double)> ef5 =  [](double u) {return u*u;};
//    function<double(double)> ef6 =  [](double u) {return u+u/2.0;};
//    cout << use_f(y, function<double(double)>(dub)) << endl;
//    cout << use_f(y, fdd(sqrt)) << endl;
//    cout << use_f(y, ef3) << endl;
//    cout << use_f(y, ef4) << endl;
//    cout << use_f(y, ef5) << endl;
//    cout << use_f(y, ef6) << endl;
//
//    return 0;
//}


////wrapped1.cpp -- using a function wrapper as an argument									18-8-1
//#include <iostream>
//#include <math.h>
//#include <functional>
//using namespace std;
//
//template <typename T, typename F>
//T use_f(T v, F f) {
//	static int count = 0;
//	count++;
//	cout << "  use_f count = " << count << ", &count = " << &count << endl;
//	return f(v);
//}
//
//class Fp {
//	private:
//		double z_;
//	public:
//		Fp(double z = 1.0) : z_(z) {}
//		double operator()(double p) {
//			return z_*p;
//		}
//};
//class Fq {
//	private:
//		double z_;
//	public:
//		Fq(double z = 1.0) : z_(z) {}
//		double operator()(double q) {
//			return z_+ q;
//		}
//};
//
//double dub(double x) {
//	return 2.0*x;
//}
//
//int main() {
//	double y = 1.21;
//	function<double(double)> ef1 = dub;
//	function<double(double)> ef2 = sqrt;
//	function<double(double)> ef3 = Fq(10.0);
//	function<double(double)> ef4 = Fp(10.0);
//	function<double(double)> ef5 =  [](double u) {
//		return u*u;
//	};
//	function<double(double)> ef6 =  [](double u) {
//		return u+u/2.0;
//	};
//	cout << "Function pointer dub:\n";
//	cout << "  " << use_f(y, ef1) << endl;
//	cout << "Function pointer sqrt:\n";
//	cout << "  " << use_f(y, ef2) << endl;
//	cout << "Function object Fp:\n";
//	cout << "  " << use_f(y, ef3) << endl;
//	cout << "Function object Fq:\n";
//	cout << "  " << use_f(y, ef4) << endl;
//	cout << "Lambda expression 1:\n";
//	cout << "  " << use_f(y, ef5) << endl;
//	cout << "Lambda expression 2:\n";
//	cout << "  " << use_f(y,ef6) << endl;
//	// cin.get();
//	return 0;
//}


//// wrapped2.cpp -- callable types and templates											18-8-2
//#include <iostream>
//#include <math.h>
//#include <functional>
//using namespace std;
//
//template <typename T>
//T use_f(T v,  std::function<T(T)> f) {
//	static int count = 0;
//	count++;
//	cout << "  use_f count = " << count << ", &count = " << &count << endl;
//	return f(v);
//}
//
//class Fp {
//	private:
//		double z_;
//	public:
//		Fp(double z = 1.0) : z_(z) {}
//		double operator()(double p) {
//			return z_*p;
//		}
//};
//class Fq {
//	private:
//		double z_;
//	public:
//		Fq(double z = 1.0) : z_(z) {}
//		double operator()(double q) {
//			return z_+ q;
//		}
//};
//
//double dub(double x) {
//	return 2.0*x;
//}
//
//int main() {
//	double y = 1.21;
//	cout << "Function pointer dub:\n";
//	cout << "  " << use_f<double>(y, dub) << endl;
//	cout << "Function pointer sqrt:\n";
//	cout << "  " << use_f<double>(y, sqrt) << endl;
//	cout << "Function object Fp:\n";
//	cout << "  " << use_f<double>(y, Fp(5.0)) << endl;
//	cout << "Function object Fq:\n";
//	cout << "  " << use_f<double>(y, Fq(5.0)) << endl;
//	cout << "Lambda expression 1:\n";
//	cout << "  " << use_f<double>(y, [](double u) {
//		return u*u;
//	}) << endl;
//	cout << "Lambda expression 2:\n";
//	cout << "  " << use_f<double>(y, [](double u) {
//		return u+u/2.0;
//	}) << endl;
//
//	cin.get();
//	return 0;
//}


////variadic1.cpp -- using recursion to unpack a parameter pack								18-9
//
//#include <iostream>
//#include <string>
//// definition for 0 parameters -- terminating call
//void show_list3() {}
//
//// definition for 1 or more parameters
//template<typename T, typename... Args>
//void show_list3( T value, Args... args) {
//	std::cout << value << ", ";
//	show_list3(args...);
//}
//
//int main() {
//	int n = 14;
//	double x = 2.71828;
//	std::string mr = "Mr. String objects!";
//	show_list3(n, x);
//	show_list3(x*x, '!', 7, mr);
//	return 0;
//}


//// variadic2.cpp																			18-10
//
//#include <iostream>
//#include <string>
//
//// definition for 0 parameters
//void show_list() {}
//
//// definition for 1 parameter
//template<typename T>
//void show_list(const T& value) {
//	std::cout << value << '\n';
//}
//
//// definition for 2 or more parameters
//template<typename T, typename... Args>
//void show_list(const T& value, const Args&... args) {
//	std::cout << value << ", ";
//	show_list(args...);
//}
//
//int main() {
//	int n = 14;
//	double x = 2.71828;
//	std::string mr = "Mr. String objects!";
//	show_list(n, x);
//	show_list(x*x, '!', 7, mr);
//	return 0;
//}


//// lexcast.cpp -- simple cast from float to string											18-11
//
//#include <iostream>
//#include <string>
//#include "boost/lexical_cast.hpp"
//int main() {
//	using namespace std;
//	cout << "Enter your weight: ";
//	float weight;
//	cin >> weight;
//	string gain = "A 10% increase raises ";
//	string wt = boost::lexical_cast<string>(weight);
//	gain = gain + wt + " to ";  // string operator+()
//	weight = 1.1 * weight;
//	gain = gain + boost::lexical_cast<string>(weight) + ".";
//	cout << gain << endl;
//	return 0;
//}


////附录 E-1

//// memb_pt.cpp -- dereferencing pointers to class members
//#include <iostream>
//using namespace std;
//
//class Example {
//	private:
//		int feet;
//		int inches;
//	public:
//		Example();
//		Example(int ft);
//		~Example();
//		void show_in() const;
//		void show_ft() const;
//		void use_ptr() const;
//};
//
//Example::Example() {
//	feet = 0;
//	inches = 0;
//}
//
//Example::Example(int ft) {
//	feet = ft;
//	inches = 12 * feet;
//}
//
//Example::~Example() {
//}
//
//void Example::show_in() const {
//	cout << inches << " inches\n";
//}
//
//void Example::show_ft() const {
//	cout << feet << " feet\n";
//}
//
//void Example::use_ptr() const {
//	Example yard(3);
//	int Example::*pt;
//	pt = &Example::inches;
//	cout << "Set pt to &Example::inches:\n";
//	cout << "this->pt: " << this->*pt << endl;
//	cout << "yard.*pt: " << yard.*pt << endl;
//	pt = &Example::feet;
//	cout << "Set pt to &Example::feet:\n";
//	cout << "this->pt: " << this->*pt << endl;
//	cout << "yard.*pt: " << yard.*pt << endl;
//	void (Example::*pf)() const;
//	pf = &Example::show_in;
//	cout << "Set pf to &Example::show_in:\n";
//	cout << "Using (this->*pf)(): ";
//	(this->*pf)();
//	cout << "Using (yard.*pf)(): ";
//	(yard.*pf)();
//}
//
//int main() {
//	Example car(15);
//	Example van(20);
//	Example garage;
//
//	cout << "car.use_ptr() output:\n";
//	car.use_ptr();
//	cout << "\nvan.use_ptr() output:\n";
//	van.use_ptr();
////	cin.get();
//	return 0;
//}


//////附录 E-2
//
//#include <iostream>
//using namespace std;
//
//int main() {
//	cout << alignof(double) << endl;
//	cin.get();
//	return 0;
//}


////////附录 E-3 
//// 
//#include <iostream>
//#include <string>
//#include <cmath>
//#include <numeric>
//#include <vector>
//#include <algorithm>
//#include <unordered_set>
//using namespace std;
//struct S {double a; double b;};
//int main()
//{
//	S a = {1.1,2.2};
//	S b = {2.1,4.2};
//	S c = {3.1,5.2};
//
//	unordered_set<S*> us;
//	us.insert(&a);
//	us.insert(&b);
//	us.insert(&c);
//	for_each(us.begin(),us.end(),[](S* i) {cout << (*i).a << ", ";});
//	cout << "\nNext\n";
//
//	
///*	if(pt != vi.end())
//		cout  << *pt << endl;
//	else
//		cout << "not found\n";
//	cout << vi.count("cow") << endl;
//	cout << vi.count("fondu") << endl;
//	cout << endl;
//	cout << *vi.lower_bound("cow") << endl;
//	cout << *vi.upper_bound("hen") << endl;
//	cout << vi.bucket_count() << endl;
//	cout << vi.bucket("cow") << endl;
//	cout << vi.bucket("starkA") << endl;
//	cout << vi.bucket("stark") << endl;*/
//
//	cin.get();
//		
//}







