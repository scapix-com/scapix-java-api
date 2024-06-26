// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_TRACING_PROVIDERFACTORY_FWD
#define SCAPIX_JAVA_API_COM_SUN_TRACING_PROVIDERFACTORY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::tracing { class ProviderFactory; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::tracing::ProviderFactory>
{
	static constexpr fixed_string class_name = "com/sun/tracing/ProviderFactory";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_TRACING_PROVIDERFACTORY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_TRACING_PROVIDERFACTORY)
#define SCAPIX_JAVA_API_COM_SUN_TRACING_PROVIDERFACTORY

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/tracing/Provider.h>
#include <scapix/java_api/java/lang/Class.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::tracing::ProviderFactory : public jni::object_base<"com/sun/tracing/ProviderFactory",
	java::lang::Object>
{
public:

	jni::ref<com::sun::tracing::Provider> createProvider(jni::ref<java::lang::Class> p1) { return call_method<"createProvider", jni::ref<com::sun::tracing::Provider>>(p1); }
	static jni::ref<com::sun::tracing::ProviderFactory> getDefaultFactory() { return call_static_method<"getDefaultFactory", jni::ref<com::sun::tracing::ProviderFactory>>(); }

protected:

	ProviderFactory(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_TRACING_PROVIDERFACTORY
