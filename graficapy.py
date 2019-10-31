import os
import numpy as np
import matplotlib.pyplot as plt

plt.figure()
data = np.loadtxt("grafica.dat")
plt.plot(data)
plt.axis('square')
plt.xlim([-25, 25])
plt.ylim([-25, 25])

plt.xlabel('X')
plt.ylabel('Y')
plt.savefig("grafica.png")
