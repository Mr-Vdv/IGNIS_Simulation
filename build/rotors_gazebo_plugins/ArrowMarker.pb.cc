// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ArrowMarker.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "ArrowMarker.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace gz_visualization_msgs {

namespace {

const ::google::protobuf::Descriptor* ArrowMarker_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  ArrowMarker_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_ArrowMarker_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AssignDesc_ArrowMarker_2eproto() {
  protobuf_AddDesc_ArrowMarker_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "ArrowMarker.proto");
  GOOGLE_CHECK(file != NULL);
  ArrowMarker_descriptor_ = file->message_type(0);
  static const int ArrowMarker_offsets_[6] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ArrowMarker, id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ArrowMarker, ns_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ArrowMarker, startpoint_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ArrowMarker, vector_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ArrowMarker, scale_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ArrowMarker, color_),
  };
  ArrowMarker_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      ArrowMarker_descriptor_,
      ArrowMarker::default_instance_,
      ArrowMarker_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ArrowMarker, _has_bits_[0]),
      -1,
      -1,
      sizeof(ArrowMarker),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ArrowMarker, _internal_metadata_),
      -1);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_ArrowMarker_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      ArrowMarker_descriptor_, &ArrowMarker::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_ArrowMarker_2eproto() {
  delete ArrowMarker::default_instance_;
  delete ArrowMarker_reflection_;
}

void protobuf_AddDesc_ArrowMarker_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AddDesc_ArrowMarker_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::gazebo::msgs::protobuf_AddDesc_vector3d_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\021ArrowMarker.proto\022\025gz_visualization_ms"
    "gs\032\016vector3d.proto\"\303\001\n\013ArrowMarker\022\n\n\002id"
    "\030\002 \002(\005\022\n\n\002ns\030\003 \002(\t\022)\n\nstartpoint\030\004 \002(\0132\025"
    ".gazebo.msgs.Vector3d\022%\n\006vector\030\005 \002(\0132\025."
    "gazebo.msgs.Vector3d\022$\n\005scale\030\006 \002(\0132\025.ga"
    "zebo.msgs.Vector3d\022$\n\005color\030\007 \002(\0132\025.gaze"
    "bo.msgs.Vector3d", 256);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "ArrowMarker.proto", &protobuf_RegisterTypes);
  ArrowMarker::default_instance_ = new ArrowMarker();
  ArrowMarker::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_ArrowMarker_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_ArrowMarker_2eproto {
  StaticDescriptorInitializer_ArrowMarker_2eproto() {
    protobuf_AddDesc_ArrowMarker_2eproto();
  }
} static_descriptor_initializer_ArrowMarker_2eproto_;

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int ArrowMarker::kIdFieldNumber;
const int ArrowMarker::kNsFieldNumber;
const int ArrowMarker::kStartpointFieldNumber;
const int ArrowMarker::kVectorFieldNumber;
const int ArrowMarker::kScaleFieldNumber;
const int ArrowMarker::kColorFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

ArrowMarker::ArrowMarker()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:gz_visualization_msgs.ArrowMarker)
}

void ArrowMarker::InitAsDefaultInstance() {
  startpoint_ = const_cast< ::gazebo::msgs::Vector3d*>(&::gazebo::msgs::Vector3d::default_instance());
  vector_ = const_cast< ::gazebo::msgs::Vector3d*>(&::gazebo::msgs::Vector3d::default_instance());
  scale_ = const_cast< ::gazebo::msgs::Vector3d*>(&::gazebo::msgs::Vector3d::default_instance());
  color_ = const_cast< ::gazebo::msgs::Vector3d*>(&::gazebo::msgs::Vector3d::default_instance());
}

ArrowMarker::ArrowMarker(const ArrowMarker& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:gz_visualization_msgs.ArrowMarker)
}

void ArrowMarker::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  id_ = 0;
  ns_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  startpoint_ = NULL;
  vector_ = NULL;
  scale_ = NULL;
  color_ = NULL;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

ArrowMarker::~ArrowMarker() {
  // @@protoc_insertion_point(destructor:gz_visualization_msgs.ArrowMarker)
  SharedDtor();
}

void ArrowMarker::SharedDtor() {
  ns_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != default_instance_) {
    delete startpoint_;
    delete vector_;
    delete scale_;
    delete color_;
  }
}

void ArrowMarker::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* ArrowMarker::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return ArrowMarker_descriptor_;
}

const ArrowMarker& ArrowMarker::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_ArrowMarker_2eproto();
  return *default_instance_;
}

