

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////




////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////





////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////





////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////













//																			  	/*  ch08  字符输入输出和输入验证 */


/* newguess.c -- an inefficient but improved number-guesser */

//#include <stdio.h>
//int main(void) {
//	int guess = 1;
//	char response;
//
//	printf("Pick an integer from 1 to 100. I will try to guess ");
//	printf("it.\nRespond with a y if my guess is right and with");
//	printf("\nan n if it is wrong.\n");
//	printf("Uh...is your number %d?\n", guess);
//	while ((response = getchar()) != 'y') {   /* get response */
//		if (response == 'n')
//			printf("Well, then, is it %d?\n", ++guess);
//		else
//			printf("Sorry, I understand only y or n.\n");
//		while (getchar() != '\n')
//			continue;                 /* skip rest of input line */
//	}
//	printf("I knew I could do it!\n");
//
//	return 0;
//}


/* menuette.c -- menu techniques */

//#include <stdio.h>
//char get_choice(void);
//char get_first(void);
//int get_int(void);
//void count(void);
//int main(void) {
//	int choice;
//	void count(void);
//
//	while ( (choice = get_choice()) != 'q') {
//		switch (choice) {
//			case 'a' :
//				printf("Buy low, sell high.\n");
//				break;
//			case 'b' :
//				putchar('\a');  /* ANSI */
//				break;
//			case 'c' :
//				count();
//				break;
//			default  :
//				printf("Program error!\n");
//				break;
//		}
//	}
//	printf("Bye.\n");
//
//	return 0;
//}
//
//void count(void) {
//	int n,i;
//
//	printf("Count how far? Enter an integer:\n");
//	n = get_int();
//	for (i = 1; i <= n; i++)
//		printf("%d\n", i);
//	while ( getchar() != '\n')
//		continue;
//}
//
//char get_choice(void) {
//	int ch;
//
//	printf("Enter the letter of your choice:\n");
//	printf("a. advice           b. bell\n");
//	printf("c. count            q. quit\n");
//	ch = get_first();
//	while (  (ch < 'a' || ch > 'c') && ch != 'q') {
//		printf("Please respond with a, b, c, or q.\n");
//		ch = get_first();
//	}
//
//	return ch;
//}
//
//char get_first(void) {
//	int ch;
//
//	ch = getchar();
//	while (getchar() != '\n')
//		continue;
//
//	return ch;
//}
//
//int get_int(void) {
//	int input;
//	char ch;
//
//	while (scanf("%d", &input) != 1) {
//		while ((ch = getchar()) != '\n')
//			putchar(ch);  // dispose of bad input
//		printf(" is not an integer.\nPlease enter an ");
//		printf("integer value, such as 25, -178, or 3: ");
//	}
//
//	return input;
//}


// checking.c -- validating input

//#include <stdio.h>
//#include <stdbool.h>
//// validate that input is an integer
//long get_long(void);
//// validate that range limits are valid
//bool bad_limits(long begin, long end,
//                long low, long high);
//// calculate the sum of the squares of the integers
//// a through b
//double sum_squares(long a, long b);
//int main(void) {
//	const long MIN = -10000000L;  // lower limit to range
//	const long MAX = +10000000L;  // upper limit to range
//	long start;                   // start of range
//	long stop;                    // end of range
//	double answer;
//
//	printf("This program computes the sum of the squares of "
//	       "integers in a range.\nThe lower bound should not "
//	       "be less than -10000000 and\nthe upper bound "
//	       "should not be more than +10000000.\nEnter the "
//	       "limits (enter 0 for both limits to quit):\n"
//	       "lower limit: ");
//	start = get_long();
//	printf("upper limit: ");
//	stop = get_long();
//	while (start !=0 || stop != 0) {
//		if (bad_limits(start, stop, MIN, MAX))
//			printf("Please try again.\n");
//		else {
//			answer = sum_squares(start, stop);
//			printf("The sum of the squares of the integers ");
//			printf("from %ld to %ld is %g\n",
//			       start, stop, answer);
//		}
//		printf("Enter the limits (enter 0 for both "
//		       "limits to quit):\n");
//		printf("lower limit: ");
//		start = get_long();
//		printf("upper limit: ");
//		stop = get_long();
//	}
//	printf("Done.\n");
//
//	return 0;
//}
//
//long get_long(void) {
//	long input;
//	char ch;
//
//	while (scanf("%ld", &input) != 1) {
//		while ((ch = getchar()) != '\n')
//			putchar(ch);  // dispose of bad input
//		printf(" is not an integer.\nPlease enter an ");
//		printf("integer value, such as 25, -178, or 3: ");
//	}
//
//	return input;
//}
//
//double sum_squares(long a, long b) {
//	double total = 0;
//	long i;
//
//	for (i = a; i <= b; i++)
//		total += (double)i * (double)i;
//
//	return total;
//}
//
//bool bad_limits(long begin, long end,
//                long low, long high) {
//	bool not_good = false;
//
//	if (begin > end) {
//		printf("%ld isn't smaller than %ld.\n", begin, end);
//		not_good = true;
//	}
//	if (begin < low || end < low) {
//		printf("Values must be %ld or greater.\n", low);
//		not_good = true;
//	}
//	if (begin > high || end > high) {
//		printf("Values must be %ld or less.\n", high);
//		not_good = true;
//	}
//
//	return not_good;
//}


/* showchar2.c -- prints characters in rows and columns */

//#include <stdio.h>
//void display(char cr, int lines, int width);
//int main(void) {
//	int ch;             /* character to be printed      */
//	int rows, cols;     /* number of rows and columns   */
//
//	printf("Enter a character and two integers:\n");
//	while ((ch = getchar()) != '\n') {
//		if (scanf("%d %d",&rows, &cols) != 2)
//			break;
//		display(ch, rows, cols);
//		while (getchar() !=  '\n')
//			continue;
//		printf("Enter another character and two integers;\n");
//		printf("Enter a newline to quit.\n");
//	}
//	printf("Bye.\n");
//
//	return 0;
//}
//
//void display(char cr, int lines, int width) {
//	int row, col;
//
//	for (row = 1; row <= lines; row++) {
//		for (col = 1; col <= width; col++)
//			putchar(cr);
//		putchar('\n');  /* end line and start a new one */
//	}
//}


/* showchar1.c -- program with a BIG I/O problem */

//#include <stdio.h>
//void display(char cr, int lines, int width);
//int main(void) {
//	int ch;             /* character to be printed    */
//	int rows, cols;     /* number of rows and columns */
//	printf("Enter a character and two integers:\n");
//	while ((ch = getchar()) != '\n') {
//		scanf("%d %d", &rows, &cols);
//		display(ch, rows, cols);
//		printf("Enter another character and two integers;\n");
//		printf("Enter a newline to quit.\n");
//	}
//	printf("Bye.\n");
//
//	return 0;
//}
//
//void display(char cr, int lines, int width) {
//	int row, col;
//
//	for (row = 1; row <= lines; row++) {
//		for (col = 1; col <= width; col++)
//			putchar(cr);
//		putchar('\n');  /* end line and start a new one */
//	}
//}


/* guess.c -- an inefficient and faulty number-guesser */

//#include <stdio.h>
//int main(void) {
//	int guess = 1;
//
//	printf("Pick an integer from 1 to 100. I will try to guess ");
//	printf("it.\nRespond with a y if my guess is right and with");
//	printf("\nan n if it is wrong.\n");
//	printf("Uh...is your number %d?\n", guess);
//	while (getchar() != 'y')      /* get response, compare to y */
//		printf("Well, then, is it %d?\n", ++guess);
//	printf("I knew I could do it!\n");
//
//	return 0;
//}


// file_eof.c --open a file and display it						打开一个文件，美滋滋

//#include <stdio.h>
//#include <stdlib.h>  // for exit()
//int main() {
//	int ch;
//	FILE * fp;
//	char fname[50];         // to hold the file name
//
//	printf("Enter the name of the file: ");
//	scanf("%s", fname);
//	fp = fopen(fname, "r"); // open file for reading
//	if (fp == NULL) {       // attempt failed
//		printf("Failed to open file. Bye\n");
//		exit(1);            // quit program
//	}
//	// getc(fp) gets a character from the open file
//	while ((ch = getc(fp)) != EOF)
//		putchar(ch);
//	fclose(fp);             // close the file
//
//	return 0;
//}


/* echo_eof.c -- repeats input to end of file */

//#include <stdio.h>
//int main(void) {
//	int ch;
//
//	while ((ch = getchar()) != EOF)
//		putchar(ch);
//
//	return 0;
//}


/* echo.c -- repeats input */

//#include <stdio.h>
//int main(void) {
//	char ch;
//
//	while ((ch = getchar()) != '#')
//		putchar(ch);
//
//	return 0;
//}


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


