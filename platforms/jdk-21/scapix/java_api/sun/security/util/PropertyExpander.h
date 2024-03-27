// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_UTIL_PROPERTYEXPANDER_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_UTIL_PROPERTYEXPANDER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::util { class PropertyExpander; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::util::PropertyExpander>
{
	static constexpr fixed_string class_name = "sun/security/util/PropertyExpander";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_UTIL_PROPERTYEXPANDER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_UTIL_PROPERTYEXPANDER)
#define SCAPIX_JAVA_API_SUN_SECURITY_UTIL_PROPERTYEXPANDER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/sun/security/util/PropertyExpander_ExpandException.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::security::util::PropertyExpander : public jni::object_base<"sun/security/util/PropertyExpander",
	java::lang::Object>
{
public:

	using ExpandException = PropertyExpander_ExpandException;

	static jni::ref<sun::security::util::PropertyExpander> new_object() { return base_::new_object(); }
	static jni::ref<java::lang::String> expand(jni::ref<java::lang::String> value) { return call_static_method<"expand", jni::ref<java::lang::String>>(value); }
	static jni::ref<java::lang::String> expand(jni::ref<java::lang::String> value, jboolean encodeURL) { return call_static_method<"expand", jni::ref<java::lang::String>>(value, encodeURL); }

protected:

	PropertyExpander(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_UTIL_PROPERTYEXPANDER
