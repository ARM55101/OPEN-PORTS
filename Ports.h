//This code is simply an experimental project//
//MIT License
#ifndef ports
#define ports
//Copyright (c) 2026 ARM55

//Permission is hereby granted, free of charge, to any person obtaining a copy
//of this software and associated documentation files (the "Software"), to deal
//in the Software without restriction, including without limitation the rights
//to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
//copies of the Software, and to permit persons to whom the Software is
//furnished to do so, subject to the following conditions:

//The above copyright notice and this permission notice shall be included in all
//copies or substantial portions of the Software.

//THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
//IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
//FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
//AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
//LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
//OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
//SOFTWARE.

#define APN 5223 // Apple Push Notifications
#define SSH 22 // SSH server for secure shell
#define SMTP 25 // Simple Mail Transfer Protocol 
#define HTTP 80 // Hypertext Transfer Protocol 
#define NETBIOS 138 // NetBIOS Datagram Service
#define LDAP 389 // Lightweight Directory Access Protocol
#define SSL 443 // Secure Sockets Layer  (HTTPS)
#define AFP 548 // Apple Filing Protocol over TCP
#define WC 500 // wifi calling
#define ASMTP 587 // Authenticated SMTP
#define APNS 2197 //	Apple Push Notification Service

//This library should only be used over a secure socket layer libaray like//
//sys/socket.h with netinet/in.h//
