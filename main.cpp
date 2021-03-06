#include "ds.h"
#include <iostream>

#include <cpprest/ws_client.h> //웹소켓 클라이언트
#include <cpprest/json.h> //json 파싱
//대체적인 패턴은, 동기는 .get(), 비동기는 then().wait() 조합으로 사용
//utility::string_t은 std::string과 std::wstring을 스위칭 해주는 타입

#define BOT_TOKEN	"OTEyNTgxNDY2NzAwMDA1Mzg2.YZyBuA.jc2AbZvJeUbaYuVOayMfo9csYYo"


using namespace utility;                    // Common utilities like string conversions
using namespace web;                        // Common features like URIs.
using namespace web::websockets::client;    // websockets client features
using namespace web::json;					// JSON library
using namespace concurrency::streams;       // Asynchronous streams
using namespace std;

int main() {
	cout << "Discord " << endl;
	return 0;
}