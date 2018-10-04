program unknownsizearray

  implicit none
  integer, allocatable,dimension(:) :: vector
  integer::elements,i
  print*, 'Enter number of elements in the vector'
  read *,elements
  allocate(vector(elements))
  print*, 'Your vector is of size', elements, 'Now enter each elements'
  do i = 1,elements
    read *,vector(i)
  end do
  print*, 'This is your vector'

  do i = 1,elements
    print*, vector(i)
  end do

  deallocate(vector) 


end program unknownsizearray
