// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_SECURITY_PROVIDER_USTRING_FWD
#define SCAPIX_JAVA_API_JAVA_SECURITY_PROVIDER_USTRING_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::security { class Provider_UString; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::security::Provider_UString>
{
	static constexpr fixed_string class_name = "java/security/Provider$UString";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_SECURITY_PROVIDER_USTRING_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_SECURITY_PROVIDER_USTRING)
#define SCAPIX_JAVA_API_JAVA_SECURITY_PROVIDER_USTRING

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::security::Provider_UString : public jni::object_base<"java/security/Provider$UString",
	java::lang::Object>
{
public:

	jint hashCode() { return call_method<"hashCode", jint>(); }
	jboolean equals(jni::ref<java::lang::Object> p1) { return call_method<"equals", jboolean>(p1); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	Provider_UString(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_SECURITY_PROVIDER_USTRING