// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_BEANS_WEAKCACHE_FWD
#define SCAPIX_JAVA_API_COM_SUN_BEANS_WEAKCACHE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::beans { class WeakCache; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::beans::WeakCache>
{
	static constexpr fixed_string class_name = "com/sun/beans/WeakCache";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_BEANS_WEAKCACHE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_BEANS_WEAKCACHE)
#define SCAPIX_JAVA_API_COM_SUN_BEANS_WEAKCACHE

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::beans::WeakCache : public jni::object_base<"com/sun/beans/WeakCache",
	java::lang::Object>
{
public:

	static jni::ref<com::sun::beans::WeakCache> new_object() { return base_::new_object(); }
	jni::ref<java::lang::Object> get(jni::ref<java::lang::Object> p1) { return call_method<"get", jni::ref<java::lang::Object>>(p1); }
	void put(jni::ref<java::lang::Object> p1, jni::ref<java::lang::Object> p2) { return call_method<"put", void>(p1, p2); }
	void clear() { return call_method<"clear", void>(); }

protected:

	WeakCache(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_BEANS_WEAKCACHE
