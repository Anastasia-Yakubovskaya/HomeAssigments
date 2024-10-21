myProg: main.o Transformer.o Pilot.o SuperSila1.o SuperSila2.o TankCapacity.o Weapon.o
	g++ main.o Transformer.o Pilot.o SuperSila1.o SuperSila2.o TankCapacity.o Weapon.o -o myProg

main.o: Transformer.h Pilot.h SuperSila1.h SuperSila2.h TankCapacity.h Weapon.h main.cpp
	g++ -c main.cpp

Transformer.o: Transformer.h Transformer.cpp
	g++ -c Transformer.cpp  

Pilot.o: Pilot.h Pilot.cpp
	g++ -c Pilot.cpp

SuperSila1.o: SuperSila1.h SuperSila1.cpp
	g++ -c SuperSila1.cpp

SuperSila2.o: SuperSila2.h SuperSila2.cpp
	g++ -c SuperSila2.cpp

TankCapacity.o: TankCapacity.h TankCapacity.cpp
	g++ -c TankCapacity.cpp

Weapon.o: Weapon.h Weapon.cpp
	g++ -c Weapon.cpp 
	
	
testtransformer: test-transformer.o Transformer.o Weapon.o Pilot.o
	g++ test-transformer.o Transformer.o Weapon.o Pilot.o -o testtransformer -lgtest -lgtest_main -pthread
test-transformer.o: test-transformer.cpp
	g++ -c test-transformer.cpp
	
clean:
	rm -f myProg *.o 

