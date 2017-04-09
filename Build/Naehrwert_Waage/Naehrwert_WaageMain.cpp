/***************************************************************
 * Name:      Naehrwert_WaageMain.cpp
 * Purpose:   Code for Application Frame
 * Author:    Dreamshader (dreamshader@gmx.de)
 * Created:   2017-04-02
 * Copyright: Dreamshader (http://dreamshader.bplaced.net/wordpress/)
 * License:
 **************************************************************/

#include "Naehrwert_WaageMain.h"
#include <wx/msgdlg.h>

//(*InternalHeaders(Naehrwert_WaageFrame)
#include <wx/bitmap.h>
#include <wx/intl.h>
#include <wx/image.h>
#include <wx/string.h>
//*)

//helper functions
enum wxbuildinfoformat {
    short_f, long_f };

wxString wxbuildinfo(wxbuildinfoformat format)
{
    wxString wxbuild(wxVERSION_STRING);

    if (format == long_f )
    {
#if defined(__WXMSW__)
        wxbuild << _T("-Windows");
#elif defined(__UNIX__)
        wxbuild << _T("-Linux");
#endif

#if wxUSE_UNICODE
        wxbuild << _T("-Unicode build");
#else
        wxbuild << _T("-ANSI build");
#endif // wxUSE_UNICODE
    }

    return wxbuild;
}

//(*IdInit(Naehrwert_WaageFrame)
const long Naehrwert_WaageFrame::ID_BITMAPBUTTON1 = wxNewId();
const long Naehrwert_WaageFrame::ID_PANEL1 = wxNewId();
const long Naehrwert_WaageFrame::ID_MENUITEM1 = wxNewId();
const long Naehrwert_WaageFrame::ID_MENUITEM2 = wxNewId();
const long Naehrwert_WaageFrame::ID_MENUITEM3 = wxNewId();
const long Naehrwert_WaageFrame::ID_MENUITEM4 = wxNewId();
const long Naehrwert_WaageFrame::ID_MENUITEM5 = wxNewId();
const long Naehrwert_WaageFrame::ID_MENUITEM6 = wxNewId();
const long Naehrwert_WaageFrame::ID_MENUITEM7 = wxNewId();
const long Naehrwert_WaageFrame::ID_MENUITEM8 = wxNewId();
const long Naehrwert_WaageFrame::ID_MENUITEM9 = wxNewId();
const long Naehrwert_WaageFrame::ID_MENUITEM10 = wxNewId();
const long Naehrwert_WaageFrame::ID_MENUITEM11 = wxNewId();
const long Naehrwert_WaageFrame::idMenuAbout = wxNewId();
const long Naehrwert_WaageFrame::ID_STATUSBAR1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(Naehrwert_WaageFrame,wxFrame)
    //(*EventTable(Naehrwert_WaageFrame)
    //*)
END_EVENT_TABLE()

