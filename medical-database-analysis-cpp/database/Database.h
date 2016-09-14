/*
 * Database.h
 *
 *  Created on: 12 de set de 2016
 *      Author: gmcarelli
 */

#ifndef DATABASE_DATABASE_H_
#define DATABASE_DATABASE_H_

#include <string>
using std::string;

#include <list>
using std::list;

#include <map>
using std::map;

#include <Myimage.h>

class Database {
public:
	Database();
	virtual ~Database();
	virtual bool connect() = 0;
	virtual void disconnect() = 0;
	virtual bool insert(string table, map<string, MyImage> values) = 0;
	virtual bool update(string table, map<string, MyImage> values) = 0;
	virtual bool deleteRow(string table, string column, int id) = 0;
	virtual MyImage searchById(int imageId) = 0;
	virtual list<MyImage> listAll() = 0;
protected:
	string databaseName;
	string host;
	string port;
	string username;
	string password;
};

#endif /* DATABASE_DATABASE_H_ */
