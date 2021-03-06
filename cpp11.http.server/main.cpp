//
// main.cpp
// ~~~~~~~~
//
// Copyright (c) 2003-2015 Christopher M. Kohlhoff (chris at kohlhoff dot com)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//
#include "stdafx.h"
#include <iostream>
#include <string>
#include <boost/asio.hpp>
//#include "server.hpp"

int main(int argc, char* argv[])
{
  try
  {
    // Check command line arguments.
    //if (argc != 4)
    //{
    //  std::cerr << "Usage: http_server <address> <port> <doc_root>\n";
    //  std::cerr << "  For IPv4, try:\n";
    //  std::cerr << "    receiver 0.0.0.0 80 .\n";
    //  std::cerr << "  For IPv6, try:\n";
    //  std::cerr << "    receiver 0::0 80 .\n";
    //  return 1;
    //}

    // Initialise the server.
    //http::server::server s(argv[1], argv[2], argv[3]);
	  std::string doc = "G:\\simple_orange\\www";
	  std::string ip =  "192.168.1.7";
	  std::string port = "80";
	  http::server::server s(ip, port, doc);

    // Run the server until stopped.
    s.run();
  }
  catch (std::exception& e)
  {
    std::cerr << "exception: " << e.what() << "\n";
  }

  return 0;
}