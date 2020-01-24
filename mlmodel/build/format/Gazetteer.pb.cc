// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Gazetteer.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "Gazetteer.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/io/zero_copy_stream_impl_lite.h>
// @@protoc_insertion_point(includes)

namespace CoreML {
namespace Specification {
namespace CoreMLModels {
class GazetteerDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<Gazetteer> {
  public:
  const ::CoreML::Specification::StringVector* stringclasslabels_;
} _Gazetteer_default_instance_;

namespace protobuf_Gazetteer_2eproto {

PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::ParseTableField
    const TableStruct::entries[] = {
  {0, 0, 0, ::google::protobuf::internal::kInvalidMask, 0, 0},
};

PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::AuxillaryParseTableField
    const TableStruct::aux[] = {
  ::google::protobuf::internal::AuxillaryParseTableField(),
};
PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::ParseTable const
    TableStruct::schema[] = {
  { NULL, NULL, 0, -1, -1, false },
};


void TableStruct::Shutdown() {
  _Gazetteer_default_instance_.Shutdown();
}

void TableStruct::InitDefaultsImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::internal::InitProtobufDefaults();
  ::CoreML::Specification::protobuf_DataStructures_2eproto::InitDefaults();
  _Gazetteer_default_instance_.DefaultConstruct();
}

void InitDefaults() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &TableStruct::InitDefaultsImpl);
}
void AddDescriptorsImpl() {
  InitDefaults();
  ::CoreML::Specification::protobuf_DataStructures_2eproto::AddDescriptors();
  ::google::protobuf::internal::OnShutdown(&TableStruct::Shutdown);
}

void AddDescriptors() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &AddDescriptorsImpl);
}
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;
#endif  // GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER

}  // namespace protobuf_Gazetteer_2eproto


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Gazetteer::kRevisionFieldNumber;
const int Gazetteer::kLanguageFieldNumber;
const int Gazetteer::kModelParameterDataFieldNumber;
const int Gazetteer::kStringClassLabelsFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Gazetteer::Gazetteer()
  : ::google::protobuf::MessageLite(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_Gazetteer_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:CoreML.Specification.CoreMLModels.Gazetteer)
}
Gazetteer::Gazetteer(const Gazetteer& from)
  : ::google::protobuf::MessageLite(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  language_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.language().size() > 0) {
    language_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.language_);
  }
  modelparameterdata_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.modelparameterdata().size() > 0) {
    modelparameterdata_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.modelparameterdata_);
  }
  revision_ = from.revision_;
  clear_has_ClassLabels();
  switch (from.ClassLabels_case()) {
    case kStringClassLabels: {
      mutable_stringclasslabels()->::CoreML::Specification::StringVector::MergeFrom(from.stringclasslabels());
      break;
    }
    case CLASSLABELS_NOT_SET: {
      break;
    }
  }
  // @@protoc_insertion_point(copy_constructor:CoreML.Specification.CoreMLModels.Gazetteer)
}

void Gazetteer::SharedCtor() {
  language_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  modelparameterdata_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  revision_ = 0u;
  clear_has_ClassLabels();
  _cached_size_ = 0;
}

Gazetteer::~Gazetteer() {
  // @@protoc_insertion_point(destructor:CoreML.Specification.CoreMLModels.Gazetteer)
  SharedDtor();
}

void Gazetteer::SharedDtor() {
  language_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  modelparameterdata_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (has_ClassLabels()) {
    clear_ClassLabels();
  }
}

void Gazetteer::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const Gazetteer& Gazetteer::default_instance() {
  protobuf_Gazetteer_2eproto::InitDefaults();
  return *internal_default_instance();
}

Gazetteer* Gazetteer::New(::google::protobuf::Arena* arena) const {
  Gazetteer* n = new Gazetteer;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void Gazetteer::clear_ClassLabels() {
// @@protoc_insertion_point(one_of_clear_start:CoreML.Specification.CoreMLModels.Gazetteer)
  switch (ClassLabels_case()) {
    case kStringClassLabels: {
      delete ClassLabels_.stringclasslabels_;
      break;
    }
    case CLASSLABELS_NOT_SET: {
      break;
    }
  }
  _oneof_case_[0] = CLASSLABELS_NOT_SET;
}


void Gazetteer::Clear() {
// @@protoc_insertion_point(message_clear_start:CoreML.Specification.CoreMLModels.Gazetteer)
  language_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  modelparameterdata_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  revision_ = 0u;
  clear_ClassLabels();
}

bool Gazetteer::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:CoreML.Specification.CoreMLModels.Gazetteer)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(16383u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // uint32 revision = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &revision_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string language = 10;
      case 10: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(82u)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_language()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->language().data(), this->language().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "CoreML.Specification.CoreMLModels.Gazetteer.language"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // bytes modelParameterData = 100;
      case 100: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(802u)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_modelparameterdata()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .CoreML.Specification.StringVector stringClassLabels = 200;
      case 200: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(1602u)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_stringclasslabels()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:CoreML.Specification.CoreMLModels.Gazetteer)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:CoreML.Specification.CoreMLModels.Gazetteer)
  return false;
