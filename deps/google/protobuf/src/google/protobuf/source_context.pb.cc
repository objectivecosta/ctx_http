// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/protobuf/source_context.proto

#include <google/protobuf/source_context.pb.h>

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

PROTOBUF_NAMESPACE_OPEN
PROTOBUF_CONSTEXPR SourceContext::SourceContext(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.file_name_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct SourceContextDefaultTypeInternal {
  PROTOBUF_CONSTEXPR SourceContextDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~SourceContextDefaultTypeInternal() {}
  union {
    SourceContext _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 SourceContextDefaultTypeInternal _SourceContext_default_instance_;
PROTOBUF_NAMESPACE_CLOSE
static ::_pb::Metadata file_level_metadata_google_2fprotobuf_2fsource_5fcontext_2eproto[1];
static constexpr ::_pb::EnumDescriptor const** file_level_enum_descriptors_google_2fprotobuf_2fsource_5fcontext_2eproto = nullptr;
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_google_2fprotobuf_2fsource_5fcontext_2eproto = nullptr;

const uint32_t TableStruct_google_2fprotobuf_2fsource_5fcontext_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::PROTOBUF_NAMESPACE_ID::SourceContext, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  ~0u,  // no _split_
  ~0u,  // no sizeof(Split)
  PROTOBUF_FIELD_OFFSET(::PROTOBUF_NAMESPACE_ID::SourceContext, _impl_.file_name_),
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::PROTOBUF_NAMESPACE_ID::SourceContext)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::PROTOBUF_NAMESPACE_ID::_SourceContext_default_instance_._instance,
};

const char descriptor_table_protodef_google_2fprotobuf_2fsource_5fcontext_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n$google/protobuf/source_context.proto\022\017"
  "google.protobuf\"\"\n\rSourceContext\022\021\n\tfile"
  "_name\030\001 \001(\tB\212\001\n\023com.google.protobufB\022Sou"
  "rceContextProtoP\001Z6google.golang.org/pro"
  "tobuf/types/known/sourcecontextpb\242\002\003GPB\252"
  "\002\036Google.Protobuf.WellKnownTypesb\006proto3"
  ;
static ::_pbi::once_flag descriptor_table_google_2fprotobuf_2fsource_5fcontext_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_google_2fprotobuf_2fsource_5fcontext_2eproto = {
    false, false, 240, descriptor_table_protodef_google_2fprotobuf_2fsource_5fcontext_2eproto,
    "google/protobuf/source_context.proto",
    &descriptor_table_google_2fprotobuf_2fsource_5fcontext_2eproto_once, nullptr, 0, 1,
    schemas, file_default_instances, TableStruct_google_2fprotobuf_2fsource_5fcontext_2eproto::offsets,
    file_level_metadata_google_2fprotobuf_2fsource_5fcontext_2eproto, file_level_enum_descriptors_google_2fprotobuf_2fsource_5fcontext_2eproto,
    file_level_service_descriptors_google_2fprotobuf_2fsource_5fcontext_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_google_2fprotobuf_2fsource_5fcontext_2eproto_getter() {
  return &descriptor_table_google_2fprotobuf_2fsource_5fcontext_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_google_2fprotobuf_2fsource_5fcontext_2eproto(&descriptor_table_google_2fprotobuf_2fsource_5fcontext_2eproto);
PROTOBUF_NAMESPACE_OPEN

// ===================================================================

class SourceContext::_Internal {
 public:
};

SourceContext::SourceContext(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:google.protobuf.SourceContext)
}
SourceContext::SourceContext(const SourceContext& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  SourceContext* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.file_name_){}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _impl_.file_name_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.file_name_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_file_name().empty()) {
    _this->_impl_.file_name_.Set(from._internal_file_name(), 
      _this->GetArenaForAllocation());
  }
  // @@protoc_insertion_point(copy_constructor:google.protobuf.SourceContext)
}

inline void SourceContext::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.file_name_){}
    , /*decltype(_impl_._cached_size_)*/{}
  };
  _impl_.file_name_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.file_name_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

SourceContext::~SourceContext() {
  // @@protoc_insertion_point(destructor:google.protobuf.SourceContext)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void SourceContext::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.file_name_.Destroy();
}

void SourceContext::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void SourceContext::Clear() {
// @@protoc_insertion_point(message_clear_start:google.protobuf.SourceContext)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.file_name_.ClearToEmpty();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* SourceContext::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // string file_name = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          auto str = _internal_mutable_file_name();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "google.protobuf.SourceContext.file_name"));
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
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* SourceContext::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:google.protobuf.SourceContext)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // string file_name = 1;
  if (!this->_internal_file_name().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_file_name().data(), static_cast<int>(this->_internal_file_name().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "google.protobuf.SourceContext.file_name");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_file_name(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:google.protobuf.SourceContext)
  return target;
}

size_t SourceContext::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:google.protobuf.SourceContext)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string file_name = 1;
  if (!this->_internal_file_name().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_file_name());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData SourceContext::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    SourceContext::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*SourceContext::GetClassData() const { return &_class_data_; }


void SourceContext::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<SourceContext*>(&to_msg);
  auto& from = static_cast<const SourceContext&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:google.protobuf.SourceContext)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_file_name().empty()) {
    _this->_internal_set_file_name(from._internal_file_name());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void SourceContext::CopyFrom(const SourceContext& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:google.protobuf.SourceContext)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SourceContext::IsInitialized() const {
  return true;
}

void SourceContext::InternalSwap(SourceContext* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.file_name_, lhs_arena,
      &other->_impl_.file_name_, rhs_arena
  );
}

::PROTOBUF_NAMESPACE_ID::Metadata SourceContext::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_google_2fprotobuf_2fsource_5fcontext_2eproto_getter, &descriptor_table_google_2fprotobuf_2fsource_5fcontext_2eproto_once,
      file_level_metadata_google_2fprotobuf_2fsource_5fcontext_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
PROTOBUF_NAMESPACE_CLOSE
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::PROTOBUF_NAMESPACE_ID::SourceContext*
Arena::CreateMaybeMessage< ::PROTOBUF_NAMESPACE_ID::SourceContext >(Arena* arena) {
  return Arena::CreateMessageInternal< ::PROTOBUF_NAMESPACE_ID::SourceContext >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
