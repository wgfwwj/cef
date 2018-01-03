// Copyright (c) 2018 The Chromium Embedded Framework Authors. All rights
// reserved. Use of this source code is governed by a BSD-style license that
// can be found in the LICENSE file.
//
// ---------------------------------------------------------------------------
//
// This file was generated by the CEF translator tool. If making changes by
// hand only do so within the body of existing method and function
// implementations. See the translator.README.txt file in the tools directory
// for more information.
//
// $hash=743663c679084794080428f096f4ae546550ec16$
//

#ifndef CEF_LIBCEF_DLL_CTOCPP_SERVER_HANDLER_CTOCPP_H_
#define CEF_LIBCEF_DLL_CTOCPP_SERVER_HANDLER_CTOCPP_H_
#pragma once

#if !defined(BUILDING_CEF_SHARED)
#error This file can be included DLL-side only
#endif

#include "include/capi/cef_server_capi.h"
#include "include/cef_server.h"
#include "libcef_dll/ctocpp/ctocpp_ref_counted.h"

// Wrap a C structure with a C++ class.
// This class may be instantiated and accessed DLL-side only.
class CefServerHandlerCToCpp
    : public CefCToCppRefCounted<CefServerHandlerCToCpp,
                                 CefServerHandler,
                                 cef_server_handler_t> {
 public:
  CefServerHandlerCToCpp();

  // CefServerHandler methods.
  void OnServerCreated(CefRefPtr<CefServer> server) override;
  void OnServerDestroyed(CefRefPtr<CefServer> server) override;
  void OnClientConnected(CefRefPtr<CefServer> server,
                         int connection_id) override;
  void OnClientDisconnected(CefRefPtr<CefServer> server,
                            int connection_id) override;
  void OnHttpRequest(CefRefPtr<CefServer> server,
                     int connection_id,
                     const CefString& client_address,
                     CefRefPtr<CefRequest> request) override;
  void OnWebSocketRequest(CefRefPtr<CefServer> server,
                          int connection_id,
                          const CefString& client_address,
                          CefRefPtr<CefRequest> request,
                          CefRefPtr<CefCallback> callback) override;
  void OnWebSocketConnected(CefRefPtr<CefServer> server,
                            int connection_id) override;
  void OnWebSocketMessage(CefRefPtr<CefServer> server,
                          int connection_id,
                          const void* data,
                          size_t data_size) override;
};

#endif  // CEF_LIBCEF_DLL_CTOCPP_SERVER_HANDLER_CTOCPP_H_
