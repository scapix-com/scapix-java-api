// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/management/OperationsException.h>

#ifndef SCAPIX_JAVA_API_JAVAX_MANAGEMENT_INTROSPECTIONEXCEPTION_FWD
#define SCAPIX_JAVA_API_JAVAX_MANAGEMENT_INTROSPECTIONEXCEPTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::management { class IntrospectionException; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::management::IntrospectionException>
{
	static constexpr fixed_string class_name = "javax/management/IntrospectionException";
	using base_classes = std::tuple<scapix::java_api::javax::management::OperationsException>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_MANAGEMENT_INTROSPECTIONEXCEPTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_MANAGEMENT_INTROSPECTIONEXCEPTION)
#define SCAPIX_JAVA_API_JAVAX_MANAGEMENT_INTROSPECTIONEXCEPTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::management::IntrospectionException : public jni::object_base<"javax/management/IntrospectionException",
	javax::management::OperationsException>
{
public:

	static jni::ref<javax::management::IntrospectionException> new_object() { return base_::new_object(); }
	static jni::ref<javax::management::IntrospectionException> new_object(jni::ref<java::lang::String> p1) { return base_::new_object(p1); }

protected:

	IntrospectionException(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_MANAGEMENT_INTROSPECTIONEXCEPTION
