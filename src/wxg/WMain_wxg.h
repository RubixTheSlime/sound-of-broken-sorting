// -*- C++ -*-
//
// generated by wxGlade 01d8bb798de7+ on Wed May 14 09:33:51 2014
//
// Example for compiling a single file project under Linux using g++:
//  g++ MyApp.cpp $(wx-config --libs) $(wx-config --cxxflags) -o MyApp
//
// Example for compiling a multi file project under Linux using g++:
//  g++ main.cpp $(wx-config --libs) $(wx-config --cxxflags) -o MyApp Dialog1.cpp Frame1.cpp
//

#ifndef WMAIN_WXG_H
#define WMAIN_WXG_H

#include <wx/wx.h>
#include <wx/image.h>
#include "wx/intl.h"

#ifndef APP_CATALOG
#define APP_CATALOG "app"  // replace with the appropriate catalog name
#endif


// begin wxGlade: ::dependencies
#include <wx/splitter.h>
#include <wx/tglbtn.h>
// end wxGlade

// begin wxGlade: ::extracode
#include "../WSortView.h"
#include "../wxClickText.h"
// end wxGlade


class WMain_wxg: public wxFrame {
public:
    // begin wxGlade: WMain_wxg::ids
    enum {
        ID_RUN_BUTTON = wxID_HIGHEST + 1000,
        ID_RESET_BUTTON = wxID_HIGHEST + 1001,
        ID_STEP_BUTTON = wxID_HIGHEST + 1002,
        ID_SOUND_BUTTON = wxID_HIGHEST + 1003,
        ID_RANDOM_BUTTON = wxID_HIGHEST + 1004,
        ID_RECORD_BUTTON = wxID_HIGHEST + 1005,
        ID_SPEED_SLIDER = wxID_HIGHEST + 1006,
        ID_MISCOMP_SLIDER = wxID_HIGHEST + 1007,
        ID_MISSWAP_SLIDER = wxID_HIGHEST + 1008,
        ID_SOUND_SUSTAIN_SLIDER = wxID_HIGHEST + 1009,
        ID_INVERSION_LABEL = wxID_HIGHEST + 1010,
        ID_ARRAY_SIZE_SLIDER = wxID_HIGHEST + 1011,
        ID_ALGO_LIST = wxID_HIGHEST + 1012
    };
    // end wxGlade

    WMain_wxg(wxWindow* parent, int id, const wxString& title, const wxPoint& pos=wxDefaultPosition, const wxSize& size=wxDefaultSize, long style=wxDEFAULT_FRAME_STYLE);

private:
    // begin wxGlade: WMain_wxg::methods
    void set_properties();
    void do_layout();
    // end wxGlade

protected:
    // begin wxGlade: WMain_wxg::attributes
    wxStaticBox* sizerInputAlgorithm_staticbox;
    wxStaticBox* sizer_3_staticbox;
    WSortView* sortview;
    wxPanel* splitter_0_pane_1;
    wxToggleButton* runButton;
    wxButton* resetButton;
    wxButton* stepButton;
    wxToggleButton* soundButton;
    wxButton* aboutButton;
    wxButton* randomButton;
    wxToggleButton* recordButton;
    wxSlider* speedSlider;
    wxStaticText* labelDelayValue;
    wxSlider* miscompSlider;
    wxSlider* misswapSlider;
    wxStaticText* labelMiscompValue;
    wxStaticText* labelMisswapValue;
    wxSlider* soundSustainSlider;
    wxStaticText* labelSoundSustainValue;
    wxClickText* labelComparisonsValue;
    wxClickText* labelAccessCount;
    wxClickText* labelInversionCount;
    wxClickText* labelRunsCount;
    wxChoice* inputTypeChoice;
    wxSlider* arraySizeSlider;
    wxStaticText* labelArraySizeValue;
    wxListBox* algoList;
    wxStaticText* pivotRuleLabel;
    wxChoice* pivotRuleChoice;
    wxPanel* panelQuickSortPivot;
    wxTextCtrl* infoTextctrl;
    wxPanel* splitter_0_pane_2;
    wxSplitterWindow* splitter_0;
    // end wxGlade
}; // wxGlade: end class


#endif // WMAIN_WXG_H