/* pe7-11.c */
/* Programming Exercise 7-11 */
//#include <stdio.h>
//#include <ctype.h>
//int main(void) {
//	const double price_artichokes = 2.05;
//	const double price_beets = 1.15;
//	const double price_carrots = 1.09;
//	const double DISCOUNT_RATE = 0.05;
//	const double under5 = 6.50;
//	const double under20 = 14.00;
//	const double base20 = 14.00;
//	const double extralb = 0.50;
//	char ch;
//	double lb_artichokes = 0;
//	double lb_beets = 0;
//	double lb_carrots = 0;
//	double lb_temp;
//	double lb_total;
//	double cost_artichokes;
//	double cost_beets;
//	double cost_carrots;
//	double cost_total;
//	double final_total;
//	double discount;
//	double shipping;
//	printf("Enter a to buy artichokes, b for beets, ");
//	printf("c for carrots, q to quit: ");
//	while ((ch = getchar()) != 'q' && ch != 'Q') {
//		if (ch == '\n')
//			continue;
//		while (getchar() != '\n')continue;
//		ch = tolower(ch);
//		switch (ch) {
//			case 'a' :
//				printf("Enter pounds of artichokes: ");
//				scanf("%lf", &lb_temp);
//				lb_artichokes += lb_temp;
//				break;
//			case 'b' :
//				printf("Enter pounds of beets: ");
//				scanf("%lf", &lb_temp);
//				lb_beets += lb_temp;
//				break;
//			case 'c' :
//				printf("Enter pounds of carrots: ");
//				scanf("%lf", &lb_temp);
//				lb_carrots += lb_temp;
//				break;
//			default :
//				printf("%c is not a valid choice.\n", ch);
//		}
//		printf("Enter a to buy artichokes, b for beets, ");
//		printf("c for carrots, q to quit: ");
//	}
//	cost_artichokes = price_artichokes * lb_artichokes;
//	cost_beets = price_beets * lb_beets;
//	cost_carrots = price_carrots * lb_carrots;
//	cost_total = cost_artichokes + cost_beets + cost_carrots;
//	lb_total = lb_artichokes + lb_beets + lb_carrots;
//	if (lb_total <= 0)
//		shipping = 0.0;
//	else if (lb_total < 5.0)
//		shipping = under5;
//	else if (lb_total < 20)
//		shipping = under20;
//	else
//		shipping = base20 + extralb * lb_total;
//	if (cost_total > 100.0)
//		discount = DISCOUNT_RATE * cost_total;
//	else
//		discount = 0.0;
//	final_total = cost_total + shipping - discount;
//	printf("Your order:\n");
//	printf("%.2f lbs of artichokes at $%.2f per pound:$ %.2f\n",
//	       lb_artichokes, price_artichokes, cost_artichokes);
//	printf("%.2f lbs of beets at $%.2f per pound: $%.2f\n",
//	       lb_beets, price_beets, cost_beets);
//	printf("%.2f lbs of carrots at $%.2f per pound: $%.2f\n",
//	       lb_carrots, price_carrots, cost_carrots);
//	printf("Total cost of vegetables: $%.2f\n", cost_total);
//	if (cost_total > 100)
//		printf("Volume discount: $%.2f\n", discount);
//	printf("Shipping: $%.2f\n", shipping);
//	printf("Total charges: $%.2f\n", final_total);
//	return 0;
//}


/* Programming Exercise 7-9 */
//#include <stdio.h>
//#include <stdbool.h>
//int main(void) {
//	int limit;
//	int num;
//	int div;
//	bool numIsPrime; // use int if stdbool.h not available
//	printf("Enter a positive integer: ");
//	while (scanf("%d", &limit) == 1 && limit > 0) {
//		if (limit > 1)
//			printf("Here are the prime numbers up through %d\n", limit);
//		else
//			printf("No primes.\n");
//		for (num = 2; num <= limit; num++) {
//			for (div = 2, numIsPrime = true; (div * div) <= num; div++)
//				if (num % div == 0)
//					numIsPrime = false;
//			if (numIsPrime)
//				printf("%d is prime.\n", num);
//		}
//		printf("Enter a positive integer (q to quit): ");
//	}
//	printf("Done!\n");
//	return 0;
//}


// Programming Exercise 7-7
//#include <stdio.h>
//#define BASEPAY 10 // $10 per hour
//#define BASEHRS 40 // hours at basepay
//#define OVERTIME 1.5 // 1.5 time
//#define AMT1 300 // 1st rate tier
//#define AMT2 150 // 2st rate tier
//#define RATE1 0.15 // rate for 1st tier
//#define RATE2 0.20 // rate for 2nd tier
//#define RATE3 0.25 // rate for 3rd tier
//int main(void) {
//	double hours;
//	double gross;
//	double net;
//	double taxes;
//	printf("Enter the number of hours worked this week: ");
//	scanf("%lf", &hours);
//	if (hours <= BASEHRS)
//		gross = hours * BASEPAY;
//	else
//		gross = BASEHRS * BASEPAY + (hours - BASEHRS) * BASEPAY * OVERTIME;
//	if (gross <= AMT1)
//		taxes = gross * RATE1;
//	else if (gross <= AMT1 + AMT2)
//		taxes = AMT1 * RATE1 + (gross - AMT1) * RATE2;
//	else
//		taxes = AMT1 * RATE1 + AMT2 * RATE2 + (gross - AMT1 - AMT2) * RATE3;
//	net = gross - taxes;
//	printf("gross: $%.2f; taxes: $%.2f; net: $%.2f\n", gross, taxes, net);
//	return 0;
//}


/* Programming Exercise 7-5 */
//#include <stdio.h>
//int main(void) {
//	char ch;
//	int ct1 = 0;
//	int ct2 = 0;
//	while ((ch = getchar()) != '#') {
//		switch(ch) {
//			case '.' :
//				putchar('!');
//				++ct1;
//				break;
//			case '!' :
//				putchar('!');
//				putchar('!');
//				++ct2;
//				break;
//			default :
//				putchar(ch);
//		}
//	}
//	printf("%d replacement(s) of . with !\n", ct1);
//	printf("%d replacement(s) of ! with !!\n", ct2);
//	return 0;
//}


/* Programming Exercise 7-3 */
//#include <stdio.h>
//int main(void) {
//	int n;
//	double sumeven = 0.0;
//	int ct_even = 0;
//	double sumodd = 0.0;
//	int ct_odd = 0;
//	while (scanf("%d", &n) == 1 && n != 0) {
//		if (n % 2 == 0) {
//			sumeven += n;
//			++ct_even;
//		} else { // n % 2 is either 1 or -1
//			sumodd += n;
//			++ct_odd;
//		}
//	}
//	printf("Number of evens: %d", ct_even);
//	if (ct_even > 0)
//		printf(" average: %g", sumeven / ct_even);
//	putchar('\n');
//	printf("Number of odds: %d", ct_odd);
//	if (ct_odd > 0)
//		printf(" average: %g", sumodd / ct_odd);
//	putchar('\n');
//	printf("\ndone\n");
//	return 0;
//}


/* Programming Exercise 7-1 */
//#include <stdio.h>
//int main(void) {
//	char ch;
//	int sp_ct = 0;
//	int nl_ct = 0;
//	int other = 0;
//	while ((ch = getchar()) != '#') {
//		if (ch == ' ')
//			sp_ct++;
//		else if (ch == '\n')
//			nl_ct++;
//		else
//			other++;
//	}
//	printf("spaces: %d, newlines: %d, others: %d\n", sp_ct, nl_ct, other);
//	return 0;
//}


//																			  	/*  ch07  c控制语句：分支和跳转 */


// vowels.c -- uses multiple labels

//#include <stdio.h>
//int main(void) {
//	char ch;
//	int a_ct, e_ct, i_ct, o_ct, u_ct;
//
//	a_ct = e_ct = i_ct = o_ct = u_ct = 0;
//
//	printf("Enter some text; enter # to quit.\n");
//	while ((ch = getchar()) != '#') {
//		switch (ch) {
//			case 'a' :
//			case 'A' :
//				a_ct++;
//				break;
//			case 'e' :
//			case 'E' :
//				e_ct++;
//				break;
//			case 'i' :
//			case 'I' :
//				i_ct++;
//				break;
//			case 'o' :
//			case 'O' :
//				o_ct++;
//				break;
//			case 'u' :
//			case 'U' :
//				u_ct++;
//				break;
//			default :
//				break;
//		}                    // end of switch
//	}                        // while loop end
//	printf("number of vowels:   A    E    I    O    U\n");
//	printf("                 %4d %4d %4d %4d %4d\n",
//	       a_ct, e_ct, i_ct, o_ct, u_ct);
//
//	return 0;
//}


/* animals.c -- uses a switch statement */

//#include <stdio.h>
//#include <ctype.h>
//int main(void) {
//	char ch;
//
//	printf("Give me a letter of the alphabet, and I will give ");
//	printf("an animal name\nbeginning with that letter.\n");
//	printf("Please type in a letter; type # to end my act.\n");
//	while ((ch = getchar()) != '#') {
//		if('\n' == ch)
//			continue;
//		if (islower(ch))     /* lowercase only          */
//			switch (ch) {
//				case 'a' :
//					printf("argali, a wild sheep of Asia\n");
//					break;
//				case 'b' :
//					printf("babirusa, a wild pig of Malay\n");
//					break;
//				case 'c' :
//					printf("coati, racoonlike mammal\n");
//					break;
//				case 'd' :
//					printf("desman, aquatic, molelike critter\n");
//					break;
//				case 'e' :
//					printf("echidna, the spiny anteater\n");
//					break;
//				case 'f' :
//					printf("fisher, brownish marten\n");
//					break;
//				default :
//					printf("That's a stumper!\n");
//			}                /* end of switch           */
//		else
//			printf("I recognize only lowercase letters.\n");
//		while (getchar() != '\n')
//			continue;      /* skip rest of input line */
//		printf("Please type another letter or a #.\n");
//	}                        /* while loop end          */
//	printf("Bye!\n");
//
//	return 0;
//}


/* break.c -- uses break to exit a loop */