ArrowMarker* ArrowMarker::default_instance_ = NULL;

ArrowMarker* ArrowMarker::New(::google::protobuf::Arena* arena) const {
  ArrowMarker* n = new ArrowMarker;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void ArrowMarker::Clear() {
// @@protoc_insertion_point(message_clear_start:gz_visualization_msgs.ArrowMarker)
  if (_has_bits_[0 / 32] & 63u) {
    id_ = 0;
    if (has_ns()) {
      ns_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    }
    if (has_startpoint()) {
      if (startpoint_ != NULL) startpoint_->::gazebo::msgs::Vector3d::Clear();
    }
    if (has_vector()) {
      if (vector_ != NULL) vector_->::gazebo::msgs::Vector3d::Clear();
    }
    if (has_scale()) {
      if (scale_ != NULL) scale_->::gazebo::msgs::Vector3d::Clear();
    }
    if (has_color()) {
      if (color_ != NULL) color_->::gazebo::msgs::Vector3d::Clear();
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  if (_internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->Clear();
  }
}

bool ArrowMarker::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:gz_visualization_msgs.ArrowMarker)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required int32 id = 2;
      case 2: {
        if (tag == 16) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &id_)));
          set_has_id();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(26)) goto parse_ns;
        break;
      }

      // required string ns = 3;
      case 3: {
        if (tag == 26) {
         parse_ns:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_ns()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->ns().data(), this->ns().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "gz_visualization_msgs.ArrowMarker.ns");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(34)) goto parse_startpoint;
        break;
      }

      // required .gazebo.msgs.Vector3d startpoint = 4;
      case 4: {
        if (tag == 34) {
         parse_startpoint:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_startpoint()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(42)) goto parse_vector;
        break;
      }

      // required .gazebo.msgs.Vector3d vector = 5;
      case 5: {
        if (tag == 42) {
         parse_vector:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_vector()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(50)) goto parse_scale;
        break;
      }

      // required .gazebo.msgs.Vector3d scale = 6;
      case 6: {
        if (tag == 50) {
         parse_scale:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_scale()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(58)) goto parse_color;
        break;
      }

      // required .gazebo.msgs.Vector3d color = 7;
      case 7: {
        if (tag == 58) {
         parse_color:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_color()));
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
  // @@protoc_insertion_point(parse_success:gz_visualization_msgs.ArrowMarker)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:gz_visualization_msgs.ArrowMarker)
  return false;
#undef DO_
}

void ArrowMarker::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:gz_visualization_msgs.ArrowMarker)
  // required int32 id = 2;
  if (has_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->id(), output);
  }

  // required string ns = 3;
  if (has_ns()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->ns().data(), this->ns().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "gz_visualization_msgs.ArrowMarker.ns");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      3, this->ns(), output);
  }

  // required .gazebo.msgs.Vector3d startpoint = 4;
  if (has_startpoint()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      4, *this->startpoint_, output);
  }

  // required .gazebo.msgs.Vector3d vector = 5;
  if (has_vector()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      5, *this->vector_, output);
  }

  // required .gazebo.msgs.Vector3d scale = 6;
  if (has_scale()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      6, *this->scale_, output);
  }

  // required .gazebo.msgs.Vector3d color = 7;
  if (has_color()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      7, *this->color_, output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:gz_visualization_msgs.ArrowMarker)
}

::google::protobuf::uint8* ArrowMarker::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:gz_visualization_msgs.ArrowMarker)
  // required int32 id = 2;
  if (has_id()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->id(), target);
  }

  // required string ns = 3;
  if (has_ns()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->ns().data(), this->ns().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "gz_visualization_msgs.ArrowMarker.ns");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        3, this->ns(), target);
  }

  // required .gazebo.msgs.Vector3d startpoint = 4;
  if (has_startpoint()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        4, *this->startpoint_, false, target);
  }

  // required .gazebo.msgs.Vector3d vector = 5;
  if (has_vector()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        5, *this->vector_, false, target);
  }

  // required .gazebo.msgs.Vector3d scale = 6;
  if (has_scale()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        6, *this->scale_, false, target);
  }

  // required .gazebo.msgs.Vector3d color = 7;
  if (has_color()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        7, *this->color_, false, target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:gz_visualization_msgs.ArrowMarker)
  return target;
}

