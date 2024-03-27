// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/naming/NamingException.h>

#ifndef SCAPIX_JAVA_API_JAVAX_NAMING_NAMENOTFOUNDEXCEPTION_FWD
#define SCAPIX_JAVA_API_JAVAX_NAMING_NAMENOTFOUNDEXCEPTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::naming { class NameNotFoundException; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::naming::NameNotFoundException>
{
	static constexpr fixed_string class_name = "javax/naming/NameNotFoundException";
	using base_classes = std::tuple<scapix::java_api::javax::naming::NamingException>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_NAMING_NAMENOTFOUNDEXCEPTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_NAMING_NAMENOTFOUNDEXCEPTION)
#define SCAPIX_JAVA_API_JAVAX_NAMING_NAMENOTFOUNDEXCEPTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::naming::NameNotFoundException : public jni::object_base<"javax/naming/NameNotFoundException",
	javax::naming::NamingException>
{
public:

	static jni::ref<javax::naming::NameNotFoundException> new_object(jni::ref<java::lang::String> p1) { return base_::new_object(p1); }
	static jni::ref<javax::naming::NameNotFoundException> new_object() { return base_::new_object(); }

protected:

	NameNotFoundException(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_NAMING_NAMENOTFOUNDEXCEPTION
