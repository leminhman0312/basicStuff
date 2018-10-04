program neatoutput

  implicit none
  character :: a*10,b*16
  real,dimension(10) :: x,ex
  integer :: i
  x(1) = 0.0
  a = 'X'
  b = 'Y'

  write(*,2), a,b
  2 format(2a16)
  print *,'  -----------------'
  do i = 1,11
    x(i+1) = x(i) + 0.1
    ex(i) = exp(x(i))
    write(*,10), x(i), ex(i)
  end do

  
  10 format(2f10.5)  

end program neatoutput
