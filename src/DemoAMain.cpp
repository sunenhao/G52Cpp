#include "header.h"
#include "templates.h"


#include "DemoAMain.h"


DemoAMain::DemoAMain()
	:BaseEngine( 6 )
{
}


DemoAMain::~DemoAMain()
{
}


void DemoAMain::SetupBackgroundBuffer()
{
	FillBackground(0xff0000);
}
