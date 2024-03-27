// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/management/JMException.h>

#ifndef SCAPIX_JAVA_API_JAVAX_MANAGEMENT_OPERATIONSEXCEPTION_FWD
#define SCAPIX_JAVA_API_JAVAX_MANAGEMENT_OPERATIONSEXCEPTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::management { class OperationsException; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::management::OperationsException>
{
	static constexpr fixed_string class_name = "javax/management/OperationsException";
	using base_classes = std::tuple<scapix::java_api::javax::management::JMException>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_MANAGEMENT_OPERATIONSEXCEPTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_MANAGEMENT_OPERATIONSEXCEPTION)
#define SCAPIX_JAVA_API_JAVAX_MANAGEMENT_OPERATIONSEXCEPTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::management::OperationsException : public jni::object_base<"javax/management/OperationsException",
	javax::management::JMException>
{
public:

	static jni::ref<javax::management::OperationsException> new_object() { return base_::new_object(); }
	static jni::ref<javax::management::OperationsException> new_object(jni::ref<java::lang::String> p1) { return base_::new_object(p1); }

protected:

	OperationsException(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_MANAGEMENT_OPERATIONSEXCEPTION