// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ArrowMarker.proto

#ifndef PROTOBUF_ArrowMarker_2eproto__INCLUDED
#define PROTOBUF_ArrowMarker_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3000000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3000000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
#include "vector3d.pb.h"
// @@protoc_insertion_point(includes)

namespace gz_visualization_msgs {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_ArrowMarker_2eproto();
void protobuf_AssignDesc_ArrowMarker_2eproto();
void protobuf_ShutdownFile_ArrowMarker_2eproto();

class ArrowMarker;

// ===================================================================

class ArrowMarker : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:gz_visualization_msgs.ArrowMarker) */ {
 public:
  ArrowMarker();
  virtual ~ArrowMarker();

  ArrowMarker(const ArrowMarker& from);

  inline ArrowMarker& operator=(const ArrowMarker& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const ArrowMarker& default_instance();

  void Swap(ArrowMarker* other);

  // implements Message ----------------------------------------------

  inline ArrowMarker* New() const { return New(NULL); }

  ArrowMarker* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const ArrowMarker& from);
  void MergeFrom(const ArrowMarker& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const {
    return InternalSerializeWithCachedSizesToArray(false, output);
  }
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(ArrowMarker* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required int32 id = 2;
  bool has_id() const;
  void clear_id();
  static const int kIdFieldNumber = 2;
  ::google::protobuf::int32 id() const;
  void set_id(::google::protobuf::int32 value);

  // required string ns = 3;
  bool has_ns() const;
  void clear_ns();
  static const int kNsFieldNumber = 3;
  const ::std::string& ns() const;
  void set_ns(const ::std::string& value);
  void set_ns(const char* value);
  void set_ns(const char* value, size_t size);
  ::std::string* mutable_ns();
  ::std::string* release_ns();
  void set_allocated_ns(::std::string* ns);

  // required .gazebo.msgs.Vector3d startpoint = 4;
  bool has_startpoint() const;
  void clear_startpoint();
  static const int kStartpointFieldNumber = 4;
  const ::gazebo::msgs::Vector3d& startpoint() const;
  ::gazebo::msgs::Vector3d* mutable_startpoint();
  ::gazebo::msgs::Vector3d* release_startpoint();
  void set_allocated_startpoint(::gazebo::msgs::Vector3d* startpoint);

  // required .gazebo.msgs.Vector3d vector = 5;
  bool has_vector() const;
  void clear_vector();
  static const int kVectorFieldNumber = 5;
  const ::gazebo::msgs::Vector3d& vector() const;
  ::gazebo::msgs::Vector3d* mutable_vector();
  ::gazebo::msgs::Vector3d* release_vector();
  void set_allocated_vector(::gazebo::msgs::Vector3d* vector);

  // required .gazebo.msgs.Vector3d scale = 6;
  bool has_scale() const;
  void clear_scale();
  static const int kScaleFieldNumber = 6;
  const ::gazebo::msgs::Vector3d& scale() const;
  ::gazebo::msgs::Vector3d* mutable_scale();
  ::gazebo::msgs::Vector3d* release_scale();
  void set_allocated_scale(::gazebo::msgs::Vector3d* scale);

  // required .gazebo.msgs.Vector3d color = 7;
  bool has_color() const;
  void clear_color();
  static const int kColorFieldNumber = 7;
  const ::gazebo::msgs::Vector3d& color() const;
  ::gazebo::msgs::Vector3d* mutable_color();
  ::gazebo::msgs::Vector3d* release_color();
  void set_allocated_color(::gazebo::msgs::Vector3d* color);

  // @@protoc_insertion_point(class_scope:gz_visualization_msgs.ArrowMarker)
 private:
  inline void set_has_id();
  inline void clear_has_id();
  inline void set_has_ns();
  inline void clear_has_ns();
  inline void set_has_startpoint();
  inline void clear_has_startpoint();
  inline void set_has_vector();
  inline void clear_has_vector();
  inline void set_has_scale();
  inline void clear_has_scale();
  inline void set_has_color();
  inline void clear_has_color();

  // helper for ByteSize()
  int RequiredFieldsByteSizeFallback() const;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::internal::ArenaStringPtr ns_;
  ::gazebo::msgs::Vector3d* startpoint_;
  ::gazebo::msgs::Vector3d* vector_;
  ::gazebo::msgs::Vector3d* scale_;
  ::gazebo::msgs::Vector3d* color_;
  ::google::protobuf::int32 id_;
  friend void  protobuf_AddDesc_ArrowMarker_2eproto();
  friend void protobuf_AssignDesc_ArrowMarker_2eproto();
  friend void protobuf_ShutdownFile_ArrowMarker_2eproto();

  void InitAsDefaultInstance();
  static ArrowMarker* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// ArrowMarker

// required int32 id = 2;
inline bool ArrowMarker::has_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void ArrowMarker::set_has_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void ArrowMarker::clear_has_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void ArrowMarker::clear_id() {
  id_ = 0;
  clear_has_id();
}
inline ::google::protobuf::int32 ArrowMarker::id() const {
  // @@protoc_insertion_point(field_get:gz_visualization_msgs.ArrowMarker.id)
  return id_;
}
inline void ArrowMarker::set_id(::google::protobuf::int32 value) {
  set_has_id();
  id_ = value;
  // @@protoc_insertion_point(field_set:gz_visualization_msgs.ArrowMarker.id)
}

// required string ns = 3;
inline bool ArrowMarker::has_ns() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void ArrowMarker::set_has_ns() {
  _has_bits_[0] |= 0x00000002u;
}
inline void ArrowMarker::clear_has_ns() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void ArrowMarker::clear_ns() {
  ns_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_ns();
}
inline const ::std::string& ArrowMarker::ns() const {
  // @@protoc_insertion_point(field_get:gz_visualization_msgs.ArrowMarker.ns)
  return ns_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ArrowMarker::set_ns(const ::std::string& value) {
  set_has_ns();
  ns_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:gz_visualization_msgs.ArrowMarker.ns)
}
inline void ArrowMarker::set_ns(const char* value) {
  set_has_ns();
  ns_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:gz_visualization_msgs.ArrowMarker.ns)
}
inline void ArrowMarker::set_ns(const char* value, size_t size) {
  set_has_ns();
  ns_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:gz_visualization_msgs.ArrowMarker.ns)
}
inline ::std::string* ArrowMarker::mutable_ns() {
  set_has_ns();
  // @@protoc_insertion_point(field_mutable:gz_visualization_msgs.ArrowMarker.ns)
  return ns_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* ArrowMarker::release_ns() {
  // @@protoc_insertion_point(field_release:gz_visualization_msgs.ArrowMarker.ns)
  clear_has_ns();
  return ns_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ArrowMarker::set_allocated_ns(::std::string* ns) {
  if (ns != NULL) {
    set_has_ns();
  } else {
    clear_has_ns();
  }
  ns_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ns);
  // @@protoc_insertion_point(field_set_allocated:gz_visualization_msgs.ArrowMarker.ns)
}

// required .gazebo.msgs.Vector3d startpoint = 4;
inline bool ArrowMarker::has_startpoint() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void ArrowMarker::set_has_startpoint() {
  _has_bits_[0] |= 0x00000004u;
}
inline void ArrowMarker::clear_has_startpoint() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void ArrowMarker::clear_startpoint() {
  if (startpoint_ != NULL) startpoint_->::gazebo::msgs::Vector3d::Clear();
  clear_has_startpoint();
}
inline const ::gazebo::msgs::Vector3d& ArrowMarker::startpoint() const {
  // @@protoc_insertion_point(field_get:gz_visualization_msgs.ArrowMarker.startpoint)
  return startpoint_ != NULL ? *startpoint_ : *default_instance_->startpoint_;
}
inline ::gazebo::msgs::Vector3d* ArrowMarker::mutable_startpoint() {
  set_has_startpoint();
  if (startpoint_ == NULL) {
    startpoint_ = new ::gazebo::msgs::Vector3d;
  }
  // @@protoc_insertion_point(field_mutable:gz_visualization_msgs.ArrowMarker.startpoint)
  return startpoint_;
}
inline ::gazebo::msgs::Vector3d* ArrowMarker::release_startpoint() {
  // @@protoc_insertion_point(field_release:gz_visualization_msgs.ArrowMarker.startpoint)
  clear_has_startpoint();
  ::gazebo::msgs::Vector3d* temp = startpoint_;
  startpoint_ = NULL;
  return temp;
}
inline void ArrowMarker::set_allocated_startpoint(::gazebo::msgs::Vector3d* startpoint) {
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
inline bool ArrowMarker::has_vector() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void ArrowMarker::set_has_vector() {
  _has_bits_[0] |= 0x00000008u;
}
inline void ArrowMarker::clear_has_vector() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void ArrowMarker::clear_vector() {
  if (vector_ != NULL) vector_->::gazebo::msgs::Vector3d::Clear();
  clear_has_vector();
}
inline const ::gazebo::msgs::Vector3d& ArrowMarker::vector() const {
  // @@protoc_insertion_point(field_get:gz_visualization_msgs.ArrowMarker.vector)
  return vector_ != NULL ? *vector_ : *default_instance_->vector_;
}
inline ::gazebo::msgs::Vector3d* ArrowMarker::mutable_vector() {
  set_has_vector();
  if (vector_ == NULL) {
    vector_ = new ::gazebo::msgs::Vector3d;
  }
  // @@protoc_insertion_point(field_mutable:gz_visualization_msgs.ArrowMarker.vector)
  return vector_;
}
inline ::gazebo::msgs::Vector3d* ArrowMarker::release_vector() {
  // @@protoc_insertion_point(field_release:gz_visualization_msgs.ArrowMarker.vector)
  clear_has_vector();
  ::gazebo::msgs::Vector3d* temp = vector_;
  vector_ = NULL;
  return temp;
}
inline void ArrowMarker::set_allocated_vector(::gazebo::msgs::Vector3d* vector) {
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
inline bool ArrowMarker::has_scale() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void ArrowMarker::set_has_scale() {
  _has_bits_[0] |= 0x00000010u;
}
inline void ArrowMarker::clear_has_scale() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void ArrowMarker::clear_scale() {
  if (scale_ != NULL) scale_->::gazebo::msgs::Vector3d::Clear();
  clear_has_scale();
}
inline const ::gazebo::msgs::Vector3d& ArrowMarker::scale() const {
  // @@protoc_insertion_point(field_get:gz_visualization_msgs.ArrowMarker.scale)
  return scale_ != NULL ? *scale_ : *default_instance_->scale_;
}
inline ::gazebo::msgs::Vector3d* ArrowMarker::mutable_scale() {
  set_has_scale();
  if (scale_ == NULL) {
    scale_ = new ::gazebo::msgs::Vector3d;
  }
  // @@protoc_insertion_point(field_mutable:gz_visualization_msgs.ArrowMarker.scale)
  return scale_;
}
inline ::gazebo::msgs::Vector3d* ArrowMarker::release_scale() {
  // @@protoc_insertion_point(field_release:gz_visualization_msgs.ArrowMarker.scale)
  clear_has_scale();
  ::gazebo::msgs::Vector3d* temp = scale_;
  scale_ = NULL;
  return temp;
}
inline void ArrowMarker::set_allocated_scale(::gazebo::msgs::Vector3d* scale) {
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
inline bool ArrowMarker::has_color() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void ArrowMarker::set_has_color() {
  _has_bits_[0] |= 0x00000020u;
}
inline void ArrowMarker::clear_has_color() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void ArrowMarker::clear_color() {
  if (color_ != NULL) color_->::gazebo::msgs::Vector3d::Clear();
  clear_has_color();
}
inline const ::gazebo::msgs::Vector3d& ArrowMarker::color() const {
  // @@protoc_insertion_point(field_get:gz_visualization_msgs.ArrowMarker.color)
  return color_ != NULL ? *color_ : *default_instance_->color_;
}
inline ::gazebo::msgs::Vector3d* ArrowMarker::mutable_color() {
  set_has_color();
  if (color_ == NULL) {
    color_ = new ::gazebo::msgs::Vector3d;
  }
  // @@protoc_insertion_point(field_mutable:gz_visualization_msgs.ArrowMarker.color)
  return color_;
}
inline ::gazebo::msgs::Vector3d* ArrowMarker::release_color() {
  // @@protoc_insertion_point(field_release:gz_visualization_msgs.ArrowMarker.color)
  clear_has_color();
  ::gazebo::msgs::Vector3d* temp = color_;
  color_ = NULL;
  return temp;
}
inline void ArrowMarker::set_allocated_color(::gazebo::msgs::Vector3d* color) {
  delete color_;
  color_ = color;
  if (color) {
    set_has_color();
  } else {
    clear_has_color();
  }
  // @@protoc_insertion_point(field_set_allocated:gz_visualization_msgs.ArrowMarker.color)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace gz_visualization_msgs

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_ArrowMarker_2eproto__INCLUDED