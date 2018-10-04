program output

  implicit none
  real, allocatable, dimension(:) :: list
  integer :: n,i
  real :: average
  print*, 'Enter number of elements'
  read *, n
  allocate(list(n))
  print*, 'Your vector is of size', n, ' elements. Enter each elements'
  !input 
  do i = 1,n
    read *, list(i)
  end do
  !print to check
  print*, 'This is your vector'
  do i = 1,n
    print*, list(i)
  end do

!   !print average
!   average = sum(list)/n
!   print 10, average
!   10 format ('Average = ', F12.6)

  call myfunction(list,n)


end program output

subroutine myfunction(list,n)
  real,dimension(n) :: list
  integer:: n
  real :: average
  average = sum(list)/n
  print 10, average
  10 format ('Average = ', F12.6)

end subroutine myfunction

