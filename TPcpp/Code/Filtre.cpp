#include "Filtre.h"
#include "View-Menu.h"

using namespace std;

using namespace cv;

//créations des différents filtres

int Filtre::Seuillage() {

    Mat image, filtre;

                                                                      // chargement de l'image
    string AdresseVar;                                                // Création de la varible adresse de l'image
    cout << "Donnez moi l'adresse de votre image" << endl;
    cin >> AdresseVar;
    image = imread(AdresseVar, IMREAD_GRAYSCALE);

    if (image.empty()) {                                             // Test existance de l'image
        cout << "Impossible de trouver l'image" << endl;
        cin.get();                                         
        return -1;
    }
                                                                     // Valeur des changements du filtre
    double thresh = 127;
    double maxValue = 255;

                                                                    // application du filtre
    threshold(image, filtre, thresh, maxValue, THRESH_BINARY);

    imshow("Original", image);                                      //affichage de l'image original
    imshow("Seuillage", filtre);                                    //affichage de l'image filtré

    waitKey();

    return 0;
}

int Filtre::Segmentation() {


                                                                // Création d'un kernel (filtre de segmentation)
    Mat kernel = (Mat_<float>(3, 3) <<
        0.9, 0.9, 0.9,
        0.9, -6.18, 0.9,
        0.9, 0.9, 0.9);

    Mat image, filtre;

                                                                 // chargement de l'image
    string AdresseVar;                                           // Création de la varible adresse de l'image
    cout << "Donnez moi l'adresse de votre image" << endl;
    cin >> AdresseVar;
    image = imread(AdresseVar, IMREAD_GRAYSCALE);                // chargement de l'image en noir et blanc

    if (image.empty()) {                                         // Test existance de l'image
        cout << "Impossible de trouver l'image" << endl;
        cin.get();                                           
        return -1;
    }
                                                        
                                                                   
    Mat imgLaplacian;
    filter2D(image, imgLaplacian, CV_8UC3, kernel);                // rajout du kernel au laplacien
    Mat sharp;
    image.convertTo(sharp, CV_8UC3);
    Mat imgResult = sharp - imgLaplacian;

    imgResult.convertTo(imgResult, CV_8UC3);
    imgLaplacian.convertTo(imgLaplacian, CV_8UC3);
                                                                     // affichage de l'image filtré
    imshow("Segmentation", imgResult);

                                                                     // affichade de l'image d'origine
    imshow("Original", image);

    waitKey();


    return 0;
}

int Filtre::Median() 
{
    Mat image, filtre;

                                                            // chargement de l'image
    string AdresseVar;                                     // Création de la varible adresse de l'image
    cout << "Donnez moi l'adresse de votre image" << endl;
    cin >> AdresseVar;
    image = imread(AdresseVar);

    if (image.empty()) {                                    // Test existance de l'image
        cout << "Impossible de trouver l'image" << endl;
        cin.get();                                           
        return -1;
    }


    medianBlur(image, filtre, 5);                           // application du filtre

    imshow("Original", image);                              // affichade de l'image originale
    imshow("Filtre Median", filtre);                        // affichade de l'image filtrer

    waitKey();


    return 0;


}

int Filtre::Gaussian() 
{
    Mat image, filtre;

                                                             // chargement de l'image
    string AdresseVar;                                       // Création de la varible adresse de l'image
    cout << "Donnez moi l'adresse de votre image" << endl;
    cin >> AdresseVar;
    image = imread(AdresseVar);

    if (image.empty()) {                                    // Test existance de l'image
        cout << "Impossible de trouver l'image" << endl;
        cin.get();                                          
        return -1;
    }


    GaussianBlur(image, filtre, Size(5, 5), 7, 7);           //application du filtre

    imshow("Original", image);                               //affichage de l'image originale
    imshow("Filtre Gaussien", filtre);                       //affichade de l'image filtrer

    waitKey();


    return 0;


}

int Filtre::Dilatation() 
{
    Mat image, filtre;

                                                                 // chargement de l'image
    string AdresseVar;                                           // Création de la varible adresse de l'image
    cout << "Donnez moi l'adresse de votre image" << endl;
    cin >> AdresseVar;
    image = imread(AdresseVar);

    if (image.empty()) {                                        // Test existance de l'image
        cout << "Impossible de trouver l'image" << endl;
        cin.get();                                          
        return -1;
    }


    dilate(image, filtre, Mat());                                // application du filtre      

    imshow("Original", image);                                   // affichage de l'image original
    imshow("Dilate", filtre);                                    // affichage de l'image filtrer

    waitKey();


    return 0;

}

int Filtre::Erosion()
{
    Mat image, filtre;

                                                                // chargemenr de l'image
    string AdresseVar;                                           // Création de la varible adresse de l'image
    cout << "Donnez moi l'adresse de votre image" << endl;
    cin >> AdresseVar;
    image = imread(AdresseVar);

    if (image.empty()) {                                         // Test existance de l'image
        cout << "Impossible de trouver l'image" << endl;
        cin.get();                                        
        return -1;
    }


    erode(image, filtre, Mat());                                // application du filtre      

    imshow("Original", image);                                  // affichage de l'image original
    imshow("Erode", filtre);                                    // affichage de l'image filtrer

    waitKey();


    return 0;


}

int Filtre::Cany() 
{
    Mat image, filtre;

                                                                 // chargement de l'image
    string AdresseVar;                                           // Création de la varible adresse de l'image
    cout << "Donnez moi l'adresse de votre image" << endl;
    cin >> AdresseVar;
    image = imread(AdresseVar);

    if (image.empty()) {                                        // Test existance de l'image
        cout << "Impossible de trouver l'image" << endl;
        cin.get();                                          
        return -1;
    }


    Canny(image, filtre, 10, 100, 3, true);                       // application du filtre      

    imshow("Original", image);                                  // affichage de l'image original
    imshow("Canny", filtre);                                    // affichage de l'image filtrer

    waitKey();

    return 0;
}

int Filtre::Sobell() 
{
    Mat image, filtre;

                                                                 // chargement de l'image
    string AdresseVar;                                           // Création de la varible adresse de l'image
    cout << "Donnez moi l'adresse de votre image" << endl;
    cin >> AdresseVar;
    image = imread(AdresseVar);

    if (image.empty()) {                                         // Test existance de l'image
        cout << "Impossible de trouver l'image" << endl;
        cin.get();                                        
        return -1;
    }


    Sobel(image, filtre, -1, 1, 1);                              // application du filtre      

    imshow("Original", image);                                  // affichage de l'image original
    imshow("Sobel", filtre);                                    // affichage de l'image filtrer

    waitKey();


    return 0;

    
}

void Filtre::Choix()
{
    int a,b,c;
    c = 1;

    cin >> a;
    

        switch (a)
        {
        case 1: Median(); break;
        case 2: Gaussian(); break;
        case 3: Sobell(); break;
        case 4: Dilatation(); break;
        case 5: Erosion(); break;
        case 6: Cany(); break;
        case 7: Seuillage(); break;
        case 8:Segmentation(); break;

        default: cout << "Nombre non valide " << std::endl; break;

        }

}
