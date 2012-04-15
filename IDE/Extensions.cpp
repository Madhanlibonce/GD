/** \file
 *  Game Develop
 *  2008-2012 Florian Rival (Florian.Rival@gmail.com)
 */

#include "Extensions.h"

//(*InternalHeaders(Extensions)
#include <wx/bitmap.h>
#include <wx/settings.h>
#include <wx/font.h>
#include <wx/intl.h>
#include <wx/image.h>
#include <wx/string.h>
//*)
#include <stdio.h>
#include <fstream>
#include <sys/types.h>
#include <dirent.h>
#include <vector>
#include <boost/shared_ptr.hpp>
#include <wx/clntdata.h>

#include "GDCore/PlatformDefinition/PlatformExtension.h"
#include "GDCore/PlatformDefinition/Platform.h"
#include "GDCore/PlatformDefinition/Project.h"

using namespace std;
using namespace gd;

//(*IdInit(Extensions)
const long Extensions::ID_STATICBITMAP3 = wxNewId();
const long Extensions::ID_STATICTEXT1 = wxNewId();
const long Extensions::ID_PANEL1 = wxNewId();
const long Extensions::ID_STATICLINE1 = wxNewId();
const long Extensions::ID_CHECKLISTBOX1 = wxNewId();
const long Extensions::ID_TEXTCTRL2 = wxNewId();
const long Extensions::ID_STATICTEXT5 = wxNewId();
const long Extensions::ID_STATICTEXT3 = wxNewId();
const long Extensions::ID_STATICTEXT6 = wxNewId();
const long Extensions::ID_STATICTEXT4 = wxNewId();
const long Extensions::ID_STATICTEXT7 = wxNewId();
const long Extensions::ID_STATICBITMAP2 = wxNewId();
const long Extensions::ID_STATICBITMAP4 = wxNewId();
const long Extensions::ID_STATICBITMAP1 = wxNewId();
const long Extensions::ID_STATICTEXT8 = wxNewId();
const long Extensions::ID_HYPERLINKCTRL1 = wxNewId();
const long Extensions::ID_STATICTEXT2 = wxNewId();
const long Extensions::ID_BUTTON3 = wxNewId();
//*)

BEGIN_EVENT_TABLE(Extensions,wxDialog)
	//(*EventTable(Extensions)
	//*)
END_EVENT_TABLE()

