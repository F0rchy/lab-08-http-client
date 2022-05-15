// Copyright 2022 Artem Artemov <theartemka6@mail.ru>

#ifndef INCLUDE_GENERAL_HPP_
#define INCLUDE_GENERAL_HPP_

#include <boost/asio/connect.hpp>
#include <boost/asio/ip/tcp.hpp>
#include <boost/beast/core.hpp>
#include <boost/beast/http.hpp>
#include <boost/beast/version.hpp>
#include <cstdlib>
#include <iostream>
#include <nlohmann/json.hpp>
#include <string>

using json = nlohmann::json;
namespace beast = boost::beast;
namespace http = beast::http;
namespace net = boost::asio;
using tcp = net::ip::tcp;

void making_request(int argc, char** argv);

#endif  // INCLUDE_GENERAL_HPP_
