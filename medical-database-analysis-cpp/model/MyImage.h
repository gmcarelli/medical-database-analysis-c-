/*
 * MyImage.h
 *
 *  Created on: 02/09/2016
 *      Author: gmcarelli
 */

#ifndef MODEL_MYIMAGE_H_
#define MODEL_MYIMAGE_H_

#include <string>
using std::string;

#include <stdint.h>

class MyImage {
public:
	MyImage();
	virtual ~MyImage();
	MyImage(int imageId, string imageName, int8_t imageBytes[]);
	void setImageId(int imageId);
	int getImageId();
	void setImageName(string imageName);
	string getImageName();
	void setImageBytes(int8_t imageBytes[]);
	char getImageBytes();
	string toString();
private:
	int imageId;
	string imageName;
	int8_t imageBytes[];
};


#endif /* MODEL_MYIMAGE_H_ */
