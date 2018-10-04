program test

  implicit none
  real, allocatable, dimension(:,:) :: ra1, ra2, ra3
  integer :: size
  print*, 'Enter size of array'
  read *, size
  allocate(ra1(size,size),ra2(size,size),ra3(size,size))
  print*, 'Enter matrix ra1 row by row'
  call fill_array(size,ra1)
  print*, 'Enter matrix ra2 row by row'
  call fill_array(size,ra2)

  !echo the arrays

  print*, 'ra1'
  call outputra(size,ra1)

  print*, 'ra2'
  call outputra(size,ra2)

  !multiply

  ra3 = matmul(ra1,ra2)
  print*, 'matmul of ra1 and ra2'
  call outputra(size,ra3)
  ra3 = transpose(ra1)
  print *,'transpose of ra1'
  call outputra(size,ra3)
  deallocate(ra1,ra2,ra3)
end program test


subroutine outputra(size,ra)
  implicit none
  ! outout a square array nicely
  integer :: size, row,col
  real, dimension(size,size) :: ra 
  character :: reply*1
  do row = 1,size
    write(*,10)(ra(row,col),col=1,size)
    10 format(100f10.2)
  end do

  print*,'__________________________________________________'
  print*,'Hit a key and press enter to continue'
  read *,reply  
end subroutine outputra

subroutine fill_array(size,ra)
  implicit none
  integer :: row,col,size
  real :: num
  real,dimension(size,size) :: ra
  do row = 1,size
    do col = 1,size
      read *,num
      ra(row,col) = num
    end do
  end do
end subroutine fill_array

