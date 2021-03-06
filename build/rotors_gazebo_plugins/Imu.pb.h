// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Imu.proto

#ifndef PROTOBUF_Imu_2eproto__INCLUDED
#define PROTOBUF_Imu_2eproto__INCLUDED

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
#include "quaternion.pb.h"
#include "vector3d.pb.h"
#include "Header.pb.h"
// @@protoc_insertion_point(includes)

namespace gz_sensor_msgs {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_Imu_2eproto();
void protobuf_AssignDesc_Imu_2eproto();
void protobuf_ShutdownFile_Imu_2eproto();

class Imu;

// ===================================================================

class Imu : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:gz_sensor_msgs.Imu) */ {
 public:
  Imu();
  virtual ~Imu();

  Imu(const Imu& from);

  inline Imu& operator=(const Imu& from) {
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
  static const Imu& default_instance();

  void Swap(Imu* other);

  // implements Message ----------------------------------------------

  inline Imu* New() const { return New(NULL); }

  Imu* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Imu& from);
  void MergeFrom(const Imu& from);
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
  void InternalSwap(Imu* other);
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

  // required .gazebo.msgs.Quaternion orientation = 2;
  bool has_orientation() const;
  void clear_orientation();
  static const int kOrientationFieldNumber = 2;
  const ::gazebo::msgs::Quaternion& orientation() const;
  ::gazebo::msgs::Quaternion* mutable_orientation();
  ::gazebo::msgs::Quaternion* release_orientation();
  void set_allocated_orientation(::gazebo::msgs::Quaternion* orientation);

  // repeated float orientation_covariance = 3 [packed = true];
  int orientation_covariance_size() const;
  void clear_orientation_covariance();
  static const int kOrientationCovarianceFieldNumber = 3;
  float orientation_covariance(int index) const;
  void set_orientation_covariance(int index, float value);
  void add_orientation_covariance(float value);
  const ::google::protobuf::RepeatedField< float >&
      orientation_covariance() const;
  ::google::protobuf::RepeatedField< float >*
      mutable_orientation_covariance();

  // required .gazebo.msgs.Vector3d angular_velocity = 4;
  bool has_angular_velocity() const;
  void clear_angular_velocity();
  static const int kAngularVelocityFieldNumber = 4;
  const ::gazebo::msgs::Vector3d& angular_velocity() const;
  ::gazebo::msgs::Vector3d* mutable_angular_velocity();
  ::gazebo::msgs::Vector3d* release_angular_velocity();
  void set_allocated_angular_velocity(::gazebo::msgs::Vector3d* angular_velocity);

  // repeated float angular_velocity_covariance = 5 [packed = true];
  int angular_velocity_covariance_size() const;
  void clear_angular_velocity_covariance();
  static const int kAngularVelocityCovarianceFieldNumber = 5;
  float angular_velocity_covariance(int index) const;
  void set_angular_velocity_covariance(int index, float value);
  void add_angular_velocity_covariance(float value);
  const ::google::protobuf::RepeatedField< float >&
      angular_velocity_covariance() const;
  ::google::protobuf::RepeatedField< float >*
      mutable_angular_velocity_covariance();

  // required .gazebo.msgs.Vector3d linear_acceleration = 6;
  bool has_linear_acceleration() const;
  void clear_linear_acceleration();
  static const int kLinearAccelerationFieldNumber = 6;
  const ::gazebo::msgs::Vector3d& linear_acceleration() const;
  ::gazebo::msgs::Vector3d* mutable_linear_acceleration();
  ::gazebo::msgs::Vector3d* release_linear_acceleration();
  void set_allocated_linear_acceleration(::gazebo::msgs::Vector3d* linear_acceleration);

  // repeated float linear_acceleration_covariance = 7 [packed = true];
  int linear_acceleration_covariance_size() const;
  void clear_linear_acceleration_covariance();
  static const int kLinearAccelerationCovarianceFieldNumber = 7;
  float linear_acceleration_covariance(int index) const;
  void set_linear_acceleration_covariance(int index, float value);
  void add_linear_acceleration_covariance(float value);
  const ::google::protobuf::RepeatedField< float >&
      linear_acceleration_covariance() const;
  ::google::protobuf::RepeatedField< float >*
      mutable_linear_acceleration_covariance();

  // required int64 seq = 8;
  bool has_seq() const;
  void clear_seq();
  static const int kSeqFieldNumber = 8;
  ::google::protobuf::int64 seq() const;
  void set_seq(::google::protobuf::int64 value);

