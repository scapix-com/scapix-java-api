// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/javax/naming/NamingEnumeration.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_NAMING_INTERNAL_VERSIONHELPER12_INPUTSTREAMENUMERATION_FWD
#define SCAPIX_JAVA_API_COM_SUN_NAMING_INTERNAL_VERSIONHELPER12_INPUTSTREAMENUMERATION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::naming::internal { class VersionHelper12_InputStreamEnumeration; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::naming::internal::VersionHelper12_InputStreamEnumeration>
{
	static constexpr fixed_string class_name = "com/sun/naming/internal/VersionHelper12$InputStreamEnumeration";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::javax::naming::NamingEnumeration>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_NAMING_INTERNAL_VERSIONHELPER12_INPUTSTREAMENUMERATION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_NAMING_INTERNAL_VERSIONHELPER12_INPUTSTREAMENUMERATION)
#define SCAPIX_JAVA_API_COM_SUN_NAMING_INTERNAL_VERSIONHELPER12_INPUTSTREAMENUMERATION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/io/InputStream.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class com::sun::naming::internal::VersionHelper12_InputStreamEnumeration : public jni::object_base<"com/sun/naming/internal/VersionHelper12$InputStreamEnumeration",
	java::lang::Object,
	javax::naming::NamingEnumeration>
{
public:

	jboolean hasMore() { return call_method<"hasMore", jboolean>(); }
	jboolean hasMoreElements() { return call_method<"hasMoreElements", jboolean>(); }
	jni::ref<java::io::InputStream> next() { return call_method<"next", jni::ref<java::io::InputStream>>(); }
	jni::ref<java::io::InputStream> nextElement() { return call_method<"nextElement", jni::ref<java::io::InputStream>>(); }
	void close() { return call_method<"close", void>(); }

protected:

	VersionHelper12_InputStreamEnumeration(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_NAMING_INTERNAL_VERSIONHELPER12_INPUTSTREAMENUMERATION
