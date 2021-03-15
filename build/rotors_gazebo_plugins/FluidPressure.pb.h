// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: FluidPressure.proto

#ifndef PROTOBUF_FluidPressure_2eproto__INCLUDED
#define PROTOBUF_FluidPressure_2eproto__INCLUDED

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
#include "Header.pb.h"
// @@protoc_insertion_point(includes)

namespace gz_sensor_msgs {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_FluidPressure_2eproto();
void protobuf_AssignDesc_FluidPressure_2eproto();
void protobuf_ShutdownFile_FluidPressure_2eproto();

class FluidPressure;

// ===================================================================

class FluidPressure : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:gz_sensor_msgs.FluidPressure) */ {
 public:
  FluidPressure();
  virtual ~FluidPressure();

  FluidPressure(const FluidPressure& from);

  inline FluidPressure& operator=(const FluidPressure& from) {
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
  static const FluidPressure& default_instance();

  void Swap(FluidPressure* other);

  // implements Message ----------------------------------------------

  inline FluidPressure* New() const { return New(NULL); }

  FluidPressure* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const FluidPressure& from);
  void MergeFrom(const FluidPressure& from);
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
  void InternalSwap(FluidPressure* other);
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

  // required .gz_std_msgs.Header header = 1;
  bool has_header() const;
  void clear_header();
  static const int kHeaderFieldNumber = 1;
  const ::gz_std_msgs::Header& header() const;
  ::gz_std_msgs::Header* mutable_header();
  ::gz_std_msgs::Header* release_header();
  void set_allocated_header(::gz_std_msgs::Header* header);

  // required double fluid_pressure = 2;
  bool has_fluid_pressure() const;
  void clear_fluid_pressure();
  static const int kFluidPressureFieldNumber = 2;
  double fluid_pressure() const;
  void set_fluid_pressure(double value);

  // required double variance = 3;
  bool has_variance() const;
  void clear_variance();
  static const int kVarianceFieldNumber = 3;
  double variance() const;
  void set_variance(double value);

  // @@protoc_insertion_point(class_scope:gz_sensor_msgs.FluidPressure)
 private:
  inline void set_has_header();
  inline void clear_has_header();
  inline void set_has_fluid_pressure();
  inline void clear_has_fluid_pressure();
  inline void set_has_variance();
  inline void clear_has_variance();

  // helper for ByteSize()
  int RequiredFieldsByteSizeFallback() const;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::gz_std_msgs::Header* header_;
  double fluid_pressure_;
  double variance_;
  friend void  protobuf_AddDesc_FluidPressure_2eproto();
  friend void protobuf_AssignDesc_FluidPressure_2eproto();
  friend void protobuf_ShutdownFile_FluidPressure_2eproto();

  void InitAsDefaultInstance();
  static FluidPressure* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// FluidPressure

// required .gz_std_msgs.Header header = 1;
inline bool FluidPressure::has_header() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void FluidPressure::set_has_header() {
  _has_bits_[0] |= 0x00000001u;
}
inline void FluidPressure::clear_has_header() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void FluidPressure::clear_header() {
  if (header_ != NULL) header_->::gz_std_msgs::Header::Clear();
  clear_has_header();
}
inline const ::gz_std_msgs::Header& FluidPressure::header() const {
  // @@protoc_insertion_point(field_get:gz_sensor_msgs.FluidPressure.header)
  return header_ != NULL ? *header_ : *default_instance_->header_;
}
inline ::gz_std_msgs::Header* FluidPressure::mutable_header() {
  set_has_header();
  if (header_ == NULL) {
    header_ = new ::gz_std_msgs::Header;
  }
  // @@protoc_insertion_point(field_mutable:gz_sensor_msgs.FluidPressure.header)
  return header_;
}
inline ::gz_std_msgs::Header* FluidPressure::release_header() {
  // @@protoc_insertion_point(field_release:gz_sensor_msgs.FluidPressure.header)
  clear_has_header();
  ::gz_std_msgs::Header* temp = header_;
  header_ = NULL;
  return temp;
}
inline void FluidPressure::set_allocated_header(::gz_std_msgs::Header* header) {
  delete header_;
  header_ = header;
  if (header) {
    set_has_header();
  } else {
    clear_has_header();
  }
  // @@protoc_insertion_point(field_set_allocated:gz_sensor_msgs.FluidPressure.header)
}

// required double fluid_pressure = 2;
inline bool FluidPressure::has_fluid_pressure() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void FluidPressure::set_has_fluid_pressure() {
  _has_bits_[0] |= 0x00000002u;
}
inline void FluidPressure::clear_has_fluid_pressure() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void FluidPressure::clear_fluid_pressure() {
  fluid_pressure_ = 0;
  clear_has_fluid_pressure();
}
inline double FluidPressure::fluid_pressure() const {
  // @@protoc_insertion_point(field_get:gz_sensor_msgs.FluidPressure.fluid_pressure)
  return fluid_pressure_;
}
inline void FluidPressure::set_fluid_pressure(double value) {
  set_has_fluid_pressure();
  fluid_pressure_ = value;
  // @@protoc_insertion_point(field_set:gz_sensor_msgs.FluidPressure.fluid_pressure)
}

// required double variance = 3;
inline bool FluidPressure::has_variance() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void FluidPressure::set_has_variance() {
  _has_bits_[0] |= 0x00000004u;
}
inline void FluidPressure::clear_has_variance() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void FluidPressure::clear_variance() {
  variance_ = 0;
  clear_has_variance();
}
inline double FluidPressure::variance() const {
  // @@protoc_insertion_point(field_get:gz_sensor_msgs.FluidPressure.variance)
  return variance_;
}
inline void FluidPressure::set_variance(double value) {
  set_has_variance();
  variance_ = value;
  // @@protoc_insertion_point(field_set:gz_sensor_msgs.FluidPressure.variance)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace gz_sensor_msgs

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_FluidPressure_2eproto__INCLUDED
