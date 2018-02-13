def calcGoldenNumber(year):
    """ Returns the Golden Number (Aureus numerus) for a given year
    """

    golden_num = (year + 1) % 19

    if golden_num == 0:
        golden_num = 19

    return golden_num

def calcEpacts(year):
    """ Returns the epacts for a given year
        The number 0 corresponds to the symbol '*' """

    golden_num = calcGoldenNumber(year)

    epact = (golden_num * 11 + 18) % 30

    return epact

'''
To be accurate, Dominical Letter should be calculated by date, not 
simply year, because in leap years there are two different values -- 
one before and the other after the Feast of St Matthias
'''
def dominicalLetter(date):
    """ Returns the current Dominical Letter (littera Dominicalis)
        for a given date. """

    year = date.year

    chartPos = (year - 1901) % 28

    dominicalLetters = [
            'f',
            'e',
            'd',
            ['c', 'b'],
            'A',
            'g',
            'f',
            ['e', 'd'],
            'c',
            'b',
            'A',
            ['g', 'f'],
            'e',
            'd',
            'c',
            ['b', 'A'],
            'g',
            'f',
            'e',
            ['d', 'c'],
            'b',
            'A',
            'g',
            ['f', 'e'],
            'd',
            'c',
            'b',
            ['A', 'g']
        ]

    dominicalLetter = dominicalLetters[chartPos]

    if year % 4 == 0 and year % 100 != 0:
        if date.month <= 2:
            dominicalLetter = dominicalLetters[chartPos][0]
        else:
            dominicalLetter = dominicalLetters[chartPos][1]
    
    return dominicalLetter

