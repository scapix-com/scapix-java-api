// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/naming/NamingException.h>

#ifndef SCAPIX_JAVA_API_JAVAX_NAMING_INSUFFICIENTRESOURCESEXCEPTION_FWD
#define SCAPIX_JAVA_API_JAVAX_NAMING_INSUFFICIENTRESOURCESEXCEPTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::naming { class InsufficientResourcesException; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::naming::InsufficientResourcesException>
{
	static constexpr fixed_string class_name = "javax/naming/InsufficientResourcesException";
	using base_classes = std::tuple<scapix::java_api::javax::naming::NamingException>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_NAMING_INSUFFICIENTRESOURCESEXCEPTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_NAMING_INSUFFICIENTRESOURCESEXCEPTION)
#define SCAPIX_JAVA_API_JAVAX_NAMING_INSUFFICIENTRESOURCESEXCEPTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::naming::InsufficientResourcesException : public jni::object_base<"javax/naming/InsufficientResourcesException",
	javax::naming::NamingException>
{
public:

	static jni::ref<javax::naming::InsufficientResourcesException> new_object(jni::ref<java::lang::String> p1) { return base_::new_object(p1); }
	static jni::ref<javax::naming::InsufficientResourcesException> new_object() { return base_::new_object(); }

protected:

	InsufficientResourcesException(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_NAMING_INSUFFICIENTRESOURCESEXCEPTION