#undef DO_
}

void Gazetteer::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:CoreML.Specification.CoreMLModels.Gazetteer)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 revision = 1;
  if (this->revision() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->revision(), output);
  }

  // string language = 10;
  if (this->language().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->language().data(), this->language().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "CoreML.Specification.CoreMLModels.Gazetteer.language");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      10, this->language(), output);
  }

  // bytes modelParameterData = 100;
  if (this->modelparameterdata().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(
      100, this->modelparameterdata(), output);
  }

  // .CoreML.Specification.StringVector stringClassLabels = 200;
  if (has_stringclasslabels()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      200, *ClassLabels_.stringclasslabels_, output);
  }

  // @@protoc_insertion_point(serialize_end:CoreML.Specification.CoreMLModels.Gazetteer)
}

size_t Gazetteer::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:CoreML.Specification.CoreMLModels.Gazetteer)
  size_t total_size = 0;

  // string language = 10;
  if (this->language().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->language());
  }

  // bytes modelParameterData = 100;
  if (this->modelparameterdata().size() > 0) {
    total_size += 2 +
      ::google::protobuf::internal::WireFormatLite::BytesSize(
        this->modelparameterdata());
  }

  // uint32 revision = 1;
  if (this->revision() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->revision());
  }

  switch (ClassLabels_case()) {
    // .CoreML.Specification.StringVector stringClassLabels = 200;
    case kStringClassLabels: {
      total_size += 2 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          *ClassLabels_.stringclasslabels_);
      break;
    }
    case CLASSLABELS_NOT_SET: {
      break;
    }
  }
  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Gazetteer::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const Gazetteer*>(&from));
}

void Gazetteer::MergeFrom(const Gazetteer& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:CoreML.Specification.CoreMLModels.Gazetteer)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.language().size() > 0) {

    language_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.language_);
  }
  if (from.modelparameterdata().size() > 0) {

    modelparameterdata_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.modelparameterdata_);
  }
  if (from.revision() != 0) {
    set_revision(from.revision());
  }
  switch (from.ClassLabels_case()) {
    case kStringClassLabels: {
      mutable_stringclasslabels()->::CoreML::Specification::StringVector::MergeFrom(from.stringclasslabels());
      break;
    }
    case CLASSLABELS_NOT_SET: {
      break;
    }
  }
}

void Gazetteer::CopyFrom(const Gazetteer& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:CoreML.Specification.CoreMLModels.Gazetteer)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Gazetteer::IsInitialized() const {
  return true;
}

void Gazetteer::Swap(Gazetteer* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Gazetteer::InternalSwap(Gazetteer* other) {
  language_.Swap(&other->language_);
  modelparameterdata_.Swap(&other->modelparameterdata_);
  std::swap(revision_, other->revision_);
  std::swap(ClassLabels_, other->ClassLabels_);
  std::swap(_oneof_case_[0], other->_oneof_case_[0]);
  std::swap(_cached_size_, other->_cached_size_);
}

::std::string Gazetteer::GetTypeName() const {
  return "CoreML.Specification.CoreMLModels.Gazetteer";
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// Gazetteer

// uint32 revision = 1;
void Gazetteer::clear_revision() {
  revision_ = 0u;
}
::google::protobuf::uint32 Gazetteer::revision() const {
  // @@protoc_insertion_point(field_get:CoreML.Specification.CoreMLModels.Gazetteer.revision)
  return revision_;
}
void Gazetteer::set_revision(::google::protobuf::uint32 value) {
  
  revision_ = value;
  // @@protoc_insertion_point(field_set:CoreML.Specification.CoreMLModels.Gazetteer.revision)
}

// string language = 10;
void Gazetteer::clear_language() {
  language_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
const ::std::string& Gazetteer::language() const {
  // @@protoc_insertion_point(field_get:CoreML.Specification.CoreMLModels.Gazetteer.language)
  return language_.GetNoArena();
}
void Gazetteer::set_language(const ::std::string& value) {
  
  language_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:CoreML.Specification.CoreMLModels.Gazetteer.language)
}
#if LANG_CXX11
void Gazetteer::set_language(::std::string&& value) {
  
  language_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:CoreML.Specification.CoreMLModels.Gazetteer.language)
}
#endif
void Gazetteer::set_language(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  language_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:CoreML.Specification.CoreMLModels.Gazetteer.language)
}
void Gazetteer::set_language(const char* value, size_t size) {
  
  language_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:CoreML.Specification.CoreMLModels.Gazetteer.language)
}
::std::string* Gazetteer::mutable_language() {
  
  // @@protoc_insertion_point(field_mutable:CoreML.Specification.CoreMLModels.Gazetteer.language)
  return language_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* Gazetteer::release_language() {
  // @@protoc_insertion_point(field_release:CoreML.Specification.CoreMLModels.Gazetteer.language)
  
  return language_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void Gazetteer::set_allocated_language(::std::string* language) {
  if (language != NULL) {
    
  } else {
    
  }
  language_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), language);
  // @@protoc_insertion_point(field_set_allocated:CoreML.Specification.CoreMLModels.Gazetteer.language)
}

