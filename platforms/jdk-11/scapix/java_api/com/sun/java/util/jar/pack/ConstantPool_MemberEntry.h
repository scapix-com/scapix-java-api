// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/com/sun/java/util/jar/pack/ConstantPool_Entry.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_JAVA_UTIL_JAR_PACK_CONSTANTPOOL_MEMBERENTRY_FWD
#define SCAPIX_JAVA_API_COM_SUN_JAVA_UTIL_JAR_PACK_CONSTANTPOOL_MEMBERENTRY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::java::util::jar::pack { class ConstantPool_MemberEntry; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::java::util::jar::pack::ConstantPool_MemberEntry>
{
	static constexpr fixed_string class_name = "com/sun/java/util/jar/pack/ConstantPool$MemberEntry";
	using base_classes = std::tuple<scapix::java_api::com::sun::java::util::jar::pack::ConstantPool_Entry>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JAVA_UTIL_JAR_PACK_CONSTANTPOOL_MEMBERENTRY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_JAVA_UTIL_JAR_PACK_CONSTANTPOOL_MEMBERENTRY)
#define SCAPIX_JAVA_API_COM_SUN_JAVA_UTIL_JAR_PACK_CONSTANTPOOL_MEMBERENTRY

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::java::util::jar::pack::ConstantPool_MemberEntry : public jni::object_base<"com/sun/java/util/jar/pack/ConstantPool$MemberEntry",
	com::sun::java::util::jar::pack::ConstantPool_Entry>
{
public:

	jni::ref<com::sun::java::util::jar::pack::ConstantPool_Entry> getRef(jint i) { return call_method<"getRef", jni::ref<com::sun::java::util::jar::pack::ConstantPool_Entry>>(i); }
	jboolean equals(jni::ref<java::lang::Object> o) { return call_method<"equals", jboolean>(o); }
	jint compareTo(jni::ref<java::lang::Object> o) { return call_method<"compareTo", jint>(o); }
	jni::ref<java::lang::String> stringValue() { return call_method<"stringValue", jni::ref<java::lang::String>>(); }
	jboolean isMethod() { return call_method<"isMethod", jboolean>(); }

protected:

	ConstantPool_MemberEntry(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JAVA_UTIL_JAR_PACK_CONSTANTPOOL_MEMBERENTRY
