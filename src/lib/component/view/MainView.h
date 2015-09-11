#ifndef MAIN_VIEW_H
#define MAIN_VIEW_H

#include "component/view/ViewLayout.h"

class MainView: public ViewLayout
{
public:
	MainView();
	virtual ~MainView();

	virtual void showStartScreen() = 0;
};

#endif // MAIN_VIEW_H
