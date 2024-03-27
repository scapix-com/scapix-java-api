// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Exception.h>

#ifndef SCAPIX_JAVA_API_JAVA_BEANS_INTROSPECTIONEXCEPTION_FWD
#define SCAPIX_JAVA_API_JAVA_BEANS_INTROSPECTIONEXCEPTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::beans { class IntrospectionException; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::beans::IntrospectionException>
{
	static constexpr fixed_string class_name = "java/beans/IntrospectionException";
	using base_classes = std::tuple<scapix::java_api::java::lang::Exception>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_BEANS_INTROSPECTIONEXCEPTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_BEANS_INTROSPECTIONEXCEPTION)
#define SCAPIX_JAVA_API_JAVA_BEANS_INTROSPECTIONEXCEPTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::beans::IntrospectionException : public jni::object_base<"java/beans/IntrospectionException",
	java::lang::Exception>
{
public:

	static jni::ref<java::beans::IntrospectionException> new_object(jni::ref<java::lang::String> p1) { return base_::new_object(p1); }

protected:

	IntrospectionException(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_BEANS_INTROSPECTIONEXCEPTION
