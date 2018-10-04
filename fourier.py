import numpy as np
import matplotlib.pyplot as plt

nmax = 500
x = np.linspace(-np.pi, 3.*np.pi, 200)
xpi,dx = np.linspace(0., np.pi, 500,retstep=True)

sumx = np.zeros_like(x)

# f = x**2.

f = lambda x: x**2

for n in range(1,nmax):
	sinlist = np.sin(n*x)

	sinpilist = np.sin(n*xpi)

	an = dx*(2./np.pi)*np.dot(sinpilist,f(xpi))

	sumx = sumx + an*sinlist
#a0 = dx*np.sum(f(xpi))*(1./np.pi)

#sumx = sumx + a0
# for i, xi in enumerate(x):
# 	print(xi, sumx[i])

plt.plot(x, sumx,'-')
plt.plot(x,f(x),'-')
plt.show()