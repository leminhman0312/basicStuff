program spec

	implicit none
	integer:: i
	integer, dimension(4) :: inter
	real, dimension(4) :: realvariable
	! declare double precision
	integer, parameter :: ikind=selected_real_kind(p=15)
	real(kind=ikind),dimension(4) :: doubleprecision

	!Populating, inter = no decimal. 
	do i  = 1,4
		inter(i) = i*10
		realvariable(i) = cos(0.01*i)
		doubleprecision(i) = realvariable(i)

	end do

	! print INTEGER
	print*, 'Integer FORMAT'
	write(*,1) inter
	1 format(2i10)

	! print REAL
	print*, 'Real FORMAT'
	write(*,2) realvariable
	2 format(f4.2)

	!print DOUBLE PRECISION
	print*, 'Double Precision FORMAT'
	write(*,3) doubleprecision
	3 format(f10.6)

end program spec
