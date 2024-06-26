// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/jdk/internal/classfile/WritableElement.h>
#include <scapix/java_api/jdk/internal/classfile/CompoundElement.h>
#include <scapix/java_api/jdk/internal/classfile/AttributedElement.h>
#include <scapix/java_api/jdk/internal/classfile/ClassElement.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_FIELDMODEL_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_FIELDMODEL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::classfile { class FieldModel; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::classfile::FieldModel>
{
	static constexpr fixed_string class_name = "jdk/internal/classfile/FieldModel";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::jdk::internal::classfile::WritableElement, scapix::java_api::jdk::internal::classfile::CompoundElement, scapix::java_api::jdk::internal::classfile::AttributedElement, scapix::java_api::jdk::internal::classfile::ClassElement>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_FIELDMODEL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_FIELDMODEL)
#define SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_FIELDMODEL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/constant/ClassDesc.h>
#include <scapix/java_api/java/util/Optional.h>
#include <scapix/java_api/jdk/internal/classfile/AccessFlags.h>
#include <scapix/java_api/jdk/internal/classfile/constantpool/Utf8Entry.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::classfile::FieldModel : public jni::object_base<"jdk/internal/classfile/FieldModel",
	java::lang::Object,
	jdk::internal::classfile::WritableElement,
	jdk::internal::classfile::CompoundElement,
	jdk::internal::classfile::AttributedElement,
	jdk::internal::classfile::ClassElement>
{
public:

	jni::ref<jdk::internal::classfile::AccessFlags> flags() { return call_method<"flags", jni::ref<jdk::internal::classfile::AccessFlags>>(); }
	jni::ref<java::util::Optional> parent() { return call_method<"parent", jni::ref<java::util::Optional>>(); }
	jni::ref<jdk::internal::classfile::constantpool::Utf8Entry> fieldName() { return call_method<"fieldName", jni::ref<jdk::internal::classfile::constantpool::Utf8Entry>>(); }
	jni::ref<jdk::internal::classfile::constantpool::Utf8Entry> fieldType() { return call_method<"fieldType", jni::ref<jdk::internal::classfile::constantpool::Utf8Entry>>(); }
	jni::ref<java::lang::constant::ClassDesc> fieldTypeSymbol() { return call_method<"fieldTypeSymbol", jni::ref<java::lang::constant::ClassDesc>>(); }

protected:

	FieldModel(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_FIELDMODEL
