// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/io/IOException.h>

#ifndef SCAPIX_JAVA_API_JAVAX_MANAGEMENT_REMOTE_JMXSERVERERROREXCEPTION_FWD
#define SCAPIX_JAVA_API_JAVAX_MANAGEMENT_REMOTE_JMXSERVERERROREXCEPTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::management::remote { class JMXServerErrorException; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::management::remote::JMXServerErrorException>
{
	static constexpr fixed_string class_name = "javax/management/remote/JMXServerErrorException";
	using base_classes = std::tuple<scapix::java_api::java::io::IOException>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_MANAGEMENT_REMOTE_JMXSERVERERROREXCEPTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_MANAGEMENT_REMOTE_JMXSERVERERROREXCEPTION)
#define SCAPIX_JAVA_API_JAVAX_MANAGEMENT_REMOTE_JMXSERVERERROREXCEPTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Error.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/Throwable.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::management::remote::JMXServerErrorException : public jni::object_base<"javax/management/remote/JMXServerErrorException",
	java::io::IOException>
{
public:

	static jni::ref<javax::management::remote::JMXServerErrorException> new_object(jni::ref<java::lang::String> p1, jni::ref<java::lang::Error> p2) { return base_::new_object(p1, p2); }
	jni::ref<java::lang::Throwable> getCause() { return call_method<"getCause", jni::ref<java::lang::Throwable>>(); }

protected:

	JMXServerErrorException(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_MANAGEMENT_REMOTE_JMXSERVERERROREXCEPTION