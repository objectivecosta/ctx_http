// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: http_request.proto

#include "http_request.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>

PROTOBUF_PRAGMA_INIT_SEG

namespace _pb = ::PROTOBUF_NAMESPACE_ID;
namespace _pbi = _pb::internal;

namespace CTXHTTP {
PROTOBUF_CONSTEXPR HTTPRequest_HeadersEntry_DoNotUse::HTTPRequest_HeadersEntry_DoNotUse(
    ::_pbi::ConstantInitialized) {}
struct HTTPRequest_HeadersEntry_DoNotUseDefaultTypeInternal {
  PROTOBUF_CONSTEXPR HTTPRequest_HeadersEntry_DoNotUseDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~HTTPRequest_HeadersEntry_DoNotUseDefaultTypeInternal() {}
  union {
    HTTPRequest_HeadersEntry_DoNotUse _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 HTTPRequest_HeadersEntry_DoNotUseDefaultTypeInternal _HTTPRequest_HeadersEntry_DoNotUse_default_instance_;
PROTOBUF_CONSTEXPR HTTPRequest::HTTPRequest(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_._has_bits_)*/{}
  , /*decltype(_impl_._cached_size_)*/{}
  , /*decltype(_impl_.headers_)*/{::_pbi::ConstantInitialized()}
  , /*decltype(_impl_.url_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.method_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.body_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.tag_)*/0} {}
struct HTTPRequestDefaultTypeInternal {
  PROTOBUF_CONSTEXPR HTTPRequestDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~HTTPRequestDefaultTypeInternal() {}
  union {
    HTTPRequest _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 HTTPRequestDefaultTypeInternal _HTTPRequest_default_instance_;
}  // namespace CTXHTTP
static ::_pb::Metadata file_level_metadata_http_5frequest_2eproto[2];
static constexpr ::_pb::EnumDescriptor const** file_level_enum_descriptors_http_5frequest_2eproto = nullptr;
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_http_5frequest_2eproto = nullptr;

const uint32_t TableStruct_http_5frequest_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::CTXHTTP::HTTPRequest_HeadersEntry_DoNotUse, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::CTXHTTP::HTTPRequest_HeadersEntry_DoNotUse, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::CTXHTTP::HTTPRequest_HeadersEntry_DoNotUse, key_),
  PROTOBUF_FIELD_OFFSET(::CTXHTTP::HTTPRequest_HeadersEntry_DoNotUse, value_),
  0,
  1,
  PROTOBUF_FIELD_OFFSET(::CTXHTTP::HTTPRequest, _impl_._has_bits_),
  PROTOBUF_FIELD_OFFSET(::CTXHTTP::HTTPRequest, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::CTXHTTP::HTTPRequest, _impl_.url_),
  PROTOBUF_FIELD_OFFSET(::CTXHTTP::HTTPRequest, _impl_.method_),
  PROTOBUF_FIELD_OFFSET(::CTXHTTP::HTTPRequest, _impl_.headers_),
  PROTOBUF_FIELD_OFFSET(::CTXHTTP::HTTPRequest, _impl_.body_),
  PROTOBUF_FIELD_OFFSET(::CTXHTTP::HTTPRequest, _impl_.tag_),
  ~0u,
  ~0u,
  ~0u,
  0,
  1,
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 8, -1, sizeof(::CTXHTTP::HTTPRequest_HeadersEntry_DoNotUse)},
  { 10, 21, -1, sizeof(::CTXHTTP::HTTPRequest)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::CTXHTTP::_HTTPRequest_HeadersEntry_DoNotUse_default_instance_._instance,
  &::CTXHTTP::_HTTPRequest_default_instance_._instance,
};

const char descriptor_table_protodef_http_5frequest_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\022http_request.proto\022\007CTXHTTP\"\304\001\n\013HTTPRe"
  "quest\022\013\n\003url\030\001 \001(\t\022\016\n\006method\030\002 \001(\t\0222\n\007he"
  "aders\030\003 \003(\0132!.CTXHTTP.HTTPRequest.Header"
  "sEntry\022\021\n\004body\030\004 \001(\014H\000\210\001\001\022\020\n\003tag\030\005 \001(\005H\001"
  "\210\001\001\032.\n\014HeadersEntry\022\013\n\003key\030\001 \001(\t\022\r\n\005valu"
  "e\030\002 \001(\t:\0028\001B\007\n\005_bodyB\006\n\004_tagb\006proto3"
  ;
static ::_pbi::once_flag descriptor_table_http_5frequest_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_http_5frequest_2eproto = {
    false, false, 236, descriptor_table_protodef_http_5frequest_2eproto,
    "http_request.proto",
    &descriptor_table_http_5frequest_2eproto_once, nullptr, 0, 2,
    schemas, file_default_instances, TableStruct_http_5frequest_2eproto::offsets,
    file_level_metadata_http_5frequest_2eproto, file_level_enum_descriptors_http_5frequest_2eproto,
    file_level_service_descriptors_http_5frequest_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_http_5frequest_2eproto_getter() {
  return &descriptor_table_http_5frequest_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_http_5frequest_2eproto(&descriptor_table_http_5frequest_2eproto);
namespace CTXHTTP {

// ===================================================================

HTTPRequest_HeadersEntry_DoNotUse::HTTPRequest_HeadersEntry_DoNotUse() {}
HTTPRequest_HeadersEntry_DoNotUse::HTTPRequest_HeadersEntry_DoNotUse(::PROTOBUF_NAMESPACE_ID::Arena* arena)
    : SuperType(arena) {}
void HTTPRequest_HeadersEntry_DoNotUse::MergeFrom(const HTTPRequest_HeadersEntry_DoNotUse& other) {
  MergeFromInternal(other);
}
::PROTOBUF_NAMESPACE_ID::Metadata HTTPRequest_HeadersEntry_DoNotUse::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_http_5frequest_2eproto_getter, &descriptor_table_http_5frequest_2eproto_once,
      file_level_metadata_http_5frequest_2eproto[0]);
}

// ===================================================================

class HTTPRequest::_Internal {
 public:
  using HasBits = decltype(std::declval<HTTPRequest>()._impl_._has_bits_);
  static void set_has_body(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_tag(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
};

HTTPRequest::HTTPRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  if (arena != nullptr && !is_message_owned) {
    arena->OwnCustomDestructor(this, &HTTPRequest::ArenaDtor);
  }
  // @@protoc_insertion_point(arena_constructor:CTXHTTP.HTTPRequest)
}
HTTPRequest::HTTPRequest(const HTTPRequest& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  HTTPRequest* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){from._impl_._has_bits_}
    , /*decltype(_impl_._cached_size_)*/{}
    , /*decltype(_impl_.headers_)*/{}
    , decltype(_impl_.url_){}
    , decltype(_impl_.method_){}
    , decltype(_impl_.body_){}
    , decltype(_impl_.tag_){}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _this->_impl_.headers_.MergeFrom(from._impl_.headers_);
  _impl_.url_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.url_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_url().empty()) {
    _this->_impl_.url_.Set(from._internal_url(), 
      _this->GetArenaForAllocation());
  }
  _impl_.method_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.method_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_method().empty()) {
    _this->_impl_.method_.Set(from._internal_method(), 
      _this->GetArenaForAllocation());
  }
  _impl_.body_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.body_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (from._internal_has_body()) {
    _this->_impl_.body_.Set(from._internal_body(), 
      _this->GetArenaForAllocation());
  }
  _this->_impl_.tag_ = from._impl_.tag_;
  // @@protoc_insertion_point(copy_constructor:CTXHTTP.HTTPRequest)
}