//#include <stdio.h>
//int main(void) {
//	float length, width;
//
//	printf("Enter the length of the rectangle:\n");
//	while (scanf("%f", &length) == 1) {
//		printf("Length = %0.2f:\n", length);
//		printf("Enter its width:\n");
//		if (scanf("%f", &width) != 1)
//			break;
//		printf("Width = %0.2f:\n", width);
//		printf("Area = %0.2f:\n", length * width);
//		printf("Enter the length of the rectangle:\n");
//	}
//	printf("Done.\n");
//
//	return 0;
//}


/* skippart.c  -- uses continue to skip part of loop */

//#include <stdio.h>
//int main(void) {
//	const float MIN = 0.0f;
//	const float MAX = 100.0f;
//
//	float score;
//	float total = 0.0f;
//	int n = 0;
//	float min = MAX;
//	float max = MIN;
//
//	printf("Enter the first score (q to quit): ");
//	while (scanf("%f", &score) == 1) {
//		if (score < MIN || score > MAX) {
//			printf("%0.1f is an invalid value. Try again: ",
//			       score);
//			continue;   // jumps to while loop test condition
//		}
//		printf("Accepting %0.1f:\n", score);
//		min = (score < min)? score: min;
//		max = (score > max)? score: max;
//		total += score;
//		n++;
//		printf("Enter next score (q to quit): ");
//	}
//	if (n > 0) {
//		printf("Average of %d scores is %0.1f.\n", n, total / n);
//		printf("Low = %0.1f, high = %0.1f\n", min, max);
//	} else
//		printf("No valid scores were entered.\n");
//	return 0;
//}


/* paint.c -- uses conditional operator */

//#include <stdio.h>
//#define COVERAGE 350       // square feet per paint can
//int main(void) {
//	int sq_feet;
//	int cans;
//
//	printf("Enter number of square feet to be painted:\n");
//	while (scanf("%d", &sq_feet) == 1) {
//		cans = sq_feet / COVERAGE;
//		cans += ((sq_feet % COVERAGE == 0)) ? 0 : 1;
//		printf("You need %d %s of paint.\n", cans,
//		       cans == 1 ? "can" : "cans");
//		printf("Enter next value (q to quit):\n");
//	}
//
//	return 0;
//}


// wordcnt.c -- counts characters, words, lines

//#include <stdio.h>
//#include <ctype.h>         // for isspace()
//#include <stdbool.h>       // for bool, true, false
//#define STOP '|'
//int main(void) {
//	char c;                 // read in character
//	char prev;              // previous character read
//	long n_chars = 0L;      // number of characters
//	int n_lines = 0;        // number of lines
//	int n_words = 0;        // number of words
//	int p_lines = 0;        // number of partial lines
//	bool inword = false;    // == true if c is in a word
//
//	printf("Enter text to be analyzed (| to terminate):\n");
//	prev = '\n';            // used to identify complete lines
//	while ((c = getchar()) != STOP) {
//		n_chars++;          // count characters
//		if (c == '\n')
//			n_lines++;      // count lines
//		if (!isspace(c) && !inword) {
//			inword = true;  // starting a new word
//			n_words++;      // count word
//		}
//		if (isspace(c) && inword)
//			inword = false; // reached end of word
//		prev = c;           // save character value
//	}
//
//	if (prev != '\n')
//		p_lines = 1;
//	printf("characters = %ld, words = %d, lines = %d, ",
//	       n_chars, n_words, n_lines);
//	printf("partial lines = %d\n", p_lines);
//
//	return 0;
//}


// chcount.c  -- use the logical AND operator

//#include <stdio.h>
//#define PERIOD '.'
//int main(void) {
//	char ch;
//	int charcount = 0;
//
//	while ((ch = getchar()) != PERIOD) {
//		if (ch != '"' && ch != '\'')
//			charcount++;
//	}
//	printf("There are %d non-quote characters.\n", charcount);
//
//	return 0;
//}


// divisors.c -- nested ifs display divisors of a number

//#include <stdio.h>
//#include <stdbool.h>
//int main(void) {
//	unsigned long num;          // number to be checked
//	unsigned long div;          // potential divisors
//	bool isPrime;               // prime flag
//
//	printf("Please enter an integer for analysis; ");
//	printf("Enter q to quit.\n");
//	while (scanf("%lu", &num) == 1) {
//		for (div = 2, isPrime = true; (div * div) <= num; div++) {
//			if (num % div == 0) {
//				if ((div * div) != num)
//					printf("%lu is divisible by %lu and %lu.\n",
//					       num, div, num / div);
//				else
//					printf("%lu is divisible by %lu.\n",
//					       num, div);
//				isPrime= false; // number is not prime
//			}
//		}
//		if (isPrime)
//			printf("%lu is prime.\n", num);
//		printf("Please enter another integer for analysis; ");
//		printf("Enter q to quit.\n");
//	}
//	printf("Bye.\n");
//
//	return 0;
//}


// electric.c -- calculates electric bill

//#include <stdio.h>
//#define RATE1   0.13230       // rate for first 360 kwh
//#define RATE2   0.15040       // rate for next 108 kwh
//#define RATE3   0.30025       // rate for next 252 kwh
//#define RATE4   0.34025       // rate for over 720 kwh
//#define BREAK1  360.0         // first breakpoint for rates
//#define BREAK2  468.0         // second breakpoint for rates
//#define BREAK3  720.0         // third breakpoint for rates
//#define BASE1   (RATE1 * BREAK1)
//// cost for 360 kwh
//#define BASE2  (BASE1 + (RATE2 * (BREAK2 - BREAK1)))
//// cost for 468 kwh
//#define BASE3   (BASE1 + BASE2 + (RATE3 *(BREAK3 - BREAK2)))
////cost for 720 kwh
//int main(void) {
//	double kwh;               // kilowatt-hours used
//	double bill;              // charges
//
//	printf("Please enter the kwh used.\n");
//	scanf("%lf", &kwh);       // %lf for type double
//	if (kwh <= BREAK1)
//		bill = RATE1 * kwh;
//	else if (kwh <= BREAK2)   // kwh between 360 and 468
//		bill = BASE1 + (RATE2 * (kwh - BREAK1));
//	else if (kwh <= BREAK3)   // kwh betweent 468 and 720
//		bill = BASE2 + (RATE3 * (kwh - BREAK2));
//	else                      // kwh above 680
//		bill = BASE3 + (RATE4 * (kwh - BREAK3));
//	printf("The charge for %.1f kwh is $%1.2f.\n", kwh, bill);
//
//	return 0;
//}


// cypher2.c -- alters input, preserving non-letters

//#include <stdio.h>
//#include <ctype.h>            // for isalpha()
//int main(void) {
//	char ch;
//
//	while ((ch = getchar()) != '\n') {
//		if (isalpha(ch))      // if a letter,
//			putchar(ch + 1);  // display next letter
//		else                  // otherwise,
//			putchar(ch);      // display as is
//	}
//	putchar(ch);              // display the newline
//
//	return 0;
//}


// cypher1.c -- alters input, preserving spaces

//#include <stdio.h>
//#define SPACE ' '             // that's quote-space-quote
//int main(void) {
//	char ch;
//
//	ch = getchar();           // read a character
//	while (ch != '\n') {      // while not end of line
//		if (ch == SPACE)      // leave the space
//			putchar(ch);      // character unchanged
//		else
//			putchar(ch + 1);  // change other characters
//		ch = getchar();       // get next character
//	}
//	putchar(ch);              // print the newline
//
//	return 0;
//}


// colddays.c -- finds percentage of days below freezing

//#include <stdio.h>
//int main(void) {
//	const int FREEZING = 0;
//	float temperature;
//	int cold_days = 0;
//	int all_days = 0;
//
//	printf("Enter the list of daily low temperatures.\n");
//	printf("Use Celsius, and enter q to quit.\n");
//	while (scanf("%f", &temperature) == 1) {
//		all_days++;
//		if (temperature < FREEZING)
//			cold_days++;
//	}
//	if (all_days != 0)
//		printf("%d days total: %.1f%% were below freezing.\n",
//		       all_days, 100.0 * (float) cold_days / all_days);
//	if (all_days == 0)
//		printf("No data entered!\n");
//
//	return 0;
//}


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


/* pe6-16.c */
//#include <stdio.h>
//#define RATE_SIMP 0.10
//#define RATE_COMP 0.05
//#define INIT_AMT 100.0
//int main( void ) {
//	double daphne = INIT_AMT;
//	double deidre = INIT_AMT;
//	int years = 0;
//	while (deidre <= daphne) {
//		daphne += RATE_SIMP * INIT_AMT;
//		deidre += RATE_COMP * deidre;
//		++years;
//	}
//	printf("Investment values after %d years:\n", years);
//	printf("Daphne: $%.2f\n", daphne);
//	printf("Deidre: $%.2f\n", deidre);
//	return 0;
//}


/* pe-14.c */
/* Programming Exercise 6-14 */
//#include <stdio.h>
//#define SIZE 8
//int main(void) {
//	double arr[SIZE];
//	double arr_cumul[SIZE];
//	int i;
//	printf("Enter %d numbers:\n", SIZE);
//	for (i = 0; i < SIZE; i++) {
//		printf("value #%d: ", i + 1);
//		scanf("%lf", &arr[i]);
//		/* or scanf("%lf", arr + i); */
//	}
//	arr_cumul[0] = arr[0]; /* set first element */
//	for (i = 1; i < SIZE; i++)
//		arr_cumul[i] = arr_cumul[i-1] + arr[i];
//	for (i = 0; i < SIZE; i++)
//		printf("%8g ", arr[i]);
//	printf("\n");
//	for (i = 0; i < SIZE; i++)
//		printf("%8g ", arr_cumul[i]);
//	printf("\n");
//	return 0;
//}


