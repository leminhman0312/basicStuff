! print a neat 2d array

program array

  implicit none
  real :: ra(4,4)
  integer :: row,col, diag
  !use implied do
  do row = 1,4
    do col = 1,4
      ra(row,col) = 0
    end do
  end do
  
  do diag = 1,4
    ra(diag,diag) = 1    
  end do

  !write format
  do row=1,4
    write(*,10) (ra(row,col),col=1,4)
  end do
  10 format(10f5.1)  

end program array

