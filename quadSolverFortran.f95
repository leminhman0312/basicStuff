!solving ax^2 + bx + c = 0

program output
  implicit none
  real :: a,b,c
  character :: response
  do 
    print*, 'Enter three coefficients a,b and c'
    read *, a,b,c
    print 11, a,b,c    
    11 format(/,F8.3,'x^2 +',F8.3,' x + ',F8.3,' = 0',/)

    call quad(a,b,c)
    print*, 'Press Y to continue. Anykey for otherwise'
    read *, response
    if ( response /= 'y' .and. response /= 'Y') stop    
  end do
end program output



!Function to calculate Xs
subroutine quad(a,b,c)
  implicit none
  real :: a,b,c,x,y,discriminant

  x = -b/(2*a)
  discriminant = b*b-4*a*c
   
  if (discriminant>0) then 
    print*, 'Real, distinct roots'
    y = sqrt(discriminant)/(2*a)
    print 12, 1, x+y
    print 12, 2, x-y
  else if (discriminant < 0) then
    print*, 'Complex roots' 
    y = sqrt(-discriminant)/(2*a)
    print 13, 1, x, '+', y
    print 13, 2, x, '-', y
  else
    print*, 'Repeated roots'
    print 14, x+y
  end if

  12 format('x',I1 ,' = ', F12.6)
  13 format('x', I1, ' = ', F12.6,A,F12.6,' i')
  14 format('x1 = x2 = ', F12.6)

  
  
end subroutine quad