program PolygonPi_Fortran
  implicit none

  integer(kind=4) :: iterations, n
  real(kind=16) :: area, bN, a, b

  iterations = 30 !change this to change iteration count
  area = 2.0 * (2.0 ** 0.5)
  bN = (2.0 ** 0.5)
  
  do n = 1, iterations
    a = (2.0 ** n) * ((2.0 - bN) ** 0.5)
    bN = (2.0 + bN) ** 0.5
    b = 2.0 - bN
    area = area + a * b
    write(*,*) area
  end do

end program PolygonPi_Fortran
