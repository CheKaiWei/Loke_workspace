// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: caisson_detection.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "caisson_detection.pb.h"

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

namespace {

const ::google::protobuf::Descriptor* CaissonDetectionParams_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  CaissonDetectionParams_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_caisson_5fdetection_2eproto() {
  protobuf_AddDesc_caisson_5fdetection_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "caisson_detection.proto");
  GOOGLE_CHECK(file != NULL);
  CaissonDetectionParams_descriptor_ = file->message_type(0);
  static const int CaissonDetectionParams_offsets_[7] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CaissonDetectionParams, pcanny_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CaissonDetectionParams, sml_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CaissonDetectionParams, ngaussianblurvalue_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CaissonDetectionParams, disthr_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CaissonDetectionParams, fps_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CaissonDetectionParams, minarea_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CaissonDetectionParams, maxarea_),
  };
  CaissonDetectionParams_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      CaissonDetectionParams_descriptor_,
      CaissonDetectionParams::default_instance_,
      CaissonDetectionParams_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CaissonDetectionParams, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CaissonDetectionParams, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(CaissonDetectionParams));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_caisson_5fdetection_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    CaissonDetectionParams_descriptor_, &CaissonDetectionParams::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_caisson_5fdetection_2eproto() {
  delete CaissonDetectionParams::default_instance_;
  delete CaissonDetectionParams_reflection_;
}

void protobuf_AddDesc_caisson_5fdetection_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\027caisson_detection.proto\"\220\001\n\026CaissonDet"
    "ectionParams\022\016\n\006Pcanny\030\001 \001(\005\022\013\n\003SML\030\002 \001("
    "\002\022\032\n\022nGaussianBlurValue\030\003 \001(\005\022\016\n\006disThr\030"
    "\004 \001(\002\022\013\n\003fps\030\005 \001(\005\022\017\n\007minArea\030\006 \001(\005\022\017\n\007m"
    "axArea\030\007 \001(\005", 172);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "caisson_detection.proto", &protobuf_RegisterTypes);
  CaissonDetectionParams::default_instance_ = new CaissonDetectionParams();
  CaissonDetectionParams::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_caisson_5fdetection_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_caisson_5fdetection_2eproto {
  StaticDescriptorInitializer_caisson_5fdetection_2eproto() {
    protobuf_AddDesc_caisson_5fdetection_2eproto();
  }
} static_descriptor_initializer_caisson_5fdetection_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int CaissonDetectionParams::kPcannyFieldNumber;
const int CaissonDetectionParams::kSMLFieldNumber;
const int CaissonDetectionParams::kNGaussianBlurValueFieldNumber;
const int CaissonDetectionParams::kDisThrFieldNumber;
const int CaissonDetectionParams::kFpsFieldNumber;
const int CaissonDetectionParams::kMinAreaFieldNumber;
const int CaissonDetectionParams::kMaxAreaFieldNumber;
#endif  // !_MSC_VER

CaissonDetectionParams::CaissonDetectionParams()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:CaissonDetectionParams)
}

void CaissonDetectionParams::InitAsDefaultInstance() {
}

CaissonDetectionParams::CaissonDetectionParams(const CaissonDetectionParams& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:CaissonDetectionParams)
}

void CaissonDetectionParams::SharedCtor() {
  _cached_size_ = 0;
  pcanny_ = 0;
  sml_ = 0;
  ngaussianblurvalue_ = 0;
  disthr_ = 0;
  fps_ = 0;
  minarea_ = 0;
  maxarea_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

CaissonDetectionParams::~CaissonDetectionParams() {
  // @@protoc_insertion_point(destructor:CaissonDetectionParams)
  SharedDtor();
}

void CaissonDetectionParams::SharedDtor() {
  if (this != default_instance_) {
  }
}

void CaissonDetectionParams::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* CaissonDetectionParams::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return CaissonDetectionParams_descriptor_;
}

const CaissonDetectionParams& CaissonDetectionParams::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_caisson_5fdetection_2eproto();
  return *default_instance_;
}

CaissonDetectionParams* CaissonDetectionParams::default_instance_ = NULL;

CaissonDetectionParams* CaissonDetectionParams::New() const {
  return new CaissonDetectionParams;
}

void CaissonDetectionParams::Clear() {
#define OFFSET_OF_FIELD_(f) (reinterpret_cast<char*>(      \
  &reinterpret_cast<CaissonDetectionParams*>(16)->f) - \
   reinterpret_cast<char*>(16))

#define ZR_(first, last) do {                              \
    size_t f = OFFSET_OF_FIELD_(first);                    \
    size_t n = OFFSET_OF_FIELD_(last) - f + sizeof(last);  \
    ::memset(&first, 0, n);                                \
  } while (0)

  if (_has_bits_[0 / 32] & 127) {
    ZR_(pcanny_, maxarea_);
  }

