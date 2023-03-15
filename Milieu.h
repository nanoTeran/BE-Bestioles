#ifndef _MILIEU_H_
#define _MILIEU_H_


#include "UImg.h"
#include "Bestiole.h"

#include <iostream>
#include <vector>

using namespace std;

class Bestiole; // it allows to create bestioles to be modified
class Milieu : public UImg
{

private :
   static const T          white[];

   int                     width, height;
   std::vector<Bestiole>   listeBestioles;
   //Bestiole *bestiole_; // new bestiole to be define by choosing a behavior

public :
   Milieu( int _width, int _height );
   ~Milieu( void );

   int getWidth( void ) const { return width; };
   int getHeight( void ) const { return height; };

   void step( void );
   //void setBehavior(int behavior); // function to define behavior in the bestiole_
   void addMember( const Bestiole & b ) {listeBestioles.push_back(b); listeBestioles.back().initCoords(width, height);
   }
   
   int nbVoisins( const Bestiole & b );

};


#endif
