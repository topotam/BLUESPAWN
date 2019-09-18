// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: ServerServices.proto
#ifndef GRPC_ServerServices_2eproto__INCLUDED
#define GRPC_ServerServices_2eproto__INCLUDED

#include "ServerServices.pb.h"

#include <functional>
#include <grpcpp/impl/codegen/async_generic_service.h>
#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/client_callback.h>
#include <grpcpp/impl/codegen/method_handler_impl.h>
#include <grpcpp/impl/codegen/proto_utils.h>
#include <grpcpp/impl/codegen/rpc_method.h>
#include <grpcpp/impl/codegen/server_callback.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/status.h>
#include <grpcpp/impl/codegen/stub_options.h>
#include <grpcpp/impl/codegen/sync_stream.h>

namespace grpc {
class CompletionQueue;
class Channel;
class ServerCompletionQueue;
class ServerContext;
}  // namespace grpc

namespace gpb {

class Server final {
 public:
  static constexpr char const* service_full_name() {
    return "gpb.Server";
  }
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    virtual ::grpc::Status SendHuntMessage(::grpc::ClientContext* context, const ::gpb::HuntMessage& request, ::gpb::Empty* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::gpb::Empty>> AsyncSendHuntMessage(::grpc::ClientContext* context, const ::gpb::HuntMessage& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::gpb::Empty>>(AsyncSendHuntMessageRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::gpb::Empty>> PrepareAsyncSendHuntMessage(::grpc::ClientContext* context, const ::gpb::HuntMessage& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::gpb::Empty>>(PrepareAsyncSendHuntMessageRaw(context, request, cq));
    }
    class experimental_async_interface {
     public:
      virtual ~experimental_async_interface() {}
      virtual void SendHuntMessage(::grpc::ClientContext* context, const ::gpb::HuntMessage* request, ::gpb::Empty* response, std::function<void(::grpc::Status)>) = 0;
      virtual void SendHuntMessage(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::gpb::Empty* response, std::function<void(::grpc::Status)>) = 0;
    };
    virtual class experimental_async_interface* experimental_async() { return nullptr; }
  private:
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::gpb::Empty>* AsyncSendHuntMessageRaw(::grpc::ClientContext* context, const ::gpb::HuntMessage& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::gpb::Empty>* PrepareAsyncSendHuntMessageRaw(::grpc::ClientContext* context, const ::gpb::HuntMessage& request, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub final : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel);
    ::grpc::Status SendHuntMessage(::grpc::ClientContext* context, const ::gpb::HuntMessage& request, ::gpb::Empty* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::gpb::Empty>> AsyncSendHuntMessage(::grpc::ClientContext* context, const ::gpb::HuntMessage& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::gpb::Empty>>(AsyncSendHuntMessageRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::gpb::Empty>> PrepareAsyncSendHuntMessage(::grpc::ClientContext* context, const ::gpb::HuntMessage& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::gpb::Empty>>(PrepareAsyncSendHuntMessageRaw(context, request, cq));
    }
    class experimental_async final :
      public StubInterface::experimental_async_interface {
     public:
      void SendHuntMessage(::grpc::ClientContext* context, const ::gpb::HuntMessage* request, ::gpb::Empty* response, std::function<void(::grpc::Status)>) override;
      void SendHuntMessage(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::gpb::Empty* response, std::function<void(::grpc::Status)>) override;
     private:
      friend class Stub;
      explicit experimental_async(Stub* stub): stub_(stub) { }
      Stub* stub() { return stub_; }
      Stub* stub_;
    };
    class experimental_async_interface* experimental_async() override { return &async_stub_; }

   private:
    std::shared_ptr< ::grpc::ChannelInterface> channel_;
    class experimental_async async_stub_{this};
    ::grpc::ClientAsyncResponseReader< ::gpb::Empty>* AsyncSendHuntMessageRaw(::grpc::ClientContext* context, const ::gpb::HuntMessage& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::gpb::Empty>* PrepareAsyncSendHuntMessageRaw(::grpc::ClientContext* context, const ::gpb::HuntMessage& request, ::grpc::CompletionQueue* cq) override;
    const ::grpc::internal::RpcMethod rpcmethod_SendHuntMessage_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    virtual ::grpc::Status SendHuntMessage(::grpc::ServerContext* context, const ::gpb::HuntMessage* request, ::gpb::Empty* response);
  };
  template <class BaseClass>
  class WithAsyncMethod_SendHuntMessage : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_SendHuntMessage() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_SendHuntMessage() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SendHuntMessage(::grpc::ServerContext* context, const ::gpb::HuntMessage* request, ::gpb::Empty* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestSendHuntMessage(::grpc::ServerContext* context, ::gpb::HuntMessage* request, ::grpc::ServerAsyncResponseWriter< ::gpb::Empty>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_SendHuntMessage<Service > AsyncService;
  template <class BaseClass>
  class ExperimentalWithCallbackMethod_SendHuntMessage : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    ExperimentalWithCallbackMethod_SendHuntMessage() {
      ::grpc::Service::experimental().MarkMethodCallback(0,
        new ::grpc::internal::CallbackUnaryHandler< ::gpb::HuntMessage, ::gpb::Empty>(
          [this](::grpc::ServerContext* context,
                 const ::gpb::HuntMessage* request,
                 ::gpb::Empty* response,
                 ::grpc::experimental::ServerCallbackRpcController* controller) {
                   return this->SendHuntMessage(context, request, response, controller);
                 }));
    }
    ~ExperimentalWithCallbackMethod_SendHuntMessage() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SendHuntMessage(::grpc::ServerContext* context, const ::gpb::HuntMessage* request, ::gpb::Empty* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual void SendHuntMessage(::grpc::ServerContext* context, const ::gpb::HuntMessage* request, ::gpb::Empty* response, ::grpc::experimental::ServerCallbackRpcController* controller) { controller->Finish(::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "")); }
  };
  typedef ExperimentalWithCallbackMethod_SendHuntMessage<Service > ExperimentalCallbackService;
  template <class BaseClass>
  class WithGenericMethod_SendHuntMessage : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_SendHuntMessage() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_SendHuntMessage() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SendHuntMessage(::grpc::ServerContext* context, const ::gpb::HuntMessage* request, ::gpb::Empty* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithRawMethod_SendHuntMessage : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithRawMethod_SendHuntMessage() {
      ::grpc::Service::MarkMethodRaw(0);
    }
    ~WithRawMethod_SendHuntMessage() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SendHuntMessage(::grpc::ServerContext* context, const ::gpb::HuntMessage* request, ::gpb::Empty* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestSendHuntMessage(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class ExperimentalWithRawCallbackMethod_SendHuntMessage : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    ExperimentalWithRawCallbackMethod_SendHuntMessage() {
      ::grpc::Service::experimental().MarkMethodRawCallback(0,
        new ::grpc::internal::CallbackUnaryHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
          [this](::grpc::ServerContext* context,
                 const ::grpc::ByteBuffer* request,
                 ::grpc::ByteBuffer* response,
                 ::grpc::experimental::ServerCallbackRpcController* controller) {
                   this->SendHuntMessage(context, request, response, controller);
                 }));
    }
    ~ExperimentalWithRawCallbackMethod_SendHuntMessage() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SendHuntMessage(::grpc::ServerContext* context, const ::gpb::HuntMessage* request, ::gpb::Empty* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual void SendHuntMessage(::grpc::ServerContext* context, const ::grpc::ByteBuffer* request, ::grpc::ByteBuffer* response, ::grpc::experimental::ServerCallbackRpcController* controller) { controller->Finish(::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "")); }
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_SendHuntMessage : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithStreamedUnaryMethod_SendHuntMessage() {
      ::grpc::Service::MarkMethodStreamed(0,
        new ::grpc::internal::StreamedUnaryHandler< ::gpb::HuntMessage, ::gpb::Empty>(std::bind(&WithStreamedUnaryMethod_SendHuntMessage<BaseClass>::StreamedSendHuntMessage, this, std::placeholders::_1, std::placeholders::_2)));
    }
    ~WithStreamedUnaryMethod_SendHuntMessage() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status SendHuntMessage(::grpc::ServerContext* context, const ::gpb::HuntMessage* request, ::gpb::Empty* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedSendHuntMessage(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::gpb::HuntMessage,::gpb::Empty>* server_unary_streamer) = 0;
  };
  typedef WithStreamedUnaryMethod_SendHuntMessage<Service > StreamedUnaryService;
  typedef Service SplitStreamedService;
  typedef WithStreamedUnaryMethod_SendHuntMessage<Service > StreamedService;
};

}  // namespace gpb


#endif  // GRPC_ServerServices_2eproto__INCLUDED
