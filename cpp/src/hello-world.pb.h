// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: hello-world.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_hello_2dworld_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_hello_2dworld_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3021000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3021012 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_hello_2dworld_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_hello_2dworld_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_hello_2dworld_2eproto;
namespace cpp {
class HelloReply;
struct HelloReplyDefaultTypeInternal;
extern HelloReplyDefaultTypeInternal _HelloReply_default_instance_;
class HelloWorld;
struct HelloWorldDefaultTypeInternal;
extern HelloWorldDefaultTypeInternal _HelloWorld_default_instance_;
}  // namespace cpp
PROTOBUF_NAMESPACE_OPEN
template<> ::cpp::HelloReply* Arena::CreateMaybeMessage<::cpp::HelloReply>(Arena*);
template<> ::cpp::HelloWorld* Arena::CreateMaybeMessage<::cpp::HelloWorld>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace cpp {

// ===================================================================

class HelloWorld final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:cpp.HelloWorld) */ {
 public:
  inline HelloWorld() : HelloWorld(nullptr) {}
  ~HelloWorld() override;
  explicit PROTOBUF_CONSTEXPR HelloWorld(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  HelloWorld(const HelloWorld& from);
  HelloWorld(HelloWorld&& from) noexcept
    : HelloWorld() {
    *this = ::std::move(from);
  }

  inline HelloWorld& operator=(const HelloWorld& from) {
    CopyFrom(from);
    return *this;
  }
  inline HelloWorld& operator=(HelloWorld&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance);
  }
  inline ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const HelloWorld& default_instance() {
    return *internal_default_instance();
  }
  static inline const HelloWorld* internal_default_instance() {
    return reinterpret_cast<const HelloWorld*>(
               &_HelloWorld_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(HelloWorld& a, HelloWorld& b) {
    a.Swap(&b);
  }
  inline void Swap(HelloWorld* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(HelloWorld* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  HelloWorld* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<HelloWorld>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const HelloWorld& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const HelloWorld& from) {
    HelloWorld::MergeImpl(*this, from);
  }
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::PROTOBUF_NAMESPACE_ID::Arena* arena, bool is_message_owned);
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(HelloWorld* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "cpp.HelloWorld";
  }
  protected:
  explicit HelloWorld(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kLastNamesFieldNumber = 2,
    kNameFieldNumber = 1,
    kTimestampFieldNumber = 3,
  };
  // repeated string last_names = 2;
  int last_names_size() const;
  private:
  int _internal_last_names_size() const;
  public:
  void clear_last_names();
  const std::string& last_names(int index) const;
  std::string* mutable_last_names(int index);
  void set_last_names(int index, const std::string& value);
  void set_last_names(int index, std::string&& value);
  void set_last_names(int index, const char* value);
  void set_last_names(int index, const char* value, size_t size);
  std::string* add_last_names();
  void add_last_names(const std::string& value);
  void add_last_names(std::string&& value);
  void add_last_names(const char* value);
  void add_last_names(const char* value, size_t size);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>& last_names() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>* mutable_last_names();
  private:
  const std::string& _internal_last_names(int index) const;
  std::string* _internal_add_last_names();
  public:

  // required string name = 1;
  bool has_name() const;
  private:
  bool _internal_has_name() const;
  public:
  void clear_name();
  const std::string& name() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_name(ArgT0&& arg0, ArgT... args);
  std::string* mutable_name();
  PROTOBUF_NODISCARD std::string* release_name();
  void set_allocated_name(std::string* name);
  private:
  const std::string& _internal_name() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_name(const std::string& value);
  std::string* _internal_mutable_name();
  public:

  // optional int32 timestamp = 3;
  bool has_timestamp() const;
  private:
  bool _internal_has_timestamp() const;
  public:
  void clear_timestamp();
  int32_t timestamp() const;
  void set_timestamp(int32_t value);
  private:
  int32_t _internal_timestamp() const;
  void _internal_set_timestamp(int32_t value);
  public:

  // @@protoc_insertion_point(class_scope:cpp.HelloWorld)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
    ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string> last_names_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr name_;
    int32_t timestamp_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_hello_2dworld_2eproto;
};
// -------------------------------------------------------------------

class HelloReply final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:cpp.HelloReply) */ {
 public:
  inline HelloReply() : HelloReply(nullptr) {}
  ~HelloReply() override;
  explicit PROTOBUF_CONSTEXPR HelloReply(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  HelloReply(const HelloReply& from);
  HelloReply(HelloReply&& from) noexcept
    : HelloReply() {
    *this = ::std::move(from);
  }

  inline HelloReply& operator=(const HelloReply& from) {
    CopyFrom(from);
    return *this;
  }
  inline HelloReply& operator=(HelloReply&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance);
  }
  inline ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const HelloReply& default_instance() {
    return *internal_default_instance();
  }
  static inline const HelloReply* internal_default_instance() {
    return reinterpret_cast<const HelloReply*>(
               &_HelloReply_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(HelloReply& a, HelloReply& b) {
    a.Swap(&b);
  }
  inline void Swap(HelloReply* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(HelloReply* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  HelloReply* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<HelloReply>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const HelloReply& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const HelloReply& from) {
    HelloReply::MergeImpl(*this, from);
  }
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::PROTOBUF_NAMESPACE_ID::Arena* arena, bool is_message_owned);
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(HelloReply* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "cpp.HelloReply";
  }
  protected:
  explicit HelloReply(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kResponseFieldNumber = 1,
    kTimestampFieldNumber = 2,
  };
  // required string response = 1;
  bool has_response() const;
  private:
  bool _internal_has_response() const;
  public:
  void clear_response();
  const std::string& response() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_response(ArgT0&& arg0, ArgT... args);
  std::string* mutable_response();
  PROTOBUF_NODISCARD std::string* release_response();
  void set_allocated_response(std::string* response);
  private:
  const std::string& _internal_response() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_response(const std::string& value);
  std::string* _internal_mutable_response();
  public:

  // optional int32 timestamp = 2;
  bool has_timestamp() const;
  private:
  bool _internal_has_timestamp() const;
  public:
  void clear_timestamp();
  int32_t timestamp() const;
  void set_timestamp(int32_t value);
  private:
  int32_t _internal_timestamp() const;
  void _internal_set_timestamp(int32_t value);
  public:

  // @@protoc_insertion_point(class_scope:cpp.HelloReply)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr response_;
    int32_t timestamp_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_hello_2dworld_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// HelloWorld

// required string name = 1;
inline bool HelloWorld::_internal_has_name() const {
  bool value = (_impl_._has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool HelloWorld::has_name() const {
  return _internal_has_name();
}
inline void HelloWorld::clear_name() {
  _impl_.name_.ClearToEmpty();
  _impl_._has_bits_[0] &= ~0x00000001u;
}
inline const std::string& HelloWorld::name() const {
  // @@protoc_insertion_point(field_get:cpp.HelloWorld.name)
  return _internal_name();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void HelloWorld::set_name(ArgT0&& arg0, ArgT... args) {
 _impl_._has_bits_[0] |= 0x00000001u;
 _impl_.name_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:cpp.HelloWorld.name)
}
inline std::string* HelloWorld::mutable_name() {
  std::string* _s = _internal_mutable_name();
  // @@protoc_insertion_point(field_mutable:cpp.HelloWorld.name)
  return _s;
}
inline const std::string& HelloWorld::_internal_name() const {
  return _impl_.name_.Get();
}
inline void HelloWorld::_internal_set_name(const std::string& value) {
  _impl_._has_bits_[0] |= 0x00000001u;
  _impl_.name_.Set(value, GetArenaForAllocation());
}
inline std::string* HelloWorld::_internal_mutable_name() {
  _impl_._has_bits_[0] |= 0x00000001u;
  return _impl_.name_.Mutable(GetArenaForAllocation());
}
inline std::string* HelloWorld::release_name() {
  // @@protoc_insertion_point(field_release:cpp.HelloWorld.name)
  if (!_internal_has_name()) {
    return nullptr;
  }
  _impl_._has_bits_[0] &= ~0x00000001u;
  auto* p = _impl_.name_.Release();
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.name_.IsDefault()) {
    _impl_.name_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  return p;
}
inline void HelloWorld::set_allocated_name(std::string* name) {
  if (name != nullptr) {
    _impl_._has_bits_[0] |= 0x00000001u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000001u;
  }
  _impl_.name_.SetAllocated(name, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.name_.IsDefault()) {
    _impl_.name_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:cpp.HelloWorld.name)
}

// repeated string last_names = 2;
inline int HelloWorld::_internal_last_names_size() const {
  return _impl_.last_names_.size();
}
inline int HelloWorld::last_names_size() const {
  return _internal_last_names_size();
}
inline void HelloWorld::clear_last_names() {
  _impl_.last_names_.Clear();
}
inline std::string* HelloWorld::add_last_names() {
  std::string* _s = _internal_add_last_names();
  // @@protoc_insertion_point(field_add_mutable:cpp.HelloWorld.last_names)
  return _s;
}
inline const std::string& HelloWorld::_internal_last_names(int index) const {
  return _impl_.last_names_.Get(index);
}
inline const std::string& HelloWorld::last_names(int index) const {
  // @@protoc_insertion_point(field_get:cpp.HelloWorld.last_names)
  return _internal_last_names(index);
}
inline std::string* HelloWorld::mutable_last_names(int index) {
  // @@protoc_insertion_point(field_mutable:cpp.HelloWorld.last_names)
  return _impl_.last_names_.Mutable(index);
}
inline void HelloWorld::set_last_names(int index, const std::string& value) {
  _impl_.last_names_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set:cpp.HelloWorld.last_names)
}
inline void HelloWorld::set_last_names(int index, std::string&& value) {
  _impl_.last_names_.Mutable(index)->assign(std::move(value));
  // @@protoc_insertion_point(field_set:cpp.HelloWorld.last_names)
}
inline void HelloWorld::set_last_names(int index, const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  _impl_.last_names_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:cpp.HelloWorld.last_names)
}
inline void HelloWorld::set_last_names(int index, const char* value, size_t size) {
  _impl_.last_names_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:cpp.HelloWorld.last_names)
}
inline std::string* HelloWorld::_internal_add_last_names() {
  return _impl_.last_names_.Add();
}
inline void HelloWorld::add_last_names(const std::string& value) {
  _impl_.last_names_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:cpp.HelloWorld.last_names)
}
inline void HelloWorld::add_last_names(std::string&& value) {
  _impl_.last_names_.Add(std::move(value));
  // @@protoc_insertion_point(field_add:cpp.HelloWorld.last_names)
}
inline void HelloWorld::add_last_names(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  _impl_.last_names_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:cpp.HelloWorld.last_names)
}
inline void HelloWorld::add_last_names(const char* value, size_t size) {
  _impl_.last_names_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:cpp.HelloWorld.last_names)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>&
HelloWorld::last_names() const {
  // @@protoc_insertion_point(field_list:cpp.HelloWorld.last_names)
  return _impl_.last_names_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>*
HelloWorld::mutable_last_names() {
  // @@protoc_insertion_point(field_mutable_list:cpp.HelloWorld.last_names)
  return &_impl_.last_names_;
}

// optional int32 timestamp = 3;
inline bool HelloWorld::_internal_has_timestamp() const {
  bool value = (_impl_._has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline bool HelloWorld::has_timestamp() const {
  return _internal_has_timestamp();
}
inline void HelloWorld::clear_timestamp() {
  _impl_.timestamp_ = 0;
  _impl_._has_bits_[0] &= ~0x00000002u;
}
inline int32_t HelloWorld::_internal_timestamp() const {
  return _impl_.timestamp_;
}
inline int32_t HelloWorld::timestamp() const {
  // @@protoc_insertion_point(field_get:cpp.HelloWorld.timestamp)
  return _internal_timestamp();
}
inline void HelloWorld::_internal_set_timestamp(int32_t value) {
  _impl_._has_bits_[0] |= 0x00000002u;
  _impl_.timestamp_ = value;
}
inline void HelloWorld::set_timestamp(int32_t value) {
  _internal_set_timestamp(value);
  // @@protoc_insertion_point(field_set:cpp.HelloWorld.timestamp)
}

// -------------------------------------------------------------------

// HelloReply

// required string response = 1;
inline bool HelloReply::_internal_has_response() const {
  bool value = (_impl_._has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool HelloReply::has_response() const {
  return _internal_has_response();
}
inline void HelloReply::clear_response() {
  _impl_.response_.ClearToEmpty();
  _impl_._has_bits_[0] &= ~0x00000001u;
}
inline const std::string& HelloReply::response() const {
  // @@protoc_insertion_point(field_get:cpp.HelloReply.response)
  return _internal_response();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void HelloReply::set_response(ArgT0&& arg0, ArgT... args) {
 _impl_._has_bits_[0] |= 0x00000001u;
 _impl_.response_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:cpp.HelloReply.response)
}
inline std::string* HelloReply::mutable_response() {
  std::string* _s = _internal_mutable_response();
  // @@protoc_insertion_point(field_mutable:cpp.HelloReply.response)
  return _s;
}
inline const std::string& HelloReply::_internal_response() const {
  return _impl_.response_.Get();
}
inline void HelloReply::_internal_set_response(const std::string& value) {
  _impl_._has_bits_[0] |= 0x00000001u;
  _impl_.response_.Set(value, GetArenaForAllocation());
}
inline std::string* HelloReply::_internal_mutable_response() {
  _impl_._has_bits_[0] |= 0x00000001u;
  return _impl_.response_.Mutable(GetArenaForAllocation());
}
inline std::string* HelloReply::release_response() {
  // @@protoc_insertion_point(field_release:cpp.HelloReply.response)
  if (!_internal_has_response()) {
    return nullptr;
  }
  _impl_._has_bits_[0] &= ~0x00000001u;
  auto* p = _impl_.response_.Release();
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.response_.IsDefault()) {
    _impl_.response_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  return p;
}
inline void HelloReply::set_allocated_response(std::string* response) {
  if (response != nullptr) {
    _impl_._has_bits_[0] |= 0x00000001u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000001u;
  }
  _impl_.response_.SetAllocated(response, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.response_.IsDefault()) {
    _impl_.response_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:cpp.HelloReply.response)
}

// optional int32 timestamp = 2;
inline bool HelloReply::_internal_has_timestamp() const {
  bool value = (_impl_._has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline bool HelloReply::has_timestamp() const {
  return _internal_has_timestamp();
}
inline void HelloReply::clear_timestamp() {
  _impl_.timestamp_ = 0;
  _impl_._has_bits_[0] &= ~0x00000002u;
}
inline int32_t HelloReply::_internal_timestamp() const {
  return _impl_.timestamp_;
}
inline int32_t HelloReply::timestamp() const {
  // @@protoc_insertion_point(field_get:cpp.HelloReply.timestamp)
  return _internal_timestamp();
}
inline void HelloReply::_internal_set_timestamp(int32_t value) {
  _impl_._has_bits_[0] |= 0x00000002u;
  _impl_.timestamp_ = value;
}
inline void HelloReply::set_timestamp(int32_t value) {
  _internal_set_timestamp(value);
  // @@protoc_insertion_point(field_set:cpp.HelloReply.timestamp)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace cpp

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_hello_2dworld_2eproto