/* pe6-13.c */
/* This version starts with the 0 power */
//#include <stdio.h>
//#define SIZE 8
//int main( void ) {
//	int twopows[SIZE];
//	int i;
//	int value = 1; /* 2 to the 0 */
//	for (i = 0; i < SIZE; i++) {
//		twopows[i] = value;
//		value *= 2;
//	}
//	i = 0;
//	do {
//		printf("%d ", twopows[i]);
//		i++;
//	} while (i < SIZE);
//	printf("\n");
//	return 0;
//}


/* pe6-11.c */
//#include <stdio.h>
//#define SIZE 8
//int main( void ) {
//	int vals[SIZE];
//	int i;
//	printf("Please enter %d integers.\n", SIZE);
//	for (i = 0; i < SIZE; i++)
//		scanf("%d", &vals[i]);
//	printf("Here, in reverse order, are the values you entered:\n");
//	for (i = SIZE - 1; i >= 0; i--)
//		printf("%d ", vals[i]);
//	printf("\n");
//	return 0;
//}


/* pe6-8.c */
//#include <stdio.h>
//int main( void ) {
//	double n, m;
//	double res;
//	printf("Enter a pair of numbers: ");
//	while (scanf("%lf %lf", &n, &m) == 2) {
//		res = (n - m) / (n * m);
//		printf("(%.3g - %.3g)/(%.3g*%.3g) = %.5g\n", n, m, n, m, res);
//		printf("Enter next pair (non-numeric to quit): ");
//	}
//	return 0;
//}


/* pe6-6.c */
//#include <stdio.h>
//int main( void ) {
//	int lower, upper, index;
//	int square, cube;
//	printf("Enter starting integer: ");
//	scanf("%d", &lower);
//	printf("Enter ending integer: ");
//	scanf("%d", &upper);
//	printf("%5s %10s %15s\n", "num", "square", "cube");
//	for (index = lower; index <= upper; index++) {
//		square = index * index;
//		cube = index * square;
//		printf("%5d %10d %15d\n", index, square, cube);
//	}
//	return 0;
//}


/* pe6-3.c */
/* this implementation assumes the character codes */
/* are sequential, as they are in ASCII. */
//#include <stdio.h>
//int main( void ) {
//	char let = 'F';
//	char start;
//	char end;
//	for (end = let; end >= 'A'; end--) {
//		for (start = let; start >= end; start--)
//			printf("%c", start);
//		printf("\n");
//	}
//	return 0;
//}


/* pe6-1.c */
/* this implementation assumes the character codes */
/* are sequential, as they are in ASCII. */
//#include <stdio.h>
//#define SIZE 26
//int main( void ) {
//	char lcase[SIZE];
//	int i;
//	for (i = 0; i < SIZE; i++)
//		lcase[i] = 'a' + i;
//	for (i = 0; i < SIZE; i++)
//		printf("%c…", lcase[i]);
//	printf("\n");
//	return 0;
//}


//																			  	/*  ch06  c控制语句：循环 */


// power.c -- raises numbers to integer powers
//#include <stdio.h>
//double power(double n, int p); // ANSI prototype
//int main(void) {
//	double x, xpow;
//	int exp;
//
//	printf("Enter a number and the positive integer power");
//	printf(" to which\nthe number will be raised. Enter q");
//	printf(" to quit.\n");
//	while (scanf("%lf%d", &x, &exp) == 2) {
//		xpow = power(x,exp);   // function call
//		printf("%.3g to the power %d is %.5g\n", x, exp, xpow);
//		printf("Enter next pair of numbers or q to quit.\n");
//	}
//	printf("Hope you enjoyed this power trip -- bye!\n");
//
//	return 0;
//}
//
//double power(double n, int p) { // function definition
//	double pow = 1;
//	int i;
//
//	for (i = 1; i <= p; i++)
//		pow *= n;
//
//	return pow;                // return the value of pow
//}


// scores_in.c -- uses loops for array processing
//#include <stdio.h>
//#define SIZE 10
//#define PAR 72
//int main(void) {
//	int index, score[SIZE];
//	int sum = 0;
//	float average;
//
//	printf("Enter %d golf scores:\n", SIZE);
//	for (index = 0; index < SIZE; index++)
//		scanf("%d", &score[index]);  // read in the ten scores
//	printf("The scores read in are as follows:\n");
//	for (index = 0; index < SIZE; index++)
//		printf("%5d", score[index]); // verify input
//	printf("\n");
//	for (index = 0; index < SIZE; index++)
//		sum += score[index];         // add them up
//	average = (float) sum / SIZE;    // time-honored method
//	printf("Sum of scores = %d, average = %.2f\n", sum, average);
//	printf("That's a handicap of %.0f.\n", average - PAR);
//
//	return 0;
//}


// rows2.c -- using dependent nested loops
//#include <stdio.h>
//int main(void) {
//	const int ROWS = 6;
//	const int CHARS = 6;
//	int row;
//	char ch;
//
//	for (row = 0; row < ROWS; row++) {
//		for (ch = ('A' + row);  ch < ('A' + CHARS); ch++)
//			printf("%c", ch);
//		printf("\n");
//	}
//
//	return 0;
//}


/* rows1.c -- uses nested loops */
//#include <stdio.h>
//#define ROWS  6
//#define CHARS 10
//int main(void) {
//	int row;
//	char ch;
//
//	for (row = 0; row < ROWS; row++) {            /* line 10 */
//		for (ch = 'A'; ch < ('A' + CHARS); ch++)  /* line 12 */
//			printf("%c", ch);
//		printf("\n");
//	}
//
//	return 0;
//}


/* entry.c -- entry condition loop */
//#include <stdio.h>
//int main(void) {
//	const int secret_code = 13;
//	int code_entered;
//
//	printf("To enter the triskaidekaphobia therapy club,\n");
//	printf("please enter the secret code number: ");
//	scanf("%d", &code_entered);
//	while (code_entered != secret_code) {
//		printf("To enter the triskaidekaphobia therapy club,\n");
//		printf("please enter the secret code number: ");
//		scanf("%d", &code_entered);
//	}
//	printf("Congratulations! You are cured!\n");
//
//	return 0;
//}


/* do_while.c -- exit condition loop */
//#include <stdio.h>
//int main(void) {
//	const int secret_code = 13;
//	int code_entered;
//
//	do {
//		printf("To enter the triskaidekaphobia therapy club,\n");
//		printf("please enter the secret code number: ");
//		scanf("%d", &code_entered);
//	} while (code_entered != secret_code);
//	printf("Congratulations! You are cured!\n");
//
//	return 0;
//}


/* zeno.c -- series sum */
//#include <stdio.h>
//
//int main(void) {
//	int t_ct;       // term count
//	double time, power_of_2;
//	int limit;
//
//	printf("Enter the number of terms you want: ");
//	scanf("%d", &limit);
//	for (time=0, power_of_2=1, t_ct=1; t_ct <= limit;
//	        t_ct++, power_of_2 *= 2.0) {
//		time += 1.0/power_of_2;
//		printf("time = %f when terms = %d.\n", time, t_ct);
//	}
//
//	return 0;
//}


// postage.c -- first-class postage rates								逗号表达式，序列点，右侧值
//#include <stdio.h>
//int main(void) {
//	const int FIRST_OZ = 46; // 2013 rate
//	const int NEXT_OZ = 20;  // 2013 rate
//	int ounces, cost;
//
//	printf(" ounces  cost\n");
//	for (ounces=1, cost=FIRST_OZ; ounces <= 16; ounces++,
//	        cost += NEXT_OZ)
//		printf("%5d   $%4.2f\n", ounces, cost/100.0);
//
//	return 0;
//}


/* for_show.c */
//#include <stdio.h>
//int main(void) {
//	int num = 0;
//
//	for (printf("Keep entering numbers!\n"); num != 6;  )
//		scanf("%d", &num);
//	printf("That's the one I want!\n");
//	return 0;
//}


/* for_none.c */
//#include <stdio.h>
//int main(void) {
//	int ans, n;
//
//	ans = 2;
//	for (n = 3; ans <= 25; )
//		ans = ans * n;
//	printf("n = %d; ans = %d.\n", n, ans);
//	return 0;
//}


/* for_wild.c */
//#include <stdio.h>
//int main(void) {
//	int x;
//	int y = 55;
//
//	for (x = 1; y <= 75; y = (++x * 5) + 50)
//		printf("%10d %10d\n", x, y);
//	return 0;
//}


/* for_geo.c */
//#include <stdio.h>
//int main(void) {
//	double debt;
//
//	for (debt = 100.0; debt < 150.0; debt = debt * 1.1)
//		printf("Your debt is now $%.2f.\n", debt);
//	return 0;
//}


/* for_char.c */
//#include <stdio.h>
//int main(void) {
//	char ch;
//
//	for (ch = 'a'; ch <= 'z'; ch++)
//		printf("The ASCII value for %c is %d.\n", ch, ch);
//	return 0;
//}


/* for_13s.c */
//#include <stdio.h>
//int main(void) {
//	int n;        // count by 13s from 2
//
//	for (n = 2;  n < 60; n = n + 13)
//		printf("%d \n", n);
//	return 0;
//}


