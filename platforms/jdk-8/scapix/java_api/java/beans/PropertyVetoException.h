// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Exception.h>

#ifndef SCAPIX_JAVA_API_JAVA_BEANS_PROPERTYVETOEXCEPTION_FWD
#define SCAPIX_JAVA_API_JAVA_BEANS_PROPERTYVETOEXCEPTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::beans { class PropertyVetoException; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::beans::PropertyVetoException>
{
	static constexpr fixed_string class_name = "java/beans/PropertyVetoException";
	using base_classes = std::tuple<scapix::java_api::java::lang::Exception>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_BEANS_PROPERTYVETOEXCEPTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_BEANS_PROPERTYVETOEXCEPTION)
#define SCAPIX_JAVA_API_JAVA_BEANS_PROPERTYVETOEXCEPTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/beans/PropertyChangeEvent.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::beans::PropertyVetoException : public jni::object_base<"java/beans/PropertyVetoException",
	java::lang::Exception>
{
public:

	static jni::ref<java::beans::PropertyVetoException> new_object(jni::ref<java::lang::String> p1, jni::ref<java::beans::PropertyChangeEvent> p2) { return base_::new_object(p1, p2); }
	jni::ref<java::beans::PropertyChangeEvent> getPropertyChangeEvent() { return call_method<"getPropertyChangeEvent", jni::ref<java::beans::PropertyChangeEvent>>(); }

protected:

	PropertyVetoException(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_BEANS_PROPERTYVETOEXCEPTION
