// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/IllegalArgumentException.h>

#ifndef SCAPIX_JAVA_API_JAVAX_MANAGEMENT_OPENMBEAN_KEYALREADYEXISTSEXCEPTION_FWD
#define SCAPIX_JAVA_API_JAVAX_MANAGEMENT_OPENMBEAN_KEYALREADYEXISTSEXCEPTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::management::openmbean { class KeyAlreadyExistsException; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::management::openmbean::KeyAlreadyExistsException>
{
	static constexpr fixed_string class_name = "javax/management/openmbean/KeyAlreadyExistsException";
	using base_classes = std::tuple<scapix::java_api::java::lang::IllegalArgumentException>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_MANAGEMENT_OPENMBEAN_KEYALREADYEXISTSEXCEPTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_MANAGEMENT_OPENMBEAN_KEYALREADYEXISTSEXCEPTION)
#define SCAPIX_JAVA_API_JAVAX_MANAGEMENT_OPENMBEAN_KEYALREADYEXISTSEXCEPTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::management::openmbean::KeyAlreadyExistsException : public jni::object_base<"javax/management/openmbean/KeyAlreadyExistsException",
	java::lang::IllegalArgumentException>
{
public:

	static jni::ref<javax::management::openmbean::KeyAlreadyExistsException> new_object() { return base_::new_object(); }
	static jni::ref<javax::management::openmbean::KeyAlreadyExistsException> new_object(jni::ref<java::lang::String> p1) { return base_::new_object(p1); }

protected:

	KeyAlreadyExistsException(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_MANAGEMENT_OPENMBEAN_KEYALREADYEXISTSEXCEPTION
