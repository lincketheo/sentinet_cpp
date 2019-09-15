// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: proto/common/cmd_vel.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_proto_2fcommon_2fcmd_5fvel_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_proto_2fcommon_2fcmd_5fvel_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3009000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3009000 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>   // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_proto_2fcommon_2fcmd_5fvel_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_proto_2fcommon_2fcmd_5fvel_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField
      entries[] PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField
      aux[] PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable
      schema[3] PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata
      field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable
      serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable
    descriptor_table_proto_2fcommon_2fcmd_5fvel_2eproto;
namespace movement {
class camera;
class cameraDefaultTypeInternal;
extern cameraDefaultTypeInternal _camera_default_instance_;
class drive_train;
class drive_trainDefaultTypeInternal;
extern drive_trainDefaultTypeInternal _drive_train_default_instance_;
class gun;
class gunDefaultTypeInternal;
extern gunDefaultTypeInternal _gun_default_instance_;
}  // namespace movement
PROTOBUF_NAMESPACE_OPEN
template <>
::movement::camera *Arena::CreateMaybeMessage<::movement::camera>(Arena *);
template <>
::movement::drive_train *Arena::CreateMaybeMessage<::movement::drive_train>(
    Arena *);
template <>
::movement::gun *Arena::CreateMaybeMessage<::movement::gun>(Arena *);
PROTOBUF_NAMESPACE_CLOSE
namespace movement {

// ===================================================================

class drive_train
    : public ::PROTOBUF_NAMESPACE_ID::
          Message /* @@protoc_insertion_point(class_definition:movement.drive_train)
                   */
{
 public:
  drive_train();
  virtual ~drive_train();

  drive_train(const drive_train &from);
  drive_train(drive_train &&from) noexcept : drive_train() {
    *this = ::std::move(from);
  }

  inline drive_train &operator=(const drive_train &from) {
    CopyFrom(from);
    return *this;
  }
  inline drive_train &operator=(drive_train &&from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet &unknown_fields()
      const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet *mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor *descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor *GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection *GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const drive_train &default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const drive_train *internal_default_instance() {
    return reinterpret_cast<const drive_train *>(
        &_drive_train_default_instance_);
  }
  static constexpr int kIndexInFileMessages = 0;

  friend void swap(drive_train &a, drive_train &b) { a.Swap(&b); }
  inline void Swap(drive_train *other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline drive_train *New() const final {
    return CreateMaybeMessage<drive_train>(nullptr);
  }

  drive_train *New(::PROTOBUF_NAMESPACE_ID::Arena *arena) const final {
    return CreateMaybeMessage<drive_train>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message &from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message &from) final;
  void CopyFrom(const drive_train &from);
  void MergeFrom(const drive_train &from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
#if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  const char *_InternalParse(
      const char *ptr,
      ::PROTOBUF_NAMESPACE_ID::internal::ParseContext *ctx) final;
#else
  bool MergePartialFromCodedStream(
      ::PROTOBUF_NAMESPACE_ID::io::CodedInputStream *input) final;
#endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  void SerializeWithCachedSizes(
      ::PROTOBUF_NAMESPACE_ID::io::CodedOutputStream *output) const final;
  ::PROTOBUF_NAMESPACE_ID::uint8 *InternalSerializeWithCachedSizesToArray(
      ::PROTOBUF_NAMESPACE_ID::uint8 *target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

 private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(drive_train *other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "movement.drive_train";
  }

 private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena *GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void *MaybeArenaPtr() const { return nullptr; }

 public:
  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

 private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
        &::descriptor_table_proto_2fcommon_2fcmd_5fvel_2eproto);
    return ::descriptor_table_proto_2fcommon_2fcmd_5fvel_2eproto
        .file_level_metadata[kIndexInFileMessages];
  }

 public:
  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kLinearVelFieldNumber = 1,
    kAngularVelFieldNumber = 2,
  };
  // required int32 linear_vel = 1;
  bool has_linear_vel() const;
  void clear_linear_vel();
  ::PROTOBUF_NAMESPACE_ID::int32 linear_vel() const;
  void set_linear_vel(::PROTOBUF_NAMESPACE_ID::int32 value);

  // required int32 angular_vel = 2;
  bool has_angular_vel() const;
  void clear_angular_vel();
  ::PROTOBUF_NAMESPACE_ID::int32 angular_vel() const;
  void set_angular_vel(::PROTOBUF_NAMESPACE_ID::int32 value);

  // @@protoc_insertion_point(class_scope:movement.drive_train)
 private:
  class _Internal;

