// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/com/sun/java/util/jar/pack/ConstantPool_Entry.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_JAVA_UTIL_JAR_PACK_CLASSREADER_UNRESOLVEDENTRY_FWD
#define SCAPIX_JAVA_API_COM_SUN_JAVA_UTIL_JAR_PACK_CLASSREADER_UNRESOLVEDENTRY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::java::util::jar::pack { class ClassReader_UnresolvedEntry; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::java::util::jar::pack::ClassReader_UnresolvedEntry>
{
	static constexpr fixed_string class_name = "com/sun/java/util/jar/pack/ClassReader$UnresolvedEntry";
	using base_classes = std::tuple<scapix::java_api::com::sun::java::util::jar::pack::ConstantPool_Entry>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JAVA_UTIL_JAR_PACK_CLASSREADER_UNRESOLVEDENTRY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_JAVA_UTIL_JAR_PACK_CLASSREADER_UNRESOLVEDENTRY)
#define SCAPIX_JAVA_API_COM_SUN_JAVA_UTIL_JAR_PACK_CLASSREADER_UNRESOLVEDENTRY

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class com::sun::java::util::jar::pack::ClassReader_UnresolvedEntry : public jni::object_base<"com/sun/java/util/jar/pack/ClassReader$UnresolvedEntry",
	com::sun::java::util::jar::pack::ConstantPool_Entry>
{
public:

	jint compareTo(jni::ref<java::lang::Object> x) { return call_method<"compareTo", jint>(x); }
	jboolean equals(jni::ref<java::lang::Object> x) { return call_method<"equals", jboolean>(x); }
	jni::ref<java::lang::String> stringValue() { return call_method<"stringValue", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	ClassReader_UnresolvedEntry(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JAVA_UTIL_JAR_PACK_CLASSREADER_UNRESOLVEDENTRY
