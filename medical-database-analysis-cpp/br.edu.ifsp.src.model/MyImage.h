/*
 * MyImage.h
 *
 *  Created on: 30 de ago de 2016
 *      Author: gilca
 */

#ifndef MYIMAGE_H_
#define MYIMAGE_H_

#include <string>
using std::string;

class MyImage {
private:
	int imageId;
	string imageName;
	char imageBytes[];
public:
	MyImage(int imageId, string imageName, char imageBytes[]);
	void setImageId(int imageId);
	int getImageId();
	void setImageName(string imageName);
	string getImageName();
	void setImageBytes(char imageBytes[]);
	char getImageBytes();
	string toString();
};

#endif /* MYIMAGE_H_ */
