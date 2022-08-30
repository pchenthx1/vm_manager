// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: vm_guest.proto
// Original file comments:
//
// Copyright (c) 2022 Intel Corporation.
// All rights reserved.
//
// SPDX-License-Identifier: Apache-2.0
//
#ifndef GRPC_vm_5fguest_2eproto__INCLUDED
#define GRPC_vm_5fguest_2eproto__INCLUDED

#include "vm_guest.pb.h"

#include <functional>
#include <grpcpp/impl/codegen/async_generic_service.h>
#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/client_callback.h>
#include <grpcpp/impl/codegen/client_context.h>
#include <grpcpp/impl/codegen/completion_queue.h>
#include <grpcpp/impl/codegen/message_allocator.h>
#include <grpcpp/impl/codegen/method_handler.h>
#include <grpcpp/impl/codegen/proto_utils.h>
#include <grpcpp/impl/codegen/rpc_method.h>
#include <grpcpp/impl/codegen/server_callback.h>
#include <grpcpp/impl/codegen/server_callback_handlers.h>
#include <grpcpp/impl/codegen/server_context.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/status.h>
#include <grpcpp/impl/codegen/stub_options.h>
#include <grpcpp/impl/codegen/sync_stream.h>

namespace vm_manager {

// The Power Control service definition.
class CivPowerCtl final {
 public:
  static constexpr char const* service_full_name() {
    return "vm_manager.CivPowerCtl";
  }
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    // Called by Host to shutdown Guest.
    virtual ::grpc::Status Shutdown(::grpc::ClientContext* context, const ::vm_manager::EmptyMessage& request, ::vm_manager::EmptyMessage* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::vm_manager::EmptyMessage>> AsyncShutdown(::grpc::ClientContext* context, const ::vm_manager::EmptyMessage& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::vm_manager::EmptyMessage>>(AsyncShutdownRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::vm_manager::EmptyMessage>> PrepareAsyncShutdown(::grpc::ClientContext* context, const ::vm_manager::EmptyMessage& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::vm_manager::EmptyMessage>>(PrepareAsyncShutdownRaw(context, request, cq));
    }
    class async_interface {
     public:
      virtual ~async_interface() {}
      // Called by Host to shutdown Guest.
      virtual void Shutdown(::grpc::ClientContext* context, const ::vm_manager::EmptyMessage* request, ::vm_manager::EmptyMessage* response, std::function<void(::grpc::Status)>) = 0;
      virtual void Shutdown(::grpc::ClientContext* context, const ::vm_manager::EmptyMessage* request, ::vm_manager::EmptyMessage* response, ::grpc::ClientUnaryReactor* reactor) = 0;
    };
    typedef class async_interface experimental_async_interface;
    virtual class async_interface* async() { return nullptr; }
    class async_interface* experimental_async() { return async(); }
   private:
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::vm_manager::EmptyMessage>* AsyncShutdownRaw(::grpc::ClientContext* context, const ::vm_manager::EmptyMessage& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::vm_manager::EmptyMessage>* PrepareAsyncShutdownRaw(::grpc::ClientContext* context, const ::vm_manager::EmptyMessage& request, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub final : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());
    ::grpc::Status Shutdown(::grpc::ClientContext* context, const ::vm_manager::EmptyMessage& request, ::vm_manager::EmptyMessage* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::vm_manager::EmptyMessage>> AsyncShutdown(::grpc::ClientContext* context, const ::vm_manager::EmptyMessage& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::vm_manager::EmptyMessage>>(AsyncShutdownRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::vm_manager::EmptyMessage>> PrepareAsyncShutdown(::grpc::ClientContext* context, const ::vm_manager::EmptyMessage& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::vm_manager::EmptyMessage>>(PrepareAsyncShutdownRaw(context, request, cq));
    }
    class async final :
      public StubInterface::async_interface {
     public:
      void Shutdown(::grpc::ClientContext* context, const ::vm_manager::EmptyMessage* request, ::vm_manager::EmptyMessage* response, std::function<void(::grpc::Status)>) override;
      void Shutdown(::grpc::ClientContext* context, const ::vm_manager::EmptyMessage* request, ::vm_manager::EmptyMessage* response, ::grpc::ClientUnaryReactor* reactor) override;
     private:
      friend class Stub;
      explicit async(Stub* stub): stub_(stub) { }
      Stub* stub() { return stub_; }
      Stub* stub_;
    };
    class async* async() override { return &async_stub_; }

   private:
    std::shared_ptr< ::grpc::ChannelInterface> channel_;
    class async async_stub_{this};
    ::grpc::ClientAsyncResponseReader< ::vm_manager::EmptyMessage>* AsyncShutdownRaw(::grpc::ClientContext* context, const ::vm_manager::EmptyMessage& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::vm_manager::EmptyMessage>* PrepareAsyncShutdownRaw(::grpc::ClientContext* context, const ::vm_manager::EmptyMessage& request, ::grpc::CompletionQueue* cq) override;
    const ::grpc::internal::RpcMethod rpcmethod_Shutdown_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    // Called by Host to shutdown Guest.
    virtual ::grpc::Status Shutdown(::grpc::ServerContext* context, const ::vm_manager::EmptyMessage* request, ::vm_manager::EmptyMessage* response);
  };
  template <class BaseClass>
  class WithAsyncMethod_Shutdown : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithAsyncMethod_Shutdown() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_Shutdown() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Shutdown(::grpc::ServerContext* /*context*/, const ::vm_manager::EmptyMessage* /*request*/, ::vm_manager::EmptyMessage* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestShutdown(::grpc::ServerContext* context, ::vm_manager::EmptyMessage* request, ::grpc::ServerAsyncResponseWriter< ::vm_manager::EmptyMessage>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_Shutdown<Service > AsyncService;
  template <class BaseClass>
  class WithCallbackMethod_Shutdown : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithCallbackMethod_Shutdown() {
      ::grpc::Service::MarkMethodCallback(0,
          new ::grpc::internal::CallbackUnaryHandler< ::vm_manager::EmptyMessage, ::vm_manager::EmptyMessage>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::vm_manager::EmptyMessage* request, ::vm_manager::EmptyMessage* response) { return this->Shutdown(context, request, response); }));}
    void SetMessageAllocatorFor_Shutdown(
        ::grpc::MessageAllocator< ::vm_manager::EmptyMessage, ::vm_manager::EmptyMessage>* allocator) {
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::GetHandler(0);
      static_cast<::grpc::internal::CallbackUnaryHandler< ::vm_manager::EmptyMessage, ::vm_manager::EmptyMessage>*>(handler)
              ->SetMessageAllocator(allocator);
    }
    ~WithCallbackMethod_Shutdown() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Shutdown(::grpc::ServerContext* /*context*/, const ::vm_manager::EmptyMessage* /*request*/, ::vm_manager::EmptyMessage* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerUnaryReactor* Shutdown(
      ::grpc::CallbackServerContext* /*context*/, const ::vm_manager::EmptyMessage* /*request*/, ::vm_manager::EmptyMessage* /*response*/)  { return nullptr; }
  };
  typedef WithCallbackMethod_Shutdown<Service > CallbackService;
  typedef CallbackService ExperimentalCallbackService;
  template <class BaseClass>
  class WithGenericMethod_Shutdown : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithGenericMethod_Shutdown() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_Shutdown() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Shutdown(::grpc::ServerContext* /*context*/, const ::vm_manager::EmptyMessage* /*request*/, ::vm_manager::EmptyMessage* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithRawMethod_Shutdown : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawMethod_Shutdown() {
      ::grpc::Service::MarkMethodRaw(0);
    }
    ~WithRawMethod_Shutdown() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Shutdown(::grpc::ServerContext* /*context*/, const ::vm_manager::EmptyMessage* /*request*/, ::vm_manager::EmptyMessage* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestShutdown(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithRawCallbackMethod_Shutdown : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawCallbackMethod_Shutdown() {
      ::grpc::Service::MarkMethodRawCallback(0,
          new ::grpc::internal::CallbackUnaryHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::grpc::ByteBuffer* request, ::grpc::ByteBuffer* response) { return this->Shutdown(context, request, response); }));
    }
    ~WithRawCallbackMethod_Shutdown() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Shutdown(::grpc::ServerContext* /*context*/, const ::vm_manager::EmptyMessage* /*request*/, ::vm_manager::EmptyMessage* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerUnaryReactor* Shutdown(
      ::grpc::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)  { return nullptr; }
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_Shutdown : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithStreamedUnaryMethod_Shutdown() {
      ::grpc::Service::MarkMethodStreamed(0,
        new ::grpc::internal::StreamedUnaryHandler<
          ::vm_manager::EmptyMessage, ::vm_manager::EmptyMessage>(
            [this](::grpc::ServerContext* context,
                   ::grpc::ServerUnaryStreamer<
                     ::vm_manager::EmptyMessage, ::vm_manager::EmptyMessage>* streamer) {
                       return this->StreamedShutdown(context,
                         streamer);
                  }));
    }
    ~WithStreamedUnaryMethod_Shutdown() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status Shutdown(::grpc::ServerContext* /*context*/, const ::vm_manager::EmptyMessage* /*request*/, ::vm_manager::EmptyMessage* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedShutdown(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::vm_manager::EmptyMessage,::vm_manager::EmptyMessage>* server_unary_streamer) = 0;
  };
  typedef WithStreamedUnaryMethod_Shutdown<Service > StreamedUnaryService;
  typedef Service SplitStreamedService;
  typedef WithStreamedUnaryMethod_Shutdown<Service > StreamedService;
};

class CivAppLauncher final {
 public:
  static constexpr char const* service_full_name() {
    return "vm_manager.CivAppLauncher";
  }
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    // Called by Host to launch app in guest
    virtual ::grpc::Status LaunchApp(::grpc::ClientContext* context, const ::vm_manager::AppLaunchRequest& request, ::vm_manager::AppLaunchResponse* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::vm_manager::AppLaunchResponse>> AsyncLaunchApp(::grpc::ClientContext* context, const ::vm_manager::AppLaunchRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::vm_manager::AppLaunchResponse>>(AsyncLaunchAppRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::vm_manager::AppLaunchResponse>> PrepareAsyncLaunchApp(::grpc::ClientContext* context, const ::vm_manager::AppLaunchRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::vm_manager::AppLaunchResponse>>(PrepareAsyncLaunchAppRaw(context, request, cq));
    }
    class async_interface {
     public:
      virtual ~async_interface() {}
      // Called by Host to launch app in guest
      virtual void LaunchApp(::grpc::ClientContext* context, const ::vm_manager::AppLaunchRequest* request, ::vm_manager::AppLaunchResponse* response, std::function<void(::grpc::Status)>) = 0;
      virtual void LaunchApp(::grpc::ClientContext* context, const ::vm_manager::AppLaunchRequest* request, ::vm_manager::AppLaunchResponse* response, ::grpc::ClientUnaryReactor* reactor) = 0;
    };
    typedef class async_interface experimental_async_interface;
    virtual class async_interface* async() { return nullptr; }
    class async_interface* experimental_async() { return async(); }
   private:
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::vm_manager::AppLaunchResponse>* AsyncLaunchAppRaw(::grpc::ClientContext* context, const ::vm_manager::AppLaunchRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::vm_manager::AppLaunchResponse>* PrepareAsyncLaunchAppRaw(::grpc::ClientContext* context, const ::vm_manager::AppLaunchRequest& request, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub final : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());
    ::grpc::Status LaunchApp(::grpc::ClientContext* context, const ::vm_manager::AppLaunchRequest& request, ::vm_manager::AppLaunchResponse* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::vm_manager::AppLaunchResponse>> AsyncLaunchApp(::grpc::ClientContext* context, const ::vm_manager::AppLaunchRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::vm_manager::AppLaunchResponse>>(AsyncLaunchAppRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::vm_manager::AppLaunchResponse>> PrepareAsyncLaunchApp(::grpc::ClientContext* context, const ::vm_manager::AppLaunchRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::vm_manager::AppLaunchResponse>>(PrepareAsyncLaunchAppRaw(context, request, cq));
    }
    class async final :
      public StubInterface::async_interface {
     public:
      void LaunchApp(::grpc::ClientContext* context, const ::vm_manager::AppLaunchRequest* request, ::vm_manager::AppLaunchResponse* response, std::function<void(::grpc::Status)>) override;
      void LaunchApp(::grpc::ClientContext* context, const ::vm_manager::AppLaunchRequest* request, ::vm_manager::AppLaunchResponse* response, ::grpc::ClientUnaryReactor* reactor) override;
     private:
      friend class Stub;
      explicit async(Stub* stub): stub_(stub) { }
      Stub* stub() { return stub_; }
      Stub* stub_;
    };
    class async* async() override { return &async_stub_; }

   private:
    std::shared_ptr< ::grpc::ChannelInterface> channel_;
    class async async_stub_{this};
    ::grpc::ClientAsyncResponseReader< ::vm_manager::AppLaunchResponse>* AsyncLaunchAppRaw(::grpc::ClientContext* context, const ::vm_manager::AppLaunchRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::vm_manager::AppLaunchResponse>* PrepareAsyncLaunchAppRaw(::grpc::ClientContext* context, const ::vm_manager::AppLaunchRequest& request, ::grpc::CompletionQueue* cq) override;
    const ::grpc::internal::RpcMethod rpcmethod_LaunchApp_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    // Called by Host to launch app in guest
    virtual ::grpc::Status LaunchApp(::grpc::ServerContext* context, const ::vm_manager::AppLaunchRequest* request, ::vm_manager::AppLaunchResponse* response);
  };
  template <class BaseClass>
  class WithAsyncMethod_LaunchApp : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithAsyncMethod_LaunchApp() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_LaunchApp() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status LaunchApp(::grpc::ServerContext* /*context*/, const ::vm_manager::AppLaunchRequest* /*request*/, ::vm_manager::AppLaunchResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestLaunchApp(::grpc::ServerContext* context, ::vm_manager::AppLaunchRequest* request, ::grpc::ServerAsyncResponseWriter< ::vm_manager::AppLaunchResponse>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_LaunchApp<Service > AsyncService;
  template <class BaseClass>
  class WithCallbackMethod_LaunchApp : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithCallbackMethod_LaunchApp() {
      ::grpc::Service::MarkMethodCallback(0,
          new ::grpc::internal::CallbackUnaryHandler< ::vm_manager::AppLaunchRequest, ::vm_manager::AppLaunchResponse>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::vm_manager::AppLaunchRequest* request, ::vm_manager::AppLaunchResponse* response) { return this->LaunchApp(context, request, response); }));}
    void SetMessageAllocatorFor_LaunchApp(
        ::grpc::MessageAllocator< ::vm_manager::AppLaunchRequest, ::vm_manager::AppLaunchResponse>* allocator) {
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::GetHandler(0);
      static_cast<::grpc::internal::CallbackUnaryHandler< ::vm_manager::AppLaunchRequest, ::vm_manager::AppLaunchResponse>*>(handler)
              ->SetMessageAllocator(allocator);
    }
    ~WithCallbackMethod_LaunchApp() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status LaunchApp(::grpc::ServerContext* /*context*/, const ::vm_manager::AppLaunchRequest* /*request*/, ::vm_manager::AppLaunchResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerUnaryReactor* LaunchApp(
      ::grpc::CallbackServerContext* /*context*/, const ::vm_manager::AppLaunchRequest* /*request*/, ::vm_manager::AppLaunchResponse* /*response*/)  { return nullptr; }
  };
  typedef WithCallbackMethod_LaunchApp<Service > CallbackService;
  typedef CallbackService ExperimentalCallbackService;
  template <class BaseClass>
  class WithGenericMethod_LaunchApp : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithGenericMethod_LaunchApp() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_LaunchApp() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status LaunchApp(::grpc::ServerContext* /*context*/, const ::vm_manager::AppLaunchRequest* /*request*/, ::vm_manager::AppLaunchResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithRawMethod_LaunchApp : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawMethod_LaunchApp() {
      ::grpc::Service::MarkMethodRaw(0);
    }
    ~WithRawMethod_LaunchApp() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status LaunchApp(::grpc::ServerContext* /*context*/, const ::vm_manager::AppLaunchRequest* /*request*/, ::vm_manager::AppLaunchResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestLaunchApp(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithRawCallbackMethod_LaunchApp : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawCallbackMethod_LaunchApp() {
      ::grpc::Service::MarkMethodRawCallback(0,
          new ::grpc::internal::CallbackUnaryHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::grpc::ByteBuffer* request, ::grpc::ByteBuffer* response) { return this->LaunchApp(context, request, response); }));
    }
    ~WithRawCallbackMethod_LaunchApp() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status LaunchApp(::grpc::ServerContext* /*context*/, const ::vm_manager::AppLaunchRequest* /*request*/, ::vm_manager::AppLaunchResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerUnaryReactor* LaunchApp(
      ::grpc::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)  { return nullptr; }
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_LaunchApp : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithStreamedUnaryMethod_LaunchApp() {
      ::grpc::Service::MarkMethodStreamed(0,
        new ::grpc::internal::StreamedUnaryHandler<
          ::vm_manager::AppLaunchRequest, ::vm_manager::AppLaunchResponse>(
            [this](::grpc::ServerContext* context,
                   ::grpc::ServerUnaryStreamer<
                     ::vm_manager::AppLaunchRequest, ::vm_manager::AppLaunchResponse>* streamer) {
                       return this->StreamedLaunchApp(context,
                         streamer);
                  }));
    }
    ~WithStreamedUnaryMethod_LaunchApp() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status LaunchApp(::grpc::ServerContext* /*context*/, const ::vm_manager::AppLaunchRequest* /*request*/, ::vm_manager::AppLaunchResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedLaunchApp(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::vm_manager::AppLaunchRequest,::vm_manager::AppLaunchResponse>* server_unary_streamer) = 0;
  };
  typedef WithStreamedUnaryMethod_LaunchApp<Service > StreamedUnaryService;
  typedef Service SplitStreamedService;
  typedef WithStreamedUnaryMethod_LaunchApp<Service > StreamedService;
};

}  // namespace vm_manager


#endif  // GRPC_vm_5fguest_2eproto__INCLUDED