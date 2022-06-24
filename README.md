## CRUD-MySQL-CPP
C++ ilustração de código para CRUD (Create, Read, Update, Delete) com MySQL banco de dados.


## Requisitos de sistema

Plataforma Linux com g++ e MySQL instalados para teste de banco de dados. Para Debian/Ubuntu, você pode instalar mysql-server e mysql-client.

	$ sudo apt-get install mysql-server mysql-client

Você também precisa da biblioteca de desenvolvimento MySQL, libmysqlcppconn-dev.

	$ sudo apt-get install libmysqlcppconn-dev

## banco de dados

Para teste de banco de dados, você pode executar o script database.sql para executar o banco de dados e a tabela.

## Compilando e Vinculando

Antes de compilar, altere o banco de dados configurado com base na sua configuração do MySQL.Construir  create.cpp, voce faz o seguinte comando. 

	$ g++ -c -I/usr/include/cppconn create.cpp 
	$ g++ -o create create.o -L/usr/lib/mysql -lmysqlcppconn


Você pode compilar use make.

    $ cd src/
    $ make
  
