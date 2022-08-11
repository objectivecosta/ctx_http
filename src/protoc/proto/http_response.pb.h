// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: proto/http_response.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_proto_2fhttp_5fresponse_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_proto_2fhttp_5fresponse_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3021000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3021004 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/map.h>  // IWYU pragma: export
#include <google/protobuf/map_entry.h>
#include <google/protobuf/map_field_inl.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_proto_2fhttp_5fresponse_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_proto_2fhttp_5fresponse_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_proto_2fhttp_5fresponse_2eproto;
namespace ctxhttp {
class HTTPResponse;
struct HTTPResponseDefaultTypeInternal;
extern HTTPResponseDefaultTypeInternal _HTTPResponse_default_instance_;
class HTTPResponse_HeadersEntry_DoNotUse;
struct HTTPResponse_HeadersEntry_DoNotUseDefaultTypeInternal;
extern HTTPResponse_HeadersEntry_DoNotUseDefaultTypeInternal _HTTPResponse_HeadersEntry_DoNotUse_default_instance_;
}  // namespace ctxhttp
PROTOBUF_NAMESPACE_OPEN
template<> ::ctxhttp::HTTPResponse* Arena::CreateMaybeMessage<::ctxhttp::HTTPResponse>(Arena*);
template<> ::ctxhttp::HTTPResponse_HeadersEntry_DoNotUse* Arena::CreateMaybeMessage<::ctxhttp::HTTPResponse_HeadersEntry_DoNotUse>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace ctxhttp {

// ===================================================================

class HTTPResponse_HeadersEntry_DoNotUse : public ::PROTOBUF_NAMESPACE_ID::internal::MapEntry<HTTPResponse_HeadersEntry_DoNotUse, 
    std::string, std::string,
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_STRING,
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_STRING> {
public:
  typedef ::PROTOBUF_NAMESPACE_ID::internal::MapEntry<HTTPResponse_HeadersEntry_DoNotUse, 
    std::string, std::string,
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_STRING,
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_STRING> SuperType;
  HTTPResponse_HeadersEntry_DoNotUse();
  explicit PROTOBUF_CONSTEXPR HTTPResponse_HeadersEntry_DoNotUse(
      ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);
  explicit HTTPResponse_HeadersEntry_DoNotUse(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  void MergeFrom(const HTTPResponse_HeadersEntry_DoNotUse& other);
  static const HTTPResponse_HeadersEntry_DoNotUse* internal_default_instance() { return reinterpret_cast<const HTTPResponse_HeadersEntry_DoNotUse*>(&_HTTPResponse_HeadersEntry_DoNotUse_default_instance_); }
  static bool ValidateKey(std::string* s) {
    return ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(s->data(), static_cast<int>(s->size()), ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::PARSE, "ctxhttp.HTTPResponse.HeadersEntry.key");
 }
  static bool ValidateValue(std::string* s) {
    return ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(s->data(), static_cast<int>(s->size()), ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::PARSE, "ctxhttp.HTTPResponse.HeadersEntry.value");
 }
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  friend struct ::TableStruct_proto_2fhttp_5fresponse_2eproto;
};

// -------------------------------------------------------------------

class HTTPResponse final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:ctxhttp.HTTPResponse) */ {
 public:
  inline HTTPResponse() : HTTPResponse(nullptr) {}
  ~HTTPResponse() override;
  explicit PROTOBUF_CONSTEXPR HTTPResponse(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  HTTPResponse(const HTTPResponse& from);
  HTTPResponse(HTTPResponse&& from) noexcept
    : HTTPResponse() {
    *this = ::std::move(from);
  }

  inline HTTPResponse& operator=(const HTTPResponse& from) {
    CopyFrom(from);
    return *this;
  }
  inline HTTPResponse& operator=(HTTPResponse&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const HTTPResponse& default_instance() {
    return *internal_default_instance();
  }
  static inline const HTTPResponse* internal_default_instance() {
    return reinterpret_cast<const HTTPResponse*>(
               &_HTTPResponse_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(HTTPResponse& a, HTTPResponse& b) {
    a.Swap(&b);
  }
  inline void Swap(HTTPResponse* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(HTTPResponse* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  HTTPResponse* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<HTTPResponse>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const HTTPResponse& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const HTTPResponse& from) {
    HTTPResponse::MergeImpl(*this, from);
  }
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::PROTOBUF_NAMESPACE_ID::Arena* arena, bool is_message_owned);
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(HTTPResponse* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "ctxhttp.HTTPResponse";
  }
  protected:
  explicit HTTPResponse(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  private:
  static void ArenaDtor(void* object);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------


  // accessors -------------------------------------------------------

  enum : int {
    kHeadersFieldNumber = 3,
    kUrlFieldNumber = 1,
    kMethodFieldNumber = 2,
    kBodyFieldNumber = 4,
    kStatusCodeFieldNumber = 5,
    kTagFieldNumber = 6,
  };
  // map<string, string> headers = 3;
  int headers_size() const;
  private:
  int _internal_headers_size() const;
  public:
  void clear_headers();
  private:
  const ::PROTOBUF_NAMESPACE_ID::Map< std::string, std::string >&
      _internal_headers() const;
  ::PROTOBUF_NAMESPACE_ID::Map< std::string, std::string >*
      _internal_mutable_headers();
  public:
  const ::PROTOBUF_NAMESPACE_ID::Map< std::string, std::string >&
      headers() const;
  ::PROTOBUF_NAMESPACE_ID::Map< std::string, std::string >*
      mutable_headers();

  // string url = 1;
  void clear_url();
  const std::string& url() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_url(ArgT0&& arg0, ArgT... args);
  std::string* mutable_url();
  PROTOBUF_NODISCARD std::string* release_url();
  void set_allocated_url(std::string* url);
  private:
  const std::string& _internal_url() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_url(const std::string& value);
  std::string* _internal_mutable_url();
  public:

  // string method = 2;
  void clear_method();
  const std::string& method() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_method(ArgT0&& arg0, ArgT... args);
  std::string* mutable_method();
  PROTOBUF_NODISCARD std::string* release_method();
  void set_allocated_method(std::string* method);
  private:
  const std::string& _internal_method() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_method(const std::string& value);
  std::string* _internal_mutable_method();
  public:

  // optional bytes body = 4;
  bool has_body() const;
  private:
  bool _internal_has_body() const;
  public:
  void clear_body();
  const std::string& body() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_body(ArgT0&& arg0, ArgT... args);
  std::string* mutable_body();
  PROTOBUF_NODISCARD std::string* release_body();
  void set_allocated_body(std::string* body);
  private:
  const std::string& _internal_body() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_body(const std::string& value);
  std::string* _internal_mutable_body();
  public:

  // optional int32 statusCode = 5;
  bool has_statuscode() const;
  private:
  bool _internal_has_statuscode() const;
  public:
  void clear_statuscode();
  int32_t statuscode() const;
  void set_statuscode(int32_t value);
  private:
  int32_t _internal_statuscode() const;
  void _internal_set_statuscode(int32_t value);
  public:

  // optional int32 tag = 6;
  bool has_tag() const;
  private:
  bool _internal_has_tag() const;
  public:
  void clear_tag();
  int32_t tag() const;
  void set_tag(int32_t value);
  private:
  int32_t _internal_tag() const;
  void _internal_set_tag(int32_t value);
  public:

  // @@protoc_insertion_point(class_scope:ctxhttp.HTTPResponse)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
    ::PROTOBUF_NAMESPACE_ID::internal::MapField<
        HTTPResponse_HeadersEntry_DoNotUse,
        std::string, std::string,
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_STRING,
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_STRING> headers_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr url_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr method_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr body_;
    int32_t statuscode_;
    int32_t tag_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_proto_2fhttp_5fresponse_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// -------------------------------------------------------------------

// HTTPResponse

// string url = 1;
inline void HTTPResponse::clear_url() {
  _impl_.url_.ClearToEmpty();
}
inline const std::string& HTTPResponse::url() const {
  // @@protoc_insertion_point(field_get:ctxhttp.HTTPResponse.url)
  return _internal_url();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void HTTPResponse::set_url(ArgT0&& arg0, ArgT... args) {
 
 _impl_.url_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:ctxhttp.HTTPResponse.url)
}
inline std::string* HTTPResponse::mutable_url() {
  std::string* _s = _internal_mutable_url();
  // @@protoc_insertion_point(field_mutable:ctxhttp.HTTPResponse.url)
  return _s;
}
inline const std::string& HTTPResponse::_internal_url() const {
  return _impl_.url_.Get();
}
inline void HTTPResponse::_internal_set_url(const std::string& value) {
  
  _impl_.url_.Set(value, GetArenaForAllocation());
}
inline std::string* HTTPResponse::_internal_mutable_url() {
  
  return _impl_.url_.Mutable(GetArenaForAllocation());
}
inline std::string* HTTPResponse::release_url() {
  // @@protoc_insertion_point(field_release:ctxhttp.HTTPResponse.url)
  return _impl_.url_.Release();
}
inline void HTTPResponse::set_allocated_url(std::string* url) {
  if (url != nullptr) {
    
  } else {
    
  }
  _impl_.url_.SetAllocated(url, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.url_.IsDefault()) {
    _impl_.url_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:ctxhttp.HTTPResponse.url)
}

// string method = 2;
inline void HTTPResponse::clear_method() {
  _impl_.method_.ClearToEmpty();
}
inline const std::string& HTTPResponse::method() const {
  // @@protoc_insertion_point(field_get:ctxhttp.HTTPResponse.method)
  return _internal_method();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void HTTPResponse::set_method(ArgT0&& arg0, ArgT... args) {
 
 _impl_.method_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:ctxhttp.HTTPResponse.method)
}
inline std::string* HTTPResponse::mutable_method() {
  std::string* _s = _internal_mutable_method();
  // @@protoc_insertion_point(field_mutable:ctxhttp.HTTPResponse.method)
  return _s;
}
inline const std::string& HTTPResponse::_internal_method() const {
  return _impl_.method_.Get();
}
inline void HTTPResponse::_internal_set_method(const std::string& value) {
  
  _impl_.method_.Set(value, GetArenaForAllocation());
}
inline std::string* HTTPResponse::_internal_mutable_method() {
  
  return _impl_.method_.Mutable(GetArenaForAllocation());
}
inline std::string* HTTPResponse::release_method() {
  // @@protoc_insertion_point(field_release:ctxhttp.HTTPResponse.method)
  return _impl_.method_.Release();
}
inline void HTTPResponse::set_allocated_method(std::string* method) {
  if (method != nullptr) {
    
  } else {
    
  }
  _impl_.method_.SetAllocated(method, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.method_.IsDefault()) {
    _impl_.method_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:ctxhttp.HTTPResponse.method)
}

// map<string, string> headers = 3;
inline int HTTPResponse::_internal_headers_size() const {
  return _impl_.headers_.size();
}
inline int HTTPResponse::headers_size() const {
  return _internal_headers_size();
}
inline void HTTPResponse::clear_headers() {
  _impl_.headers_.Clear();
}
inline const ::PROTOBUF_NAMESPACE_ID::Map< std::string, std::string >&
HTTPResponse::_internal_headers() const {
  return _impl_.headers_.GetMap();
}
inline const ::PROTOBUF_NAMESPACE_ID::Map< std::string, std::string >&
HTTPResponse::headers() const {
  // @@protoc_insertion_point(field_map:ctxhttp.HTTPResponse.headers)
  return _internal_headers();
}
inline ::PROTOBUF_NAMESPACE_ID::Map< std::string, std::string >*
HTTPResponse::_internal_mutable_headers() {
  return _impl_.headers_.MutableMap();
}
inline ::PROTOBUF_NAMESPACE_ID::Map< std::string, std::string >*
HTTPResponse::mutable_headers() {
  // @@protoc_insertion_point(field_mutable_map:ctxhttp.HTTPResponse.headers)
  return _internal_mutable_headers();
}

// optional bytes body = 4;
inline bool HTTPResponse::_internal_has_body() const {
  bool value = (_impl_._has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool HTTPResponse::has_body() const {
  return _internal_has_body();
}
inline void HTTPResponse::clear_body() {
  _impl_.body_.ClearToEmpty();
  _impl_._has_bits_[0] &= ~0x00000001u;
}
inline const std::string& HTTPResponse::body() const {
  // @@protoc_insertion_point(field_get:ctxhttp.HTTPResponse.body)
  return _internal_body();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void HTTPResponse::set_body(ArgT0&& arg0, ArgT... args) {
 _impl_._has_bits_[0] |= 0x00000001u;
 _impl_.body_.SetBytes(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:ctxhttp.HTTPResponse.body)
}
inline std::string* HTTPResponse::mutable_body() {
  std::string* _s = _internal_mutable_body();
  // @@protoc_insertion_point(field_mutable:ctxhttp.HTTPResponse.body)
  return _s;
}
inline const std::string& HTTPResponse::_internal_body() const {
  return _impl_.body_.Get();
}
inline void HTTPResponse::_internal_set_body(const std::string& value) {
  _impl_._has_bits_[0] |= 0x00000001u;
  _impl_.body_.Set(value, GetArenaForAllocation());
}
inline std::string* HTTPResponse::_internal_mutable_body() {
  _impl_._has_bits_[0] |= 0x00000001u;
  return _impl_.body_.Mutable(GetArenaForAllocation());
}
inline std::string* HTTPResponse::release_body() {
  // @@protoc_insertion_point(field_release:ctxhttp.HTTPResponse.body)
  if (!_internal_has_body()) {
    return nullptr;
  }
  _impl_._has_bits_[0] &= ~0x00000001u;
  auto* p = _impl_.body_.Release();
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.body_.IsDefault()) {
    _impl_.body_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  return p;
}
inline void HTTPResponse::set_allocated_body(std::string* body) {
  if (body != nullptr) {
    _impl_._has_bits_[0] |= 0x00000001u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000001u;
  }
  _impl_.body_.SetAllocated(body, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.body_.IsDefault()) {
    _impl_.body_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:ctxhttp.HTTPResponse.body)
}

// optional int32 statusCode = 5;
inline bool HTTPResponse::_internal_has_statuscode() const {
  bool value = (_impl_._has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline bool HTTPResponse::has_statuscode() const {
  return _internal_has_statuscode();
}
inline void HTTPResponse::clear_statuscode() {
  _impl_.statuscode_ = 0;
  _impl_._has_bits_[0] &= ~0x00000002u;
}
inline int32_t HTTPResponse::_internal_statuscode() const {
  return _impl_.statuscode_;
}
inline int32_t HTTPResponse::statuscode() const {
  // @@protoc_insertion_point(field_get:ctxhttp.HTTPResponse.statusCode)
  return _internal_statuscode();
}
inline void HTTPResponse::_internal_set_statuscode(int32_t value) {
  _impl_._has_bits_[0] |= 0x00000002u;
  _impl_.statuscode_ = value;
}
inline void HTTPResponse::set_statuscode(int32_t value) {
  _internal_set_statuscode(value);
  // @@protoc_insertion_point(field_set:ctxhttp.HTTPResponse.statusCode)
}

// optional int32 tag = 6;
inline bool HTTPResponse::_internal_has_tag() const {
  bool value = (_impl_._has_bits_[0] & 0x00000004u) != 0;
  return value;
}
inline bool HTTPResponse::has_tag() const {
  return _internal_has_tag();
}
inline void HTTPResponse::clear_tag() {
  _impl_.tag_ = 0;
  _impl_._has_bits_[0] &= ~0x00000004u;
}
inline int32_t HTTPResponse::_internal_tag() const {
  return _impl_.tag_;
}
inline int32_t HTTPResponse::tag() const {
  // @@protoc_insertion_point(field_get:ctxhttp.HTTPResponse.tag)
  return _internal_tag();
}
inline void HTTPResponse::_internal_set_tag(int32_t value) {
  _impl_._has_bits_[0] |= 0x00000004u;
  _impl_.tag_ = value;
}
inline void HTTPResponse::set_tag(int32_t value) {
  _internal_set_tag(value);
  // @@protoc_insertion_point(field_set:ctxhttp.HTTPResponse.tag)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace ctxhttp

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_proto_2fhttp_5fresponse_2eproto
