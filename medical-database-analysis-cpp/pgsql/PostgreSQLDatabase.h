/*
 * PostgreSQLDatabase.h
 *
 *  Created on: 14 de set de 2016
 *      Author: gilca
 */

#ifndef POSTGRESQLDATABASE_H_
#define POSTGRESQLDATABASE_H_

#include "database/Database.h"

#include "/usr/include/postgresql/libpq-fe.h"

class PostgreSQLDatabase: public Database {
public:
	PostgreSQLDatabase();
	virtual ~PostgreSQLDatabase();

private:
	PGconn *connection = NULL;
	string createInsertString(string tableName, string table,
			map<string, MyImage> values) {

		return "";

	}

	string createUpdateString(string tableName, string table,
			map<string, MyImage> values) {

		return "";

	}
};

#endif /* POSTGRESQLDATABASE_H_ */