/* for_down.c */
//#include <stdio.h>
//int main(void) {
//	int secs;
//
//	for (secs = 5; secs > 0; secs--)
//		printf("%d seconds!\n", secs);
//	printf("We have ignition!\n");
//	return 0;
//}


/* for_cube.c -- using a for loop to make a table of cubes */
//#include <stdio.h>
//int main(void) {
//	int num;
//
//	printf("    n   n cubed\n");
//	for (num = 1; num <= 6; num++)
//		printf("%5d %5d\n", num, num*num*num);
//
//	return 0;
//}


// sweetie2.c -- a counting loop using for
//#include <stdio.h>
//int main(void) {
//	const int NUMBER = 22;
//	int count;
//
//	for (count = 1; count <= NUMBER; count++)
//		printf("%-2d Be my Valentine!\n",count);
//
//	return 0;
//}


// sweetie1.c -- a counting loop
//#include <stdio.h>
//int main(void) {
//	const int NUMBER = 22;
//	int count = 1;                     // initialization
//
//	while (count <= NUMBER) {          // test
//		printf("%-2d Be my Valentine!\n",count);  // action
//		count++;                       // update count
//	}
//
//	return 0;
//}


// boolean.c -- using a _Bool variable				布尔类型
//#include <stdio.h>
//int main(void) {
//	long num;
//	long sum = 0L;
//	_Bool input_is_good;
//
//	printf("Please enter an integer to be summed ");
//	printf("(q to quit): ");
//	input_is_good = (scanf("%ld", &num) == 1);
//	while (input_is_good) {
//		sum = sum + num;
//		printf("Please enter next integer (q to quit): ");
//		input_is_good = (scanf("%ld", &num) == 1);
//	}
//	printf("Those integers sum to %ld.\n", sum);
//
//	return 0;
//}


// trouble.c -- misuse of =					错误实例
// will cause infinite loop
//#include <stdio.h>
//int main(void) {
//	long num;
//	long sum = 0L;
//	int status;
//
//	printf("Please enter an integer to be summed ");
//	printf("(q to quit): ");
//	status = scanf("%ld", &num);
//	while (status = 1) {								//////////////////////////
//		sum = sum + num;
//		printf("Please enter next integer (q to quit): ");
//		status = scanf("%ld", &num);
//	}
//	printf("Those integers sum to %ld.\n", sum);
//
//	return 0;
//}


// truth.c -- what values are true?				非零即为真
//#include <stdio.h>
//int main(void) {
//	int n = 3;
//
//	while (n)
//		printf("%2d is true\n", n--);
//	printf("%2d is false\n", n);
//
//	n = -3;
//	while (n)
//		printf("%2d is true\n", n++);
//	printf("%2d is false\n", n);
//
//	return 0;
//}


/* t_and_f.c -- true and false values in C */
//#include <stdio.h>
//int main(void) {
//	int true_val, false_val;
//
//	true_val = (10 > 2);    // value of a true relationship
//	false_val = (10 == 2);  // value of a false relationship
//	printf("true = %d; false = %d \n", true_val, false_val);
//
//	return 0;
//}


// cmpflt.c -- floating-point comparisons
//#include <math.h>
//#include <stdio.h>
//int main(void) {
//	const double ANSWER = 3.14159;
//	double response;
//
//	printf("What is the value of pi?\n");
//	scanf("%lf", &response);
//	while (fabs(response - ANSWER) > 0.0001) {
//		printf("Try again!\n");
//		scanf("%lf", &response);
//	}
//	printf("Close enough!\n");
//
//	return 0;
//}


/* while2.c -- watch your semicolons */
//#include <stdio.h>
//int main(void) {
//	int n = 0;
//
//	while (n++ < 3);             /* line 7 */
//	printf("n is %d\n", n);  /* line 8 */
//	printf("That's all this program does.\n");
//
//	return 0;
//}


//错误实例
/* while1.c -- watch your braces       */
/* bad coding creates an infinite loop */
//#include <stdio.h>
//int main(void) {
//	int n = 0;
//
//	while (n < 3)
//		printf("n is %d\n", n);
//	n++;
//	printf("That's all this program does\n");
//
//	return 0;
//}


// when.c -- when a loop quits
//#include <stdio.h>
//int main(void) {
//	int n = 5;
//
//	while (n < 7) {                  // line 7
//		printf("n = %d\n", n);
//		n++;                         // line 10
//		printf("Now n = %d\n", n);   // line 11
//	}
//	printf("The loop has finished.\n");
//
//	return 0;
//}


/* summing.c -- sums integers entered interactively */
//#include <stdio.h>
//int main(void) {
//	long num;
//	long sum = 0L;      /* initialize sum to zero   */
//	int status;
//
//	printf("Please enter an integer to be summed ");
//	printf("(q to quit): ");
//	status = scanf("%ld", &num);
//	while (status == 1) { /* == means "is equal to"   */
//		sum = sum + num;
//		printf("Please enter next integer (q to quit): ");
//		status = scanf("%ld", &num);
//	}
//	printf("Those integers sum to %ld.\n", sum);
//
//	return 0;
//}


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/* Programming Exercise 5-7 */
//#include <stdio.h>
//void showCube(double x);
//int main(void) { /* finds cube of entered number */
//	double val;
//	printf("Enter a floating-point value: ");
//	scanf("%lf", &val);
//	showCube(val);
//	return 0;
//}
//void showCube(double x) {
//	printf("The cube of %e is %e.\n", x, x*x*x );
//}


/* Programming Exercise 5-5 */
//#include <stdio.h>
//int main(void) { /* finds sum of first n integers */
//	int count, sum;
//	int n;
//	printf("Enter the upper limit: ");
//	scanf("%d", &n);
//	count = 0;
//	sum = 0;
//	while (count++ < n)
//		sum = sum + count;
//	printf("sum = %d\n", sum);
//	return 0;
//}


/* Programming Exercise 5-3 */
//#include <stdio.h>
//int main(void) {
//	const int daysperweek = 7;
//	int days, weeks, day_rem;
//	printf("Enter the number of days: ");
//	scanf("%d", &days);
//	while (days > 0) {
//		weeks = days / daysperweek;
//		day_rem = days % daysperweek;
//		printf("%d days are %d weeks and %d days.\n",
//		       days, weeks, day_rem);
//		printf("Enter the number of days (0 or less to end): ");
//		scanf("%d", &days);
//	}
//	printf("Done!\n");
//	return 0;
//}


/* Programming Exercise 5-1 */
//#include <stdio.h>
//int main(void) {
//	const int minperhour = 60;
//	int minutes, hours, mins;
//	printf("Enter the number of minutes to convert: ");
//	scanf("%d", &minutes);
//	while (minutes > 0 ) {
//		hours = minutes / minperhour;
//		mins = minutes % minperhour;
//		printf("%d minutes = %d hours, %d minutes\n", minutes, hours, mins);
//		printf("Enter next minutes value (0 to quit): ");
//		scanf("%d", &minutes);
//	}
//	printf("Bye\n");
//	return 0;
//}

//																			  	/*  ch05  运算符、表达式和语句 */


// running.c -- A useful program for runners
//#include <stdio.h>
//const int S_PER_M = 60;         // seconds in a minute
//const int S_PER_H = 3600;       // seconds in an hour
//const double M_PER_K = 0.62137; // miles in a kilometer
//int main(void) {
//	double distk, distm;  // distance run in km and in miles
//	double rate;          // average speed in mph
//	int min, sec;         // minutes and seconds of running time
//	int time;             // running time in seconds only
//	double mtime;         // time in seconds for one mile
//	int mmin, msec;       // minutes and seconds for one mile
//
//	printf("This program converts your time for a metric race\n");
//	printf("to a time for running a mile and to your average\n");
//	printf("speed in miles per hour.\n");
//	printf("Please enter, in kilometers, the distance run.\n");
//	scanf("%lf", &distk);  // %lf for type double
//	printf("Next enter the time in minutes and seconds.\n");
//	printf("Begin by entering the minutes.\n");
//	scanf("%d", &min);
//	printf("Now enter the seconds.\n");
//	scanf("%d", &sec);
//	// converts time to pure seconds
//	time = S_PER_M * min + sec;
//	// converts kilometers to miles
//	distm = M_PER_K * distk;
//	// miles per sec x sec per hour = mph
//	rate = distm / time * S_PER_H;
//	// time/distance = time per mile
//	mtime = (double) time / distm;
//	mmin = (int) mtime / S_PER_M; // find whole minutes
//	msec = (int) mtime % S_PER_M; // find remaining seconds
//	printf("You ran %1.2f km (%1.2f miles) in %d min, %d sec.\n",
//	       distk, distm, min, sec);
//	printf("That pace corresponds to running a mile in %d min, ",
//	       mmin);
//	printf("%d sec.\nYour average speed was %1.2f mph.\n",msec,
//	       rate);
//
//	return 0;
//}


/* pound.c -- defines a function with an argument   */
//#include <stdio.h>
//void pound(int n);   // ANSI function prototype declaration
//int main(void) {
//	int times = 5;
//	char ch = '!';   // ASCII code is 33
//	float f = 6.0f;
//
//	pound(times);    // int argument
//	pound(ch);       // same as pound((int)ch);
//	pound(f);        // same as pound((int)f);
//
//	return 0;
//}
//
//void pound(int n) {  // ANSI-style function header
//	// says takes one int argument
//	while (n-- > 0)
//		printf("#");
//	printf("\n");
//}


