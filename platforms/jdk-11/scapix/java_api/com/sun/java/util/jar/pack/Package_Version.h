// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_JAVA_UTIL_JAR_PACK_PACKAGE_VERSION_FWD
#define SCAPIX_JAVA_API_COM_SUN_JAVA_UTIL_JAR_PACK_PACKAGE_VERSION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::java::util::jar::pack { class Package_Version; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::java::util::jar::pack::Package_Version>
{
	static constexpr fixed_string class_name = "com/sun/java/util/jar/pack/Package$Version";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JAVA_UTIL_JAR_PACK_PACKAGE_VERSION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_JAVA_UTIL_JAR_PACK_PACKAGE_VERSION)
#define SCAPIX_JAVA_API_COM_SUN_JAVA_UTIL_JAR_PACK_PACKAGE_VERSION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/java/util/jar/pack/PropMap.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::java::util::jar::pack::Package_Version : public jni::object_base<"com/sun/java/util/jar/pack/Package$Version",
	java::lang::Object>
{
public:

	jshort major() { return get_field<"major", jshort>(); }
	jshort minor() { return get_field<"minor", jshort>(); }

	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jboolean equals(jni::ref<java::lang::Object> that) { return call_method<"equals", jboolean>(that); }
	jint intValue() { return call_method<"intValue", jint>(); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	static jni::ref<com::sun::java::util::jar::pack::Package_Version> of(jint major, jint minor) { return call_static_method<"of", jni::ref<com::sun::java::util::jar::pack::Package_Version>>(major, minor); }
	static jni::ref<com::sun::java::util::jar::pack::Package_Version> of(jni::ref<jni::array<jbyte>> bytes) { return call_static_method<"of", jni::ref<com::sun::java::util::jar::pack::Package_Version>>(bytes); }
	static jni::ref<com::sun::java::util::jar::pack::Package_Version> of(jint major_minor) { return call_static_method<"of", jni::ref<com::sun::java::util::jar::pack::Package_Version>>(major_minor); }
	static jni::ref<com::sun::java::util::jar::pack::Package_Version> makeVersion(jni::ref<com::sun::java::util::jar::pack::PropMap> props, jni::ref<java::lang::String> partialKey) { return call_static_method<"makeVersion", jni::ref<com::sun::java::util::jar::pack::Package_Version>>(props, partialKey); }
	jni::ref<jni::array<jbyte>> asBytes() { return call_method<"asBytes", jni::ref<jni::array<jbyte>>>(); }
	jint compareTo(jni::ref<com::sun::java::util::jar::pack::Package_Version> that) { return call_method<"compareTo", jint>(that); }
	jboolean lessThan(jni::ref<com::sun::java::util::jar::pack::Package_Version> that) { return call_method<"lessThan", jboolean>(that); }
	jboolean greaterThan(jni::ref<com::sun::java::util::jar::pack::Package_Version> that) { return call_method<"greaterThan", jboolean>(that); }

protected:

	Package_Version(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JAVA_UTIL_JAR_PACK_PACKAGE_VERSION
