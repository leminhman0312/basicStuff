! program takes 2 square matrix A and B
! then confirm: (A*B)t = At * Bt

program main

  implicit none
  real, allocatable, dimension(:,:)::A,B,productTrans,Atrans,Btrans,timesTrans
  integer :: size, row, col
  print*, 'Enter size'
  read *, size
  ! Fill A and B
  allocate(A(size,size),B(size,size),Btrans(size,size),Atrans(size,size),productTrans(size,size),timesTrans(size,size))
  print*, 'Enter matrix A row by row'
  call fill_array(size,A)
  print*, 'Enter matrix B row by row'
  call fill_array(size,B)

  !Output A and B

  print*, 'A = '
  call outputra(size,A)

  print*, 'B = '
  call outputra(size,B)

  !Calculate transpose

  Atrans = transpose(A)
  Btrans = transpose(B)
  print*, 'Atrans = '
  call outputra(size,Atrans)
  print*, 'Btrans = '
  call outputra(size,Btrans)
  timesTrans = matmul(Btrans,Atrans)
  print*, 'Atrans * Btrans = '
  call outputra(size,timesTrans)
  print*, '(A*B)trans = '
  productTrans = transpose(matmul(A,B))
  call outputra(size, productTrans)

  do col = 1,size
    do row = 1,size
      if (timesTrans(row,col) .eq. productTrans(row,col)) then
        print *, 'Confirmed'
      else
        print *, 'Not confirmed'
      end if
    end do
  end do

  


end program main


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



