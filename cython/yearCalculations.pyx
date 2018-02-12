def calcGoldenNumber(int year):
    """ Returns the Golden Number (Aureus numerus) for a given year 
    """

    cdef int golden_num

    golden_num = (year + 1) % 19

    if golden_num == 0:
        golden_num = 19

    return golden_num


def calcEpacts(int year):
    """ Returns the epact for a given year
        The number 0 corresponds to the symbol '*' """

    cdef int golden_num
    cdef int epact

    golden_num = calcGoldenNumber(year)

    epact = (golden_num * 11 + 18) % 30

    return epact

