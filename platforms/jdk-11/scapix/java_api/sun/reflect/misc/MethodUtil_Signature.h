// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_REFLECT_MISC_METHODUTIL_SIGNATURE_FWD
#define SCAPIX_JAVA_API_SUN_REFLECT_MISC_METHODUTIL_SIGNATURE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::reflect::misc { class MethodUtil_Signature; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::reflect::misc::MethodUtil_Signature>
{
	static constexpr fixed_string class_name = "sun/reflect/misc/MethodUtil$Signature";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_REFLECT_MISC_METHODUTIL_SIGNATURE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_REFLECT_MISC_METHODUTIL_SIGNATURE)
#define SCAPIX_JAVA_API_SUN_REFLECT_MISC_METHODUTIL_SIGNATURE

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::reflect::misc::MethodUtil_Signature : public jni::object_base<"sun/reflect/misc/MethodUtil$Signature",
	java::lang::Object>
{
public:

	jint hashCode() { return call_method<"hashCode", jint>(); }
	jboolean equals(jni::ref<java::lang::Object> o2) { return call_method<"equals", jboolean>(o2); }

protected:

	MethodUtil_Signature(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_REFLECT_MISC_METHODUTIL_SIGNATURE