Naehrwert_WaageFrame::Naehrwert_WaageFrame(wxWindow* parent,wxWindowID id)
{
    //(*Initialize(Naehrwert_WaageFrame)
    wxMenuItem* MenuItem2;
    wxMenuItem* MenuItem1;
    wxMenu* Menu1;
    wxMenuBar* MenuBar1;
    wxMenu* Menu2;

    Create(parent, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxDEFAULT_FRAME_STYLE, _T("wxID_ANY"));
    Panel1 = new wxPanel(this, ID_PANEL1, wxPoint(112,96), wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL1"));
    BitmapButton1 = new wxBitmapButton(Panel1, ID_BITMAPBUTTON1, wxBitmap(wxImage(_T("/home/dirk/Projects/Raspberry_ZERO/WAAGE/Graphics/NEUE_BILDER/apfel.jpg"))), wxPoint(112,40), wxDefaultSize, wxBU_AUTODRAW|wxRAISED_BORDER, wxDefaultValidator, _T("ID_BITMAPBUTTON1"));
    MenuBar1 = new wxMenuBar();
    Menu1 = new wxMenu();
    MenuItem1 = new wxMenuItem(Menu1, ID_MENUITEM1, _("Quit\tAlt-F4"), _("Quit the application"), wxITEM_NORMAL);
    Menu1->Append(MenuItem1);
    MenuBar1->Append(Menu1, _("&File"));
    Menu3 = new wxMenu();
    MenuItem3 = new wxMenuItem(Menu3, ID_MENUITEM2, _("Gemuese"), wxEmptyString, wxITEM_NORMAL);
    Menu3->Append(MenuItem3);
    MenuItem4 = new wxMenuItem(Menu3, ID_MENUITEM3, _("Fisch"), wxEmptyString, wxITEM_NORMAL);
    Menu3->Append(MenuItem4);
    MenuItem5 = new wxMenuItem(Menu3, ID_MENUITEM4, _("Obst"), wxEmptyString, wxITEM_NORMAL);
    Menu3->Append(MenuItem5);
    MenuItem6 = new wxMenuItem(Menu3, ID_MENUITEM5, _("Fleisch"), wxEmptyString, wxITEM_NORMAL);
    Menu3->Append(MenuItem6);
    MenuItem7 = new wxMenuItem(Menu3, ID_MENUITEM6, _("Milchprodukte"), wxEmptyString, wxITEM_NORMAL);
    Menu3->Append(MenuItem7);
    MenuItem8 = new wxMenuItem(Menu3, ID_MENUITEM7, _("Gerichte"), wxEmptyString, wxITEM_NORMAL);
    Menu3->Append(MenuItem8);
    MenuItem9 = new wxMenuItem(Menu3, ID_MENUITEM8, _("Naehrmittel"), wxEmptyString, wxITEM_NORMAL);
    Menu3->Append(MenuItem9);
    MenuItem10 = new wxMenuItem(Menu3, ID_MENUITEM9, _("Sossen"), wxEmptyString, wxITEM_NORMAL);
    Menu3->Append(MenuItem10);
    MenuItem11 = new wxMenuItem(Menu3, ID_MENUITEM10, _("Suess-Speisen"), wxEmptyString, wxITEM_NORMAL);
    Menu3->Append(MenuItem11);
    MenuItem12 = new wxMenuItem(Menu3, ID_MENUITEM11, _("New Menu"), wxEmptyString, wxITEM_NORMAL);
    Menu3->Append(MenuItem12);
    MenuBar1->Append(Menu3, _("&Bereich"));
    Menu2 = new wxMenu();
    MenuItem2 = new wxMenuItem(Menu2, idMenuAbout, _("About\tF1"), _("Show info about this application"), wxITEM_NORMAL);
    Menu2->Append(MenuItem2);
    MenuBar1->Append(Menu2, _("Help"));
    SetMenuBar(MenuBar1);
    StatusBar1 = new wxStatusBar(this, ID_STATUSBAR1, 0, _T("ID_STATUSBAR1"));
    int __wxStatusBarWidths_1[1] = { -1 };
    int __wxStatusBarStyles_1[1] = { wxSB_NORMAL };
    StatusBar1->SetFieldsCount(1,__wxStatusBarWidths_1);
    StatusBar1->SetStatusStyles(1,__wxStatusBarStyles_1);
    SetStatusBar(StatusBar1);

    Connect(ID_MENUITEM1,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&Naehrwert_WaageFrame::OnQuit);
    Connect(idMenuAbout,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&Naehrwert_WaageFrame::OnAbout);
    //*)
}

Naehrwert_WaageFrame::~Naehrwert_WaageFrame()
{
    //(*Destroy(Naehrwert_WaageFrame)
    //*)
}

void Naehrwert_WaageFrame::OnQuit(wxCommandEvent& event)
{
    Close();
}

void Naehrwert_WaageFrame::OnAbout(wxCommandEvent& event)
{
    wxString msg = wxbuildinfo(long_f);
    wxMessageBox(msg, _("Welcome to..."));
}

void Naehrwert_WaageFrame::OnBitmapButton2Click(wxCommandEvent& event)
{
}

void Naehrwert_WaageFrame::OnImageButton1Click(wxCommandEvent& event)
{
}
