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

#include <stdint.h>

class MyImage {
private:
	int imageId;
	string imageName;
	int8_t imageBytes[];
public:
	MyImage(int imageId, string imageName, int8_t imageBytes[]);
	void setImageId(int imageId);
	int getImageId();
	void setImageName(string imageName);
	string getImageName();
	void setImageBytes(int8_t imageBytes[]);
	char getImageBytes();
	string toString();
};

#endif /* MYIMAGE_H_ */
