def calcGoldenNumber(year):
    """ Returns the Golden Number (Aureus numerus) for a given year
    """

    golden_num = (year + 1) % 19

    if golden_num == 0:
        golden_num = 19

    return golden_num

def calcEpacts(year):
    """ Returns the epact for a given year
        The number 0 corresponds to the symbol '*' """

    golden_num = calcGoldenNumber(year)

    epact = (golden_num * 11 + 18) % 30

    return epact
