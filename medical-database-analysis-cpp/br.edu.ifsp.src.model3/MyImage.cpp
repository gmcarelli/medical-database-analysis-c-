/*
 * MyImage.cpp
 *
 *  Created on: 30 de ago de 2016
 *      Author: gilca
 */

#include "MyImage.h"

MyImage::MyImage(int imageId, string imageName, std::bitset imageBytes[]) {

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

void MyImage::setImageBytes(std::bitset imageBytes[]) {

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
