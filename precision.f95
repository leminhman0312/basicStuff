program extendedConstants

	implicit none
	integer, parameter :: ikind = selected_real_kind(p=18)
	real (kind = ikind) :: val,x,y
	print*, 'COMPUTING 10/3'
	
	!incorrect
	val = 10/3
	print*, 'integer ',val  !10/3 is calculated as integer- wrong!
	
	!correct
	x = 10.0
	y = 3.0
	val = x/y
	print*, 'extended precision x=10.0/y=3.0 ', val !x/y assinged to extended precision- correct!

	!extended precision
	val = 10.0_ikind/3
	print*, 'extend precision constant ',val !extend precision constant - right!

	!real constants
	val = 10.0/3.0
	print*, 'Real constants 10.0/3.0', val !real constants,wrong!

	val = .12345678901234567890
	!real constants - wrong!
	print *,'Real constants ', val
	val = .12345678901234567890_ikind !ext precision consts - right!
	print *, 'extended precision constants ', val


end program extendedConstants
