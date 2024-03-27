// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_MISC_PROXYGENERATOR_FWD
#define SCAPIX_JAVA_API_SUN_MISC_PROXYGENERATOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::misc { class ProxyGenerator; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::misc::ProxyGenerator>
{
	static constexpr fixed_string class_name = "sun/misc/ProxyGenerator";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_MISC_PROXYGENERATOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_MISC_PROXYGENERATOR)
#define SCAPIX_JAVA_API_SUN_MISC_PROXYGENERATOR

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Class.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::misc::ProxyGenerator : public jni::object_base<"sun/misc/ProxyGenerator",
	java::lang::Object>
{
public:

	static jni::ref<jni::array<jbyte>> generateProxyClass(jni::ref<java::lang::String> p1, jni::ref<jni::array<java::lang::Class>> p2) { return call_static_method<"generateProxyClass", jni::ref<jni::array<jbyte>>>(p1, p2); }
	static jni::ref<jni::array<jbyte>> generateProxyClass(jni::ref<java::lang::String> p1, jni::ref<jni::array<java::lang::Class>> p2, jint p3) { return call_static_method<"generateProxyClass", jni::ref<jni::array<jbyte>>>(p1, p2, p3); }

protected:

	ProxyGenerator(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_MISC_PROXYGENERATOR
