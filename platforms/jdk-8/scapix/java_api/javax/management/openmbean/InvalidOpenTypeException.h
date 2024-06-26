// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/IllegalArgumentException.h>

#ifndef SCAPIX_JAVA_API_JAVAX_MANAGEMENT_OPENMBEAN_INVALIDOPENTYPEEXCEPTION_FWD
#define SCAPIX_JAVA_API_JAVAX_MANAGEMENT_OPENMBEAN_INVALIDOPENTYPEEXCEPTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::management::openmbean { class InvalidOpenTypeException; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::management::openmbean::InvalidOpenTypeException>
{
	static constexpr fixed_string class_name = "javax/management/openmbean/InvalidOpenTypeException";
	using base_classes = std::tuple<scapix::java_api::java::lang::IllegalArgumentException>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_MANAGEMENT_OPENMBEAN_INVALIDOPENTYPEEXCEPTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_MANAGEMENT_OPENMBEAN_INVALIDOPENTYPEEXCEPTION)
#define SCAPIX_JAVA_API_JAVAX_MANAGEMENT_OPENMBEAN_INVALIDOPENTYPEEXCEPTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::management::openmbean::InvalidOpenTypeException : public jni::object_base<"javax/management/openmbean/InvalidOpenTypeException",
	java::lang::IllegalArgumentException>
{
public:

	static jni::ref<javax::management::openmbean::InvalidOpenTypeException> new_object() { return base_::new_object(); }
	static jni::ref<javax::management::openmbean::InvalidOpenTypeException> new_object(jni::ref<java::lang::String> p1) { return base_::new_object(p1); }

protected:

	InvalidOpenTypeException(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_MANAGEMENT_OPENMBEAN_INVALIDOPENTYPEEXCEPTION
