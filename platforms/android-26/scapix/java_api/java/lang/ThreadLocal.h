// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_THREADLOCAL_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_THREADLOCAL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang { class ThreadLocal; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::ThreadLocal>
{
	static constexpr fixed_string class_name = "java/lang/ThreadLocal";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_THREADLOCAL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_THREADLOCAL)
#define SCAPIX_JAVA_API_JAVA_LANG_THREADLOCAL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/util/function/Supplier.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::lang::ThreadLocal : public jni::object_base<"java/lang/ThreadLocal",
	java::lang::Object>
{
public:

	static jni::ref<java::lang::ThreadLocal> new_object() { return base_::new_object(); }
	static jni::ref<java::lang::ThreadLocal> withInitial(jni::ref<java::util::function::Supplier> supplier) { return call_static_method<"withInitial", jni::ref<java::lang::ThreadLocal>>(supplier); }
	jni::ref<java::lang::Object> get() { return call_method<"get", jni::ref<java::lang::Object>>(); }
	void set(jni::ref<java::lang::Object> value) { return call_method<"set", void>(value); }
	void remove() { return call_method<"remove", void>(); }

protected:

	ThreadLocal(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_THREADLOCAL