  // @@protoc_insertion_point(class_scope:gz_sensor_msgs.Imu)
 private:
  inline void set_has_header();
  inline void clear_has_header();
  inline void set_has_orientation();
  inline void clear_has_orientation();
  inline void set_has_angular_velocity();
  inline void clear_has_angular_velocity();
  inline void set_has_linear_acceleration();
  inline void clear_has_linear_acceleration();
  inline void set_has_seq();
  inline void clear_has_seq();

  // helper for ByteSize()
  int RequiredFieldsByteSizeFallback() const;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::gz_std_msgs::Header* header_;
  ::gazebo::msgs::Quaternion* orientation_;
  ::google::protobuf::RepeatedField< float > orientation_covariance_;
  mutable int _orientation_covariance_cached_byte_size_;
  ::gazebo::msgs::Vector3d* angular_velocity_;
  ::google::protobuf::RepeatedField< float > angular_velocity_covariance_;
  mutable int _angular_velocity_covariance_cached_byte_size_;
  ::gazebo::msgs::Vector3d* linear_acceleration_;
  ::google::protobuf::RepeatedField< float > linear_acceleration_covariance_;
  mutable int _linear_acceleration_covariance_cached_byte_size_;
  ::google::protobuf::int64 seq_;
  friend void  protobuf_AddDesc_Imu_2eproto();
  friend void protobuf_AssignDesc_Imu_2eproto();
  friend void protobuf_ShutdownFile_Imu_2eproto();

