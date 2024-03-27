// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_IO_SERIALCALLBACKCONTEXT_FWD
#define SCAPIX_JAVA_API_JAVA_IO_SERIALCALLBACKCONTEXT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::io { class SerialCallbackContext; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::io::SerialCallbackContext>
{
	static constexpr fixed_string class_name = "java/io/SerialCallbackContext";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_IO_SERIALCALLBACKCONTEXT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_IO_SERIALCALLBACKCONTEXT)
#define SCAPIX_JAVA_API_JAVA_IO_SERIALCALLBACKCONTEXT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/io/ObjectStreamClass.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::io::SerialCallbackContext : public jni::object_base<"java/io/SerialCallbackContext",
	java::lang::Object>
{
public:

	static jni::ref<java::io::SerialCallbackContext> new_object(jni::ref<java::lang::Object> obj, jni::ref<java::io::ObjectStreamClass> desc) { return base_::new_object(obj, desc); }
	jni::ref<java::lang::Object> getObj() { return call_method<"getObj", jni::ref<java::lang::Object>>(); }
	jni::ref<java::io::ObjectStreamClass> getDesc() { return call_method<"getDesc", jni::ref<java::io::ObjectStreamClass>>(); }
	void check() { return call_method<"check", void>(); }
	void checkAndSetUsed() { return call_method<"checkAndSetUsed", void>(); }
	void setUsed() { return call_method<"setUsed", void>(); }

protected:

	SerialCallbackContext(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_IO_SERIALCALLBACKCONTEXT
