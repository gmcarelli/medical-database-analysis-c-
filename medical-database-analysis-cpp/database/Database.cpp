/*
 * Database.cpp
 *
 *  Created on: 12 de set de 2016
 *      Author: gmcarelli
 */

#include "Database.h"

Database::Database() {
	this->port = 0;

}

Database::~Database() {
	// TODO Auto-generated destructor stub
}

Database::Database(string databaseName, string username, string password, string host, int port) {
	this->databaseName = databaseName;
	this->username = username;
	this->password = password;
	this->host = host;
	this->port = port;
}