/* convert.c -- automatic type conversions */
//#include <stdio.h>
//int main(void) {
//	char ch;
//	int i;
//	float fl;
//
//	fl = i = ch = 'C';                                  /* line 9  */
//	printf("ch = %c, i = %d, fl = %2.2f\n", ch, i, fl); /* line 10 */
//	ch = ch + 1;                                        /* line 11 */
//	i = fl + 2 * ch;                                    /* line 12 */
//	fl = 2.0 * ch + i;                                  /* line 13 */
//	printf("ch = %c, i = %d, fl = %2.2f\n", ch, i, fl); /* line 14 */
////	ch = 1107;                                          /* line 15 编译报错*/
//	printf("Now ch = %c\n", ch);                        /* line 16 */
//	ch = 80.89;                                         /* line 17 */
//	printf("Now ch = %c\n", ch);                        /* line 18 */
//
//	return 0;
//}


//																				副作用，序列点

/* addemup.c -- five kinds of statements */
//#include <stdio.h>
//int main(void) {              /* finds sum of first 20 integers */
//	int count, sum;           /* declaration statement          */
//
//	count = 0;                /* assignment statement           */
//	sum = 0;                  /* ditto                          */
//	while (count++ < 20)      /* while                          */
//		sum = sum + count;    /*     statement                  */
//	printf("sum = %d\n", sum);/* function statement             */
//
//	return 0;                 /* return statement               */
//}


//#include <stdio.h>
//#define MAX 100
//int main(void) {
//	int count = MAX + 1;
//
//	while (--count > 0) {
//		printf("%d bottles of spring water on the wall, "
//		       "%d bottles of spring water!\n", count, count);
//		printf("Take one down and pass it around,\n");
//		printf("%d bottles of spring water!\n\n", count - 1);
//	}
//
//	return 0;
//}


/* post_pre.c -- postfix vs prefix */
//#include <stdio.h>
//int main(void) {
//	int a = 1, b = 1;
//	int a_post, pre_b;
//
//	a_post = a++;  // value of a++ during assignment phase
//	pre_b = ++b;   // value of ++b during assignment phase
//	printf("a  a_post   b   pre_b \n");
//	printf("%1d %5d %5d %5d\n", a, a_post, b, pre_b);
//
//	return 0;
//}


/* add_one.c -- incrementing: prefix and postfix */
//#include <stdio.h>
//int main(void) {
//	int ultra = 0, super = 0;
//
//	while (super < 5) {
//		super++;
//		++ultra;
//		printf("super = %d, ultra = %d \n", super, ultra);
//	}
//
//	return 0;
//}


// min_sec.c -- converts seconds to minutes and seconds
//#include <stdio.h>
//#define SEC_PER_MIN 60            // seconds in a minute
//int main(void) {
//	int sec, min, left;
//
//	printf("Convert seconds to minutes and seconds!\n");
//	printf("Enter the number of seconds (<=0 to quit):\n");
//	scanf("%d", &sec);            // read number of seconds
//	while (sec > 0) {
//		min = sec / SEC_PER_MIN;  // truncated number of minutes
//		left = sec % SEC_PER_MIN; // number of seconds left over
//		printf("%d seconds is %d minutes, %d seconds.\n", sec,
//		       min, left);
//		printf("Enter next value (<=0 to quit):\n");
//		scanf("%d", &sec);
//	}
//	printf("Done!\n");
//
//	return 0;
//}


// sizeof.c -- uses sizeof operator
// uses C99 %z modifier -- try %u or %lu if you lack %zd
//#include <stdio.h>
//int main(void) {
//	int n = 0;
//	size_t intsize;
//
//	intsize = sizeof (int);
//	printf("n = %d, n has %u bytes; all ints have %u bytes.\n",
//	       n, sizeof n, intsize );
//
//	return 0;
//}


/* rules.c -- precedence test */
//#include <stdio.h>
//int main(void) {
//	int top, score;
//
//	top = score = -(2 + 5) * 6 + (4 + 3 * (2 + 3));
//	printf("top = %d, score = %d\n", top, score);
//
//	return 0;
//}


/* divide.c -- divisions we have known */								//趋零截断
//#include <stdio.h>
//int main(void) {
//	printf("integer division:  5/4   is %d \n", 5/4);
//	printf("integer division:  6/3   is %d \n", 6/3);
//	printf("integer division:  7/4   is %d \n", 7/4);
//	printf("floating division: 7./4. is %1.2f \n", 7./4.);
//	printf("mixed division:    7./4  is %1.2f \n", 7./4);
//
//	return 0;
//}


/* wheat.c -- exponential growth */
//#include <stdio.h>
//#define SQUARES 64             // squares on a checkerboard
//int main(void) {
//	const double CROP = 2E16;  // world wheat production in wheat grains
//	double current, total;
//	int count = 1;
//
//	printf("square     grains       total     ");
//	printf("fraction of \n");
//	printf("           added        grains    ");
//	printf("world total\n");
//	total = current = 1.0; 		/* start with one grain   */
//	printf("%4d %13.2e %12.2e %12.2e\n", count, current,
//	       total, total/CROP);
//	while (count < SQUARES) {
//		count = count + 1;
//		current = 2.0 * current;
//		/* double grains on next square */
//		total = total + current;    	 /* update total */
//		printf("%4d %13.2e %12.2e %12.2e\n", count, current,
//		       total, total/CROP);
//	}
//	printf("That's all.\n");
//
//	return 0;
//}


/* squares.c -- produces a table of first 20 squares */
//#include <stdio.h>
//int main(void) {
//	int num = 1;
//
//	while (num < 21) {
//		printf("%4d %6d\n", num, num * num);
//		num = num + 1;
//	}
//
//	return 0;
//}


/* golf.c -- golf tournament scorecard */
//#include <stdio.h>
//int main(void) {
//	int jane, tarzan, cheeta;
//
//	cheeta = tarzan = jane = 68;
//	printf("                  cheeta   tarzan    jane\n");
//	printf("First round score %4d %8d %8d\n",cheeta,tarzan,jane);
//
//	return 0;
//}


/* shoes2.c -- calculates foot lengths for several sizes */
//#include <stdio.h>
//#define ADJUST 7.31              // one kind of symbolic constant
//int main(void) {
//	const double SCALE = 0.333;  // another kind of symbolic constant
//	double shoe, foot;
//
//	printf("Shoe size (men's)    foot length\n");
//	shoe = 3.0;
//	while (shoe < 18.5) {    /* starting the while loop */
//		/* start of block          */
//		foot = SCALE * shoe + ADJUST;
//		printf("%10.1f %15.2f inches\n", shoe, foot);
//		shoe = shoe + 1.0;
//	}                        /* end of block            */
//	printf("If the shoe fits, wear it.\n");
//
//	return 0;
//}


/* shoes1.c -- converts a shoe size to inches */
//#include <stdio.h>
//#define ADJUST 7.31              // one kind of symbolic constant
//int main(void) {
//	const double SCALE = 0.333;  // another kind of symbolic constant
//	double shoe, foot;
//
//	shoe = 9.0;
//	foot = SCALE * shoe + ADJUST;
//	printf("Shoe size (men's)    foot length\n");
//	printf("%10.1f %15.2f inches\n", shoe, foot);
//
//	return 0;
//}


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/* Programming Exercise 4-7 */
//#include <stdio.h>
//#include <float.h>
//int main(void) {
//	float ot_f = 1.0 / 3.0;
//	double ot_d = 1.0 / 3.0;
//	printf(" float values: ");
//	printf("%.6f %.12f %.16f\n", ot_f, ot_f, ot_f);
//	printf("double values: ");
//	printf("%.6f %.12f %.16f\n", ot_d, ot_d, ot_d);
//	printf("FLT_DIG: %d\n", FLT_DIG);
//	printf("DBL_DIG: %d\n", DBL_DIG);
//	return 0;
//}


/* Programming Exercise 4-4 */
//#include <stdio.h>
//int main(void) {
//	float height;
//	char name[40];
//	printf("Enter your height in limi: ");
//	scanf("%f", &height);
//	printf("Enter your name: ");
//	scanf("%s", name);
//	printf("%s, you are %.2f m feet tall\n", name, height / 100.0);
//	return 0;
//}


/* Programming Exercise 4-1 */
//#include <stdio.h>
//int main(void) {
//	char fname[40];
//	char lname[40];
//	printf("Enter your first name: ");
//	scanf("%s", fname);
//	printf("Enter your last name: ");
//	scanf("%s", lname);
//	printf("%s, %s\n", lname, fname);
//	return 0;
//}


//																			  	/*  ch04  字符串和格式化输入/输出 */
/* skiptwo.c -- skips over first two integers of input */
//#include <stdio.h>
//int main(void) {
//	int n;
//
//	printf("Please enter three integers:\n");
//	scanf("%*d %*d %d", &n);
//	printf("The last integer was %d\n", n);
//
//	return 0;
//}


/* varwid.c -- uses variable-width output field */
//#include <stdio.h>
//int main(void) {
//	unsigned width, precision;
//	int number = 256;
//	double weight = 242.5;
//
//	printf("Enter a field width:\n");
//	scanf("%d", &width);
//	printf("The number is :%*d:\n", width, number);
//	printf("Now enter a width and a precision:\n");
//	scanf("%d %d", &width, &precision);
//	printf("Weight = %*.*f\n", width, precision, weight);
//	printf("Done!\n");
//
//	return 0;
//}