inline void HTTPRequest::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){}
    , /*decltype(_impl_._cached_size_)*/{}
    , /*decltype(_impl_.headers_)*/{::_pbi::ArenaInitialized(), arena}
    , decltype(_impl_.url_){}
    , decltype(_impl_.method_){}
    , decltype(_impl_.body_){}
    , decltype(_impl_.tag_){0}
  };
  _impl_.url_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.url_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.method_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.method_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.body_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.body_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

HTTPRequest::~HTTPRequest() {
  // @@protoc_insertion_point(destructor:CTXHTTP.HTTPRequest)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    ArenaDtor(this);
    return;
  }
  SharedDtor();
}

inline void HTTPRequest::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.headers_.Destruct();
  _impl_.headers_.~MapField();
  _impl_.url_.Destroy();
  _impl_.method_.Destroy();
  _impl_.body_.Destroy();
}

void HTTPRequest::ArenaDtor(void* object) {
  HTTPRequest* _this = reinterpret_cast< HTTPRequest* >(object);
  _this->_impl_.headers_.Destruct();
}
void HTTPRequest::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void HTTPRequest::Clear() {
// @@protoc_insertion_point(message_clear_start:CTXHTTP.HTTPRequest)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.headers_.Clear();
  _impl_.url_.ClearToEmpty();
  _impl_.method_.ClearToEmpty();
  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    _impl_.body_.ClearNonDefaultToEmpty();
  }
  _impl_.tag_ = 0;
  _impl_._has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* HTTPRequest::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // string url = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          auto str = _internal_mutable_url();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "CTXHTTP.HTTPRequest.url"));
        } else
          goto handle_unusual;
        continue;
      // string method = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          auto str = _internal_mutable_method();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "CTXHTTP.HTTPRequest.method"));
        } else
          goto handle_unusual;
        continue;
      // map<string, string> headers = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 26)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(&_impl_.headers_, ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<26>(ptr));
        } else
          goto handle_unusual;
        continue;
      // optional bytes body = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 34)) {
          auto str = _internal_mutable_body();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional int32 tag = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 40)) {
          _Internal::set_has_tag(&has_bits);
          _impl_.tag_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  _impl_._has_bits_.Or(has_bits);
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* HTTPRequest::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:CTXHTTP.HTTPRequest)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // string url = 1;
  if (!this->_internal_url().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_url().data(), static_cast<int>(this->_internal_url().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "CTXHTTP.HTTPRequest.url");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_url(), target);
  }

  // string method = 2;
  if (!this->_internal_method().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_method().data(), static_cast<int>(this->_internal_method().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "CTXHTTP.HTTPRequest.method");
    target = stream->WriteStringMaybeAliased(
        2, this->_internal_method(), target);
  }

  // map<string, string> headers = 3;
  if (!this->_internal_headers().empty()) {
    using MapType = ::_pb::Map<std::string, std::string>;
    using WireHelper = HTTPRequest_HeadersEntry_DoNotUse::Funcs;
    const auto& map_field = this->_internal_headers();
    auto check_utf8 = [](const MapType::value_type& entry) {
      (void)entry;
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
        entry.first.data(), static_cast<int>(entry.first.length()),
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
        "CTXHTTP.HTTPRequest.HeadersEntry.key");
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
        entry.second.data(), static_cast<int>(entry.second.length()),
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
        "CTXHTTP.HTTPRequest.HeadersEntry.value");
    };

    if (stream->IsSerializationDeterministic() && map_field.size() > 1) {
      for (const auto& entry : ::_pbi::MapSorterPtr<MapType>(map_field)) {
        target = WireHelper::InternalSerialize(3, entry.first, entry.second, target, stream);
        check_utf8(entry);
      }
    } else {
      for (const auto& entry : map_field) {
        target = WireHelper::InternalSerialize(3, entry.first, entry.second, target, stream);
        check_utf8(entry);
      }
    }
  }

  // optional bytes body = 4;
  if (_internal_has_body()) {
    target = stream->WriteBytesMaybeAliased(
        4, this->_internal_body(), target);
  }

  // optional int32 tag = 5;
  if (_internal_has_tag()) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(5, this->_internal_tag(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:CTXHTTP.HTTPRequest)
  return target;
}

