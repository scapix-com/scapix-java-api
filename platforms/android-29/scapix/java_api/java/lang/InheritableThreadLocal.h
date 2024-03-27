// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/ThreadLocal.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_INHERITABLETHREADLOCAL_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_INHERITABLETHREADLOCAL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang { class InheritableThreadLocal; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::InheritableThreadLocal>
{
	static constexpr fixed_string class_name = "java/lang/InheritableThreadLocal";
	using base_classes = std::tuple<scapix::java_api::java::lang::ThreadLocal>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_INHERITABLETHREADLOCAL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_INHERITABLETHREADLOCAL)
#define SCAPIX_JAVA_API_JAVA_LANG_INHERITABLETHREADLOCAL

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::lang::InheritableThreadLocal : public jni::object_base<"java/lang/InheritableThreadLocal",
	java::lang::ThreadLocal>
{
public:

	static jni::ref<java::lang::InheritableThreadLocal> new_object() { return base_::new_object(); }

protected:

	InheritableThreadLocal(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_INHERITABLETHREADLOCAL
