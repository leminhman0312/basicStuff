import matplotlib.pyplot as plt

data = [(1,1),(1,2),(4,4),(4,1),[1,1]]
x,y = zip(*data)
plt.plot(*zip(*data))
plt.show()
