#pragma once
#pragma once
#include<iostream>
#include<opencv2/imgproc/imgproc.hpp>
#include<opencv2/highgui/highgui.hpp>
#include <opencv2/opencv.hpp>


using namespace std;
using namespace cv;


int Median()
{
    Mat image, filtre;

                                                            // chargemenr de l'image
    string AdresseVar;                                     // Création de la varible adresse de l'image
    cout << "donnez moi l'adresse de votre image" << endl;
    cin >> AdresseVar;
    image = imread(AdresseVar);

    medianBlur(image, filtre, 5);                           // application du filtre
   
    imshow("Original", image);                              // affichade de l'image originale
    imshow("Filtre Median", filtre);                        // affichade de l'image filtrer

    waitKey();


    return 0;


}
