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

#include<bitset>

class MyImage {
private:
	int imageId;
	string imageName;
	std::bitset imageBytes[];
public:
	MyImage(int imageId, string imageName, std::bitset imageBytes[]);
	void setImageId(int imageId);
	int getImageId();
	void setImageName(string imageName);
	string getImageName();
	void setImageBytes(std::bitset imageBytes[]);
	char getImageBytes();
	string toString();
};

#endif /* MYIMAGE_H_ */
