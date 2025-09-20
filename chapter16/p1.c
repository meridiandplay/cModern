/*
 * Chapter 16: Program 1:
 * Write a program that asks the user to enter an international
 * dialing code and then looks it up in the country_codes array
 * of section 16.3. If it ifids the code the program should display
 * the name of the corresponding country, if not, the program should
 * print an error message.
 *
 */

#include <stdio.h>
#include <stdbool.h>

struct dialing_code {
	char *country;
	int code;
};

const struct dialing_code country_codes[] = {{"Argentina", 54},
	                                     {"Brazil",    55},
	                                     {"China" ,    86},
	                                     {"Congo",    243},
	                                     {"Ethiopia", 251},
	                                     {"Germany",   49},
	                                   {"Bangladesh", 880},
	                                     {"Myanmar",   95},
	                                     {"Colombia",  57},
	                                     {"Egypt",     20},
	                                     {"France",    33},
	                                     {"India",     91},
	                                     {"Indonesia", 62},
	                                     {"Italy",     39},
	                                     {"Mexico",    52},
	                                     {"Pakistan",  92},
	                                     {"Poland",    48},
	                                  {"South Africa", 27},
	                                     {"Spain",     34},
	                                     {"Thailand",  66},
	                                     {"Ukraine",  380},
	                                 {"United States",  1},
	                                     {"Iran",      98},
	                                     {"Japan" ,    81},
	                                     {"Nigeria",  234},
	                                   {"Philippines",  63},
	                                     {"Russia",     7},
	                                   {"South Korea", 82},
	                                     {"Sudan",    249},
	                                     {"Turkey",    90},
				       {"United Kingdom",  44},
	                                     {"Vietnam",   84}};

int main (void) {

  bool found = false;
  const struct dialing_code *d;
  int code=0;
  char *c;
  printf("Enter an international dialing code: ");
  scanf("%d", &code);
  
  for (d=&country_codes[0]; d<=(&country_codes[0]+((sizeof(country_codes))/sizeof(country_codes[0]))); d++) {
    if (d->code == code) {
      found=true;
      c = d->country;
    }
  }

  found ? printf("Country: %s.\n", c) : printf("Country not found.\n");
  return 0;
}
