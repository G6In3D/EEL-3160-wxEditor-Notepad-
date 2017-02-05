/***************************************************************
 * Name:      wxEditorMain.h
 * Purpose:   Defines Application Frame
 * Author:    Guillermo Garrido (ggarr018@fiu.edu)
 * Created:   2017-01-31
 * Copyright: Guillermo Garrido ()
 * License:
 **************************************************************/

#ifndef WXEDITORMAIN_H
#define WXEDITORMAIN_H

#ifndef WX_PRECOMP
    #include <wx/wx.h>
#endif

#include "wxEditorApp.h"

class wxEditorFrame: public wxFrame
{
    public:
        wxEditorFrame(wxFrame *frame, const wxString& title);
        ~wxEditorFrame();
    private:
        enum
        {
            idMenuQuit = 1000,
            idMenuAbout
        };
        void OnClose(wxCloseEvent& event);
        void OnQuit(wxCommandEvent& event);
        void OnAbout(wxCommandEvent& event);
        DECLARE_EVENT_TABLE()
};


#endif // WXEDITORMAIN_H