#!/usr/bin/env/python
#-*- coding: utf-8 -*-
import numpy as np
import matplotlib.pyplot as plt
losDatos=np.genfromtxt('datos.txt',delimiter=',');
t=losDatos[:,0];
y=losDatos[:,1];
v=losDatos[:,2];
fig=plt.figure(figsize=(10,10));
ax1=fig.add_subplot(221);
ax2=fig.add_subplot(222);
ax1.plot(t,y);
ax1.set_title("Gráfica de posición vs tiempo");
ax1.set_xlabel("Tiempo (s)");
ax1.set_ylabel("Altura (m)");
ax2.plot(t,v);
ax2.set_title("Gráfica de velocidad vs tiempo");
ax2.set_xlabel("Tiempo (s)");
ax2.set_ylabel("Velocidad (m/s)");
plt.savefig("laGrafica.pdf");
