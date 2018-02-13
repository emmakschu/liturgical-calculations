program test

      implicit none

      integer :: year, golden_number, epacts

      year = 2018

      print *, golden_number(year)

      print *, epacts(year)

end program test

function golden_number(year)

      implicit none

      integer :: year, golden_number

      golden_number = modulo(year + 1, 19)

end function golden_number

function epacts(year)

        implicit none

        integer :: year, golden_number, epacts, arg

        arg = 11 * golden_number(year) + 18

        epacts = modulo(arg, 30)

end function epacts


