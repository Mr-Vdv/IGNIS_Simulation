// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Twist.proto

#ifndef PROTOBUF_Twist_2eproto__INCLUDED
#define PROTOBUF_Twist_2eproto__INCLUDED

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

namespace gz_geometry_msgs {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_Twist_2eproto();
void protobuf_AssignDesc_Twist_2eproto();
void protobuf_ShutdownFile_Twist_2eproto();

class Twist;

// ===================================================================

class Twist : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:gz_geometry_msgs.Twist) */ {
 public:
  Twist();
  virtual ~Twist();

  Twist(const Twist& from);

  inline Twist& operator=(const Twist& from) {
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
  static const Twist& default_instance();

  void Swap(Twist* other);

  // implements Message ----------------------------------------------

  inline Twist* New() const { return New(NULL); }

  Twist* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Twist& from);
  void MergeFrom(const Twist& from);
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
  void InternalSwap(Twist* other);
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

  // required .gazebo.msgs.Vector3d linear = 1;
  bool has_linear() const;
  void clear_linear();
  static const int kLinearFieldNumber = 1;
  const ::gazebo::msgs::Vector3d& linear() const;
  ::gazebo::msgs::Vector3d* mutable_linear();
  ::gazebo::msgs::Vector3d* release_linear();
  void set_allocated_linear(::gazebo::msgs::Vector3d* linear);

  // required .gazebo.msgs.Vector3d angular = 2;
  bool has_angular() const;
  void clear_angular();
  static const int kAngularFieldNumber = 2;
  const ::gazebo::msgs::Vector3d& angular() const;
  ::gazebo::msgs::Vector3d* mutable_angular();
  ::gazebo::msgs::Vector3d* release_angular();
  void set_allocated_angular(::gazebo::msgs::Vector3d* angular);

  // @@protoc_insertion_point(class_scope:gz_geometry_msgs.Twist)
 private:
  inline void set_has_linear();
  inline void clear_has_linear();
  inline void set_has_angular();
  inline void clear_has_angular();

  // helper for ByteSize()
  int RequiredFieldsByteSizeFallback() const;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::gazebo::msgs::Vector3d* linear_;
  ::gazebo::msgs::Vector3d* angular_;
  friend void  protobuf_AddDesc_Twist_2eproto();
  friend void protobuf_AssignDesc_Twist_2eproto();
  friend void protobuf_ShutdownFile_Twist_2eproto();

  void InitAsDefaultInstance();
  static Twist* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// Twist

// required .gazebo.msgs.Vector3d linear = 1;
inline bool Twist::has_linear() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Twist::set_has_linear() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Twist::clear_has_linear() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Twist::clear_linear() {
  if (linear_ != NULL) linear_->::gazebo::msgs::Vector3d::Clear();
  clear_has_linear();
}
inline const ::gazebo::msgs::Vector3d& Twist::linear() const {
  // @@protoc_insertion_point(field_get:gz_geometry_msgs.Twist.linear)
  return linear_ != NULL ? *linear_ : *default_instance_->linear_;
}
inline ::gazebo::msgs::Vector3d* Twist::mutable_linear() {
  set_has_linear();
  if (linear_ == NULL) {
    linear_ = new ::gazebo::msgs::Vector3d;
  }
  // @@protoc_insertion_point(field_mutable:gz_geometry_msgs.Twist.linear)
  return linear_;
}
inline ::gazebo::msgs::Vector3d* Twist::release_linear() {
  // @@protoc_insertion_point(field_release:gz_geometry_msgs.Twist.linear)
  clear_has_linear();
  ::gazebo::msgs::Vector3d* temp = linear_;
  linear_ = NULL;
  return temp;
}
inline void Twist::set_allocated_linear(::gazebo::msgs::Vector3d* linear) {
  delete linear_;
  linear_ = linear;
  if (linear) {
    set_has_linear();
  } else {
    clear_has_linear();
  }
  // @@protoc_insertion_point(field_set_allocated:gz_geometry_msgs.Twist.linear)
}

// required .gazebo.msgs.Vector3d angular = 2;
inline bool Twist::has_angular() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Twist::set_has_angular() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Twist::clear_has_angular() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Twist::clear_angular() {
  if (angular_ != NULL) angular_->::gazebo::msgs::Vector3d::Clear();
  clear_has_angular();
}
inline const ::gazebo::msgs::Vector3d& Twist::angular() const {
  // @@protoc_insertion_point(field_get:gz_geometry_msgs.Twist.angular)
  return angular_ != NULL ? *angular_ : *default_instance_->angular_;
}
inline ::gazebo::msgs::Vector3d* Twist::mutable_angular() {
  set_has_angular();
  if (angular_ == NULL) {
    angular_ = new ::gazebo::msgs::Vector3d;
  }
  // @@protoc_insertion_point(field_mutable:gz_geometry_msgs.Twist.angular)
  return angular_;
}
inline ::gazebo::msgs::Vector3d* Twist::release_angular() {
  // @@protoc_insertion_point(field_release:gz_geometry_msgs.Twist.angular)
  clear_has_angular();
  ::gazebo::msgs::Vector3d* temp = angular_;
  angular_ = NULL;
  return temp;
}
inline void Twist::set_allocated_angular(::gazebo::msgs::Vector3d* angular) {
  delete angular_;
  angular_ = angular;
  if (angular) {
    set_has_angular();
  } else {
    clear_has_angular();
  }
  // @@protoc_insertion_point(field_set_allocated:gz_geometry_msgs.Twist.angular)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace gz_geometry_msgs

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_Twist_2eproto__INCLUDED