  // helper for ByteSizeLong()
  size_t RequiredFieldsByteSizeFallback() const;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena
      _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::int32 linear_vel_;
  ::PROTOBUF_NAMESPACE_ID::int32 angular_vel_;
  friend struct ::TableStruct_proto_2fcommon_2fcmd_5fvel_2eproto;
};
// -------------------------------------------------------------------

class camera
    : public ::PROTOBUF_NAMESPACE_ID::
          Message /* @@protoc_insertion_point(class_definition:movement.camera)
                   */
{
 public:
  camera();
  virtual ~camera();

  camera(const camera &from);
  camera(camera &&from) noexcept : camera() { *this = ::std::move(from); }

  inline camera &operator=(const camera &from) {
    CopyFrom(from);
    return *this;
  }
  inline camera &operator=(camera &&from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet &unknown_fields()
      const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet *mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor *descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor *GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection *GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const camera &default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const camera *internal_default_instance() {
    return reinterpret_cast<const camera *>(&_camera_default_instance_);
  }
  static constexpr int kIndexInFileMessages = 1;

  friend void swap(camera &a, camera &b) { a.Swap(&b); }
  inline void Swap(camera *other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline camera *New() const final {
    return CreateMaybeMessage<camera>(nullptr);
  }

  camera *New(::PROTOBUF_NAMESPACE_ID::Arena *arena) const final {
    return CreateMaybeMessage<camera>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message &from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message &from) final;
  void CopyFrom(const camera &from);
  void MergeFrom(const camera &from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
#if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  const char *_InternalParse(
      const char *ptr,
      ::PROTOBUF_NAMESPACE_ID::internal::ParseContext *ctx) final;
#else
  bool MergePartialFromCodedStream(
      ::PROTOBUF_NAMESPACE_ID::io::CodedInputStream *input) final;
#endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  void SerializeWithCachedSizes(
      ::PROTOBUF_NAMESPACE_ID::io::CodedOutputStream *output) const final;
  ::PROTOBUF_NAMESPACE_ID::uint8 *InternalSerializeWithCachedSizesToArray(
      ::PROTOBUF_NAMESPACE_ID::uint8 *target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

 private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(camera *other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "movement.camera";
  }

 private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena *GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void *MaybeArenaPtr() const { return nullptr; }

 public:
  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

 private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
        &::descriptor_table_proto_2fcommon_2fcmd_5fvel_2eproto);
    return ::descriptor_table_proto_2fcommon_2fcmd_5fvel_2eproto
        .file_level_metadata[kIndexInFileMessages];
  }

 public:
  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kAngularVelFieldNumber = 1,
  };
  // required int32 angular_vel = 1;
  bool has_angular_vel() const;
  void clear_angular_vel();
  ::PROTOBUF_NAMESPACE_ID::int32 angular_vel() const;
  void set_angular_vel(::PROTOBUF_NAMESPACE_ID::int32 value);

  // @@protoc_insertion_point(class_scope:movement.camera)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena
      _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::int32 angular_vel_;
  friend struct ::TableStruct_proto_2fcommon_2fcmd_5fvel_2eproto;
};
// -------------------------------------------------------------------

