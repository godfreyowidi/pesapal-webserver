#include "WebServer.h"

int main()
{
	WebServer WebServer("0.0.0.0", 8080);
	if (WebServer.init() != 0)
		return 0;

	WebServer.run();
	system("pause");
}