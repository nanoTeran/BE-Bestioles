#include "prevoyante.h"
#include "Bestiole.h"

#include "Milieu.h"

#include <cstdlib>
#include <cmath>


prevoyante::prevoyante( void ){
   Bestiole();
}

prevoyante::behavior(){
   cout << "prevoyante ! "<< endl;
}
