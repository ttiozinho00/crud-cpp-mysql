all: connection create read update delete

connection: connection.o 
	g++ -o connection connection.o -L/usr/lib -lmysqlcppconn -Wall -pedantic -Wextra
	
connection.o: connection.cpp
	g++ -c -I/usr/include/cppconn connection.cpp -Wall -pedantic -Wextra

create: create.o 
	g++ -o create create.o -L/usr/lib -lmysqlcppconn -Wall -pedantic -Wextra
	
create.o: connection.cpp
	g++ -c -I/usr/include/cppconn create.cpp -Wall -pedantic -Wextra

read: read.o 
	g++ -o read read.o -L/usr/lib -lmysqlcppconn -Wall -pedantic -Wextra

read.o: read.cpp
	g++ -c -I/usr/include/cppconn read.cpp -Wall -pedantic -Wextra

update: update.o 
	g++ -o update update.o -L/usr/lib -lmysqlcppconn -Wall -pedantic -Wextra
	
update.o: update.cpp
	g++ -c -I/usr/include/cppconn update.cpp -Wall -pedantic -Wextra

delete: delete.o 
	g++ -o delete delete.o -L/usr/lib -lmysqlcppconn -Wall -pedantic -Wextra

delete.o: delete.cpp
	g++ -c -I/usr/include/cppconn delete.cpp -Wall -pedantic -Wextra

clean:
	rm -f *.o connection create read update delete