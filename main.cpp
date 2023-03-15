#include "Aquarium.h"
#include "Milieu.h"
#include "Bestiole.h"
#include "prevoyante.h"

#include <iostream>

using namespace std;

int main()
{

   Aquarium       ecosysteme( 640, 480, 30 );
   Milieu& eau = ecosysteme.getMilieu();

   for ( int i = 1; i <= 20; ++i )
   {
    const Bestiole& newBestiole = prevoyante();
    //newBestiole.couleur[ 0 ] = static_cast<int>( static_cast<double>( 10 )/RAND_MAX*230. );
    //newBestiole.couleur[ 1 ] = static_cast<int>( static_cast<double>( 10 )/RAND_MAX*230. );
    //newBestiole.couleur[ 2 ] = static_cast<int>( static_cast<double>( 10 )/RAND_MAX*230. );
    
    // eau.setBehavior(prevoyante);
    //newBestiole& = new const prevoyante();
    eau.addMember( newBestiole );
      //eau.addMember( newBestiole );
      //Prevoyante* newBehavior = new prevoyante();
      //milieu.setBehavior ( newBehavior );
      //milieu.addMember();
      
      //eau.setBehavior(prevoyante);
      //eau.addMember();

      //ORIGINAL:
      // Milieu& eau = ecosysteme.getMilieu();
      //eau.addMember( Bestiole() );
   }
   ecosysteme.run();


   return 0;
}