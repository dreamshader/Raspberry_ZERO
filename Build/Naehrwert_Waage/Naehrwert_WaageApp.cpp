/***************************************************************
 * Name:      Naehrwert_WaageApp.cpp
 * Purpose:   Code for Application Class
 * Author:    Dreamshader (dreamshader@gmx.de)
 * Created:   2017-04-02
 * Copyright: Dreamshader (http://dreamshader.bplaced.net/wordpress/)
 * License:
 **************************************************************/

#include "Naehrwert_WaageApp.h"

//(*AppHeaders
#include "Naehrwert_WaageMain.h"
#include <wx/image.h>
//*)

IMPLEMENT_APP(Naehrwert_WaageApp);

bool Naehrwert_WaageApp::OnInit()
{
    //(*AppInitialize
    bool wxsOK = true;
    wxInitAllImageHandlers();
    if ( wxsOK )
    {
    	Naehrwert_WaageFrame* Frame = new Naehrwert_WaageFrame(0);
    	Frame->Show();
    	SetTopWindow(Frame);
    }
    //*)
    return wxsOK;

}
        