C Libraries for Liturgical Calculations
=======================================

The functions currently included require a date `tm` structure,
provided in the standard `time.h` library.

The easiest way to get the current date using this library is to
declare a `time_t` variable initialized to null, and pass it to a
`struct tm` pointer, like so:

	time_t t = time(NULL);
	struct tm now = *localtime(&t);

This will result in a `struct tm` pointer named `now` which contains
the local time as reported by the OS.
