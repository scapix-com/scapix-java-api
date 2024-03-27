// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_UTIL_STATICPROPERTY_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_UTIL_STATICPROPERTY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::util { class StaticProperty; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::util::StaticProperty>
{
	static constexpr fixed_string class_name = "jdk/internal/util/StaticProperty";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_UTIL_STATICPROPERTY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_UTIL_STATICPROPERTY)
#define SCAPIX_JAVA_API_JDK_INTERNAL_UTIL_STATICPROPERTY

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::util::StaticProperty : public jni::object_base<"jdk/internal/util/StaticProperty",
	java::lang::Object>
{
public:

	static jni::ref<java::lang::String> javaHome() { return call_static_method<"javaHome", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> userHome() { return call_static_method<"userHome", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> userDir() { return call_static_method<"userDir", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> userName() { return call_static_method<"userName", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> javaLibraryPath() { return call_static_method<"javaLibraryPath", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> javaIoTmpDir() { return call_static_method<"javaIoTmpDir", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> sunBootLibraryPath() { return call_static_method<"sunBootLibraryPath", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> jdkSerialFilter() { return call_static_method<"jdkSerialFilter", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> jdkSerialFilterFactory() { return call_static_method<"jdkSerialFilterFactory", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> nativeEncoding() { return call_static_method<"nativeEncoding", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> fileEncoding() { return call_static_method<"fileEncoding", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> javaPropertiesDate() { return call_static_method<"javaPropertiesDate", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> jnuEncoding() { return call_static_method<"jnuEncoding", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> javaLocaleUseOldISOCodes() { return call_static_method<"javaLocaleUseOldISOCodes", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> osName() { return call_static_method<"osName", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> osArch() { return call_static_method<"osArch", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> osVersion() { return call_static_method<"osVersion", jni::ref<java::lang::String>>(); }

protected:

	StaticProperty(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_UTIL_STATICPROPERTY