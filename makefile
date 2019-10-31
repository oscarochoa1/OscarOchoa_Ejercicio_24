grafica.png : grafica.py grafica.dat
	python grafica.py

grafica.dat: grafica.x
	./grafica.x > grafica.dat

grafica.x : grafica.cpp
	c++ grafica.cpp -o grafica.x
	
clean : 
	rm grafica.x grafica.dat grafica.png