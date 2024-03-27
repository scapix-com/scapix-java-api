// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/IllegalStateException.h>

#ifndef SCAPIX_JAVA_API_JAVA_AWT_DND_INVALIDDNDOPERATIONEXCEPTION_FWD
#define SCAPIX_JAVA_API_JAVA_AWT_DND_INVALIDDNDOPERATIONEXCEPTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::awt::dnd { class InvalidDnDOperationException; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::awt::dnd::InvalidDnDOperationException>
{
	static constexpr fixed_string class_name = "java/awt/dnd/InvalidDnDOperationException";
	using base_classes = std::tuple<scapix::java_api::java::lang::IllegalStateException>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_DND_INVALIDDNDOPERATIONEXCEPTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_AWT_DND_INVALIDDNDOPERATIONEXCEPTION)
#define SCAPIX_JAVA_API_JAVA_AWT_DND_INVALIDDNDOPERATIONEXCEPTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::awt::dnd::InvalidDnDOperationException : public jni::object_base<"java/awt/dnd/InvalidDnDOperationException",
	java::lang::IllegalStateException>
{
public:

	static jni::ref<java::awt::dnd::InvalidDnDOperationException> new_object() { return base_::new_object(); }
	static jni::ref<java::awt::dnd::InvalidDnDOperationException> new_object(jni::ref<java::lang::String> p1) { return base_::new_object(p1); }

protected:

	InvalidDnDOperationException(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_DND_INVALIDDNDOPERATIONEXCEPTION
