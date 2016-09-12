/*
 * MyImage.cpp
 *
 *  Created on: 02/09/2016
 *      Author: gmcarelli
 */

#include "MyImage.h"

MyImage::MyImage(int imageId, string imageName, int8_t imageBytes[]) {

	setImageId(imageId);
	setImageName(imageName);
	setImageBytes(imageBytes);

}


void MyImage::setImageId(int imageId) {

	this->imageId = imageId;

}


int MyImage::getImageId() {

	return this->imageId;

}

void MyImage::setImageName(string imageName) {

	this->imageName = imageName;

}

string MyImage::getImageName() {

	return this->imageName;

}

void MyImage::setImageBytes(int8_t imageBytes[]) {

	this->imageBytes = imageBytes;

}

char MyImage::getImageBytes() {

	return this->imageBytes;

}

string MyImage::toString() {

	int size = sizeof(this->imageBytes);

	return "ImageId: " + this->imageId + " ImageName: "
			+ this->imageName + "Size: " + size;

}

MyImage::~MyImage() {
	// TODO Auto-generated destructor stub
}

