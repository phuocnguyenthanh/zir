// Generated by the protocol buffer compiler.  DO NOT EDIT!

#include "search.pb.h"
#include <google/protobuf/descriptor.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format_inl.h>

namespace {

const ::google::protobuf::Descriptor* SearchRequest_descriptor_ = NULL;
const ::google::protobuf::Descriptor* SearchResponse_descriptor_ = NULL;
const ::google::protobuf::ServiceDescriptor* SearchService_descriptor_ = NULL;

}  // namespace


void proto_BuildDescriptors_search_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;
  ::google::protobuf::DescriptorPool* pool =
    ::google::protobuf::DescriptorPool::internal_generated_pool();

  const ::google::protobuf::FileDescriptor* file = pool->InternalBuildGeneratedFile(
    "\n\014search.proto\"\036\n\rSearchRequest\022\r\n\005query"
    "\030\001 \001(\t\" \n\016SearchResponse\022\016\n\006result\030\001 \003(\t"
    "2:\n\rSearchService\022)\n\006Search\022\016.SearchRequ"
    "est\032\017.SearchResponse", 140);
  SearchRequest_descriptor_ = file->message_type(0);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    SearchRequest_descriptor_, &SearchRequest::default_instance());
  SearchResponse_descriptor_ = file->message_type(1);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    SearchResponse_descriptor_, &SearchResponse::default_instance());
  SearchService_descriptor_ = file->service(0);
}

// Force BuildDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_search_2eproto {
  StaticDescriptorInitializer_search_2eproto() {
    proto_BuildDescriptors_search_2eproto();
  }
} static_descriptor_initializer_search_2eproto_;


// ===================================================================

const SearchRequest SearchRequest::default_instance_;

const ::std::string SearchRequest::_default_query_;
const int SearchRequest::_offsets_[1] = {
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SearchRequest, query_),
};

SearchRequest::SearchRequest()
  : _reflection_(descriptor(),
                 this, &default_instance_,
                 _offsets_, _has_bits_, NULL),
    _cached_size_(0),
    query_(const_cast< ::std::string*>(&_default_query_)) {
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  if (this == &default_instance_) {
  }
}

SearchRequest::SearchRequest(const SearchRequest& from)
  : _reflection_(descriptor(),
                 this, &default_instance_,
                 _offsets_, _has_bits_, NULL),
    _cached_size_(0),
    query_(const_cast< ::std::string*>(&_default_query_)) {
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  MergeFrom(from);
}

SearchRequest::~SearchRequest() {
  if (query_ != &_default_query_) {
    delete query_;
  }
  if (this != &default_instance_) {
  }
}

const ::google::protobuf::Descriptor* SearchRequest::descriptor() {
  if (SearchRequest_descriptor_ == NULL) proto_BuildDescriptors_search_2eproto();
  return SearchRequest_descriptor_;
}

SearchRequest* SearchRequest::New() const {
  return new SearchRequest;
}

const ::google::protobuf::Descriptor* SearchRequest::GetDescriptor() const {
  return descriptor();
}

const ::google::protobuf::Message::Reflection*
SearchRequest::GetReflection() const {
  return &_reflection_;
}

::google::protobuf::Message::Reflection* SearchRequest::GetReflection() {
  return &_reflection_;
}

// ===================================================================

const SearchResponse SearchResponse::default_instance_;


const int SearchResponse::_offsets_[1] = {
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SearchResponse, result_),
};

SearchResponse::SearchResponse()
  : _reflection_(descriptor(),
                 this, &default_instance_,
                 _offsets_, _has_bits_, NULL),
    _cached_size_(0) {
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  if (this == &default_instance_) {
  }
}

SearchResponse::SearchResponse(const SearchResponse& from)
  : _reflection_(descriptor(),
                 this, &default_instance_,
                 _offsets_, _has_bits_, NULL),
    _cached_size_(0) {
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  MergeFrom(from);
}

