#include <time.h>

int calc_golden_number (struct tm date)
	/**
	 * Calculate the golden number (Aur. num.)
	 *
	 * from `De anno et eius partibus` (Gregory Pp XIII):
	 *
	 * "Numero anni de quo quæris, adde unicam unitatem 1. Exempli
	 * gratia: 1833 adde 1: summam inde conflatam divide per 19;
	 * quod superest, erit Aureus numerus ipsius anni: si nihil
	 * superest, erit Aureus numerus 19"
	 */
{
	int year = date.tm_year + 1900;

	int golden_num = (year + 1) % 19;

	if (golden_num == 0)
	{
		golden_num = 19;
	}

	return golden_num;
}

int calc_epacts (struct tm date)
	/**
	 * Calculate the epacts for a given year
	 *
	 * Valid for the years from 1900 to 2199, as laid out by 
	 * Pope Gregory XIII in `De anno et eius partibus`
	 *
	 * The number 0 indicates the symbol '*' in written calendars
	 */
{
	int golden_num; 
	int epact;

	golden_num = calc_golden_number (date);
	epact = (golden_num * 11 + 18) % 30;

	return epact;
}

