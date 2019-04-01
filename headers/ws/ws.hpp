#if !defined  _WS_HPP
    #define _WS_HPP

    #include "types.hpp"
    #include "boost/beast.hpp"

    namespace ws {

        //Boost.beast alias types
        namespace http = boost::beast::http;
        using tcp = boost::asio::ip::tcp;
        using TCPSocket = tcp::socket;
        using WSocket = boost::beast::websocket::stream<tcp::socket>;
        using Buffer = boost::beast::multi_buffer;
        using IOContext = boost::asio::io_context;
        using EndPoint = tcp::endpoint;
        using Acceptor = tcp::acceptor;
        using HTTPRequest = http::request<http::string_body>;
        using HTTPWSResponse = boost::beast::websocket::response_type;
        using FlatBuffer = boost::beast::flat_buffer;

        //Functions

        //Classes

        //Interfaces

    }

#endif
