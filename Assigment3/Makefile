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
	
testpilot: test-pilot.o Pilot.o
	g++ test-pilot.o  Pilot.o -o testpilot -lgtest -lgtest_main -pthread
test-pilot.o: test-pilot.cpp
	g++ -c test-pilot.cpp
	
testweapon: test-weapon.o Weapon.o
	g++ test-weapon.o  Weapon.o -o testweapon -lgtest -lgtest_main -pthread
test-weapon.o: test-weapon.cpp
	g++ -c test-weapon.cpp

testsupersila1: test-supersila1.o SuperSila1.o Transformer.o Weapon.o Pilot.o
	g++ test-supersila1.o  SuperSila1.o Transformer.o Weapon.o Pilot.o -o testsupersila1 -lgtest -lgtest_main -pthread
test-supersila1.o: test-supersila1.cpp
	g++ -c test-supersila1.cpp
	
testsupersila2: test-supersila2.o SuperSila2.o Transformer.o Weapon.o Pilot.o
	g++ test-supersila2.o  SuperSila2.o Transformer.o Weapon.o Pilot.o -o testsupersila2 -lgtest -lgtest_main -pthread
test-supersila2.o: test-supersila2.cpp
	g++ -c test-supersila2.cpp
	
testtankcapacity: test-tankcapacity.o TankCapacity.o Transformer.o Weapon.o Pilot.o
	g++ test-tankcapacity.o TankCapacity.o Transformer.o Weapon.o Pilot.o -o testtankcapacity -lgtest -lgtest_main -pthread
test-tankcapacity.o: test-tankcapacity.cpp
	g++ -c test-tankcapacity.cpp	
clean:
	rm -f myProg *.o testtransformer testpilot testweapon testsupersila1 testsupersila2 testtankcapacity