int ArrowMarker::RequiredFieldsByteSizeFallback() const {
// @@protoc_insertion_point(required_fields_byte_size_fallback_start:gz_visualization_msgs.ArrowMarker)
  int total_size = 0;

  if (has_id()) {
    // required int32 id = 2;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->id());
  }

  if (has_ns()) {
    // required string ns = 3;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->ns());
  }

  if (has_startpoint()) {
    // required .gazebo.msgs.Vector3d startpoint = 4;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->startpoint_);
  }

  if (has_vector()) {
    // required .gazebo.msgs.Vector3d vector = 5;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->vector_);
  }

  if (has_scale()) {
    // required .gazebo.msgs.Vector3d scale = 6;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->scale_);
  }

  if (has_color()) {
    // required .gazebo.msgs.Vector3d color = 7;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->color_);
  }

  return total_size;
}
int ArrowMarker::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:gz_visualization_msgs.ArrowMarker)
  int total_size = 0;

  if (((_has_bits_[0] & 0x0000003f) ^ 0x0000003f) == 0) {  // All required fields are present.
    // required int32 id = 2;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->id());

    // required string ns = 3;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->ns());

    // required .gazebo.msgs.Vector3d startpoint = 4;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->startpoint_);

    // required .gazebo.msgs.Vector3d vector = 5;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->vector_);

    // required .gazebo.msgs.Vector3d scale = 6;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->scale_);

    // required .gazebo.msgs.Vector3d color = 7;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->color_);

  } else {
    total_size += RequiredFieldsByteSizeFallback();
  }
  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void ArrowMarker::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:gz_visualization_msgs.ArrowMarker)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const ArrowMarker* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const ArrowMarker>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:gz_visualization_msgs.ArrowMarker)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:gz_visualization_msgs.ArrowMarker)
    MergeFrom(*source);
  }
}

void ArrowMarker::MergeFrom(const ArrowMarker& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:gz_visualization_msgs.ArrowMarker)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_id()) {
      set_id(from.id());
    }
    if (from.has_ns()) {
      set_has_ns();
      ns_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.ns_);
    }
    if (from.has_startpoint()) {
      mutable_startpoint()->::gazebo::msgs::Vector3d::MergeFrom(from.startpoint());
    }
    if (from.has_vector()) {
      mutable_vector()->::gazebo::msgs::Vector3d::MergeFrom(from.vector());
    }
    if (from.has_scale()) {
      mutable_scale()->::gazebo::msgs::Vector3d::MergeFrom(from.scale());
    }
    if (from.has_color()) {
      mutable_color()->::gazebo::msgs::Vector3d::MergeFrom(from.color());
    }
  }
  if (from._internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->MergeFrom(from.unknown_fields());
  }
}

void ArrowMarker::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:gz_visualization_msgs.ArrowMarker)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ArrowMarker::CopyFrom(const ArrowMarker& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:gz_visualization_msgs.ArrowMarker)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ArrowMarker::IsInitialized() const {
  if ((_has_bits_[0] & 0x0000003f) != 0x0000003f) return false;

  if (has_startpoint()) {
    if (!this->startpoint_->IsInitialized()) return false;
  }
  if (has_vector()) {
    if (!this->vector_->IsInitialized()) return false;
  }
  if (has_scale()) {
    if (!this->scale_->IsInitialized()) return false;
  }
  if (has_color()) {
    if (!this->color_->IsInitialized()) return false;
  }
  return true;
}