Extensions::Extensions(wxWindow* parent, gd::Project & project_) :
project(project_)
{
	//(*Initialize(Extensions)
	wxStaticBoxSizer* StaticBoxSizer2;
	wxFlexGridSizer* FlexGridSizer4;
	wxFlexGridSizer* FlexGridSizer10;
	wxFlexGridSizer* FlexGridSizer3;
	wxFlexGridSizer* FlexGridSizer5;
	wxFlexGridSizer* FlexGridSizer9;
	wxFlexGridSizer* FlexGridSizer2;
	wxFlexGridSizer* FlexGridSizer7;
	wxStaticBoxSizer* StaticBoxSizer3;
	wxFlexGridSizer* FlexGridSizer8;
	wxFlexGridSizer* FlexGridSizer12;
	wxFlexGridSizer* FlexGridSizer6;
	wxStaticBoxSizer* StaticBoxSizer1;
	wxFlexGridSizer* FlexGridSizer1;
	wxFlexGridSizer* FlexGridSizer11;

	Create(parent, wxID_ANY, _("Utiliser des modules d\'extensions de Game Develop"), wxDefaultPosition, wxDefaultSize, wxDEFAULT_DIALOG_STYLE, _T("wxID_ANY"));
	FlexGridSizer1 = new wxFlexGridSizer(0, 1, 0, 0);
	FlexGridSizer1->AddGrowableCol(0);
	Panel1 = new wxPanel(this, ID_PANEL1, wxDefaultPosition, wxSize(420,54), wxTAB_TRAVERSAL, _T("ID_PANEL1"));
	Panel1->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_WINDOW));
	FlexGridSizer6 = new wxFlexGridSizer(0, 2, 0, 0);
	StaticBitmap3 = new wxStaticBitmap(Panel1, ID_STATICBITMAP3, wxBitmap(wxImage(_T("res/extension64.png"))), wxDefaultPosition, wxDefaultSize, wxNO_BORDER, _T("ID_STATICBITMAP3"));
	FlexGridSizer6->Add(StaticBitmap3, 1, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5);
	StaticText1 = new wxStaticText(Panel1, ID_STATICTEXT1, _("Game Develop peut utiliser des extensions pour augmenter\nou simplifier les possibilit�s de cr�ation.\nCochez extensions que vous souhaitez utiliser dans votre jeu."), wxDefaultPosition, wxDefaultSize, wxALIGN_CENTRE, _T("ID_STATICTEXT1"));
	FlexGridSizer6->Add(StaticText1, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
	Panel1->SetSizer(FlexGridSizer6);
	FlexGridSizer6->SetSizeHints(Panel1);
	FlexGridSizer1->Add(Panel1, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
	StaticLine1 = new wxStaticLine(this, ID_STATICLINE1, wxDefaultPosition, wxSize(10,-1), wxLI_HORIZONTAL, _T("ID_STATICLINE1"));
	FlexGridSizer1->Add(StaticLine1, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
	FlexGridSizer12 = new wxFlexGridSizer(0, 3, 0, 0);
	StaticBoxSizer1 = new wxStaticBoxSizer(wxHORIZONTAL, this, _("Extensions disponibles :"));
	FlexGridSizer2 = new wxFlexGridSizer(0, 1, 0, 0);
	FlexGridSizer2->AddGrowableCol(0);
	FlexGridSizer2->AddGrowableRow(0);
	ExtensionsList = new wxCheckListBox(this, ID_CHECKLISTBOX1, wxDefaultPosition, wxSize(352,264), 0, 0, 0, wxDefaultValidator, _T("ID_CHECKLISTBOX1"));
	FlexGridSizer2->Add(ExtensionsList, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticBoxSizer1->Add(FlexGridSizer2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
	FlexGridSizer12->Add(StaticBoxSizer1, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer3 = new wxFlexGridSizer(0, 1, 0, 0);
	FlexGridSizer3->AddGrowableCol(0);
	FlexGridSizer3->AddGrowableRow(1);
	StaticBoxSizer2 = new wxStaticBoxSizer(wxHORIZONTAL, this, _("Informations sur l\'extension"));
	FlexGridSizer5 = new wxFlexGridSizer(0, 1, 0, 0);
	FlexGridSizer5->AddGrowableCol(0);
	FlexGridSizer7 = new wxFlexGridSizer(0, 2, 0, 0);
	FlexGridSizer7->AddGrowableCol(0);
	FlexGridSizer7->AddGrowableRow(0);
	infoEdit = new wxTextCtrl(this, ID_TEXTCTRL2, _("Pas d\'informations sur l\'extension."), wxDefaultPosition, wxSize(331,43), wxTE_MULTILINE|wxTE_READONLY, wxDefaultValidator, _T("ID_TEXTCTRL2"));
	FlexGridSizer7->Add(infoEdit, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer5->Add(FlexGridSizer7, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
	FlexGridSizer8 = new wxFlexGridSizer(0, 3, 0, 0);
	FlexGridSizer8->AddGrowableCol(1);
	FlexGridSizer8->AddGrowableRow(0);
	StaticText3 = new wxStaticText(this, ID_STATICTEXT5, _("Auteur :"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT5"));
	FlexGridSizer8->Add(StaticText3, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	authorTxt = new wxStaticText(this, ID_STATICTEXT3, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT3"));
	wxFont authorTxtFont(wxDEFAULT,wxDEFAULT,wxFONTSTYLE_NORMAL,wxBOLD,false,wxEmptyString,wxFONTENCODING_DEFAULT);
	authorTxt->SetFont(authorTxtFont);
	FlexGridSizer8->Add(authorTxt, 1, wxTOP|wxLEFT|wxRIGHT|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 0);
	FlexGridSizer5->Add(FlexGridSizer8, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
	FlexGridSizer9 = new wxFlexGridSizer(0, 3, 0, 0);
	FlexGridSizer9->AddGrowableCol(1);
	FlexGridSizer9->AddGrowableRow(0);
	StaticText4 = new wxStaticText(this, ID_STATICTEXT6, _("Licence d\'utilisation :"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT6"));
	FlexGridSizer9->Add(StaticText4, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	licenseTxt = new wxStaticText(this, ID_STATICTEXT4, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT4"));
	wxFont licenseTxtFont(wxDEFAULT,wxDEFAULT,wxFONTSTYLE_NORMAL,wxBOLD,false,wxEmptyString,wxFONTENCODING_DEFAULT);
	licenseTxt->SetFont(licenseTxtFont);
	FlexGridSizer9->Add(licenseTxt, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer5->Add(FlexGridSizer9, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
	FlexGridSizer10 = new wxFlexGridSizer(0, 4, 0, 0);
	FlexGridSizer10->AddGrowableRow(0);
	StaticText5 = new wxStaticText(this, ID_STATICTEXT7, _("Compatibilit� :"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT7"));
	FlexGridSizer10->Add(StaticText5, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
	wincompatibleBmp = new wxStaticBitmap(this, ID_STATICBITMAP2, wxBitmap(wxImage(_T("res/win-compatible.png"))), wxDefaultPosition, wxDefaultSize, wxNO_BORDER, _T("ID_STATICBITMAP2"));
	FlexGridSizer10->Add(wincompatibleBmp, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	linuxcompatibleBmp = new wxStaticBitmap(this, ID_STATICBITMAP4, wxBitmap(wxImage(_T("res/linux-compatible.png"))), wxDefaultPosition, wxDefaultSize, wxNO_BORDER, _T("ID_STATICBITMAP4"));
	FlexGridSizer10->Add(linuxcompatibleBmp, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	maccompatibleBmp = new wxStaticBitmap(this, ID_STATICBITMAP1, wxBitmap(wxImage(_T("res/mac-compatible.png"))), wxDefaultPosition, wxDefaultSize, wxNO_BORDER, _T("ID_STATICBITMAP1"));
	FlexGridSizer10->Add(maccompatibleBmp, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer5->Add(FlexGridSizer10, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
	StaticBoxSizer2->Add(FlexGridSizer5, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
	FlexGridSizer3->Add(StaticBoxSizer2, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer3->Add(0,0,1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
	StaticBoxSizer3 = new wxStaticBoxSizer(wxHORIZONTAL, this, _("Extensions suppl�mentaires"));
	FlexGridSizer11 = new wxFlexGridSizer(0, 1, 0, 0);
	StaticText6 = new wxStaticText(this, ID_STATICTEXT8, _("Une liste d\'extensions mises � disposition par d\'autres d�veloppeurs est\ndisponible sur le wiki :"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT8"));
	FlexGridSizer11->Add(StaticText6, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	HyperlinkCtrl1 = new wxHyperlinkCtrl(this, ID_HYPERLINKCTRL1, _("Acc�der � la page des extensions non officielles du wiki"), _("http://compilgames.net/wiki/doku.php/game_develop/extensions"), wxDefaultPosition, wxDefaultSize, wxHL_CONTEXTMENU|wxHL_ALIGN_CENTRE|wxNO_BORDER, _T("ID_HYPERLINKCTRL1"));
	FlexGridSizer11->Add(HyperlinkCtrl1, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
	StaticBoxSizer3->Add(FlexGridSizer11, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
	FlexGridSizer3->Add(StaticBoxSizer3, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer12->Add(FlexGridSizer3, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
	FlexGridSizer1->Add(FlexGridSizer12, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer4 = new wxFlexGridSizer(0, 3, 0, 0);
	FlexGridSizer4->AddGrowableCol(0);
	StaticText2 = new wxStaticText(this, ID_STATICTEXT2, _("Fermez et r�ouvrez les �diteurs de sc�ne du jeu pour prendre en compte les extensions ajout�es."), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT2"));
	wxFont StaticText2Font(wxDEFAULT,wxDEFAULT,wxFONTSTYLE_ITALIC,wxNORMAL,false,wxEmptyString,wxFONTENCODING_DEFAULT);
	StaticText2->SetFont(StaticText2Font);
	FlexGridSizer4->Add(StaticText2, 1, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5);
	FermerBt = new wxButton(this, ID_BUTTON3, _("Fermer"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON3"));
	FlexGridSizer4->Add(FermerBt, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer1->Add(FlexGridSizer4, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
	SetSizer(FlexGridSizer1);
	FlexGridSizer1->Fit(this);
	FlexGridSizer1->SetSizeHints(this);
	Center();

	Connect(ID_CHECKLISTBOX1,wxEVT_COMMAND_LISTBOX_SELECTED,(wxObjectEventFunction)&Extensions::OnExtensionsListSelect);
	Connect(ID_BUTTON3,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&Extensions::OnFermerBtClick);
	//*)

    FlexGridSizer10->Show(false); //Cross compilation is not available and so the bitmaps are not relevant.

	UpdateList();
}

Extensions::~Extensions()
{
	//(*Destroy(Extensions)
	//*)
}

void Extensions::UpdateList()
{
    ExtensionsList->Clear();

    const vector < boost::shared_ptr<PlatformExtension> > & extensionsInstalled = project.GetPlatform().GetAllPlatformExtensions();

    //Create the list of available extensions
    for (unsigned int i = 0;i<extensionsInstalled.size();++i)
    {
        wxStringClientData * associatedData = new wxStringClientData(extensionsInstalled[i]->GetName());

        if ( extensionsInstalled[i]->GetName().find("Builtin") < extensionsInstalled[i]->GetName().length() )
            ExtensionsList->Insert(extensionsInstalled[i]->GetFullName(), ExtensionsList->GetCount(), associatedData);
        else
            ExtensionsList->Insert(extensionsInstalled[i]->GetFullName(), 0, associatedData);

    }

    //Check used extensions
    for (unsigned int i =0;i<ExtensionsList->GetCount();++i)
    {
        wxStringClientData * associatedData = dynamic_cast<wxStringClientData*>(ExtensionsList->GetClientObject(i));
        if (associatedData)
        {
            if ( find(  project.GetUsedPlatformExtensions().begin(),
                        project.GetUsedPlatformExtensions().end(),
                        associatedData->GetData()) != project.GetUsedPlatformExtensions().end() )
            {
                ExtensionsList->Check(i, true);
            }
        }
    }
}

/**
 * Display information about an extension when selecting one.
 */
void Extensions::OnExtensionsListSelect(wxCommandEvent& event)
{
    int id = event.GetSelection();
    wxStringClientData * associatedData = dynamic_cast<wxStringClientData*>(ExtensionsList->GetClientObject(id));
    if (associatedData == NULL) return;

    const vector < boost::shared_ptr<PlatformExtension> > & extensionsInstalled = project.GetPlatform().GetAllPlatformExtensions();

    for (unsigned int i = 0;i<extensionsInstalled.size();++i)
    {
        if ( extensionsInstalled[i]->GetName() == associatedData->GetData() )
        {
            infoEdit->ChangeValue(extensionsInstalled[i]->GetDescription());
            authorTxt->SetLabel(extensionsInstalled[i]->GetAuthor());
            licenseTxt->SetLabel(extensionsInstalled[i]->GetLicense());

            {
                std::ifstream testFile( string("Extensions/"+extensionsInstalled[i]->GetName()+".xgdw").c_str() );
                if ( testFile || ( extensionsInstalled[i]->IsBuiltin() ) ) //Use namespace to check if it is a builtin extension
                    wincompatibleBmp->SetBitmap(wxBitmap(_T("res/win-compatible.png"), wxBITMAP_TYPE_ANY));
                else
                    wincompatibleBmp->SetBitmap(wxBitmap(_T("res/win-notcompatible.png"), wxBITMAP_TYPE_ANY));
            }

            {
                std::ifstream testFile( string("Extensions/"+extensionsInstalled[i]->GetName()+".xgdl").c_str() );
                if ( testFile || ( extensionsInstalled[i]->IsBuiltin() ) ) //Use namespace to check if it is a builtin extension
                    linuxcompatibleBmp->SetBitmap(wxBitmap(_T("res/linux-compatible.png"), wxBITMAP_TYPE_ANY));
                else
                    linuxcompatibleBmp->SetBitmap(wxBitmap(_T("res/linux-notcompatible.png"), wxBITMAP_TYPE_ANY));
            }

            {
                std::ifstream testFile( string("Extensions/"+extensionsInstalled[i]->GetName()+".xgdm").c_str() );
                if ( testFile || ( extensionsInstalled[i]->IsBuiltin() ) ) //Use namespace to check if it is a builtin extension
                    maccompatibleBmp->SetBitmap(wxBitmap(_T("res/mac-compatible.png"), wxBITMAP_TYPE_ANY));
                else
                    maccompatibleBmp->SetBitmap(wxBitmap(_T("res/mac-notcompatible.png"), wxBITMAP_TYPE_ANY));
            }

            return;
        }
    }
}

/**
 * Close dialog and save extensions used
 */
void Extensions::OnFermerBtClick(wxCommandEvent& event)
{
    project.GetUsedPlatformExtensions().clear();

    for (unsigned int i =0;i<ExtensionsList->GetCount();++i)
    {
    	if ( ExtensionsList->IsChecked(i) )
        {
            wxStringClientData * associatedData = dynamic_cast<wxStringClientData*>(ExtensionsList->GetClientObject(i));

            if (associatedData)
                project.GetUsedPlatformExtensions().push_back(string(associatedData->GetData().mb_str()));
        }
    }

    EndModal(0);
}
