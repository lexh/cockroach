// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: cockroach/proto/status.proto

#ifndef PROTOBUF_cockroach_2fproto_2fstatus_2eproto__INCLUDED
#define PROTOBUF_cockroach_2fproto_2fstatus_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2006000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2006001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
#include "gogoproto/gogo.pb.h"
// @@protoc_insertion_point(includes)

namespace cockroach {
namespace proto {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_cockroach_2fproto_2fstatus_2eproto();
void protobuf_AssignDesc_cockroach_2fproto_2fstatus_2eproto();
void protobuf_ShutdownFile_cockroach_2fproto_2fstatus_2eproto();

class StoreStatus;

// ===================================================================

class StoreStatus : public ::google::protobuf::Message {
 public:
  StoreStatus();
  virtual ~StoreStatus();

  StoreStatus(const StoreStatus& from);

  inline StoreStatus& operator=(const StoreStatus& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const StoreStatus& default_instance();

  void Swap(StoreStatus* other);

  // implements Message ----------------------------------------------

  StoreStatus* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const StoreStatus& from);
  void MergeFrom(const StoreStatus& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional int32 store_id = 1;
  inline bool has_store_id() const;
  inline void clear_store_id();
  static const int kStoreIdFieldNumber = 1;
  inline ::google::protobuf::int32 store_id() const;
  inline void set_store_id(::google::protobuf::int32 value);

  // optional int32 node_id = 2;
  inline bool has_node_id() const;
  inline void clear_node_id();
  static const int kNodeIdFieldNumber = 2;
  inline ::google::protobuf::int32 node_id() const;
  inline void set_node_id(::google::protobuf::int32 value);

  // repeated int64 raft_ids = 3;
  inline int raft_ids_size() const;
  inline void clear_raft_ids();
  static const int kRaftIdsFieldNumber = 3;
  inline ::google::protobuf::int64 raft_ids(int index) const;
  inline void set_raft_ids(int index, ::google::protobuf::int64 value);
  inline void add_raft_ids(::google::protobuf::int64 value);
  inline const ::google::protobuf::RepeatedField< ::google::protobuf::int64 >&
      raft_ids() const;
  inline ::google::protobuf::RepeatedField< ::google::protobuf::int64 >*
      mutable_raft_ids();

  // optional int64 updated_at = 4;
  inline bool has_updated_at() const;
  inline void clear_updated_at();
  static const int kUpdatedAtFieldNumber = 4;
  inline ::google::protobuf::int64 updated_at() const;
  inline void set_updated_at(::google::protobuf::int64 value);

  // optional int64 started_at = 5;
  inline bool has_started_at() const;
  inline void clear_started_at();
  static const int kStartedAtFieldNumber = 5;
  inline ::google::protobuf::int64 started_at() const;
  inline void set_started_at(::google::protobuf::int64 value);

  // optional int64 used_bytes = 6;
  inline bool has_used_bytes() const;
  inline void clear_used_bytes();
  static const int kUsedBytesFieldNumber = 6;
  inline ::google::protobuf::int64 used_bytes() const;
  inline void set_used_bytes(::google::protobuf::int64 value);

  // optional int64 max_bytes = 7;
  inline bool has_max_bytes() const;
  inline void clear_max_bytes();
  static const int kMaxBytesFieldNumber = 7;
  inline ::google::protobuf::int64 max_bytes() const;
  inline void set_max_bytes(::google::protobuf::int64 value);

  // @@protoc_insertion_point(class_scope:cockroach.proto.StoreStatus)
 private:
  inline void set_has_store_id();
  inline void clear_has_store_id();
  inline void set_has_node_id();
  inline void clear_has_node_id();
  inline void set_has_updated_at();
  inline void clear_has_updated_at();
  inline void set_has_started_at();
  inline void clear_has_started_at();
  inline void set_has_used_bytes();
  inline void clear_has_used_bytes();
  inline void set_has_max_bytes();
  inline void clear_has_max_bytes();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::int32 store_id_;
  ::google::protobuf::int32 node_id_;
  ::google::protobuf::RepeatedField< ::google::protobuf::int64 > raft_ids_;
  ::google::protobuf::int64 updated_at_;
  ::google::protobuf::int64 started_at_;
  ::google::protobuf::int64 used_bytes_;
  ::google::protobuf::int64 max_bytes_;
  friend void  protobuf_AddDesc_cockroach_2fproto_2fstatus_2eproto();
  friend void protobuf_AssignDesc_cockroach_2fproto_2fstatus_2eproto();
  friend void protobuf_ShutdownFile_cockroach_2fproto_2fstatus_2eproto();

  void InitAsDefaultInstance();
  static StoreStatus* default_instance_;
};
// ===================================================================


// ===================================================================

// StoreStatus

// optional int32 store_id = 1;
inline bool StoreStatus::has_store_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void StoreStatus::set_has_store_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void StoreStatus::clear_has_store_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void StoreStatus::clear_store_id() {
  store_id_ = 0;
  clear_has_store_id();
}
inline ::google::protobuf::int32 StoreStatus::store_id() const {
  // @@protoc_insertion_point(field_get:cockroach.proto.StoreStatus.store_id)
  return store_id_;
}
inline void StoreStatus::set_store_id(::google::protobuf::int32 value) {
  set_has_store_id();
  store_id_ = value;
  // @@protoc_insertion_point(field_set:cockroach.proto.StoreStatus.store_id)
}

// optional int32 node_id = 2;
inline bool StoreStatus::has_node_id() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void StoreStatus::set_has_node_id() {
  _has_bits_[0] |= 0x00000002u;
}
inline void StoreStatus::clear_has_node_id() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void StoreStatus::clear_node_id() {
  node_id_ = 0;
  clear_has_node_id();
}
inline ::google::protobuf::int32 StoreStatus::node_id() const {
  // @@protoc_insertion_point(field_get:cockroach.proto.StoreStatus.node_id)
  return node_id_;
}
inline void StoreStatus::set_node_id(::google::protobuf::int32 value) {
  set_has_node_id();
  node_id_ = value;
  // @@protoc_insertion_point(field_set:cockroach.proto.StoreStatus.node_id)
}

// repeated int64 raft_ids = 3;
inline int StoreStatus::raft_ids_size() const {
  return raft_ids_.size();
}
inline void StoreStatus::clear_raft_ids() {
  raft_ids_.Clear();
}
inline ::google::protobuf::int64 StoreStatus::raft_ids(int index) const {
  // @@protoc_insertion_point(field_get:cockroach.proto.StoreStatus.raft_ids)
  return raft_ids_.Get(index);
}
inline void StoreStatus::set_raft_ids(int index, ::google::protobuf::int64 value) {
  raft_ids_.Set(index, value);
  // @@protoc_insertion_point(field_set:cockroach.proto.StoreStatus.raft_ids)
}
inline void StoreStatus::add_raft_ids(::google::protobuf::int64 value) {
  raft_ids_.Add(value);
  // @@protoc_insertion_point(field_add:cockroach.proto.StoreStatus.raft_ids)
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::int64 >&
StoreStatus::raft_ids() const {
  // @@protoc_insertion_point(field_list:cockroach.proto.StoreStatus.raft_ids)
  return raft_ids_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::int64 >*
StoreStatus::mutable_raft_ids() {
  // @@protoc_insertion_point(field_mutable_list:cockroach.proto.StoreStatus.raft_ids)
  return &raft_ids_;
}

// optional int64 updated_at = 4;
inline bool StoreStatus::has_updated_at() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void StoreStatus::set_has_updated_at() {
  _has_bits_[0] |= 0x00000008u;
}
inline void StoreStatus::clear_has_updated_at() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void StoreStatus::clear_updated_at() {
  updated_at_ = GOOGLE_LONGLONG(0);
  clear_has_updated_at();
}
inline ::google::protobuf::int64 StoreStatus::updated_at() const {
  // @@protoc_insertion_point(field_get:cockroach.proto.StoreStatus.updated_at)
  return updated_at_;
}
inline void StoreStatus::set_updated_at(::google::protobuf::int64 value) {
  set_has_updated_at();
  updated_at_ = value;
  // @@protoc_insertion_point(field_set:cockroach.proto.StoreStatus.updated_at)
}

// optional int64 started_at = 5;
inline bool StoreStatus::has_started_at() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void StoreStatus::set_has_started_at() {
  _has_bits_[0] |= 0x00000010u;
}
inline void StoreStatus::clear_has_started_at() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void StoreStatus::clear_started_at() {
  started_at_ = GOOGLE_LONGLONG(0);
  clear_has_started_at();
}
inline ::google::protobuf::int64 StoreStatus::started_at() const {
  // @@protoc_insertion_point(field_get:cockroach.proto.StoreStatus.started_at)
  return started_at_;
}
inline void StoreStatus::set_started_at(::google::protobuf::int64 value) {
  set_has_started_at();
  started_at_ = value;
  // @@protoc_insertion_point(field_set:cockroach.proto.StoreStatus.started_at)
}

// optional int64 used_bytes = 6;
inline bool StoreStatus::has_used_bytes() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void StoreStatus::set_has_used_bytes() {
  _has_bits_[0] |= 0x00000020u;
}
inline void StoreStatus::clear_has_used_bytes() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void StoreStatus::clear_used_bytes() {
  used_bytes_ = GOOGLE_LONGLONG(0);
  clear_has_used_bytes();
}
inline ::google::protobuf::int64 StoreStatus::used_bytes() const {
  // @@protoc_insertion_point(field_get:cockroach.proto.StoreStatus.used_bytes)
  return used_bytes_;
}
inline void StoreStatus::set_used_bytes(::google::protobuf::int64 value) {
  set_has_used_bytes();
  used_bytes_ = value;
  // @@protoc_insertion_point(field_set:cockroach.proto.StoreStatus.used_bytes)
}

// optional int64 max_bytes = 7;
inline bool StoreStatus::has_max_bytes() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void StoreStatus::set_has_max_bytes() {
  _has_bits_[0] |= 0x00000040u;
}
inline void StoreStatus::clear_has_max_bytes() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void StoreStatus::clear_max_bytes() {
  max_bytes_ = GOOGLE_LONGLONG(0);
  clear_has_max_bytes();
}
inline ::google::protobuf::int64 StoreStatus::max_bytes() const {
  // @@protoc_insertion_point(field_get:cockroach.proto.StoreStatus.max_bytes)
  return max_bytes_;
}
inline void StoreStatus::set_max_bytes(::google::protobuf::int64 value) {
  set_has_max_bytes();
  max_bytes_ = value;
  // @@protoc_insertion_point(field_set:cockroach.proto.StoreStatus.max_bytes)
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace proto
}  // namespace cockroach

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_cockroach_2fproto_2fstatus_2eproto__INCLUDED