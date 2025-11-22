#include <iostream>
#include <string>
#include <windows.h>

int main() {
	std::string url;
	std::string homeurl = "https://basic.smartedu.cn/tchMaterial";
	ShellExecuteA(NULL, "open", homeurl.c_str(), NULL, NULL, NULL);
	std::cout<<"ÇëÊäÈë½Ì²ÄÒ³ÃæURL£º" << std::endl;
	std::cin >> url;
	std::string keyword = "document&contentId=";
	int start = url.find(keyword);
	std::string documentID = url.substr(start + keyword.length(), 36);
	std::string urltop = "https://www.zxx.edu.cn/tchMaterial/detail?contentType=x_url&contentId=";
	std::string resulturl = urltop + documentID;
	std::cout << resulturl << std::endl;
	ShellExecuteA(NULL, "open", resulturl.c_str(), NULL, NULL, NULL);

}