#undef OFFSET_OF_FIELD_
#undef ZR_

  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool CaissonDetectionParams::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:CaissonDetectionParams)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional int32 Pcanny = 1;
      case 1: {
        if (tag == 8) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &pcanny_)));
          set_has_pcanny();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(21)) goto parse_SML;
        break;
      }

      // optional float SML = 2;
      case 2: {
        if (tag == 21) {
         parse_SML:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &sml_)));
          set_has_sml();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(24)) goto parse_nGaussianBlurValue;
        break;
      }

      // optional int32 nGaussianBlurValue = 3;
      case 3: {
        if (tag == 24) {
         parse_nGaussianBlurValue:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &ngaussianblurvalue_)));
          set_has_ngaussianblurvalue();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(37)) goto parse_disThr;
        break;
      }

      // optional float disThr = 4;
      case 4: {
        if (tag == 37) {
         parse_disThr:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &disthr_)));
          set_has_disthr();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(40)) goto parse_fps;
        break;
      }

      // optional int32 fps = 5;
      case 5: {
        if (tag == 40) {
         parse_fps:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &fps_)));
          set_has_fps();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(48)) goto parse_minArea;
        break;
      }

      // optional int32 minArea = 6;
      case 6: {
        if (tag == 48) {
         parse_minArea:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &minarea_)));
          set_has_minarea();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(56)) goto parse_maxArea;
        break;
      }

      // optional int32 maxArea = 7;
      case 7: {
        if (tag == 56) {
         parse_maxArea:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &maxarea_)));
          set_has_maxarea();
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
  // @@protoc_insertion_point(parse_success:CaissonDetectionParams)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:CaissonDetectionParams)
  return false;
#undef DO_
}

void CaissonDetectionParams::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:CaissonDetectionParams)
  // optional int32 Pcanny = 1;
  if (has_pcanny()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->pcanny(), output);
  }

  // optional float SML = 2;
  if (has_sml()) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(2, this->sml(), output);
  }

  // optional int32 nGaussianBlurValue = 3;
  if (has_ngaussianblurvalue()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(3, this->ngaussianblurvalue(), output);
  }

  // optional float disThr = 4;
  if (has_disthr()) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(4, this->disthr(), output);
  }

  // optional int32 fps = 5;
  if (has_fps()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(5, this->fps(), output);
  }

  // optional int32 minArea = 6;
  if (has_minarea()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(6, this->minarea(), output);
  }

  // optional int32 maxArea = 7;
  if (has_maxarea()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(7, this->maxarea(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:CaissonDetectionParams)
}

::google::protobuf::uint8* CaissonDetectionParams::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:CaissonDetectionParams)
  // optional int32 Pcanny = 1;
  if (has_pcanny()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->pcanny(), target);
  }

  // optional float SML = 2;
  if (has_sml()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(2, this->sml(), target);
  }

  // optional int32 nGaussianBlurValue = 3;
  if (has_ngaussianblurvalue()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(3, this->ngaussianblurvalue(), target);
  }

  // optional float disThr = 4;
  if (has_disthr()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(4, this->disthr(), target);
  }

  // optional int32 fps = 5;
  if (has_fps()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(5, this->fps(), target);
  }

  // optional int32 minArea = 6;
  if (has_minarea()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(6, this->minarea(), target);
  }

  // optional int32 maxArea = 7;
  if (has_maxarea()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(7, this->maxarea(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:CaissonDetectionParams)
  return target;
}

int CaissonDetectionParams::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional int32 Pcanny = 1;
    if (has_pcanny()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->pcanny());
    }

    // optional float SML = 2;
    if (has_sml()) {
      total_size += 1 + 4;
    }

    // optional int32 nGaussianBlurValue = 3;
    if (has_ngaussianblurvalue()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->ngaussianblurvalue());
    }

    // optional float disThr = 4;
    if (has_disthr()) {
      total_size += 1 + 4;
    }

    // optional int32 fps = 5;
    if (has_fps()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->fps());
    }

    // optional int32 minArea = 6;
    if (has_minarea()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->minarea());
    }

    // optional int32 maxArea = 7;
    if (has_maxarea()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->maxarea());
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

void CaissonDetectionParams::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const CaissonDetectionParams* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const CaissonDetectionParams*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void CaissonDetectionParams::MergeFrom(const CaissonDetectionParams& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_pcanny()) {
      set_pcanny(from.pcanny());
    }
    if (from.has_sml()) {
      set_sml(from.sml());
    }
    if (from.has_ngaussianblurvalue()) {
      set_ngaussianblurvalue(from.ngaussianblurvalue());
    }
    if (from.has_disthr()) {
      set_disthr(from.disthr());
    }
    if (from.has_fps()) {
      set_fps(from.fps());
    }
    if (from.has_minarea()) {
      set_minarea(from.minarea());
    }
    if (from.has_maxarea()) {
      set_maxarea(from.maxarea());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void CaissonDetectionParams::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void CaissonDetectionParams::CopyFrom(const CaissonDetectionParams& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool CaissonDetectionParams::IsInitialized() const {

  return true;
}

void CaissonDetectionParams::Swap(CaissonDetectionParams* other) {
  if (other != this) {
    std::swap(pcanny_, other->pcanny_);
    std::swap(sml_, other->sml_);
    std::swap(ngaussianblurvalue_, other->ngaussianblurvalue_);
    std::swap(disthr_, other->disthr_);
    std::swap(fps_, other->fps_);
    std::swap(minarea_, other->minarea_);
    std::swap(maxarea_, other->maxarea_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata CaissonDetectionParams::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = CaissonDetectionParams_descriptor_;
  metadata.reflection = CaissonDetectionParams_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)