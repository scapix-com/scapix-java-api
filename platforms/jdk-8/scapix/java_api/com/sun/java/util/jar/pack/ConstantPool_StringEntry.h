// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/com/sun/java/util/jar/pack/ConstantPool_LiteralEntry.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_JAVA_UTIL_JAR_PACK_CONSTANTPOOL_STRINGENTRY_FWD
#define SCAPIX_JAVA_API_COM_SUN_JAVA_UTIL_JAR_PACK_CONSTANTPOOL_STRINGENTRY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::java::util::jar::pack { class ConstantPool_StringEntry; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::java::util::jar::pack::ConstantPool_StringEntry>
{
	static constexpr fixed_string class_name = "com/sun/java/util/jar/pack/ConstantPool$StringEntry";
	using base_classes = std::tuple<scapix::java_api::com::sun::java::util::jar::pack::ConstantPool_LiteralEntry>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JAVA_UTIL_JAR_PACK_CONSTANTPOOL_STRINGENTRY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_JAVA_UTIL_JAR_PACK_CONSTANTPOOL_STRINGENTRY)
#define SCAPIX_JAVA_API_COM_SUN_JAVA_UTIL_JAR_PACK_CONSTANTPOOL_STRINGENTRY

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/java/util/jar/pack/ConstantPool_Entry.h>
#include <scapix/java_api/java/lang/Comparable.h>
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::java::util::jar::pack::ConstantPool_StringEntry : public jni::object_base<"com/sun/java/util/jar/pack/ConstantPool$StringEntry",
	com::sun::java::util::jar::pack::ConstantPool_LiteralEntry>
{
public:

	jni::ref<com::sun::java::util::jar::pack::ConstantPool_Entry> getRef(jint p1) { return call_method<"getRef", jni::ref<com::sun::java::util::jar::pack::ConstantPool_Entry>>(p1); }
	jboolean equals(jni::ref<java::lang::Object> p1) { return call_method<"equals", jboolean>(p1); }
	jint compareTo(jni::ref<java::lang::Object> p1) { return call_method<"compareTo", jint>(p1); }
	jni::ref<java::lang::Comparable> literalValue() { return call_method<"literalValue", jni::ref<java::lang::Comparable>>(); }
	jni::ref<java::lang::String> stringValue() { return call_method<"stringValue", jni::ref<java::lang::String>>(); }

protected:

	ConstantPool_StringEntry(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JAVA_UTIL_JAR_PACK_CONSTANTPOOL_STRINGENTRY
