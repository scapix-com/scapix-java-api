// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/jdk/internal/classfile/AttributedElement.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_ATTRIBUTE_RECORDCOMPONENTINFO_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_ATTRIBUTE_RECORDCOMPONENTINFO_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::classfile::attribute { class RecordComponentInfo; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::classfile::attribute::RecordComponentInfo>
{
	static constexpr fixed_string class_name = "jdk/internal/classfile/attribute/RecordComponentInfo";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::jdk::internal::classfile::AttributedElement>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_ATTRIBUTE_RECORDCOMPONENTINFO_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_ATTRIBUTE_RECORDCOMPONENTINFO)
#define SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_ATTRIBUTE_RECORDCOMPONENTINFO

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/constant/ClassDesc.h>
#include <scapix/java_api/java/util/List.h>
#include <scapix/java_api/jdk/internal/classfile/Attribute.h>
#include <scapix/java_api/jdk/internal/classfile/constantpool/Utf8Entry.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::classfile::attribute::RecordComponentInfo : public jni::object_base<"jdk/internal/classfile/attribute/RecordComponentInfo",
	java::lang::Object,
	jdk::internal::classfile::AttributedElement>
{
public:

	jni::ref<jdk::internal::classfile::constantpool::Utf8Entry> name() { return call_method<"name", jni::ref<jdk::internal::classfile::constantpool::Utf8Entry>>(); }
	jni::ref<jdk::internal::classfile::constantpool::Utf8Entry> descriptor() { return call_method<"descriptor", jni::ref<jdk::internal::classfile::constantpool::Utf8Entry>>(); }
	jni::ref<java::lang::constant::ClassDesc> descriptorSymbol() { return call_method<"descriptorSymbol", jni::ref<java::lang::constant::ClassDesc>>(); }
	static jni::ref<jdk::internal::classfile::attribute::RecordComponentInfo> of(jni::ref<jdk::internal::classfile::constantpool::Utf8Entry> name, jni::ref<jdk::internal::classfile::constantpool::Utf8Entry> descriptor, jni::ref<java::util::List> attributes) { return call_static_method<"of", jni::ref<jdk::internal::classfile::attribute::RecordComponentInfo>>(name, descriptor, attributes); }
	static jni::ref<jdk::internal::classfile::attribute::RecordComponentInfo> of(jni::ref<jdk::internal::classfile::constantpool::Utf8Entry> name, jni::ref<jdk::internal::classfile::constantpool::Utf8Entry> descriptor, jni::ref<jni::array<jdk::internal::classfile::Attribute>> attributes) { return call_static_method<"of", jni::ref<jdk::internal::classfile::attribute::RecordComponentInfo>>(name, descriptor, attributes); }
	static jni::ref<jdk::internal::classfile::attribute::RecordComponentInfo> of(jni::ref<java::lang::String> name, jni::ref<java::lang::constant::ClassDesc> descriptor, jni::ref<java::util::List> attributes) { return call_static_method<"of", jni::ref<jdk::internal::classfile::attribute::RecordComponentInfo>>(name, descriptor, attributes); }
	static jni::ref<jdk::internal::classfile::attribute::RecordComponentInfo> of(jni::ref<java::lang::String> name, jni::ref<java::lang::constant::ClassDesc> descriptor, jni::ref<jni::array<jdk::internal::classfile::Attribute>> attributes) { return call_static_method<"of", jni::ref<jdk::internal::classfile::attribute::RecordComponentInfo>>(name, descriptor, attributes); }

protected:

	RecordComponentInfo(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_ATTRIBUTE_RECORDCOMPONENTINFO
