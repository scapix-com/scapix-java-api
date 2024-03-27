// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/security/GeneralSecurityException.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_UTIL_PROPERTYEXPANDER_EXPANDEXCEPTION_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_UTIL_PROPERTYEXPANDER_EXPANDEXCEPTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::util { class PropertyExpander_ExpandException; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::util::PropertyExpander_ExpandException>
{
	static constexpr fixed_string class_name = "sun/security/util/PropertyExpander$ExpandException";
	using base_classes = std::tuple<scapix::java_api::java::security::GeneralSecurityException>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_UTIL_PROPERTYEXPANDER_EXPANDEXCEPTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_UTIL_PROPERTYEXPANDER_EXPANDEXCEPTION)
#define SCAPIX_JAVA_API_SUN_SECURITY_UTIL_PROPERTYEXPANDER_EXPANDEXCEPTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::security::util::PropertyExpander_ExpandException : public jni::object_base<"sun/security/util/PropertyExpander$ExpandException",
	java::security::GeneralSecurityException>
{
public:

	static jni::ref<sun::security::util::PropertyExpander_ExpandException> new_object(jni::ref<java::lang::String> p1) { return base_::new_object(p1); }

protected:

	PropertyExpander_ExpandException(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_UTIL_PROPERTYEXPANDER_EXPANDEXCEPTION