// input.c -- when to use &
//#include <stdio.h>
//int main(void) {
//	int age;             // variable
//	float assets;        // variable
//	char pet[30];        // string
//
//	printf("Enter your age, assets, and favorite pet.\n");
//	scanf("%d %f", &age, &assets); // use the & here
//	scanf("%s", pet);              // no & for char array
//	printf("%d $%.2f %s\n", age, assets, pet);
//
//	return 0;
//}


/* longstrg.c  printing long strings */
//#include <stdio.h>
//int main(void) {
//	printf("Here's one way to print a ");
//	printf("long string.\n");
//	printf("Here's another way to print a \
//long string.\n");
//	printf("Here's the newest way to print a "
//	       "long string.\n");      /* ANSI C */
//
//	return 0;
//}


/* prntval.c -- finding printf()'s return value */
//#include <stdio.h>
//int main(void) {
//	int bph2o = 212;
//	int rv;
//
//	rv = printf("%d F is water's boiling point.\n", bph2o);
//	printf("The printf() function printed %d characters.\n",
//	       rv);
//	return 0;
//}


/* floatcnv.c -- mismatched floating-point conversions */
//#include <stdio.h>
//int main(void) {
//	float n1 = 3.0;
//	double n2 = 3.0;
//	long n3 = 2000000000;
//	long n4 = 1234567890;
//
//	printf("%.1e %.1e %.1e %.1e\n", n1, n2, n3, n4);
//	printf("%ld %ld\n", n3, n4);
//	printf("%ld %ld %ld %ld\n", n1, n2, n3, n4);
//
//	return 0;
//}


/* intconv.c -- some mismatched integer conversions */
//#include <stdio.h>
//#define PAGES 336
//#define WORDS 65618
//int main(void) {
//	short num = PAGES;
//	short mnum = -PAGES;
//
//	printf("num as short and unsigned short:  %hd %hu\n", num,
//	       num);
//	printf("-num as short and unsigned short: %hd %hu\n", mnum,
//	       mnum);
//	printf("num as int and char: %d %c\n", num, num);
//	printf("WORDS as int, short, and char: %d %hd %c\n",
//	       WORDS, WORDS, WORDS);
//	return 0;
//}


/* stringf.c -- string formatting */
//#include <stdio.h>
//#define BLURB "Authentic imitation!"
//int main(void) {
//	printf("[%2s]\n", BLURB);
//	printf("[%24s]\n", BLURB);
//	printf("[%24.5s]\n", BLURB);
//	printf("[%-24.5s]\n", BLURB);
//	return 0;
//}


/* flags.c -- illustrates some formatting flags */
//#include <stdio.h>
//int main(void) {
//	printf("%x %X %#x\n", 31, 31, 31);
//	printf("**%d**% d**% d**\n", 42, 42, -42);
//	printf("**%5d**%5.3d**%05d**%05.3d**\n", 6, 6, 6, 6);
//
//	return 0;
//}


// floats.c -- some floating-point combinations
//#include <stdio.h>
//
//int main(void) {
//	const double RENT = 3852.99;  // const-style constant
//
//	printf("*%f*\n", RENT);
//	printf("*%e*\n", RENT);
//	printf("*%4.2f*\n", RENT);
//	printf("*%3.1f*\n", RENT);
//	printf("*%10.3f*\n", RENT);
//	printf("*%10.3E*\n", RENT);
//	printf("*%+4.2f*\n", RENT);
//	printf("*%010.2f*\n", RENT);
//
//	return 0;
//}


/* width.c -- field widths */
//#include <stdio.h>
//#define PAGES 959
//int main(void) {
//	printf("*%d*\n", PAGES);
//	printf("*%2d*\n", PAGES);
//	printf("*%10d*\n", PAGES);
//	printf("*%-10d*\n", PAGES);
//
//	return 0;
//}


/* printout.c -- uses conversion specifiers */
//#include <stdio.h>
//#define PI 3.141593
//int main(void) {
//	int number = 7;
//	float pies = 12.75;
//	int cost = 7800;
//
//
//	printf("The %d contestants ate %f berry pies.\n", number,
//	       pies);
//	printf("The value of pi is %f.\n", PI);
//	printf("Farewell! thou art too dear for my possessing,\n");
//	printf("%c%d\n", '$', 2 * cost);
//
//	return 0;
//}


// defines.c -- uses defined constants from limit.h and float.
//#include <stdio.h>
//#include <limits.h>    // integer limits
//#include <float.h>     // floating-point limits
//int main(void) {
//	printf("Some number limits for this system:\n");
//	printf("Biggest int: %d\n", INT_MAX);
//	printf("Smallest long long: %lld\n", LLONG_MIN);
//	printf("One byte = %d bits on this system.\n", CHAR_BIT);
//	printf("Largest double: %e\n", DBL_MAX);
//	printf("Smallest normal float: %e\n", FLT_MIN);
//	printf("float precision = %d digits\n", FLT_DIG);
//	printf("float epsilon = %e\n", FLT_EPSILON);
//
//	return 0;
//}


/* pizza.c -- uses defined constants in a pizza context */
//#include <stdio.h>
//#define PI 3.14159
//int main(void) {
//	float area, circum, radius;
//
//	printf("What is the radius of your pizza?\n");
//	scanf("%f", &radius);
//	area = PI * radius * radius;
//	circum = 2.0 * PI *radius;
//	printf("Your basic pizza parameters are as follows:\n");
//	printf("circumference = %1.2f, area = %1.2f\n", circum,
//	       area);
//	return 0;
//}


/* praise2.c */
// try the %u or %lu specifiers if your implementation
// does not recognize the %zd specifier
//#include <stdio.h>
//#include <string.h>      /* provides strlen() prototype */
//#define PRAISE "You are an extraordinary being."
//int main(void) {
//	char name[40];
//
//	printf("What's your name? ");
//	scanf("%s", name);
//	printf("Hello, %s. %s\n", name, PRAISE);
//	printf("Your name of %d letters occupies %d memory cells.\n",
//	       strlen(name), sizeof name);
//	printf("The phrase of praise has %d letters ",
//	       strlen(PRAISE));
//	printf("and occupies %d memory cells.\n", sizeof PRAISE);
//
//	return 0;
//}


/* praise1.c -- uses an assortment of strings */
//#include <stdio.h>
//#define PRAISE "You are an extraordinary being."
//int main(void) {
//	char name[40];
//
//	printf("What's your name? ");
//	scanf("%s", name);
//	printf("Hello, %s. %s\n", name, PRAISE);
//
//	return 0;
//}

//																空字符  '\0'

/* talkback.c -- nosy, informative program
//#include <stdio.h>
//#include <string.h>      // for strlen() prototype
//#define DENSITY 62.4     // human density in lbs per cu ft
//int main() {
//	float weight, volume;
//	int size, letters;
//	char name[40];        // name is an array of 40 chars
//
//	printf("Hi! What's your first name?\n");
//	scanf("%s", name);
//	printf("%s, what's your weight in pounds?\n", name);
//	scanf("%f", &weight);
//	size = sizeof name;
//	letters = strlen(name);
//	volume = weight / DENSITY;
//	printf("Well, %s, your volume is %2.2f cubic feet.\n",
//	       name, volume);
//	printf("Also, your first name has %d letters,\n",
//	       letters);
//	printf("and we have %d bytes to store it.\n", size);
//
//	return 0;
//}


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/* Programming Exercise 3-6 */
//#include <stdio.h>
//int main(void) {
//	float mass_mol = 3.0e-23; /* mass of water molecule in grams */
//	float mass_qt = 950; /* mass of quart of water in grams */
//	float quarts;
//	float molecules;
//	printf("Enter the number of quarts of water: ");
//	scanf("%f", &quarts);
//	molecules = quarts * mass_qt / mass_mol;
//	printf("%f quarts of water contain %e molecules.\n", quarts, molecules);
//	return 0;
//}


/* Programming Exercise 3-4 */
//#include <stdio.h>
//int main(void) {
//	float num;
//	printf("Enter a floating-point value: ");
//	scanf("%f", &num);
//	printf("fixed-point notation: %f\n", num);
//	printf("exponential notation: %e\n", num);
//	printf("p notation: %a\n", num);
//	return 0;
//}

/* Programming Exercise 3-2 */
//#include <stdio.h>
//int main(void) {
//	int ascii;
//	printf("Enter an ASCII code: ");
//	scanf("%d", &ascii);
//	printf("%d is the ASCII code for %c.\n", ascii, ascii);
//	return 0;
//}


//																			  	/*  ch03  基本数据类型 */
/* bases.c--prints 100 in decimal, octal, and hex */
//#include <stdio.h>
//int main(void) {
//	int x = 100;
//
//	printf("dec = %d; octal = %o; hex = %x\n", x, x, x);
//	printf("dec = %d; octal = %#o; hex = %#x\n", x, x, x);
//
//	return 0;
//}


/* escape.c -- uses escape characters */
//#include <stdio.h>
//int main(void) {
//	float salary;
//
//	printf("\aEnter your desired monthly salary:");/* 1 */
//	printf(" $_______\b\b\b\b\b\b\b");             /* 2 */
//	scanf("%f", &salary);
//	printf("\n\t$%.2f a month is $%.2f a year.", salary,
//	       salary * 12.0);                         /* 3 */
//	printf("\rGee!\n");                            /* 4 */
//
//	return 0;
//}



/* badcount.c -- incorrect argument counts */
//#include <stdio.h>
//int main(void) {
//	int n = 4;
//	int m = 5;
//	float f = 7.0f;
//	float g = 8.0f;
//
//	printf("%d\n", n, m);    /* too many arguments   */
//	printf("%d %d %d\n", n); /* too few arguments    */
//	printf("%d %d\n", f, g); /* wrong kind of values */
//
//	return 0;
//}


