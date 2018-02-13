#include <time.h>


int calc_golden_number_from_year (int year)
	/**
	 * Calculate the golden number (Aur. num.) from an integer
	 * representing the year
	 *
	 * from `De anno et eius partibus` (Gregory Pp XIII):
	 *
	 * "Numero anni de quo quæris, adde unicam unitatem 1. Exempli
	 * gratia: 1833 adde 1: summam inde conflatam divide per 19;
	 * quod superest, erit Aureus numerus ipsius anni: si nihil
	 * superest, erit Aureus numerus 19"
	 */
{
	int golden_num = (year + 1) % 19;

	if (golden_num == 0)
	{
		golden_num = 19;
	}

	return golden_num;
}

int calc_golden_number_from_tm (struct tm date)
	/**
	 * Calculate the golden number (Aur. num.) from a time `tm`
	 * structure
	 */
{
	int year = date.tm_year + 1900;

	int golden_num = calc_golden_num_from_year (year); 

	return golden_num;
}


int calc_epacts_from_year (int year)
	/**
	 * Calculate the epacts for the year from an integer representing
	 * the year
	 *
	 * Valid for the years from 1900 to 2199, as laid out by 
	 * Pope Gregory XIII in `De anno et eius partibus`
	 *
	 * The number 0 indicates the symbol '*' in written calendars
	 */
{
	int golden_num;
	int epacts;

	golden_num = calc_golden_number_from_year (year);
	epacts = (golden_num * 11 + 18) % 30;

	return epacts;
}

int calc_epacts_from_tm (struct tm date)
	/**
	 * Calculate the epacts for the year from a time `tm` structure
	 *
	 * Valid for the years from 1900 to 2199, as laid out by
	 * Pope Gregory XIII in `De anno et eius partibus`
	 *
	 * The number 0 corresponds to the symbol '*' in written
	 * calendars
	 */
{
	int golden_num; 
	int epacts;

	golden_num = calc_golden_number_from_tm (date);
	epacts = (golden_num * 11 + 18) % 30;

	return epacts;
}

