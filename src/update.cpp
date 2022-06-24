#include <stdlib.h>
#include <stdio.h>
#include <iostream>

#include <mysql_connection.h>
#include <driver.h>
#include <cppconn/exception.h>
#include <cppconn/prepared_statement.h>

using namespace std;
using namespace sql;


int main(int argc, char const *argv[])
{
    (void)argv[argc];

    system("clear");

    try 
    {
        sql::Driver *driver;
        sql::Connection *con;
        sql::PreparedStatement *prep_stmt;
    
        cout << "connecting to mysql server....";
        driver = get_driver_instance();
        con = driver->connect("tcp://127.0.0.1:3306", "root", "Douglas123@");    
        cout << "connected" << endl;
    
        con->setSchema("mydatabase");
        prep_stmt = con->prepareStatement("UPDATE product SET name=?,price=? WHERE idproduct=?");
    
        cout << "updating data....";
        // updated data
        int id;
        char name[16];
        float price;
    
        //price = 0.75;    
    
        /*prep_stmt->setString(1,name);
        prep_stmt->setDouble(2,price);
        prep_stmt->setInt(3,id);
        prep_stmt->execute();*/

        cout << "update 100 data....";

        for(id = 1;id <= 1000;id++) 
        {
            sprintf(name,"product-%d",id);
            price = 0.75;
            cout << "product -> " << id;     
      
            prep_stmt->setString(1,name);
            prep_stmt->setDouble(2,price);
            prep_stmt->setInt(3,id);
            prep_stmt->execute();
            cout << "   " << endl;
        }
        
        cout << "done" << endl;
    
        delete prep_stmt;
        delete con;

    } 

    catch (sql::SQLException &e) 
    {    
        cout << "# ERR: " << e.what();
        cout << " (MySQL error code: " << e.getErrorCode();
        cout << ", SQLState: " << e.getSQLState() << " )" << endl;
    }

    cout << endl;

    return EXIT_SUCCESS;
}