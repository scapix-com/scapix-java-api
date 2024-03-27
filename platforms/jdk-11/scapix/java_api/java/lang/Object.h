// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/jni/java_api/init.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_OBJECT_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_OBJECT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang { class Object; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::Object>
{
	static constexpr fixed_string class_name = "java/lang/Object";
	using base_classes = std::tuple<>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_OBJECT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_OBJECT)
#define SCAPIX_JAVA_API_JAVA_LANG_OBJECT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Class.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::lang::Object : public jni::object_base<"java/lang/Object">
{
public:

	static jni::ref<java::lang::Object> new_object() { return base_::new_object(); }
	jni::ref<java::lang::Class> getClass() { return call_method<"getClass", jni::ref<java::lang::Class>>(); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jboolean equals(jni::ref<java::lang::Object> obj) { return call_method<"equals", jboolean>(obj); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	void notify() { return call_method<"notify", void>(); }
	void notifyAll() { return call_method<"notifyAll", void>(); }
	void wait() { return call_method<"wait", void>(); }
	void wait(jlong p1) { return call_method<"wait", void>(p1); }
	void wait(jlong timeoutMillis, jint p2) { return call_method<"wait", void>(timeoutMillis, p2); }

protected:

	Object(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_OBJECT