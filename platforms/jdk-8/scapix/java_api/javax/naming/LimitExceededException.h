// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/naming/NamingException.h>

#ifndef SCAPIX_JAVA_API_JAVAX_NAMING_LIMITEXCEEDEDEXCEPTION_FWD
#define SCAPIX_JAVA_API_JAVAX_NAMING_LIMITEXCEEDEDEXCEPTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::naming { class LimitExceededException; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::naming::LimitExceededException>
{
	static constexpr fixed_string class_name = "javax/naming/LimitExceededException";
	using base_classes = std::tuple<scapix::java_api::javax::naming::NamingException>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_NAMING_LIMITEXCEEDEDEXCEPTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_NAMING_LIMITEXCEEDEDEXCEPTION)
#define SCAPIX_JAVA_API_JAVAX_NAMING_LIMITEXCEEDEDEXCEPTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::naming::LimitExceededException : public jni::object_base<"javax/naming/LimitExceededException",
	javax::naming::NamingException>
{
public:

	static jni::ref<javax::naming::LimitExceededException> new_object() { return base_::new_object(); }
	static jni::ref<javax::naming::LimitExceededException> new_object(jni::ref<java::lang::String> p1) { return base_::new_object(p1); }

protected:

	LimitExceededException(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_NAMING_LIMITEXCEEDEDEXCEPTION
