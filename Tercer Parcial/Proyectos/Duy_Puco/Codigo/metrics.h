//Librer�a obtenida de http://www.vulcanware.com/cpp_pdf/index.html

#ifndef _METRICS_H_
#  define _METRICS_H_

#  include "pdf.h"

   class Metrics
   {
      public:

         static int *get(PDF::Font theFont);

      private:

         Metrics();
   };

#endif