class gun
    : public ::PROTOBUF_NAMESPACE_ID::
          Message /* @@protoc_insertion_point(class_definition:movement.gun)
                   */
{
 public:
  gun();
  virtual ~gun();

  gun(const gun &from);
  gun(gun &&from) noexcept : gun() { *this = ::std::move(from); }

  inline gun &operator=(const gun &from) {
    CopyFrom(from);
    return *this;
  }
  inline gun &operator=(gun &&from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet &unknown_fields()
      const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet *mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor *descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor *GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection *GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const gun &default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const gun *internal_default_instance() {
    return reinterpret_cast<const gun *>(&_gun_default_instance_);
  }
  static constexpr int kIndexInFileMessages = 2;

  friend void swap(gun &a, gun &b) { a.Swap(&b); }
  inline void Swap(gun *other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline gun *New() const final { return CreateMaybeMessage<gun>(nullptr); }

  gun *New(::PROTOBUF_NAMESPACE_ID::Arena *arena) const final {
    return CreateMaybeMessage<gun>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message &from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message &from) final;
  void CopyFrom(const gun &from);
  void MergeFrom(const gun &from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
#if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  const char *_InternalParse(
      const char *ptr,
      ::PROTOBUF_NAMESPACE_ID::internal::ParseContext *ctx) final;
#else
  bool MergePartialFromCodedStream(
      ::PROTOBUF_NAMESPACE_ID::io::CodedInputStream *input) final;
#endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  void SerializeWithCachedSizes(
      ::PROTOBUF_NAMESPACE_ID::io::CodedOutputStream *output) const final;
  ::PROTOBUF_NAMESPACE_ID::uint8 *InternalSerializeWithCachedSizesToArray(
      ::PROTOBUF_NAMESPACE_ID::uint8 *target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

 private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(gun *other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "movement.gun";
  }

 private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena *GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void *MaybeArenaPtr() const { return nullptr; }

 public:
  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

 private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
        &::descriptor_table_proto_2fcommon_2fcmd_5fvel_2eproto);
    return ::descriptor_table_proto_2fcommon_2fcmd_5fvel_2eproto
        .file_level_metadata[kIndexInFileMessages];
  }

 public:
  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kLeftMagFieldNumber = 1,
    kRightMagFieldNumber = 2,
  };
  // required int32 left_mag = 1;
  bool has_left_mag() const;
  void clear_left_mag();
  ::PROTOBUF_NAMESPACE_ID::int32 left_mag() const;
  void set_left_mag(::PROTOBUF_NAMESPACE_ID::int32 value);

  // required int32 right_mag = 2;
  bool has_right_mag() const;
  void clear_right_mag();
  ::PROTOBUF_NAMESPACE_ID::int32 right_mag() const;
  void set_right_mag(::PROTOBUF_NAMESPACE_ID::int32 value);

  // @@protoc_insertion_point(class_scope:movement.gun)
 private:
  class _Internal;

  // helper for ByteSizeLong()
  size_t RequiredFieldsByteSizeFallback() const;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena
      _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::int32 left_mag_;
  ::PROTOBUF_NAMESPACE_ID::int32 right_mag_;
  friend struct ::TableStruct_proto_2fcommon_2fcmd_5fvel_2eproto;
};
// ===================================================================

// ===================================================================

#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// drive_train

// required int32 linear_vel = 1;
inline bool drive_train::has_linear_vel() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void drive_train::clear_linear_vel() {
  linear_vel_ = 0;
  _has_bits_[0] &= ~0x00000001u;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 drive_train::linear_vel() const {
  // @@protoc_insertion_point(field_get:movement.drive_train.linear_vel)
  return linear_vel_;
}
inline void drive_train::set_linear_vel(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _has_bits_[0] |= 0x00000001u;
  linear_vel_ = value;
  // @@protoc_insertion_point(field_set:movement.drive_train.linear_vel)
}

// required int32 angular_vel = 2;
inline bool drive_train::has_angular_vel() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void drive_train::clear_angular_vel() {
  angular_vel_ = 0;
  _has_bits_[0] &= ~0x00000002u;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 drive_train::angular_vel() const {
  // @@protoc_insertion_point(field_get:movement.drive_train.angular_vel)
  return angular_vel_;
}
inline void drive_train::set_angular_vel(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _has_bits_[0] |= 0x00000002u;
  angular_vel_ = value;
  // @@protoc_insertion_point(field_set:movement.drive_train.angular_vel)
}

// -------------------------------------------------------------------

// camera

// required int32 angular_vel = 1;
inline bool camera::has_angular_vel() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void camera::clear_angular_vel() {
  angular_vel_ = 0;
  _has_bits_[0] &= ~0x00000001u;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 camera::angular_vel() const {
  // @@protoc_insertion_point(field_get:movement.camera.angular_vel)
  return angular_vel_;
}
inline void camera::set_angular_vel(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _has_bits_[0] |= 0x00000001u;
  angular_vel_ = value;
  // @@protoc_insertion_point(field_set:movement.camera.angular_vel)
}

// -------------------------------------------------------------------

// gun

// required int32 left_mag = 1;
inline bool gun::has_left_mag() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void gun::clear_left_mag() {
  left_mag_ = 0;
  _has_bits_[0] &= ~0x00000001u;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 gun::left_mag() const {
  // @@protoc_insertion_point(field_get:movement.gun.left_mag)
  return left_mag_;
}
inline void gun::set_left_mag(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _has_bits_[0] |= 0x00000001u;
  left_mag_ = value;
  // @@protoc_insertion_point(field_set:movement.gun.left_mag)
}

// required int32 right_mag = 2;
inline bool gun::has_right_mag() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void gun::clear_right_mag() {
  right_mag_ = 0;
  _has_bits_[0] &= ~0x00000002u;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 gun::right_mag() const {
  // @@protoc_insertion_point(field_get:movement.gun.right_mag)
  return right_mag_;
}
inline void gun::set_right_mag(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _has_bits_[0] |= 0x00000002u;
  right_mag_ = value;
  // @@protoc_insertion_point(field_set:movement.gun.right_mag)
}

#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------

// @@protoc_insertion_point(namespace_scope)

}  // namespace movement

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_proto_2fcommon_2fcmd_5fvel_2eproto
