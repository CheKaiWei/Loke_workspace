// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: self_check.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "self_check.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace rrts {
namespace driver {
namespace selfcheck {

namespace {

const ::google::protobuf::Descriptor* SelfCheckConfig_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  SelfCheckConfig_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_self_5fcheck_2eproto() {
  protobuf_AddDesc_self_5fcheck_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "self_check.proto");
  GOOGLE_CHECK(file != NULL);
  SelfCheckConfig_descriptor_ = file->message_type(0);
  static const int SelfCheckConfig_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SelfCheckConfig, check_duration_),
  };
  SelfCheckConfig_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      SelfCheckConfig_descriptor_,
      SelfCheckConfig::default_instance_,
      SelfCheckConfig_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SelfCheckConfig, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SelfCheckConfig, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(SelfCheckConfig));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_self_5fcheck_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    SelfCheckConfig_descriptor_, &SelfCheckConfig::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_self_5fcheck_2eproto() {
  delete SelfCheckConfig::default_instance_;
  delete SelfCheckConfig_reflection_;
}

void protobuf_AddDesc_self_5fcheck_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\020self_check.proto\022\025rrts.driver.selfchec"
    "k\")\n\017SelfCheckConfig\022\026\n\016check_duration\030\001"
    " \002(\r", 84);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "self_check.proto", &protobuf_RegisterTypes);
  SelfCheckConfig::default_instance_ = new SelfCheckConfig();
  SelfCheckConfig::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_self_5fcheck_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_self_5fcheck_2eproto {
  StaticDescriptorInitializer_self_5fcheck_2eproto() {
    protobuf_AddDesc_self_5fcheck_2eproto();
  }
} static_descriptor_initializer_self_5fcheck_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int SelfCheckConfig::kCheckDurationFieldNumber;
#endif  // !_MSC_VER

SelfCheckConfig::SelfCheckConfig()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:rrts.driver.selfcheck.SelfCheckConfig)
}

void SelfCheckConfig::InitAsDefaultInstance() {
}

SelfCheckConfig::SelfCheckConfig(const SelfCheckConfig& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:rrts.driver.selfcheck.SelfCheckConfig)
}

void SelfCheckConfig::SharedCtor() {
  _cached_size_ = 0;
  check_duration_ = 0u;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

SelfCheckConfig::~SelfCheckConfig() {
  // @@protoc_insertion_point(destructor:rrts.driver.selfcheck.SelfCheckConfig)
  SharedDtor();
}

void SelfCheckConfig::SharedDtor() {
  if (this != default_instance_) {
  }
}

void SelfCheckConfig::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* SelfCheckConfig::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return SelfCheckConfig_descriptor_;
}

const SelfCheckConfig& SelfCheckConfig::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_self_5fcheck_2eproto();
  return *default_instance_;
}

SelfCheckConfig* SelfCheckConfig::default_instance_ = NULL;

SelfCheckConfig* SelfCheckConfig::New() const {
  return new SelfCheckConfig;
}

void SelfCheckConfig::Clear() {
  check_duration_ = 0u;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool SelfCheckConfig::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:rrts.driver.selfcheck.SelfCheckConfig)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required uint32 check_duration = 1;
      case 1: {
        if (tag == 8) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &check_duration_)));
          set_has_check_duration();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:rrts.driver.selfcheck.SelfCheckConfig)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:rrts.driver.selfcheck.SelfCheckConfig)
  return false;
#undef DO_
}

void SelfCheckConfig::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:rrts.driver.selfcheck.SelfCheckConfig)
  // required uint32 check_duration = 1;
  if (has_check_duration()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->check_duration(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:rrts.driver.selfcheck.SelfCheckConfig)
}

::google::protobuf::uint8* SelfCheckConfig::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:rrts.driver.selfcheck.SelfCheckConfig)
  // required uint32 check_duration = 1;
  if (has_check_duration()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(1, this->check_duration(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:rrts.driver.selfcheck.SelfCheckConfig)
  return target;
}

int SelfCheckConfig::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required uint32 check_duration = 1;
    if (has_check_duration()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->check_duration());
    }

  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void SelfCheckConfig::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const SelfCheckConfig* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const SelfCheckConfig*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void SelfCheckConfig::MergeFrom(const SelfCheckConfig& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_check_duration()) {
      set_check_duration(from.check_duration());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void SelfCheckConfig::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void SelfCheckConfig::CopyFrom(const SelfCheckConfig& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SelfCheckConfig::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;

  return true;
}

void SelfCheckConfig::Swap(SelfCheckConfig* other) {
  if (other != this) {
    std::swap(check_duration_, other->check_duration_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata SelfCheckConfig::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = SelfCheckConfig_descriptor_;
  metadata.reflection = SelfCheckConfig_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace selfcheck
}  // namespace driver
}  // namespace rrts

// @@protoc_insertion_point(global_scope)
