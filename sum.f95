program array

  implicit none
  real, dimension(10) :: x
  real :: average, sum
  integer :: i 
  print*, 'Enter 10 numbers'
  sum = 0.0
  do i = 1,10
    read *, x(i)
    sum = sum + x(i)
  end do
  average = sum/10
  print*, 'Average is ', average
  print*, 'The numbers are'
  print*, x

end program array
