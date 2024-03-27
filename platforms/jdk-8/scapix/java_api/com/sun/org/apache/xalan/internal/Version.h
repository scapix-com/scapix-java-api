// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_VERSION_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_VERSION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::xalan::internal { class Version; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::xalan::internal::Version>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/xalan/internal/Version";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_VERSION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_VERSION)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_VERSION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::org::apache::xalan::internal::Version : public jni::object_base<"com/sun/org/apache/xalan/internal/Version",
	java::lang::Object>
{
public:

	static jni::ref<com::sun::org::apache::xalan::internal::Version> new_object() { return base_::new_object(); }
	static jni::ref<java::lang::String> getVersion() { return call_static_method<"getVersion", jni::ref<java::lang::String>>(); }
	static void _main(jni::ref<jni::array<java::lang::String>> p1) { return call_static_method<"_main", void>(p1); }
	static jni::ref<java::lang::String> getProduct() { return call_static_method<"getProduct", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> getImplementationLanguage() { return call_static_method<"getImplementationLanguage", jni::ref<java::lang::String>>(); }
	static jint getMajorVersionNum() { return call_static_method<"getMajorVersionNum", jint>(); }
	static jint getReleaseVersionNum() { return call_static_method<"getReleaseVersionNum", jint>(); }
	static jint getMaintenanceVersionNum() { return call_static_method<"getMaintenanceVersionNum", jint>(); }
	static jint getDevelopmentVersionNum() { return call_static_method<"getDevelopmentVersionNum", jint>(); }

protected:

	Version(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_VERSION
