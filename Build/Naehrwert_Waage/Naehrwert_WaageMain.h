/***************************************************************
 * Name:      Naehrwert_WaageMain.h
 * Purpose:   Defines Application Frame
 * Author:    Dreamshader (dreamshader@gmx.de)
 * Created:   2017-04-02
 * Copyright: Dreamshader (http://dreamshader.bplaced.net/wordpress/)
 * License:
 **************************************************************/

#ifndef NAEHRWERT_WAAGEMAIN_H
#define NAEHRWERT_WAAGEMAIN_H

//(*Headers(Naehrwert_WaageFrame)
#include <wx/menu.h>
#include <wx/panel.h>
#include <wx/bmpbuttn.h>
#include <wx/frame.h>
#include <wx/statusbr.h>
//*)

class Naehrwert_WaageFrame: public wxFrame
{
    public:

        Naehrwert_WaageFrame(wxWindow* parent,wxWindowID id = -1);
        virtual ~Naehrwert_WaageFrame();

    private:

        //(*Handlers(Naehrwert_WaageFrame)
        void OnQuit(wxCommandEvent& event);
        void OnAbout(wxCommandEvent& event);
        void OnBitmapButton2Click(wxCommandEvent& event);
        void OnImageButton1Click(wxCommandEvent& event);
        //*)

        //(*Identifiers(Naehrwert_WaageFrame)
        static const long ID_BITMAPBUTTON1;
        static const long ID_PANEL1;
        static const long ID_MENUITEM1;
        static const long ID_MENUITEM2;
        static const long ID_MENUITEM3;
        static const long ID_MENUITEM4;
        static const long ID_MENUITEM5;
        static const long ID_MENUITEM6;
        static const long ID_MENUITEM7;
        static const long ID_MENUITEM8;
        static const long ID_MENUITEM9;
        static const long ID_MENUITEM10;
        static const long ID_MENUITEM11;
        static const long idMenuAbout;
        static const long ID_STATUSBAR1;
        //*)

        //(*Declarations(Naehrwert_WaageFrame)
        wxMenuItem* MenuItem8;
        wxMenuItem* MenuItem7;
        wxMenuItem* MenuItem5;
        wxMenu* Menu3;
        wxMenuItem* MenuItem4;
        wxMenuItem* MenuItem11;
        wxPanel* Panel1;
        wxBitmapButton* BitmapButton1;
        wxMenuItem* MenuItem10;
        wxMenuItem* MenuItem12;
        wxMenuItem* MenuItem3;
        wxStatusBar* StatusBar1;
        wxMenuItem* MenuItem6;
        wxMenuItem* MenuItem9;
        //*)

        DECLARE_EVENT_TABLE()
};

#endif // NAEHRWERT_WAAGEMAIN_H
                                                                                