#ifndef HTTPD_H
#define HTTPD_H

#include <unordered_map>
#include "parser.h"

using std::string;
using std::unordered_map;

#define BUFSIZE 1024
#define MAXPENDING 5

void start_httpd(unsigned short port, string doc_root);

int setup_tcp_socket(unsigned short port);

int accept_tcp_connection(int serv_sock);

void handle_http_client(int clnt_sock, const string &doc_root);

void process_request(const http_request &request, http_response &response);

void send_message(int clnt_sock, const string &message);

#endif // HTTPD_H