void ArrowMarker::Swap(ArrowMarker* other) {
  if (other == this) return;
  InternalSwap(other);
}
void ArrowMarker::InternalSwap(ArrowMarker* other) {
  std::swap(id_, other->id_);
  ns_.Swap(&other->ns_);
  std::swap(startpoint_, other->startpoint_);
  std::swap(vector_, other->vector_);
  std::swap(scale_, other->scale_);
  std::swap(color_, other->color_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata ArrowMarker::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = ArrowMarker_descriptor_;
  metadata.reflection = ArrowMarker_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// ArrowMarker

// required int32 id = 2;
bool ArrowMarker::has_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void ArrowMarker::set_has_id() {
  _has_bits_[0] |= 0x00000001u;
}
void ArrowMarker::clear_has_id() {
  _has_bits_[0] &= ~0x00000001u;
}
void ArrowMarker::clear_id() {
  id_ = 0;
  clear_has_id();
}
 ::google::protobuf::int32 ArrowMarker::id() const {
  // @@protoc_insertion_point(field_get:gz_visualization_msgs.ArrowMarker.id)
  return id_;
}
 void ArrowMarker::set_id(::google::protobuf::int32 value) {
  set_has_id();
  id_ = value;
  // @@protoc_insertion_point(field_set:gz_visualization_msgs.ArrowMarker.id)
}

// required string ns = 3;
bool ArrowMarker::has_ns() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
void ArrowMarker::set_has_ns() {
  _has_bits_[0] |= 0x00000002u;
}
void ArrowMarker::clear_has_ns() {
  _has_bits_[0] &= ~0x00000002u;
}
void ArrowMarker::clear_ns() {
  ns_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_ns();
}
 const ::std::string& ArrowMarker::ns() const {
  // @@protoc_insertion_point(field_get:gz_visualization_msgs.ArrowMarker.ns)
  return ns_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void ArrowMarker::set_ns(const ::std::string& value) {
  set_has_ns();
  ns_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:gz_visualization_msgs.ArrowMarker.ns)
}
 void ArrowMarker::set_ns(const char* value) {
  set_has_ns();
  ns_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:gz_visualization_msgs.ArrowMarker.ns)
}
 void ArrowMarker::set_ns(const char* value, size_t size) {
  set_has_ns();
  ns_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:gz_visualization_msgs.ArrowMarker.ns)
}
 ::std::string* ArrowMarker::mutable_ns() {
  set_has_ns();
  // @@protoc_insertion_point(field_mutable:gz_visualization_msgs.ArrowMarker.ns)
  return ns_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* ArrowMarker::release_ns() {
  // @@protoc_insertion_point(field_release:gz_visualization_msgs.ArrowMarker.ns)
  clear_has_ns();
  return ns_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void ArrowMarker::set_allocated_ns(::std::string* ns) {
  if (ns != NULL) {
    set_has_ns();
  } else {
    clear_has_ns();
  }
  ns_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ns);
  // @@protoc_insertion_point(field_set_allocated:gz_visualization_msgs.ArrowMarker.ns)
}

// required .gazebo.msgs.Vector3d startpoint = 4;
bool ArrowMarker::has_startpoint() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
void ArrowMarker::set_has_startpoint() {
  _has_bits_[0] |= 0x00000004u;
}
void ArrowMarker::clear_has_startpoint() {
  _has_bits_[0] &= ~0x00000004u;
}
void ArrowMarker::clear_startpoint() {
  if (startpoint_ != NULL) startpoint_->::gazebo::msgs::Vector3d::Clear();
  clear_has_startpoint();
}
const ::gazebo::msgs::Vector3d& ArrowMarker::startpoint() const {
  // @@protoc_insertion_point(field_get:gz_visualization_msgs.ArrowMarker.startpoint)
  return startpoint_ != NULL ? *startpoint_ : *default_instance_->startpoint_;
}
::gazebo::msgs::Vector3d* ArrowMarker::mutable_startpoint() {
  set_has_startpoint();
  if (startpoint_ == NULL) {
    startpoint_ = new ::gazebo::msgs::Vector3d;
  }
  // @@protoc_insertion_point(field_mutable:gz_visualization_msgs.ArrowMarker.startpoint)
  return startpoint_;
}
::gazebo::msgs::Vector3d* ArrowMarker::release_startpoint() {
  // @@protoc_insertion_point(field_release:gz_visualization_msgs.ArrowMarker.startpoint)
  clear_has_startpoint();
  ::gazebo::msgs::Vector3d* temp = startpoint_;
  startpoint_ = NULL;
  return temp;
}
void ArrowMarker::set_allocated_startpoint(::gazebo::msgs::Vector3d* startpoint) {
  delete startpoint_;
  startpoint_ = startpoint;
  if (startpoint) {
    set_has_startpoint();
  } else {
    clear_has_startpoint();
  }
  // @@protoc_insertion_point(field_set_allocated:gz_visualization_msgs.ArrowMarker.startpoint)
}

// required .gazebo.msgs.Vector3d vector = 5;
bool ArrowMarker::has_vector() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
void ArrowMarker::set_has_vector() {
  _has_bits_[0] |= 0x00000008u;
}
void ArrowMarker::clear_has_vector() {
  _has_bits_[0] &= ~0x00000008u;
}
void ArrowMarker::clear_vector() {
  if (vector_ != NULL) vector_->::gazebo::msgs::Vector3d::Clear();
  clear_has_vector();
}
const ::gazebo::msgs::Vector3d& ArrowMarker::vector() const {
  // @@protoc_insertion_point(field_get:gz_visualization_msgs.ArrowMarker.vector)
  return vector_ != NULL ? *vector_ : *default_instance_->vector_;
}
::gazebo::msgs::Vector3d* ArrowMarker::mutable_vector() {
  set_has_vector();
  if (vector_ == NULL) {
    vector_ = new ::gazebo::msgs::Vector3d;
  }
  // @@protoc_insertion_point(field_mutable:gz_visualization_msgs.ArrowMarker.vector)
  return vector_;
}
::gazebo::msgs::Vector3d* ArrowMarker::release_vector() {
  // @@protoc_insertion_point(field_release:gz_visualization_msgs.ArrowMarker.vector)
  clear_has_vector();
  ::gazebo::msgs::Vector3d* temp = vector_;
  vector_ = NULL;
  return temp;
}
void ArrowMarker::set_allocated_vector(::gazebo::msgs::Vector3d* vector) {
  delete vector_;
  vector_ = vector;
  if (vector) {
    set_has_vector();
  } else {
    clear_has_vector();
  }
  // @@protoc_insertion_point(field_set_allocated:gz_visualization_msgs.ArrowMarker.vector)
}

// required .gazebo.msgs.Vector3d scale = 6;
bool ArrowMarker::has_scale() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
void ArrowMarker::set_has_scale() {
  _has_bits_[0] |= 0x00000010u;
}
void ArrowMarker::clear_has_scale() {
  _has_bits_[0] &= ~0x00000010u;
}
void ArrowMarker::clear_scale() {
  if (scale_ != NULL) scale_->::gazebo::msgs::Vector3d::Clear();
  clear_has_scale();
}
const ::gazebo::msgs::Vector3d& ArrowMarker::scale() const {
  // @@protoc_insertion_point(field_get:gz_visualization_msgs.ArrowMarker.scale)
  return scale_ != NULL ? *scale_ : *default_instance_->scale_;
}
::gazebo::msgs::Vector3d* ArrowMarker::mutable_scale() {
  set_has_scale();
  if (scale_ == NULL) {
    scale_ = new ::gazebo::msgs::Vector3d;
  }
  // @@protoc_insertion_point(field_mutable:gz_visualization_msgs.ArrowMarker.scale)
  return scale_;
}
::gazebo::msgs::Vector3d* ArrowMarker::release_scale() {
  // @@protoc_insertion_point(field_release:gz_visualization_msgs.ArrowMarker.scale)
  clear_has_scale();
  ::gazebo::msgs::Vector3d* temp = scale_;
  scale_ = NULL;
  return temp;
}
void ArrowMarker::set_allocated_scale(::gazebo::msgs::Vector3d* scale) {
  delete scale_;
  scale_ = scale;
  if (scale) {
    set_has_scale();
  } else {
    clear_has_scale();
  }
  // @@protoc_insertion_point(field_set_allocated:gz_visualization_msgs.ArrowMarker.scale)
}

// required .gazebo.msgs.Vector3d color = 7;
bool ArrowMarker::has_color() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
void ArrowMarker::set_has_color() {
  _has_bits_[0] |= 0x00000020u;
}
void ArrowMarker::clear_has_color() {
  _has_bits_[0] &= ~0x00000020u;
}
void ArrowMarker::clear_color() {
  if (color_ != NULL) color_->::gazebo::msgs::Vector3d::Clear();
  clear_has_color();
}
const ::gazebo::msgs::Vector3d& ArrowMarker::color() const {
  // @@protoc_insertion_point(field_get:gz_visualization_msgs.ArrowMarker.color)
  return color_ != NULL ? *color_ : *default_instance_->color_;
}
::gazebo::msgs::Vector3d* ArrowMarker::mutable_color() {
  set_has_color();
  if (color_ == NULL) {
    color_ = new ::gazebo::msgs::Vector3d;
  }
  // @@protoc_insertion_point(field_mutable:gz_visualization_msgs.ArrowMarker.color)
  return color_;
}
::gazebo::msgs::Vector3d* ArrowMarker::release_color() {
  // @@protoc_insertion_point(field_release:gz_visualization_msgs.ArrowMarker.color)
  clear_has_color();
  ::gazebo::msgs::Vector3d* temp = color_;
  color_ = NULL;
  return temp;
}
void ArrowMarker::set_allocated_color(::gazebo::msgs::Vector3d* color) {
  delete color_;
  color_ = color;
  if (color) {
    set_has_color();
  } else {
    clear_has_color();
  }
  // @@protoc_insertion_point(field_set_allocated:gz_visualization_msgs.ArrowMarker.color)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace gz_visualization_msgs

// @@protoc_insertion_point(global_scope)
