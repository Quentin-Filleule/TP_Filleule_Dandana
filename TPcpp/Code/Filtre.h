#pragma once
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/core/core.hpp>
#include <opencv2/opencv.hpp>
#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"
#include<iostream>



class Filtre
{
private:
	
public :
	
	int Seuillage();															//Tous les filtres demandés
	int Segmentation();
	int Median();
	int Gaussian();
	int Erosion();
	int Dilatation();
	int Sobell();
	int Cany();

	void Choix();																// Fonction permettant de choisir le filtre
	
	

};
