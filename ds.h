#pragma once
#include <cpprest/ws_client.h> //������ Ŭ���̾�Ʈ
#include <cpprest/json.h> //json �Ľ�
//��ü���� ������, ����� .get(), �񵿱�� then().wait() �������� ���
//utility::string_t�� std::string�� std::wstring�� ����Ī ���ִ� Ÿ��
using namespace utility;                    // Common utilities like string conversions
using namespace web;                        // Common features like URIs.
using namespace web::websockets::client;    // websockets client features
using namespace web::json;					// JSON library
using namespace concurrency::streams;       // Asynchronous streams
using namespace std;

class Discord {
protected:
	string_t token; //����ū ����
	websocket_callback_client client; //���� �޽��� �ݹ� Ŭ���̾�Ʈ 

};