  void InitAsDefaultInstance();
  static Imu* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// Imu

// required .gz_std_msgs.Header header = 1;
inline bool Imu::has_header() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Imu::set_has_header() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Imu::clear_has_header() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Imu::clear_header() {
  if (header_ != NULL) header_->::gz_std_msgs::Header::Clear();
  clear_has_header();
}
inline const ::gz_std_msgs::Header& Imu::header() const {
  // @@protoc_insertion_point(field_get:gz_sensor_msgs.Imu.header)
  return header_ != NULL ? *header_ : *default_instance_->header_;
}
inline ::gz_std_msgs::Header* Imu::mutable_header() {
  set_has_header();
  if (header_ == NULL) {
    header_ = new ::gz_std_msgs::Header;
  }
  // @@protoc_insertion_point(field_mutable:gz_sensor_msgs.Imu.header)
  return header_;
}
inline ::gz_std_msgs::Header* Imu::release_header() {
  // @@protoc_insertion_point(field_release:gz_sensor_msgs.Imu.header)
  clear_has_header();
  ::gz_std_msgs::Header* temp = header_;
  header_ = NULL;
  return temp;
}
inline void Imu::set_allocated_header(::gz_std_msgs::Header* header) {
  delete header_;
  header_ = header;
  if (header) {
    set_has_header();
  } else {
    clear_has_header();
  }
  // @@protoc_insertion_point(field_set_allocated:gz_sensor_msgs.Imu.header)
}

// required .gazebo.msgs.Quaternion orientation = 2;
inline bool Imu::has_orientation() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Imu::set_has_orientation() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Imu::clear_has_orientation() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Imu::clear_orientation() {
  if (orientation_ != NULL) orientation_->::gazebo::msgs::Quaternion::Clear();
  clear_has_orientation();
}
inline const ::gazebo::msgs::Quaternion& Imu::orientation() const {
  // @@protoc_insertion_point(field_get:gz_sensor_msgs.Imu.orientation)
  return orientation_ != NULL ? *orientation_ : *default_instance_->orientation_;
}
inline ::gazebo::msgs::Quaternion* Imu::mutable_orientation() {
  set_has_orientation();
  if (orientation_ == NULL) {
    orientation_ = new ::gazebo::msgs::Quaternion;
  }
  // @@protoc_insertion_point(field_mutable:gz_sensor_msgs.Imu.orientation)
  return orientation_;
}
inline ::gazebo::msgs::Quaternion* Imu::release_orientation() {
  // @@protoc_insertion_point(field_release:gz_sensor_msgs.Imu.orientation)
  clear_has_orientation();
  ::gazebo::msgs::Quaternion* temp = orientation_;
  orientation_ = NULL;
  return temp;
}
inline void Imu::set_allocated_orientation(::gazebo::msgs::Quaternion* orientation) {
  delete orientation_;
  orientation_ = orientation;
  if (orientation) {
    set_has_orientation();
  } else {
    clear_has_orientation();
  }
  // @@protoc_insertion_point(field_set_allocated:gz_sensor_msgs.Imu.orientation)
}

// repeated float orientation_covariance = 3 [packed = true];
inline int Imu::orientation_covariance_size() const {
  return orientation_covariance_.size();
}
inline void Imu::clear_orientation_covariance() {
  orientation_covariance_.Clear();
}
inline float Imu::orientation_covariance(int index) const {
  // @@protoc_insertion_point(field_get:gz_sensor_msgs.Imu.orientation_covariance)
  return orientation_covariance_.Get(index);
}
inline void Imu::set_orientation_covariance(int index, float value) {
  orientation_covariance_.Set(index, value);
  // @@protoc_insertion_point(field_set:gz_sensor_msgs.Imu.orientation_covariance)
}
inline void Imu::add_orientation_covariance(float value) {
  orientation_covariance_.Add(value);
  // @@protoc_insertion_point(field_add:gz_sensor_msgs.Imu.orientation_covariance)
}
inline const ::google::protobuf::RepeatedField< float >&
Imu::orientation_covariance() const {
  // @@protoc_insertion_point(field_list:gz_sensor_msgs.Imu.orientation_covariance)
  return orientation_covariance_;
}
inline ::google::protobuf::RepeatedField< float >*
Imu::mutable_orientation_covariance() {
  // @@protoc_insertion_point(field_mutable_list:gz_sensor_msgs.Imu.orientation_covariance)
  return &orientation_covariance_;
}

// required .gazebo.msgs.Vector3d angular_velocity = 4;
inline bool Imu::has_angular_velocity() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void Imu::set_has_angular_velocity() {
  _has_bits_[0] |= 0x00000008u;
}
inline void Imu::clear_has_angular_velocity() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void Imu::clear_angular_velocity() {
  if (angular_velocity_ != NULL) angular_velocity_->::gazebo::msgs::Vector3d::Clear();
  clear_has_angular_velocity();
}
inline const ::gazebo::msgs::Vector3d& Imu::angular_velocity() const {
  // @@protoc_insertion_point(field_get:gz_sensor_msgs.Imu.angular_velocity)
  return angular_velocity_ != NULL ? *angular_velocity_ : *default_instance_->angular_velocity_;
}
inline ::gazebo::msgs::Vector3d* Imu::mutable_angular_velocity() {
  set_has_angular_velocity();
  if (angular_velocity_ == NULL) {
    angular_velocity_ = new ::gazebo::msgs::Vector3d;
  }
  // @@protoc_insertion_point(field_mutable:gz_sensor_msgs.Imu.angular_velocity)
  return angular_velocity_;
}
inline ::gazebo::msgs::Vector3d* Imu::release_angular_velocity() {
  // @@protoc_insertion_point(field_release:gz_sensor_msgs.Imu.angular_velocity)
  clear_has_angular_velocity();
  ::gazebo::msgs::Vector3d* temp = angular_velocity_;
  angular_velocity_ = NULL;
  return temp;
}
inline void Imu::set_allocated_angular_velocity(::gazebo::msgs::Vector3d* angular_velocity) {
  delete angular_velocity_;
  angular_velocity_ = angular_velocity;
  if (angular_velocity) {
    set_has_angular_velocity();
  } else {
    clear_has_angular_velocity();
  }
  // @@protoc_insertion_point(field_set_allocated:gz_sensor_msgs.Imu.angular_velocity)
}

// repeated float angular_velocity_covariance = 5 [packed = true];
inline int Imu::angular_velocity_covariance_size() const {
  return angular_velocity_covariance_.size();
}
inline void Imu::clear_angular_velocity_covariance() {
  angular_velocity_covariance_.Clear();
}
inline float Imu::angular_velocity_covariance(int index) const {
  // @@protoc_insertion_point(field_get:gz_sensor_msgs.Imu.angular_velocity_covariance)
  return angular_velocity_covariance_.Get(index);
}
inline void Imu::set_angular_velocity_covariance(int index, float value) {
  angular_velocity_covariance_.Set(index, value);
  // @@protoc_insertion_point(field_set:gz_sensor_msgs.Imu.angular_velocity_covariance)
}
inline void Imu::add_angular_velocity_covariance(float value) {
  angular_velocity_covariance_.Add(value);
  // @@protoc_insertion_point(field_add:gz_sensor_msgs.Imu.angular_velocity_covariance)
}
inline const ::google::protobuf::RepeatedField< float >&
Imu::angular_velocity_covariance() const {
  // @@protoc_insertion_point(field_list:gz_sensor_msgs.Imu.angular_velocity_covariance)
  return angular_velocity_covariance_;
}
inline ::google::protobuf::RepeatedField< float >*
Imu::mutable_angular_velocity_covariance() {
  // @@protoc_insertion_point(field_mutable_list:gz_sensor_msgs.Imu.angular_velocity_covariance)
  return &angular_velocity_covariance_;
}

// required .gazebo.msgs.Vector3d linear_acceleration = 6;
inline bool Imu::has_linear_acceleration() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void Imu::set_has_linear_acceleration() {
  _has_bits_[0] |= 0x00000020u;
}
inline void Imu::clear_has_linear_acceleration() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void Imu::clear_linear_acceleration() {
  if (linear_acceleration_ != NULL) linear_acceleration_->::gazebo::msgs::Vector3d::Clear();
  clear_has_linear_acceleration();
}
inline const ::gazebo::msgs::Vector3d& Imu::linear_acceleration() const {
  // @@protoc_insertion_point(field_get:gz_sensor_msgs.Imu.linear_acceleration)
  return linear_acceleration_ != NULL ? *linear_acceleration_ : *default_instance_->linear_acceleration_;
}
inline ::gazebo::msgs::Vector3d* Imu::mutable_linear_acceleration() {
  set_has_linear_acceleration();
  if (linear_acceleration_ == NULL) {
    linear_acceleration_ = new ::gazebo::msgs::Vector3d;
  }
  // @@protoc_insertion_point(field_mutable:gz_sensor_msgs.Imu.linear_acceleration)
  return linear_acceleration_;
}
inline ::gazebo::msgs::Vector3d* Imu::release_linear_acceleration() {
  // @@protoc_insertion_point(field_release:gz_sensor_msgs.Imu.linear_acceleration)
  clear_has_linear_acceleration();
  ::gazebo::msgs::Vector3d* temp = linear_acceleration_;
  linear_acceleration_ = NULL;
  return temp;
}
inline void Imu::set_allocated_linear_acceleration(::gazebo::msgs::Vector3d* linear_acceleration) {
  delete linear_acceleration_;
  linear_acceleration_ = linear_acceleration;
  if (linear_acceleration) {
    set_has_linear_acceleration();
  } else {
    clear_has_linear_acceleration();
  }
  // @@protoc_insertion_point(field_set_allocated:gz_sensor_msgs.Imu.linear_acceleration)
}

// repeated float linear_acceleration_covariance = 7 [packed = true];
inline int Imu::linear_acceleration_covariance_size() const {
  return linear_acceleration_covariance_.size();
}
inline void Imu::clear_linear_acceleration_covariance() {
  linear_acceleration_covariance_.Clear();
}
inline float Imu::linear_acceleration_covariance(int index) const {
  // @@protoc_insertion_point(field_get:gz_sensor_msgs.Imu.linear_acceleration_covariance)
  return linear_acceleration_covariance_.Get(index);
}
inline void Imu::set_linear_acceleration_covariance(int index, float value) {
  linear_acceleration_covariance_.Set(index, value);
  // @@protoc_insertion_point(field_set:gz_sensor_msgs.Imu.linear_acceleration_covariance)
}
inline void Imu::add_linear_acceleration_covariance(float value) {
  linear_acceleration_covariance_.Add(value);
  // @@protoc_insertion_point(field_add:gz_sensor_msgs.Imu.linear_acceleration_covariance)
}
inline const ::google::protobuf::RepeatedField< float >&
Imu::linear_acceleration_covariance() const {
  // @@protoc_insertion_point(field_list:gz_sensor_msgs.Imu.linear_acceleration_covariance)
  return linear_acceleration_covariance_;
}
inline ::google::protobuf::RepeatedField< float >*
Imu::mutable_linear_acceleration_covariance() {
  // @@protoc_insertion_point(field_mutable_list:gz_sensor_msgs.Imu.linear_acceleration_covariance)
  return &linear_acceleration_covariance_;
}

// required int64 seq = 8;
inline bool Imu::has_seq() const {
  return (_has_bits_[0] & 0x00000080u) != 0;
}
inline void Imu::set_has_seq() {
  _has_bits_[0] |= 0x00000080u;
}
inline void Imu::clear_has_seq() {
  _has_bits_[0] &= ~0x00000080u;
}
inline void Imu::clear_seq() {
  seq_ = GOOGLE_LONGLONG(0);
  clear_has_seq();
}
inline ::google::protobuf::int64 Imu::seq() const {
  // @@protoc_insertion_point(field_get:gz_sensor_msgs.Imu.seq)
  return seq_;
}
inline void Imu::set_seq(::google::protobuf::int64 value) {
  set_has_seq();
  seq_ = value;
  // @@protoc_insertion_point(field_set:gz_sensor_msgs.Imu.seq)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace gz_sensor_msgs

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_Imu_2eproto__INCLUDED