size_t HTTPRequest::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:CTXHTTP.HTTPRequest)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // map<string, string> headers = 3;
  total_size += 1 *
      ::PROTOBUF_NAMESPACE_ID::internal::FromIntSize(this->_internal_headers_size());
  for (::PROTOBUF_NAMESPACE_ID::Map< std::string, std::string >::const_iterator
      it = this->_internal_headers().begin();
      it != this->_internal_headers().end(); ++it) {
    total_size += HTTPRequest_HeadersEntry_DoNotUse::Funcs::ByteSizeLong(it->first, it->second);
  }

  // string url = 1;
  if (!this->_internal_url().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_url());
  }

  // string method = 2;
  if (!this->_internal_method().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_method());
  }

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    // optional bytes body = 4;
    if (cached_has_bits & 0x00000001u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
          this->_internal_body());
    }

    // optional int32 tag = 5;
    if (cached_has_bits & 0x00000002u) {
      total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(this->_internal_tag());
    }

  }
  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData HTTPRequest::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    HTTPRequest::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*HTTPRequest::GetClassData() const { return &_class_data_; }


void HTTPRequest::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<HTTPRequest*>(&to_msg);
  auto& from = static_cast<const HTTPRequest&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:CTXHTTP.HTTPRequest)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  _this->_impl_.headers_.MergeFrom(from._impl_.headers_);
  if (!from._internal_url().empty()) {
    _this->_internal_set_url(from._internal_url());
  }
  if (!from._internal_method().empty()) {
    _this->_internal_set_method(from._internal_method());
  }
  cached_has_bits = from._impl_._has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    if (cached_has_bits & 0x00000001u) {
      _this->_internal_set_body(from._internal_body());
    }
    if (cached_has_bits & 0x00000002u) {
      _this->_impl_.tag_ = from._impl_.tag_;
    }
    _this->_impl_._has_bits_[0] |= cached_has_bits;
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void HTTPRequest::CopyFrom(const HTTPRequest& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:CTXHTTP.HTTPRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool HTTPRequest::IsInitialized() const {
  return true;
}

void HTTPRequest::InternalSwap(HTTPRequest* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_._has_bits_[0], other->_impl_._has_bits_[0]);
  _impl_.headers_.InternalSwap(&other->_impl_.headers_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.url_, lhs_arena,
      &other->_impl_.url_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.method_, lhs_arena,
      &other->_impl_.method_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.body_, lhs_arena,
      &other->_impl_.body_, rhs_arena
  );
  swap(_impl_.tag_, other->_impl_.tag_);
}

::PROTOBUF_NAMESPACE_ID::Metadata HTTPRequest::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_http_5frequest_2eproto_getter, &descriptor_table_http_5frequest_2eproto_once,
      file_level_metadata_http_5frequest_2eproto[1]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace CTXHTTP
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::CTXHTTP::HTTPRequest_HeadersEntry_DoNotUse*
Arena::CreateMaybeMessage< ::CTXHTTP::HTTPRequest_HeadersEntry_DoNotUse >(Arena* arena) {
  return Arena::CreateMessageInternal< ::CTXHTTP::HTTPRequest_HeadersEntry_DoNotUse >(arena);
}
template<> PROTOBUF_NOINLINE ::CTXHTTP::HTTPRequest*
Arena::CreateMaybeMessage< ::CTXHTTP::HTTPRequest >(Arena* arena) {
  return Arena::CreateMessageInternal< ::CTXHTTP::HTTPRequest >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
