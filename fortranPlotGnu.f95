program plot

  implicit none
  integer :: i, n = 10
  real :: x(10),y(10)
  x(1) = 0.0
  y(1) = 0.0

  do i = 2,n
    x(i) = 0.1*i
    y(i) = x(i)**2
  end do

  open(unit=48,file='data')
  do i = 1,n
    write(48,*) x(i),y(i)
  end do
  close(48)
  call system('gnuplot -p data_plot.plt')
end program plot
