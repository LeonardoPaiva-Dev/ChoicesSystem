// Code by Leonardo Paiva


#include "ChoicesUI.h"

void UChoicesUI::UpdateSubtitles(TArray<FSubtitle> Subtitles) 
{
    if (!Subtitles.IsValidIndex(0)) return;
 
    //Start a background task in a low priority thread
    (new FAutoDeleteAsyncTask<UMGAsyncTask>(Subtitles, this))->StartBackgroundTask();
}