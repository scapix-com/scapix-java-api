// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/CharSequence.h>
#include <scapix/java_api/java/lang/classfile/constantpool/AnnotationConstantValueEntry.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_CONSTANTPOOL_UTF8ENTRY_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_CONSTANTPOOL_UTF8ENTRY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang::classfile::constantpool { class Utf8Entry; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::classfile::constantpool::Utf8Entry>
{
	static constexpr fixed_string class_name = "java/lang/classfile/constantpool/Utf8Entry";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::lang::CharSequence, scapix::java_api::java::lang::classfile::constantpool::AnnotationConstantValueEntry>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_CONSTANTPOOL_UTF8ENTRY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_CONSTANTPOOL_UTF8ENTRY)
#define SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_CONSTANTPOOL_UTF8ENTRY

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::lang::classfile::constantpool::Utf8Entry : public jni::object_base<"java/lang/classfile/constantpool/Utf8Entry",
	java::lang::Object,
	java::lang::CharSequence,
	java::lang::classfile::constantpool::AnnotationConstantValueEntry>
{
public:

	jni::ref<java::lang::String> stringValue() { return call_method<"stringValue", jni::ref<java::lang::String>>(); }
	jboolean equalsString(jni::ref<java::lang::String> p1) { return call_method<"equalsString", jboolean>(p1); }

protected:

	Utf8Entry(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_CONSTANTPOOL_UTF8ENTRY
