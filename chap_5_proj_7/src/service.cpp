#include "service.h"
#include "backend.h"
#include "frontend.h"

namespace service
{
    void Init(){
        backend::Init();
        frontend::Init();
    }

    void Run(){
        do{
            frontend::PrintTable();
            frontend::UpdateValues();

            if(backend::isPositionFree()){
                backend::fillPosition();
                frontend::PrintOKFeedback();
            }
            else{
                frontend::PrintNGFeedback();
            }
        }while(frontend::isDesiredNewPosition());
    }

    void Finish(){
        frontend::PrintTable();
    }
}