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

#include <Myimage.h>

class Database {

public:
	Database();
	virtual ~Database();
	bool connect();
	void disconnect();
	bool insert();
	bool update();
	object searchById();
protected:
	string databaseName;
	string host;
	string port;
	string username;
	string password;
};

#endif /* DATABASE_DATABASE_H_ */