// bytes modelParameterData = 100;
void Gazetteer::clear_modelparameterdata() {
  modelparameterdata_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
const ::std::string& Gazetteer::modelparameterdata() const {
  // @@protoc_insertion_point(field_get:CoreML.Specification.CoreMLModels.Gazetteer.modelParameterData)
  return modelparameterdata_.GetNoArena();
}
void Gazetteer::set_modelparameterdata(const ::std::string& value) {
  
  modelparameterdata_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:CoreML.Specification.CoreMLModels.Gazetteer.modelParameterData)
}
#if LANG_CXX11
void Gazetteer::set_modelparameterdata(::std::string&& value) {
  
  modelparameterdata_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:CoreML.Specification.CoreMLModels.Gazetteer.modelParameterData)
}
#endif
void Gazetteer::set_modelparameterdata(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  modelparameterdata_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:CoreML.Specification.CoreMLModels.Gazetteer.modelParameterData)
}
void Gazetteer::set_modelparameterdata(const void* value, size_t size) {
  
  modelparameterdata_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:CoreML.Specification.CoreMLModels.Gazetteer.modelParameterData)
}
::std::string* Gazetteer::mutable_modelparameterdata() {
  
  // @@protoc_insertion_point(field_mutable:CoreML.Specification.CoreMLModels.Gazetteer.modelParameterData)
  return modelparameterdata_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* Gazetteer::release_modelparameterdata() {
  // @@protoc_insertion_point(field_release:CoreML.Specification.CoreMLModels.Gazetteer.modelParameterData)
  
  return modelparameterdata_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void Gazetteer::set_allocated_modelparameterdata(::std::string* modelparameterdata) {
  if (modelparameterdata != NULL) {
    
  } else {
    
  }
  modelparameterdata_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), modelparameterdata);
  // @@protoc_insertion_point(field_set_allocated:CoreML.Specification.CoreMLModels.Gazetteer.modelParameterData)
}

// .CoreML.Specification.StringVector stringClassLabels = 200;
bool Gazetteer::has_stringclasslabels() const {
  return ClassLabels_case() == kStringClassLabels;
}
void Gazetteer::set_has_stringclasslabels() {
  _oneof_case_[0] = kStringClassLabels;
}
void Gazetteer::clear_stringclasslabels() {
  if (has_stringclasslabels()) {
    delete ClassLabels_.stringclasslabels_;
    clear_has_ClassLabels();
  }
}
 const ::CoreML::Specification::StringVector& Gazetteer::stringclasslabels() const {
  // @@protoc_insertion_point(field_get:CoreML.Specification.CoreMLModels.Gazetteer.stringClassLabels)
  return has_stringclasslabels()
      ? *ClassLabels_.stringclasslabels_
      : ::CoreML::Specification::StringVector::default_instance();
}
::CoreML::Specification::StringVector* Gazetteer::mutable_stringclasslabels() {
  if (!has_stringclasslabels()) {
    clear_ClassLabels();
    set_has_stringclasslabels();
    ClassLabels_.stringclasslabels_ = new ::CoreML::Specification::StringVector;
  }
  // @@protoc_insertion_point(field_mutable:CoreML.Specification.CoreMLModels.Gazetteer.stringClassLabels)
  return ClassLabels_.stringclasslabels_;
}
::CoreML::Specification::StringVector* Gazetteer::release_stringclasslabels() {
  // @@protoc_insertion_point(field_release:CoreML.Specification.CoreMLModels.Gazetteer.stringClassLabels)
  if (has_stringclasslabels()) {
    clear_has_ClassLabels();
    ::CoreML::Specification::StringVector* temp = ClassLabels_.stringclasslabels_;
    ClassLabels_.stringclasslabels_ = NULL;
    return temp;
  } else {
    return NULL;
  }
}
void Gazetteer::set_allocated_stringclasslabels(::CoreML::Specification::StringVector* stringclasslabels) {
  clear_ClassLabels();
  if (stringclasslabels) {
    set_has_stringclasslabels();
    ClassLabels_.stringclasslabels_ = stringclasslabels;
  }
  // @@protoc_insertion_point(field_set_allocated:CoreML.Specification.CoreMLModels.Gazetteer.stringClassLabels)
}

bool Gazetteer::has_ClassLabels() const {
  return ClassLabels_case() != CLASSLABELS_NOT_SET;
}
void Gazetteer::clear_has_ClassLabels() {
  _oneof_case_[0] = CLASSLABELS_NOT_SET;
}
Gazetteer::ClassLabelsCase Gazetteer::ClassLabels_case() const {
  return Gazetteer::ClassLabelsCase(_oneof_case_[0]);
}
#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace CoreMLModels
}  // namespace Specification
}  // namespace CoreML

// @@protoc_insertion_point(global_scope)
