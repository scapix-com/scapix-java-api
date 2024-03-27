// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/naming/NamingException.h>

#ifndef SCAPIX_JAVA_API_JAVAX_NAMING_OPERATIONNOTSUPPORTEDEXCEPTION_FWD
#define SCAPIX_JAVA_API_JAVAX_NAMING_OPERATIONNOTSUPPORTEDEXCEPTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::naming { class OperationNotSupportedException; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::naming::OperationNotSupportedException>
{
	static constexpr fixed_string class_name = "javax/naming/OperationNotSupportedException";
	using base_classes = std::tuple<scapix::java_api::javax::naming::NamingException>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_NAMING_OPERATIONNOTSUPPORTEDEXCEPTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_NAMING_OPERATIONNOTSUPPORTEDEXCEPTION)
#define SCAPIX_JAVA_API_JAVAX_NAMING_OPERATIONNOTSUPPORTEDEXCEPTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::naming::OperationNotSupportedException : public jni::object_base<"javax/naming/OperationNotSupportedException",
	javax::naming::NamingException>
{
public:

	static jni::ref<javax::naming::OperationNotSupportedException> new_object() { return base_::new_object(); }
	static jni::ref<javax::naming::OperationNotSupportedException> new_object(jni::ref<java::lang::String> p1) { return base_::new_object(p1); }

protected:

	OperationNotSupportedException(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_NAMING_OPERATIONNOTSUPPORTEDEXCEPTION
