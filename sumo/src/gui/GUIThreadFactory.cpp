#include <utils/foxtools/MFXEventQue.h>
#include <utils/foxtools/FXThreadEvent.h>
#include "GUIThreadFactory.h"
#include "GUIApplicationWindow.h"
#include "GUILoadThread.h"
#include "GUIRunThread.h"

GUIThreadFactory::GUIThreadFactory()
{
}


GUIThreadFactory::~GUIThreadFactory()
{
}


GUILoadThread *
GUIThreadFactory::buildLoadThread(GUIApplicationWindow *mw,
                                  MFXEventQue &eq, FXEX::FXThreadEvent &ev)
{
    return new GUILoadThread(mw, eq, ev);
}


GUIRunThread *
GUIThreadFactory::buildRunThread(GUIApplicationWindow *mw,
                                 FXRealSpinDial &simDelay, MFXEventQue &eq,
                                 FXEX::FXThreadEvent &ev)
{
    return new GUIRunThread(mw, simDelay, eq, ev);
}

