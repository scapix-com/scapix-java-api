// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_BEANS_BEANCONTEXT_BEANCONTEXTSERVICEPROVIDER_FWD
#define SCAPIX_JAVA_API_JAVA_BEANS_BEANCONTEXT_BEANCONTEXTSERVICEPROVIDER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::beans::beancontext { class BeanContextServiceProvider; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::beans::beancontext::BeanContextServiceProvider>
{
	static constexpr fixed_string class_name = "java/beans/beancontext/BeanContextServiceProvider";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_BEANS_BEANCONTEXT_BEANCONTEXTSERVICEPROVIDER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_BEANS_BEANCONTEXT_BEANCONTEXTSERVICEPROVIDER)
#define SCAPIX_JAVA_API_JAVA_BEANS_BEANCONTEXT_BEANCONTEXTSERVICEPROVIDER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/beans/beancontext/BeanContextServices.h>
#include <scapix/java_api/java/lang/Class.h>
#include <scapix/java_api/java/util/Iterator.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::beans::beancontext::BeanContextServiceProvider : public jni::object_base<"java/beans/beancontext/BeanContextServiceProvider",
	java::lang::Object>
{
public:

	jni::ref<java::lang::Object> getService(jni::ref<java::beans::beancontext::BeanContextServices> p1, jni::ref<java::lang::Object> p2, jni::ref<java::lang::Class> p3, jni::ref<java::lang::Object> p4) { return call_method<"getService", jni::ref<java::lang::Object>>(p1, p2, p3, p4); }
	void releaseService(jni::ref<java::beans::beancontext::BeanContextServices> p1, jni::ref<java::lang::Object> p2, jni::ref<java::lang::Object> p3) { return call_method<"releaseService", void>(p1, p2, p3); }
	jni::ref<java::util::Iterator> getCurrentServiceSelectors(jni::ref<java::beans::beancontext::BeanContextServices> p1, jni::ref<java::lang::Class> p2) { return call_method<"getCurrentServiceSelectors", jni::ref<java::util::Iterator>>(p1, p2); }

protected:

	BeanContextServiceProvider(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_BEANS_BEANCONTEXT_BEANCONTEXTSERVICEPROVIDER
