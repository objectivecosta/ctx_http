// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: http_request.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_http_5frequest_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_http_5frequest_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_http_5frequest_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_http_5frequest_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_http_5frequest_2eproto;
namespace CTXHTTP {
class HTTPRequest;
struct HTTPRequestDefaultTypeInternal;
extern HTTPRequestDefaultTypeInternal _HTTPRequest_default_instance_;
class HTTPRequest_HeadersEntry_DoNotUse;
struct HTTPRequest_HeadersEntry_DoNotUseDefaultTypeInternal;
extern HTTPRequest_HeadersEntry_DoNotUseDefaultTypeInternal _HTTPRequest_HeadersEntry_DoNotUse_default_instance_;
}  // namespace CTXHTTP
PROTOBUF_NAMESPACE_OPEN
template<> ::CTXHTTP::HTTPRequest* Arena::CreateMaybeMessage<::CTXHTTP::HTTPRequest>(Arena*);
template<> ::CTXHTTP::HTTPRequest_HeadersEntry_DoNotUse* Arena::CreateMaybeMessage<::CTXHTTP::HTTPRequest_HeadersEntry_DoNotUse>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace CTXHTTP {

// ===================================================================

class HTTPRequest_HeadersEntry_DoNotUse : public ::PROTOBUF_NAMESPACE_ID::internal::MapEntry<HTTPRequest_HeadersEntry_DoNotUse, 
    std::string, std::string,
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_STRING,
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_STRING> {
public:
  typedef ::PROTOBUF_NAMESPACE_ID::internal::MapEntry<HTTPRequest_HeadersEntry_DoNotUse, 
    std::string, std::string,
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_STRING,
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_STRING> SuperType;
  HTTPRequest_HeadersEntry_DoNotUse();
  explicit PROTOBUF_CONSTEXPR HTTPRequest_HeadersEntry_DoNotUse(
      ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);
  explicit HTTPRequest_HeadersEntry_DoNotUse(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  void MergeFrom(const HTTPRequest_HeadersEntry_DoNotUse& other);
  static const HTTPRequest_HeadersEntry_DoNotUse* internal_default_instance() { return reinterpret_cast<const HTTPRequest_HeadersEntry_DoNotUse*>(&_HTTPRequest_HeadersEntry_DoNotUse_default_instance_); }
  static bool ValidateKey(std::string* s) {
    return ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(s->data(), static_cast<int>(s->size()), ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::PARSE, "CTXHTTP.HTTPRequest.HeadersEntry.key");
 }
  static bool ValidateValue(std::string* s) {
    return ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(s->data(), static_cast<int>(s->size()), ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::PARSE, "CTXHTTP.HTTPRequest.HeadersEntry.value");
 }
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  friend struct ::TableStruct_http_5frequest_2eproto;
};

// -------------------------------------------------------------------

class HTTPRequest final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:CTXHTTP.HTTPRequest) */ {
 public:
  inline HTTPRequest() : HTTPRequest(nullptr) {}
  ~HTTPRequest() override;
  explicit PROTOBUF_CONSTEXPR HTTPRequest(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  HTTPRequest(const HTTPRequest& from);
  HTTPRequest(HTTPRequest&& from) noexcept
    : HTTPRequest() {
    *this = ::std::move(from);
  }

  inline HTTPRequest& operator=(const HTTPRequest& from) {
    CopyFrom(from);
    return *this;
  }
  inline HTTPRequest& operator=(HTTPRequest&& from) noexcept {
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
  static const HTTPRequest& default_instance() {
    return *internal_default_instance();
  }
  static inline const HTTPRequest* internal_default_instance() {
    return reinterpret_cast<const HTTPRequest*>(
               &_HTTPRequest_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(HTTPRequest& a, HTTPRequest& b) {
    a.Swap(&b);
  }
  inline void Swap(HTTPRequest* other) {
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
  void UnsafeArenaSwap(HTTPRequest* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  HTTPRequest* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<HTTPRequest>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const HTTPRequest& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const HTTPRequest& from) {
    HTTPRequest::MergeImpl(*this, from);
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
  void InternalSwap(HTTPRequest* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "CTXHTTP.HTTPRequest";
  }
  protected:
  explicit HTTPRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena,
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
    kTagFieldNumber = 5,
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

  // optional int32 tag = 5;
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

  // @@protoc_insertion_point(class_scope:CTXHTTP.HTTPRequest)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
    ::PROTOBUF_NAMESPACE_ID::internal::MapField<
        HTTPRequest_HeadersEntry_DoNotUse,
        std::string, std::string,
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_STRING,
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_STRING> headers_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr url_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr method_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr body_;
    int32_t tag_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_http_5frequest_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// -------------------------------------------------------------------

// HTTPRequest

// string url = 1;
inline void HTTPRequest::clear_url() {
  _impl_.url_.ClearToEmpty();
}
inline const std::string& HTTPRequest::url() const {
  // @@protoc_insertion_point(field_get:CTXHTTP.HTTPRequest.url)
  return _internal_url();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void HTTPRequest::set_url(ArgT0&& arg0, ArgT... args) {
 
 _impl_.url_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:CTXHTTP.HTTPRequest.url)
}
inline std::string* HTTPRequest::mutable_url() {
  std::string* _s = _internal_mutable_url();
  // @@protoc_insertion_point(field_mutable:CTXHTTP.HTTPRequest.url)
  return _s;
}
inline const std::string& HTTPRequest::_internal_url() const {
  return _impl_.url_.Get();
}
inline void HTTPRequest::_internal_set_url(const std::string& value) {
  
  _impl_.url_.Set(value, GetArenaForAllocation());
}
inline std::string* HTTPRequest::_internal_mutable_url() {
  
  return _impl_.url_.Mutable(GetArenaForAllocation());
}
inline std::string* HTTPRequest::release_url() {
  // @@protoc_insertion_point(field_release:CTXHTTP.HTTPRequest.url)
  return _impl_.url_.Release();
}
inline void HTTPRequest::set_allocated_url(std::string* url) {
  if (url != nullptr) {
    
  } else {
    
  }
  _impl_.url_.SetAllocated(url, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.url_.IsDefault()) {
    _impl_.url_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:CTXHTTP.HTTPRequest.url)
}

// string method = 2;
inline void HTTPRequest::clear_method() {
  _impl_.method_.ClearToEmpty();
}
inline const std::string& HTTPRequest::method() const {
  // @@protoc_insertion_point(field_get:CTXHTTP.HTTPRequest.method)
  return _internal_method();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void HTTPRequest::set_method(ArgT0&& arg0, ArgT... args) {
 
 _impl_.method_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:CTXHTTP.HTTPRequest.method)
}
inline std::string* HTTPRequest::mutable_method() {
  std::string* _s = _internal_mutable_method();
  // @@protoc_insertion_point(field_mutable:CTXHTTP.HTTPRequest.method)
  return _s;
}
inline const std::string& HTTPRequest::_internal_method() const {
  return _impl_.method_.Get();
}
inline void HTTPRequest::_internal_set_method(const std::string& value) {
  
  _impl_.method_.Set(value, GetArenaForAllocation());
}
inline std::string* HTTPRequest::_internal_mutable_method() {
  
  return _impl_.method_.Mutable(GetArenaForAllocation());
}
inline std::string* HTTPRequest::release_method() {
  // @@protoc_insertion_point(field_release:CTXHTTP.HTTPRequest.method)
  return _impl_.method_.Release();
}
inline void HTTPRequest::set_allocated_method(std::string* method) {
  if (method != nullptr) {
    
  } else {
    
  }
  _impl_.method_.SetAllocated(method, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.method_.IsDefault()) {
    _impl_.method_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:CTXHTTP.HTTPRequest.method)
}

// map<string, string> headers = 3;
inline int HTTPRequest::_internal_headers_size() const {
  return _impl_.headers_.size();
}
inline int HTTPRequest::headers_size() const {
  return _internal_headers_size();
}
inline void HTTPRequest::clear_headers() {
  _impl_.headers_.Clear();
}
inline const ::PROTOBUF_NAMESPACE_ID::Map< std::string, std::string >&
HTTPRequest::_internal_headers() const {
  return _impl_.headers_.GetMap();
}
inline const ::PROTOBUF_NAMESPACE_ID::Map< std::string, std::string >&
HTTPRequest::headers() const {
  // @@protoc_insertion_point(field_map:CTXHTTP.HTTPRequest.headers)
  return _internal_headers();
}
inline ::PROTOBUF_NAMESPACE_ID::Map< std::string, std::string >*
HTTPRequest::_internal_mutable_headers() {
  return _impl_.headers_.MutableMap();
}
inline ::PROTOBUF_NAMESPACE_ID::Map< std::string, std::string >*
HTTPRequest::mutable_headers() {
  // @@protoc_insertion_point(field_mutable_map:CTXHTTP.HTTPRequest.headers)
  return _internal_mutable_headers();
}

// optional bytes body = 4;
inline bool HTTPRequest::_internal_has_body() const {
  bool value = (_impl_._has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool HTTPRequest::has_body() const {
  return _internal_has_body();
}
inline void HTTPRequest::clear_body() {
  _impl_.body_.ClearToEmpty();
  _impl_._has_bits_[0] &= ~0x00000001u;
}
inline const std::string& HTTPRequest::body() const {
  // @@protoc_insertion_point(field_get:CTXHTTP.HTTPRequest.body)
  return _internal_body();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void HTTPRequest::set_body(ArgT0&& arg0, ArgT... args) {
 _impl_._has_bits_[0] |= 0x00000001u;
 _impl_.body_.SetBytes(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:CTXHTTP.HTTPRequest.body)
}
inline std::string* HTTPRequest::mutable_body() {
  std::string* _s = _internal_mutable_body();
  // @@protoc_insertion_point(field_mutable:CTXHTTP.HTTPRequest.body)
  return _s;
}
inline const std::string& HTTPRequest::_internal_body() const {
  return _impl_.body_.Get();
}
inline void HTTPRequest::_internal_set_body(const std::string& value) {
  _impl_._has_bits_[0] |= 0x00000001u;
  _impl_.body_.Set(value, GetArenaForAllocation());
}
inline std::string* HTTPRequest::_internal_mutable_body() {
  _impl_._has_bits_[0] |= 0x00000001u;
  return _impl_.body_.Mutable(GetArenaForAllocation());
}
inline std::string* HTTPRequest::release_body() {
  // @@protoc_insertion_point(field_release:CTXHTTP.HTTPRequest.body)
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
inline void HTTPRequest::set_allocated_body(std::string* body) {
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
  // @@protoc_insertion_point(field_set_allocated:CTXHTTP.HTTPRequest.body)
}

// optional int32 tag = 5;
inline bool HTTPRequest::_internal_has_tag() const {
  bool value = (_impl_._has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline bool HTTPRequest::has_tag() const {
  return _internal_has_tag();
}
inline void HTTPRequest::clear_tag() {
  _impl_.tag_ = 0;
  _impl_._has_bits_[0] &= ~0x00000002u;
}
inline int32_t HTTPRequest::_internal_tag() const {
  return _impl_.tag_;
}
inline int32_t HTTPRequest::tag() const {
  // @@protoc_insertion_point(field_get:CTXHTTP.HTTPRequest.tag)
  return _internal_tag();
}
inline void HTTPRequest::_internal_set_tag(int32_t value) {
  _impl_._has_bits_[0] |= 0x00000002u;
  _impl_.tag_ = value;
}
inline void HTTPRequest::set_tag(int32_t value) {
  _internal_set_tag(value);
  // @@protoc_insertion_point(field_set:CTXHTTP.HTTPRequest.tag)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace CTXHTTP

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_http_5frequest_2eproto