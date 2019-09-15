// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: proto/debug/debug.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_proto_2fdebug_2fdebug_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_proto_2fdebug_2fdebug_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_proto_2fdebug_2fdebug_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_proto_2fdebug_2fdebug_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField
      entries[] PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField
      aux[] PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable
      schema[1] PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata
      field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable
      serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable
    descriptor_table_proto_2fdebug_2fdebug_2eproto;
namespace debug {
class DebugMessage;
class DebugMessageDefaultTypeInternal;
extern DebugMessageDefaultTypeInternal _DebugMessage_default_instance_;
}  // namespace debug
PROTOBUF_NAMESPACE_OPEN
template <>
::debug::DebugMessage *Arena::CreateMaybeMessage<::debug::DebugMessage>(
    Arena *);
PROTOBUF_NAMESPACE_CLOSE
namespace debug {

// ===================================================================

class DebugMessage
    : public ::PROTOBUF_NAMESPACE_ID::
          Message /* @@protoc_insertion_point(class_definition:debug.DebugMessage)
                   */
{
 public:
  DebugMessage();
  virtual ~DebugMessage();

  DebugMessage(const DebugMessage &from);
  DebugMessage(DebugMessage &&from) noexcept : DebugMessage() {
    *this = ::std::move(from);
  }

  inline DebugMessage &operator=(const DebugMessage &from) {
    CopyFrom(from);
    return *this;
  }
  inline DebugMessage &operator=(DebugMessage &&from) noexcept {
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
  static const DebugMessage &default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const DebugMessage *internal_default_instance() {
    return reinterpret_cast<const DebugMessage *>(
        &_DebugMessage_default_instance_);
  }
  static constexpr int kIndexInFileMessages = 0;

  friend void swap(DebugMessage &a, DebugMessage &b) { a.Swap(&b); }
  inline void Swap(DebugMessage *other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline DebugMessage *New() const final {
    return CreateMaybeMessage<DebugMessage>(nullptr);
  }

  DebugMessage *New(::PROTOBUF_NAMESPACE_ID::Arena *arena) const final {
    return CreateMaybeMessage<DebugMessage>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message &from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message &from) final;
  void CopyFrom(const DebugMessage &from);
  void MergeFrom(const DebugMessage &from);
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
  void InternalSwap(DebugMessage *other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "debug.DebugMessage";
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
        &::descriptor_table_proto_2fdebug_2fdebug_2eproto);
    return ::descriptor_table_proto_2fdebug_2fdebug_2eproto
        .file_level_metadata[kIndexInFileMessages];
  }

 public:
  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kNameFieldNumber = 1,
    kExtraFieldNumber = 3,
    kIdFieldNumber = 2,
  };
  // required string name = 1;
  bool has_name() const;
  void clear_name();
  const std::string &name() const;
  void set_name(const std::string &value);
  void set_name(std::string &&value);
  void set_name(const char *value);
  void set_name(const char *value, size_t size);
  std::string *mutable_name();
  std::string *release_name();
  void set_allocated_name(std::string *name);

  // optional string extra = 3;
  bool has_extra() const;
  void clear_extra();
  const std::string &extra() const;
  void set_extra(const std::string &value);
  void set_extra(std::string &&value);
  void set_extra(const char *value);
  void set_extra(const char *value, size_t size);
  std::string *mutable_extra();
  std::string *release_extra();
  void set_allocated_extra(std::string *extra);

  // required int32 id = 2;
  bool has_id() const;
  void clear_id();
  ::PROTOBUF_NAMESPACE_ID::int32 id() const;
  void set_id(::PROTOBUF_NAMESPACE_ID::int32 value);

  // @@protoc_insertion_point(class_scope:debug.DebugMessage)
 private:
  class _Internal;

  // helper for ByteSizeLong()
  size_t RequiredFieldsByteSizeFallback() const;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena
      _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr name_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr extra_;
  ::PROTOBUF_NAMESPACE_ID::int32 id_;
  friend struct ::TableStruct_proto_2fdebug_2fdebug_2eproto;
};
// ===================================================================

// ===================================================================

#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// DebugMessage

// required string name = 1;
inline bool DebugMessage::has_name() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void DebugMessage::clear_name() {
  name_.ClearToEmptyNoArena(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  _has_bits_[0] &= ~0x00000001u;
}
inline const std::string &DebugMessage::name() const {
  // @@protoc_insertion_point(field_get:debug.DebugMessage.name)
  return name_.GetNoArena();
}
inline void DebugMessage::set_name(const std::string &value) {
  _has_bits_[0] |= 0x00000001u;
  name_.SetNoArena(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:debug.DebugMessage.name)
}
inline void DebugMessage::set_name(std::string &&value) {
  _has_bits_[0] |= 0x00000001u;
  name_.SetNoArena(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:debug.DebugMessage.name)
}
inline void DebugMessage::set_name(const char *value) {
  GOOGLE_DCHECK(value != nullptr);
  _has_bits_[0] |= 0x00000001u;
  name_.SetNoArena(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(value));
  // @@protoc_insertion_point(field_set_char:debug.DebugMessage.name)
}
inline void DebugMessage::set_name(const char *value, size_t size) {
  _has_bits_[0] |= 0x00000001u;
  name_.SetNoArena(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char *>(value), size));
  // @@protoc_insertion_point(field_set_pointer:debug.DebugMessage.name)
}
inline std::string *DebugMessage::mutable_name() {
  _has_bits_[0] |= 0x00000001u;
  // @@protoc_insertion_point(field_mutable:debug.DebugMessage.name)
  return name_.MutableNoArena(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string *DebugMessage::release_name() {
  // @@protoc_insertion_point(field_release:debug.DebugMessage.name)
  if (!has_name()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000001u;
  return name_.ReleaseNonDefaultNoArena(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void DebugMessage::set_allocated_name(std::string *name) {
  if (name != nullptr) {
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  name_.SetAllocatedNoArena(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:debug.DebugMessage.name)
}

// required int32 id = 2;
inline bool DebugMessage::has_id() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void DebugMessage::clear_id() {
  id_ = 0;
  _has_bits_[0] &= ~0x00000004u;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 DebugMessage::id() const {
  // @@protoc_insertion_point(field_get:debug.DebugMessage.id)
  return id_;
}
inline void DebugMessage::set_id(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _has_bits_[0] |= 0x00000004u;
  id_ = value;
  // @@protoc_insertion_point(field_set:debug.DebugMessage.id)
}

// optional string extra = 3;
inline bool DebugMessage::has_extra() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void DebugMessage::clear_extra() {
  extra_.ClearToEmptyNoArena(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  _has_bits_[0] &= ~0x00000002u;
}
inline const std::string &DebugMessage::extra() const {
  // @@protoc_insertion_point(field_get:debug.DebugMessage.extra)
  return extra_.GetNoArena();
}
inline void DebugMessage::set_extra(const std::string &value) {
  _has_bits_[0] |= 0x00000002u;
  extra_.SetNoArena(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:debug.DebugMessage.extra)
}
inline void DebugMessage::set_extra(std::string &&value) {
  _has_bits_[0] |= 0x00000002u;
  extra_.SetNoArena(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:debug.DebugMessage.extra)
}
inline void DebugMessage::set_extra(const char *value) {
  GOOGLE_DCHECK(value != nullptr);
  _has_bits_[0] |= 0x00000002u;
  extra_.SetNoArena(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(value));
  // @@protoc_insertion_point(field_set_char:debug.DebugMessage.extra)
}
inline void DebugMessage::set_extra(const char *value, size_t size) {
  _has_bits_[0] |= 0x00000002u;
  extra_.SetNoArena(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char *>(value), size));
  // @@protoc_insertion_point(field_set_pointer:debug.DebugMessage.extra)
}
inline std::string *DebugMessage::mutable_extra() {
  _has_bits_[0] |= 0x00000002u;
  // @@protoc_insertion_point(field_mutable:debug.DebugMessage.extra)
  return extra_.MutableNoArena(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string *DebugMessage::release_extra() {
  // @@protoc_insertion_point(field_release:debug.DebugMessage.extra)
  if (!has_extra()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000002u;
  return extra_.ReleaseNonDefaultNoArena(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void DebugMessage::set_allocated_extra(std::string *extra) {
  if (extra != nullptr) {
    _has_bits_[0] |= 0x00000002u;
  } else {
    _has_bits_[0] &= ~0x00000002u;
  }
  extra_.SetAllocatedNoArena(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), extra);
  // @@protoc_insertion_point(field_set_allocated:debug.DebugMessage.extra)
}

#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace debug

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_proto_2fdebug_2fdebug_2eproto