SearchResponse::~SearchResponse() {
  if (this != &default_instance_) {
  }
}

const ::google::protobuf::Descriptor* SearchResponse::descriptor() {
  if (SearchResponse_descriptor_ == NULL) proto_BuildDescriptors_search_2eproto();
  return SearchResponse_descriptor_;
}

SearchResponse* SearchResponse::New() const {
  return new SearchResponse;
}

const ::google::protobuf::Descriptor* SearchResponse::GetDescriptor() const {
  return descriptor();
}

const ::google::protobuf::Message::Reflection*
SearchResponse::GetReflection() const {
  return &_reflection_;
}

::google::protobuf::Message::Reflection* SearchResponse::GetReflection() {
  return &_reflection_;
}

// ===================================================================

SearchService::~SearchService() {}

const ::google::protobuf::ServiceDescriptor* SearchService::descriptor() {
  return SearchService_descriptor_;
}

const ::google::protobuf::ServiceDescriptor* SearchService::GetDescriptor() {
  return SearchService_descriptor_;
}

void SearchService::Search(::google::protobuf::RpcController* controller,
                         const ::SearchRequest* request,
                         ::SearchResponse* response,
                         ::google::protobuf::Closure* done) {
  controller->SetFailed("Method Search() not implemented.");
  done->Run();
}

void SearchService::CallMethod(const ::google::protobuf::MethodDescriptor* method,
                             ::google::protobuf::RpcController* controller,
                             const ::google::protobuf::Message* request,
                             ::google::protobuf::Message* response,
                             ::google::protobuf::Closure* done) {
  GOOGLE_DCHECK_EQ(method->service(), SearchService_descriptor_);
  switch(method->index()) {
    case 0:
      Search(controller,
             ::google::protobuf::down_cast<const ::SearchRequest*>(request),
             ::google::protobuf::down_cast< ::SearchResponse*>(response),
             done);
      break;
    default:
      GOOGLE_LOG(FATAL) << "Bad method index; this should never happen.";
      break;
  }
}

const ::google::protobuf::Message& SearchService::GetRequestPrototype(
    const ::google::protobuf::MethodDescriptor* method) const {
  GOOGLE_DCHECK_EQ(method->service(), SearchService_descriptor_);
  switch(method->index()) {
    case 0:
      return ::SearchRequest::default_instance();
    default:
      GOOGLE_LOG(FATAL) << "Bad method index; this should never happen.";
      return *reinterpret_cast< ::google::protobuf::Message*>(NULL);
  }
}

const ::google::protobuf::Message& SearchService::GetResponsePrototype(
    const ::google::protobuf::MethodDescriptor* method) const {
  GOOGLE_DCHECK_EQ(method->service(), SearchService_descriptor_);
  switch(method->index()) {
    case 0:
      return ::SearchResponse::default_instance();
    default:
      GOOGLE_LOG(FATAL) << "Bad method index; this should never happen.";
      return *reinterpret_cast< ::google::protobuf::Message*>(NULL);
  }
}

SearchService_Stub::SearchService_Stub(::google::protobuf::RpcChannel* channel)
  : channel_(channel), owns_channel_(false) {}
SearchService_Stub::SearchService_Stub(
    ::google::protobuf::RpcChannel* channel,
    ::google::protobuf::Service::ChannelOwnership ownership)
  : channel_(channel),
    owns_channel_(ownership == ::google::protobuf::Service::STUB_OWNS_CHANNEL) {}
SearchService_Stub::~SearchService_Stub() {
  if (owns_channel_) delete channel_;
}

void SearchService_Stub::Search(::google::protobuf::RpcController* controller,
                              const ::SearchRequest* request,
                              ::SearchResponse* response,
                              ::google::protobuf::Closure* done) {
  channel_->CallMethod(SearchService_descriptor_->method(0),
                       controller, request, response, done);
}
