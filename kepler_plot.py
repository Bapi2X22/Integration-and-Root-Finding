import numpy as np
import matplotlib.pyplot as plt
import pandas as pd

df = pd.read_csv('res.txt',sep="\t",names=["x", "y"])

plt.figure(1,figsize=(10, 8))
plt.plot(df.x,df.y,"b")
plt.plot(df.x,-df.y,"b")
plt.plot(np.linspace(-2,2,100),np.zeros(100),"--")
plt.plot(np.zeros(100),np.linspace(-1.5,1.5,100),"--")





############ Pendulum ##################
df = pd.read_csv('res.txt',sep="\t",names=["A","err","I_approx","I"])

plt.figure(1,figsize=(10, 8))
plt.plot(df.A,df.I,label="Exact T")
plt.plot(df.A,df.I_approx,label="Approx T")
plt.legend(fontsize=20)
plt.show()


