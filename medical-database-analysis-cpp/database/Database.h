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

#include "model/MyImage.h"
#include "object/Object.h"

class Database {
public:
	Database();
	Database(string databaseName, string username, string password, string host, int port);
	//Database(Properties properties);
	Database(string propertiesPath);
	virtual ~Database();
	virtual bool connect() = 0;
	virtual void disconnect() = 0;
	virtual bool insert(string table, map<string, Object> values) = 0;
	virtual bool update(string table, map<string, Object> values) = 0;
	virtual bool deleteRow(string table, string column, int id) = 0;
	virtual MyImage searchById(int imageId) = 0;
	virtual list<MyImage> listAll() = 0;
protected:
	string databaseName;
	string host;
	int port;
	string username;
	string password;
};

#endif /* DATABASE_DATABASE_H_ */
