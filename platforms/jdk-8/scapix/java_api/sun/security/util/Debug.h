// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_UTIL_DEBUG_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_UTIL_DEBUG_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::util { class Debug; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::util::Debug>
{
	static constexpr fixed_string class_name = "sun/security/util/Debug";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_UTIL_DEBUG_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_UTIL_DEBUG)
#define SCAPIX_JAVA_API_SUN_SECURITY_UTIL_DEBUG

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/math/BigInteger.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::security::util::Debug : public jni::object_base<"sun/security/util/Debug",
	java::lang::Object>
{
public:

	static jni::ref<sun::security::util::Debug> new_object() { return base_::new_object(); }
	static void Help() { return call_static_method<"Help", void>(); }
	static jni::ref<sun::security::util::Debug> getInstance(jni::ref<java::lang::String> p1) { return call_static_method<"getInstance", jni::ref<sun::security::util::Debug>>(p1); }
	static jni::ref<sun::security::util::Debug> getInstance(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2) { return call_static_method<"getInstance", jni::ref<sun::security::util::Debug>>(p1, p2); }
	static jboolean isOn(jni::ref<java::lang::String> p1) { return call_static_method<"isOn", jboolean>(p1); }
	void println(jni::ref<java::lang::String> p1) { return call_method<"println", void>(p1); }
	void println() { return call_method<"println", void>(); }
	static void println(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2) { return call_static_method<"println", void>(p1, p2); }
	static jni::ref<java::lang::String> toHexString(jni::ref<java::math::BigInteger> p1) { return call_static_method<"toHexString", jni::ref<java::lang::String>>(p1); }
	static jni::ref<java::lang::String> toString(jni::ref<jni::array<jbyte>> p1) { return call_static_method<"toString", jni::ref<java::lang::String>>(p1); }

protected:

	Debug(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_UTIL_DEBUG