/* typesize.c -- prints out type sizes */
//#include <stdio.h>
//int main(void) {
//	/* c99 provides a %zd specifier for sizes */
//	printf("Type int has a size of %u bytes.\n", sizeof(int));
//	printf("Type char has a size of %u bytes.\n", sizeof(char));
//	printf("Type long has a size of %u bytes.\n", sizeof(long));
//	printf("Type long long has a size of %u bytes.\n",
//	       sizeof(long long));
//	printf("Type double has a size of %u bytes.\n",
//	       sizeof(double));
//	printf("Type long double has a size of %u bytes.\n",
//	       sizeof(long double));
//	return 0;
//}


/* floaterr.c--demonstrates round-off error */
//#include <stdio.h>
//int main(void) {
//	float a,b;
//
//	b = 2.0e20 + 1.0;
//	a = b - 2.0e20;
//	printf("%f \n", a);
//
//	return 0;
//}


/* showf_pt.c -- displays float value in two ways */
//#include <stdio.h>
//int main(void) {
//	float aboat = 32000.0;
//	double abet = 2.14e9;
//	long double dip = 5.32e-5;
//
//	printf("%f can be written %e\n", aboat, aboat);
//	// next line requires C99 or later compliance
//	printf("And it's %a in hexadecimal, powers of 2 notation\n", aboat);
//	printf("%f can be written %e\n", abet, abet);
//	printf("%Lf can be written %Le\n", dip, dip);
//
//	return 0;
//}


///* altnames.c -- portable names for integer types */
//#include <stdio.h>
//#include <inttypes.h> // supports portable types
//int main(void) {
//	int32_t me32;     // me32 a 32-bit signed variable
//
//	me32 = 45933945;
//	printf("First, assume int32_t is int: ");
//	printf("me32 = %d\n", me32);
//	printf("Next, let's not make any assumptions.\n");
//	printf("Instead, use a \"macro\" from inttypes.h: ");
//	printf("me32 = %" PRId32 "\n", me32);	  			//扩展的整数类型
//
//	return 0;
//}


/* charcode.c-displays code number for a character */
//#include <stdio.h>
//int main(void) {
//	char ch;
//
//	printf("Please enter a character.\n");
//	scanf("%c", &ch);   /* user inputs character */
//	printf("The code for %c is %d.\n", ch, ch);
//
//	return 0;
//}


/* print2.c-more printf() properties */
//#include <stdio.h>
//int main(void) {
//	unsigned int un = 3000000000u; /* system with 32-bit int */
//	short end = 200;              /* and 16-bit short       */
//	long big = 65537;
//	long long verybig = 12345678908642;
//
//	printf("un = %u and not %d\n", un, un);
//	printf("end = %hd and %d\n", end, end);
//	printf("big = %ld and not %hd\n", big, big);
//	printf("verybig= %lld and not %ld\n", verybig, verybig);
//
//	return 0;
//}


/* toobig.c-exceeds maximum int size on our system */
//#include <stdio.h>
//int main(void) {
//	int i = 2147483647;
//	unsigned int j = 4294967295u;					//  后面加上u
//
//	printf("%d %d %d\n", i, i+1, i+2);
//	printf("%u %u %u\n", j, j+1, j+2);
//
//	return 0;
//}


/* print1.c-displays some properties of printf() */
//#include <stdio.h>
//int main(void) {
//	int ten = 10;
//	int two = 2;
//
//	printf("Doing it right: ");
//	printf("%d minus %d is %d\n", ten, 2, ten - two );
//	printf("Doing it wrong: ");
//	printf("%d minus %d is %d\n", ten );  	// forgot 2 arguments
//
//	return 0;
//}


//	1位  8字节  字

/* platinum.c  -- your weight in platinum */
//#include <stdio.h>
//int main(void) {
//	float weight;    /* user weight             */
//	float value;     /* platinum equivalent     */
//
//	printf("Are you worth your weight in platinum?\n");
//	printf("Let's check it out.\n");
//	printf("Please enter your weight in pounds: ");
//
//	/* get input from the user                     */
//	scanf("%f", &weight);
//	/* assume platinum is $1700 per ounce          */
//	/* 14.5833 converts pounds avd. to ounces troy */
//	value = 1700.0 * weight * 14.5833;
//	printf("Your weight in platinum is worth $%.2f.\n", value);
//	printf("You are easily worth that! If platinum prices drop,\n");
//	printf("eat more to maintain your value.\n");
//
//	return 0;
//}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


/* Programming Exercise 2-8 */
//#include <stdio.h>
//void one_three(void);
//void two(void);
//int main(void) {
//	printf("starting now:\n");
//	one_three();
//	printf("done!\n");
//	return 0;
//}
//void one_three(void) {
//	printf("one\n");
//	two();
//	printf("three\n");
//}
//void two(void) {
//	printf("two\n");
//}


/* Programming Exercise 2-6 */
//#include <stdio.h>
//int main(void) {
//	int toes;
//	toes = 10;
//	printf("toes = %d\n", toes);
//	printf("Twice toes = %d\n", 2 * toes);
//	printf("toes squared = %d\n", toes * toes);
//	return 0;
//}
///* or create two more variables, set them to 2 * toes and toes * toes */



/* Programming Exercise 2-4 */
//#include <stdio.h>
//void jolly(void);
//void deny(void);
//int main(void) {
//	jolly();
//	jolly();
//	jolly();
//	deny();
//	return 0;
//}
//void jolly(void) {
//	printf("For he's a jolly good fellow!\n");
//}
//void deny(void) {
//	printf("Which nobody can deny!\n");
//}


/* Programming Exercise 2-3 */
//#include <stdio.h>
//int main(void) {
//	int ageyears; /* age in years */
//	int agedays; /* age in days */
//	/* large ages may require the long type */
//	ageyears = 101;
//	agedays = 365 * ageyears;
//	printf("An age of %d years is %d days.\n", ageyears, agedays);
//	return 0;
//}


/* Programming Exercise 2-1 */
//#include <stdio.h>
//int main(void) {
//	printf("Gustav Mahler\n");
//	printf("Gustav\nMahler\n");
//	printf("Gustav ");
//	printf("Mahler\n");
//	return 0;
//}

//																				/*  ch02  c语言概述 */
//			c关键字
//			auto  		extern		short		while
//			break		float		signed		_Alignas
//			case		for			sizeof		_Alognof
//			char		goto		static		_Atomic
//			const		if			struct		_Bool
//			continue	inline		switch		_Complex
//			default		int			typedef		_Generic
//			do			long		union		_Imaginary
//			double		register	unsigned	_Noreturn
//			else		restrict?	void		_Static_assert
//			enum		return		volatile	_Thread_local


/* stillbad.c -- a program with its syntax errors fixed */
//#include <stdio.h>
//int main(void) {
//	int n, n2, n3;
//
//	/* this program has a semantic error */
//	n = 5;
//	n2 = n * n;
//	n3 = n2 * n2;
//	printf("n = %d, n squared = %d, n cubed = %d\n", n, n2, n3);
//
//	return 0;
//}


/*  nogood.c -- a program with errors */
//#include <stdio.h>
//int main(void)
//(
//    int n, int n2, int n3;
//
//    /* this program has several errors*/
//    n = 5;
//    n2 = n * n;
//    n3 = n2 * n2;
//    printf("n = %d, n squared = %d, n cubed = %d\n", n, n2, n3)
//
//    return 0;
//)


/* two_func.c -- a program using two functions in one file */
//#include <stdio.h>
//void butler(void);      /* ANSI/ISO C function prototyping */
//int main(void) {
//	printf("I will summon the butler function.\n");
//	butler();
//	printf("Yes. Bring me some tea and writeable DVDs.\n");
//
//	return 0;
//}
//
//void butler(void) {     /* start of function definition */
//	printf("You rang, sir?\n");
//}


// fathm_ft.c -- converts 2 fathoms to feet
//#include <stdio.h>
//int main(void) {
//	int feet, fathoms;
//
//	fathoms = 2;
//	feet = 6 * fathoms;
//	printf("There are %d feet in %d fathoms!\n", feet, fathoms);
//	printf("Yes, I said %d feet!\n", 6 * fathoms);
//
//	return 0;
//}


// first.c
// 			c语言6种语句，标号语句，复合语句，表达式语句，选择语句，迭代语句，跳转语句
//#include <stdio.h>
//int main(void) {              /* a simple program             */
//	/*关键字   标识符*/
//	int 		num;                  /* define a variable called num */
//	num = 1;                  /* assign a value to num        */
//
//	printf("I am a simple "); /* use the printf() function    */
//	printf("computer.\n");
//	printf("My favorite number is %d because it is first.\n",num);
//
//	return 0;			//属于跳转语句
//}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//可移植性，源代码无需修改
//源代码，目标代码，可执行代码
//编译器把源代码翻译为目标代码
//链接器把目标代码，库代码和启动代码合成可执行代码

//																				/*  ch01 初识c语言  */
//#include <stdio.h>
//int main(void) {
//	int dogs;
//
//	printf("A .c is used to end a C program filename.\n");
//
//	printf("How many dogs do you have?\n");
//	scanf("%d", &dogs);
//	printf("So you have %d dog(s)!\n", dogs);
//
//	printf("Concrete contains gravel and cement.\n");
//
//	return 0;
//}
